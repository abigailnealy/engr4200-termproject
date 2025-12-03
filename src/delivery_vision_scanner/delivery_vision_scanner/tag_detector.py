from typing import Optional

from rclpy.node import Node
from sensor_msgs.msg import Image

# OpenCV + cv_bridge imports
import cv2
from cv_bridge import CvBridge, CvBridgeError


class TagDetector:
    """Helper for QR code (and later AprilTag) detection.

    This implementation uses OpenCV's QRCodeDetector to decode a QR code
    from the latest camera frame.

    Expected behavior for this project:
      - The QR code encodes a string like "DROP1", "DROP2", etc.
      - Whatever text is decoded is returned as the dropoff_id.
    """

    def __init__(self, node: Node) -> None:
        self._node = node
        self._bridge = CvBridge()
        self._qr_detector = cv2.QRCodeDetector()

    def detect_dropoff_id(self, image_msg: Image) -> Optional[str]:
        """Detect a QR code in the given image and return the dropoff_id string.

        Returns:
          - The decoded string (e.g. "DROP1") if a QR code is found.
          - None if no QR code is detected or an error occurs.
        """
        if image_msg is None:
            self._node.get_logger().warn("TagDetector: image_msg was None.")
            return None

        # Convert ROS Image -> OpenCV BGR image
        try:
            # Use BGR8 unless your camera uses a different encoding.
            cv_image = self._bridge.imgmsg_to_cv2(image_msg, desired_encoding="bgr8")
        except CvBridgeError as e:
            self._node.get_logger().error(f"TagDetector: CvBridge error: {e}")
            return None

        # Optional: you can do some basic preprocessing if needed (e.g., grayscale)
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)

        # Detect and decode QR code
        data, points, _ = self._qr_detector.detectAndDecode(gray)

        if points is None or not data:
            # No QR detected
            self._node.get_logger().info("TagDetector: no QR code detected in frame.")
            return None

        decoded_text = data.strip()
        self._node.get_logger().info(
            f"TagDetector: QR code detected with payload: '{decoded_text}'"
        )

        # For this project, we assume the payload is directly the dropoff_id
        # like "DROP1", "DROP2", etc. If you later want a mapping, you can
        # add it here.
        dropoff_id = decoded_text

        if not dropoff_id:
            return None

        return dropoff_id
