import os

from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description() -> LaunchDescription:
    pkg_share = get_package_share_directory("delivery_mapping_nav")

    mapping_params = os.path.join(
        pkg_share,
        "config",
        "slam_toolbox",
        "mapping.yaml",
    )

    slam_toolbox_node = Node(
        package="slam_toolbox",
        executable="sync_slam_toolbox_node",
        name="sync_slam_toolbox_node",
        output="screen",
        parameters=[mapping_params],
        remappings=[
            # adjust these if your topics are different
            ("/scan", "/scan"),
        ],
    )

    return LaunchDescription([slam_toolbox_node])
