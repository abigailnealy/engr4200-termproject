import rclpy
from rclpy.node import Node


class BringupManager(Node):

    def __init__(self) -> None:
        super().__init__("bringup_manager")
        self.get_logger().info("delivery_bringup BringupManager started.")


def main(args=None) -> None:
    rclpy.init(args=args)
    node = BringupManager()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.get_logger().info("Shutting down BringupManager...")
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
