from rclpy.node import Node


class IdleState:

    def __init__(self, node: Node) -> None:
        self._node = node
