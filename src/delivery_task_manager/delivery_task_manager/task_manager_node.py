#!/usr/bin/env python3

import math
import yaml
from enum import Enum, auto
from typing import Dict, Any, Optional

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from std_msgs.msg import String
from std_srvs.srv import Trigger

from geometry_msgs.msg import PoseStamped, Quaternion
from nav2_msgs.action import NavigateToPose

from delivery_interfaces.srv import ScanPackage, SetLiftState

from ament_index_python.packages import get_package_share_directory


class TaskState(Enum):
    IDLE = auto()
    GO_TO_PICKUP = auto()
    SCAN_PACKAGE = auto()
    PICKUP_PACKAGE = auto()
    GO_TO_DROPOFF = auto()
    DROPOFF_PACKAGE = auto()
    DONE = auto()
    ERROR = auto()


def yaw_to_quaternion(yaw: float) -> Quaternion:
    q = Quaternion()
    q.z = math.sin(yaw / 2.0)
    q.w = math.cos(yaw / 2.0)
    return q


def pose_from_list(frame_id: str, xyz_yaw) -> PoseStamped:
    x, y, yaw = xyz_yaw
    msg = PoseStamped()
    msg.header.frame_id = frame_id
    msg.pose.position.x = float(x)
    msg.pose.position.y = float(y)
    msg.pose.position.z = 0.0
    msg.pose.orientation = yaw_to_quaternion(float(yaw))
    return msg


class TaskManagerNode(Node):
    def __init__(self):
        super().__init__("task_manager")

        # Parameters
        self.declare_parameter("locations_file", "")
        locations_file = self.get_parameter("locations_file").get_parameter_value().string_value

        if not locations_file:
            try:
                pkg_share = get_package_share_directory("delivery_task_manager")
                locations_file = f"{pkg_share}/config/locations.yaml"
            except Exception as e:
                self.get_logger().error(f"Could not find package share directory: {e}")
                locations_file = ""

        self._locations = self._load_locations(locations_file)

        # State vars
        self._state: TaskState = TaskState.IDLE
        self._dropoff_id: Optional[str] = None
        self._nav_goal_future = None
        self._nav_result_future = None
        self._scan_future = None
        self._lift_future = None

        # Scan retry config
        self._scan_attempts = 0
        self._scan_max_attempts = 3
        self._scan_retry_interval_sec = 5.0
        self._scan_last_attempt_time = None

        # ROS interfaces
        self._task_state_pub = self.create_publisher(String, "task_state", 10)

        self._scan_client = self.create_client(ScanPackage, "scan_package")
        self._lift_client = self.create_client(SetLiftState, "set_lift_state")
        self._nav_client = ActionClient(self, NavigateToPose, "navigate_to_pose")

        # External trigger to start the whole sequence
        self._start_srv = self.create_service(
            Trigger, "start_delivery", self.start_delivery_cb
        )

        # Main timer
        self._timer = self.create_timer(0.1, self._tick)

        self.get_logger().info(
            "TaskManagerNode initialized. Call /start_delivery to begin sequence."
        )

    # ------------------------------------------------------------------
    # Helpers
    # ------------------------------------------------------------------

    def _load_locations(self, path: str) -> Dict[str, Any]:
        if not path:
            self.get_logger().error("No locations_file parameter provided.")
            return {}
        try:
            with open(path, "r") as f:
                data = yaml.safe_load(f)
            self.get_logger().info(f"Loaded locations from {path}")
            return data or {}
        except Exception as e:
            self.get_logger().error(f"Failed to load locations file '{path}': {e}")
            return {}

    def _publish_state(self):
        msg = String()
        msg.data = self._state.name
        self._task_state_pub.publish(msg)

    def start_delivery_cb(self, request: Trigger.Request, response: Trigger.Response):
        if self._state not in (TaskState.IDLE, TaskState.DONE, TaskState.ERROR):
            response.success = False
            response.message = f"Cannot start: current state is {self._state.name}"
            return response

        # Reset internal vars
        self._dropoff_id = None
        self._nav_goal_future = None
        self._nav_result_future = None
        self._scan_future = None
        self._lift_future = None

        # Reset scan retry counters
        self._scan_attempts = 0
        self._scan_last_attempt_time = None

        # FIRST: go to pickup location
        self._state = TaskState.GO_TO_PICKUP
        self.get_logger().info("start_delivery: transitioning to GO_TO_PICKUP.")
        response.success = True
        response.message = "Delivery sequence started."
        return response

    def _tick(self):
        self._publish_state()

        if self._state == TaskState.IDLE:
            return

        if self._state == TaskState.GO_TO_PICKUP:
            self._do_go_to_pickup()

        elif self._state == TaskState.SCAN_PACKAGE:
            self._do_scan_package()

        elif self._state == TaskState.PICKUP_PACKAGE:
            self._do_pickup_package()

        elif self._state == TaskState.GO_TO_DROPOFF:
            self._do_go_to_dropoff()

        elif self._state == TaskState.DROPOFF_PACKAGE:
            self._do_dropoff_package()

        elif self._state in (TaskState.DONE, TaskState.ERROR):
            # Wait for a new /start_delivery call
            return

    # ------------------------------------------------------------------
    # State implementations
    # ------------------------------------------------------------------

    def _do_go_to_pickup(self):
        pickup_pose = self._get_pose_for_pickup()
        if pickup_pose is None:
            self._state = TaskState.ERROR
            return

        done = self._navigate_to_pose(
            pose_from_list(pickup_pose["frame_id"], pickup_pose["xyz_yaw"])
        )

        if done is None:
            # still navigating
            return
        elif done is False:
            self._state = TaskState.ERROR
        else:
            self.get_logger().info("Reached pickup location.")
            self._state = TaskState.SCAN_PACKAGE
            self._scan_future = None

    def _do_scan_package(self):
        # Make sure service is up
        if not self._scan_client.service_is_ready():
            self.get_logger().info_once("Waiting for scan_package service...")
            self._scan_client.wait_for_service(timeout_sec=0.0)
            return

        # If we don't currently have a request in flight, maybe send one
        if self._scan_future is None:
            # Have we already used up all attempts?
            if self._scan_attempts >= self._scan_max_attempts:
                self.get_logger().error(
                    f"ScanPackage failed after {self._scan_attempts} attempts. Giving up."
                )
                self._state = TaskState.ERROR
                return

            # Enforce 5-second interval between attempts
            now = self.get_clock().now()
            if self._scan_last_attempt_time is not None:
                dt = (now - self._scan_last_attempt_time).nanoseconds / 1e9
                if dt < self._scan_retry_interval_sec:
                    # Too soon to try again
                    return

            # Send a new ScanPackage request
            req = ScanPackage.Request()
            req.trigger = True
            self._scan_future = self._scan_client.call_async(req)
            self._scan_attempts += 1
            self._scan_last_attempt_time = now
            self.get_logger().info(
                f"Sent ScanPackage request (attempt {self._scan_attempts}/"
                f"{self._scan_max_attempts})."
            )
            return

        # If a request is in flight, wait for it to finish
        if not self._scan_future.done():
            return

        # Handle result of this attempt
        result = self._scan_future.result()
        self._scan_future = None  # allow next attempt if needed

        if not result.success:
            self.get_logger().warn(
                f"ScanPackage attempt {self._scan_attempts} failed: {result.message}"
            )
            # Stay in SCAN_PACKAGE; next tick will schedule another attempt
            return

        if not result.dropoff_id:
            self.get_logger().warn(
                f"ScanPackage attempt {self._scan_attempts} returned empty dropoff_id."
            )
            # Stay in SCAN_PACKAGE; next tick will schedule another attempt
            return

        # Success!
        self._dropoff_id = result.dropoff_id
        self.get_logger().info(
            f"ScanPackage success on attempt {self._scan_attempts}: "
            f"dropoff_id='{self._dropoff_id}'"
        )

        # Reset scan retry counters for next mission
        self._scan_attempts = 0
        self._scan_last_attempt_time = None

        # Move on to pickup sequence
        self._state = TaskState.PICKUP_PACKAGE
        self._lift_future = None

    def _do_pickup_package(self):
        # Sequence: go to PICKUP_HEIGHT, then CARRY_HEIGHT
        if self._lift_future is None:
            # Step 1: down to pickup height
            self._lift_future = self._send_lift_command("PICKUP_HEIGHT")
            return

        if not self._lift_future.done():
            return

        result = self._lift_future.result()
        if not result.success:
            self.get_logger().error(
                f"Lift command PICKUP_HEIGHT failed: {result.message}"
            )
            self._state = TaskState.ERROR
            return

        # Step 2: raise to carry height
        self._lift_future = self._send_lift_command("CARRY_HEIGHT")

        if not self._lift_future.done():
            return

        result2 = self._lift_future.result()
        if not result2.success:
            self.get_logger().error(
                f"Lift command CARRY_HEIGHT failed: {result2.message}"
            )
            self._state = TaskState.ERROR
            return

        self.get_logger().info(
            "Pickup sequence complete (PICKUP_HEIGHT -> CARRY_HEIGHT)."
        )
        self._lift_future = None
        self._state = TaskState.GO_TO_DROPOFF

    def _do_go_to_dropoff(self):
        drop_pose = self._get_pose_for_dropoff(self._dropoff_id)
        if drop_pose is None:
            self._state = TaskState.ERROR
            return

        done = self._navigate_to_pose(
            pose_from_list(drop_pose["frame_id"], drop_pose["xyz_yaw"])
        )

        if done is None:
            return
        elif done is False:
            self._state = TaskState.ERROR
        else:
            self.get_logger().info("Reached dropoff location.")
            self._state = TaskState.DROPOFF_PACKAGE
            self._lift_future = None

    def _do_dropoff_package(self):
        # Sequence: go to DROPOFF_HEIGHT, then back to CARRY_HEIGHT
        if self._lift_future is None:
            self._lift_future = self._send_lift_command("DROPOFF_HEIGHT")
            return

        if not self._lift_future.done():
            return

        result = self._lift_future.result()
        if not result.success:
            self.get_logger().error(
                f"Lift command DROPOFF_HEIGHT failed: {result.message}"
            )
            self._state = TaskState.ERROR
            return

        # Raise back up a bit to travel safely if needed
        self._lift_future = self._send_lift_command("CARRY_HEIGHT")

        if not self._lift_future.done():
            return

        result2 = self._lift_future.result()
        if not result2.success:
            self.get_logger().error(
                f"Lift command CARRY_HEIGHT failed: {result2.message}"
            )
            self._state = TaskState.ERROR
            return

        self.get_logger().info("Dropoff sequence complete. Task DONE.")
        self._lift_future = None
        self._state = TaskState.DONE

    # ------------------------------------------------------------------
    # Nav / Lift helpers
    # ------------------------------------------------------------------

    def _navigate_to_pose(self, goal: PoseStamped) -> Optional[bool]:
        """
        Returns:
          None  -> navigation in progress
          True  -> success
          False -> failed
        """
        if not self._nav_client.server_is_ready():
            self.get_logger().info_once("Waiting for NavigateToPose action server...")
            self._nav_client.wait_for_server(timeout_sec=0.0)
            return None

        # Send goal if none in flight yet
        if self._nav_goal_future is None and self._nav_result_future is None:
            self.get_logger().info(
                f"Sending Nav2 goal to ({goal.pose.position.x:.2f}, "
                f"{goal.pose.position.y:.2f}) in frame {goal.header.frame_id}"
            )
            send_goal_future = self._nav_client.send_goal_async(goal)
            send_goal_future.add_done_callback(self._nav_goal_response_cb)
            self._nav_goal_future = send_goal_future
            return None

        # Wait for goal handle to be accepted
        if self._nav_goal_future is not None and not self._nav_goal_future.done():
            return None

        # Wait for result future to be created
        if self._nav_goal_future is not None and self._nav_result_future is None:
            return None

        # Wait for navigation to finish
        if self._nav_result_future is not None and not self._nav_result_future.done():
            return None

        # Finished
        result = self._nav_result_future.result()
        self._nav_goal_future = None
        self._nav_result_future = None

        if not result:
            self.get_logger().error("NavigateToPose returned no result.")
            return False

        status = result.status
        if status != 4:  # 4 = SUCCEEDED
            self.get_logger().error(f"NavigateToPose failed with status {status}.")
            return False

        self.get_logger().info("NavigateToPose succeeded.")
        return True

    def _nav_goal_response_cb(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("NavigateToPose goal rejected.")
            self._nav_goal_future = None
            self._nav_result_future = None
            return
        self.get_logger().info("NavigateToPose goal accepted.")
        self._nav_result_future = goal_handle.get_result_async()

    def _send_lift_command(self, target_state: str):
        if not self._lift_client.service_is_ready():
            self.get_logger().info_once("Waiting for set_lift_state service...")
            self._lift_client.wait_for_service(timeout_sec=0.0)
            return None

        req = SetLiftState.Request()
        req.target_state = target_state
        self.get_logger().info(f"Sending SetLiftState('{target_state}') request.")
        future = self._lift_client.call_async(req)
        return future

    # ------------------------------------------------------------------
    # Location helpers
    # ------------------------------------------------------------------

    def _get_pose_for_pickup(self):
        if not self._locations:
            self.get_logger().error("Locations dictionary is empty.")
            return None
        try:
            frame_id = self._locations.get("frame_id", "map")
            pickup = self._locations["pickup"]["pose"]
            return {"frame_id": frame_id, "xyz_yaw": pickup}
        except KeyError as e:
            self.get_logger().error(f"Missing pickup pose in locations.yaml: {e}")
            return None

    def _get_pose_for_dropoff(self, dropoff_id: Optional[str]):
        if not dropoff_id:
            self.get_logger().error("Dropoff ID is not set.")
            return None
        if "dropoffs" not in self._locations:
            self.get_logger().error("No 'dropoffs' section in locations.yaml.")
            return None
        if dropoff_id not in self._locations["dropoffs"]:
            self.get_logger().error(
                f"Dropoff ID '{dropoff_id}' not found in locations.yaml."
            )
            return None
        frame_id = self._locations.get("frame_id", "map")
        pose_list = self._locations["dropoffs"][dropoff_id]["pose"]
        return {"frame_id": frame_id, "xyz_yaw": pose_list}


def main(args=None):
    rclpy.init(args=args)
    node = TaskManagerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
