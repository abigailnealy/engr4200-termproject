from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    use_sim_time_arg = DeclareLaunchArgument(
        "use_sim_time",
        default_value="false",
        description="Use simulation time if true",
    )

    scan_timeout_arg = DeclareLaunchArgument(
        "scan_timeout_sec",
        default_value="5.0",
        description="Scan timeout in seconds",
    )

    scanner_node = Node(
        package="delivery_vision_scanner",
        executable="scanner_node",
        name="scanner_node",
        output="screen",
        parameters=[
            {
                "use_sim_time": LaunchConfiguration("use_sim_time"),
                "scan_timeout_sec": LaunchConfiguration("scan_timeout_sec"),
            }
        ],
    )

    return LaunchDescription(
        [
            use_sim_time_arg,
            scan_timeout_arg,
            scanner_node,
        ]
    )
