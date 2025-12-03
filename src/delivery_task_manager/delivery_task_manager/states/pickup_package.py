from rclpy.node import Node


class PickupPackageState:
    """Stub for PICKUP_PACKAGE state implementation.

    Later you'll define enter(), execute(), exit() methods or similar.
    """

    def __init__(self, node: Node) -> None:
        self._node = node
