from typing import Optional

from rclpy.node import Node
from sensor_msgs.msg import Image

# OpenCV + cv_bridge imports
import cv2
from cv_bridge import CvBridge, CvBridgeError


class TagDetector:

    def __init__(self, node: Node) -> None:
        self._node = node
        self._bridge = CvBridge()
        self._qr_detector = cv2.QRCodeDetector()

    def detect_dropoff_id(self, image_msg: Image) -> Optional[str]:

        if image_msg is None:
            self._node.get_logger().warn("TagDetector: image_msg was None.")
            return None

        
        try:
            cv_image = self._bridge.imgmsg_to_cv2(image_msg, desired_encoding="bgr8")
        except CvBridgeError as e:
            self._node.get_logger().error(f"TagDetector: CvBridge error: {e}")
            return None

        
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)

        
        data, points, _ = self._qr_detector.detectAndDecode(gray)

        if points is None or not data:
            # No QR detected
            self._node.get_logger().info("TagDetector: no QR code detected in frame.")
            return None

        decoded_text = data.strip()
        self._node.get_logger().info(
            f"TagDetector: QR code detected with payload: '{decoded_text}'"
        )

        dropoff_id = decoded_text

        if not dropoff_id:
            return None

        return dropoff_id
