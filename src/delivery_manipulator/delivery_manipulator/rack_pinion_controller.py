from typing import Optional

import rclpy
from rclpy.node import Node
from rclpy.duration import Duration

from std_msgs.msg import String

from delivery_interfaces.srv import SetLiftState
from .hw_interface import RackPinionHardwareInterface


# Logical states the controller can publish
STATE_IDLE = "IDLE"
STATE_MOVING = "MOVING"
STATE_AT_PICKUP = "AT_PICKUP_HEIGHT"
STATE_AT_CARRY = "AT_CARRY_HEIGHT"
STATE_AT_DROPOFF = "AT_DROPOFF_HEIGHT"
STATE_ERROR = "ERROR"

# Allowed SetLiftState.target_state values we accept
TARGET_PICKUP = "PICKUP_HEIGHT"
TARGET_CARRY = "CARRY_HEIGHT"
TARGET_DROPOFF = "DROPOFF_HEIGHT"


class RackPinionController(Node):
    """High-level controller for the rack & pinion lift.

    - /lift_cmd (topic) accepts string commands like:
        "LOWER_FOR_PICKUP", "RAISE_FOR_CARRY", "LOWER_FOR_DROPOFF", "STOP"
    - /lift_state (topic) publishes state strings:
        "IDLE", "MOVING", "AT_PICKUP_HEIGHT", "AT_CARRY_HEIGHT",
        "AT_DROPOFF_HEIGHT", "ERROR"
    - /set_lift_state (service) accepts a target_state:
        "PICKUP_HEIGHT", "CARRY_HEIGHT", "DROPOFF_HEIGHT"
      and returns success/message (fire-and-forget: success means
      "command accepted", not "motion completed").
    """

    def __init__(self) -> None:
        super().__init__("rack_pinion_controller")

        # Parameters from YAML
        self.declare_parameter("motor.max_speed", 1.0)
        self.declare_parameter("motor.default_speed", 0.6)
        self.declare_parameter("timeouts.move_timeout_sec", 8.0)

        # Serial link to Arduino (for VEX Motor Controller 29 + lift motor)
        # These are configured in rack_pinion.params.yaml
        self.declare_parameter("serial.port", "/dev/ttyACM0")
        self.declare_parameter("serial.baud", 115200)

        self._move_timeout_sec = (
            self.get_parameter("timeouts.move_timeout_sec")
            .get_parameter_value()
            .double_value
        )

        # State
        self._current_state: str = STATE_IDLE
        self._target_state: Optional[str] = None
        self._motion_start_time: Optional[rclpy.time.Time] = None

        # Hardware interface (now real serial-based interface)
        self._hw = RackPinionHardwareInterface(self)
        if not self._hw.initialize():
            self.get_logger().error("Failed to initialize hardware interface.")
            self._current_state = STATE_ERROR

        # Publishers / subscribers
        self._state_pub = self.create_publisher(String, "/lift_state", 10)
        self._cmd_sub = self.create_subscription(
            String,
            "/lift_cmd",
            self.lift_cmd_callback,
            10,
        )

        # Service
        self._set_state_srv = self.create_service(
            SetLiftState,
            "set_lift_state",
            self.handle_set_lift_state,
        )

        # Periodic publishing of current state
        self._state_timer = self.create_timer(0.5, self.publish_state)

        # Timer to update motion state / timeout logic
        self._motion_timer = self.create_timer(0.1, self.update_motion)

        self.get_logger().info("RackPinionController started.")

    # ------------------------------------------------------------------ #
    # Helpers
    # ------------------------------------------------------------------ #

    def publish_state(self) -> None:
        msg = String()
        msg.data = self._current_state
        self._state_pub.publish(msg)

    def start_motion_towards(self, logical_target: str) -> None:
        """Simulate starting a motion toward a logical target state."""
        if self._current_state == STATE_ERROR:
            self.get_logger().error("Cannot move: controller is in ERROR state.")
            return

        self._target_state = logical_target
        self._current_state = STATE_MOVING
        self._motion_start_time = self.get_clock().now()

        # Command hardware (stub)
        if not self._hw.command_motion(logical_target):
            self.get_logger().error("Hardware command_motion failed.")
            self._current_state = STATE_ERROR
            self._target_state = None
            return

        self.get_logger().info(f"Starting motion toward {logical_target}.")

    def update_motion(self) -> None:
        """Timer callback: simulate completion or timeout of a motion."""
        if self._target_state is None or self._current_state != STATE_MOVING:
            return

        if self._motion_start_time is None:
            return

        elapsed = self.get_clock().now() - self._motion_start_time
        if elapsed > Duration(seconds=self._move_timeout_sec):
            self.get_logger().error("Lift motion timed out.")
            self._current_state = STATE_ERROR
            self._target_state = None
            return

        # For now, simulate that the motion completes quickly (e.g. after 1.0 sec)
        if elapsed > Duration(seconds=1.0):
            # Map logical target to published state string
            if self._target_state == TARGET_PICKUP:
                self._current_state = STATE_AT_PICKUP
            elif self._target_state == TARGET_CARRY:
                self._current_state = STATE_AT_CARRY
            elif self._target_state == TARGET_DROPOFF:
                self._current_state = STATE_AT_DROPOFF
            else:
                self._current_state = STATE_ERROR
                self.get_logger().error(f"Unknown target_state {self._target_state!r}.")

            self.get_logger().info(
                f"Motion complete. New state: {self._current_state}"
            )
            self._target_state = None
            self._motion_start_time = None

    def stop_motion(self) -> None:
        self._hw.stop_motion()
        self._current_state = STATE_IDLE
        self._target_state = None
        self._motion_start_time = None
        self.get_logger().warn("Lift motion stopped; state set to IDLE.")

    # ------------------------------------------------------------------ #
    # Subscribers / Services
    # ------------------------------------------------------------------ #

    def lift_cmd_callback(self, msg: String) -> None:
        cmd = msg.data.strip().upper()
        self.get_logger().info(f"Received /lift_cmd: {cmd}")

        if cmd == "STOP":
            self.stop_motion()
            return

        if cmd == "LOWER_FOR_PICKUP":
            self.start_motion_towards(TARGET_PICKUP)
        elif cmd == "RAISE_FOR_CARRY":
            self.start_motion_towards(TARGET_CARRY)
        elif cmd == "LOWER_FOR_DROPOFF":
            self.start_motion_towards(TARGET_DROPOFF)
        else:
            self.get_logger().warn(f"Unknown lift_cmd: {cmd}")

    def handle_set_lift_state(
        self,
        request: SetLiftState.Request,
        response: SetLiftState.Response,
    ) -> SetLiftState.Response:
        target = request.target_state.strip().upper()
        self.get_logger().info(f"SetLiftState request: target_state={target}")

        if target not in {TARGET_PICKUP, TARGET_CARRY, TARGET_DROPOFF}:
            response.success = False
            response.message = (
                "Invalid target_state. Use 'PICKUP_HEIGHT', 'CARRY_HEIGHT', "
                "or 'DROPOFF_HEIGHT'."
            )
            self.get_logger().warn(response.message)
            return response

        self.start_motion_towards(target)
        # Fire-and-forget semantics: success here means "command accepted"
        response.success = True
        response.message = f"Command accepted to move to {target}."
        return response


def main(args=None) -> None:
    rclpy.init(args=args)
    node = RackPinionController()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.get_logger().info("Shutting down RackPinionController...")
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
