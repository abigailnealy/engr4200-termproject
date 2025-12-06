from rclpy.node import Node


class ScanPackageState:
    def __init__(self, node: Node) -> None:
        self._node = node
