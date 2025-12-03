from typing import Optional

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image, CameraInfo

from delivery_interfaces.srv import ScanPackage  # <-- from interface package
from .tag_detector import TagDetector


class ScannerNode(Node):
    """Scanner node that exposes the ScanPackage service.

    Camera stream runs continuously. When /scan_package is called with
    trigger=True, we attempt to detect a QR/AprilTag in the latest frame
    and return a symbolic dropoff_id like "DROP1".
    """

    def __init__(self) -> None:
        super().__init__("scanner_node")

        # Parameters
        self.declare_parameter("scan_timeout_sec", 5.0)

        self._last_image: Optional[Image] = None
        self._last_camera_info: Optional[CameraInfo] = None

        # Helper for detection
        self._detector = TagDetector(self)

        # Subscriptions
        self._image_sub = self.create_subscription(
            Image,
            "/camera/color/image_raw",
            self.image_callback,
            10,
        )

        self._camera_info_sub = self.create_subscription(
            CameraInfo,
            "/camera/camera_info",
            self.camera_info_callback,
            10,
        )

        # Service server
        self._service = self.create_service(
            ScanPackage,
            "scan_package",
            self.handle_scan_package,
        )

        self.get_logger().info("delivery_vision_scanner ScannerNode started.")

    # -------------------- Callbacks -------------------- #

    def image_callback(self, msg: Image) -> None:
        self._last_image = msg

    def camera_info_callback(self, msg: CameraInfo) -> None:
        self._last_camera_info = msg

    def handle_scan_package(
        self,
        request: ScanPackage.Request,
        response: ScanPackage.Response,
    ) -> ScanPackage.Response:
        if not request.trigger:
            response.success = False
            response.dropoff_id = ""
            response.message = "Trigger flag was false; no scan performed."
            return response

        if self._last_image is None:
            response.success = False
            response.dropoff_id = ""
            response.message = "No camera image received yet."
            self.get_logger().warn(response.message)
            return response

        self.get_logger().info("ScanPackage request received, scanning frame...")

        dropoff_id = self._detector.detect_dropoff_id(self._last_image)

        if not dropoff_id:
            response.success = False
            response.dropoff_id = ""
            response.message = "No tag detected in current frame."
            self.get_logger().warn(response.message)
            return response

        response.success = True
        response.dropoff_id = dropoff_id
        response.message = f"Detected dropoff_id: {dropoff_id}"
        self.get_logger().info(response.message)
        return response


def main(args=None) -> None:
    rclpy.init(args=args)
    node = ScannerNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.get_logger().info("Shutting down ScannerNode...")
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
