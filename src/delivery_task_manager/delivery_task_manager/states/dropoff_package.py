from rclpy.node import Node


class DropoffPackageState:

    def __init__(self, node: Node) -> None:
        self._node = node
