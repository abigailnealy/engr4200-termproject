from rclpy.node import Node


class PickupPackageState:

    def __init__(self, node: Node) -> None:
        self._node = node
