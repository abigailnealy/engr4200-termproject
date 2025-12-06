import rclpy
from rclpy.node import Node


class NavManager(Node):

    def __init__(self) -> None:
        super().__init__("nav_manager")
        self.get_logger().info("delivery_mapping_nav NavManager started.")


def main(args=None) -> None:
    rclpy.init(args=args)
    node = NavManager()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.get_logger().info("Shutting down NavManager...")
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
