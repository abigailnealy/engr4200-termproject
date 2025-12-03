import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description() -> LaunchDescription:
    pkg_share = get_package_share_directory("delivery_task_manager")

    default_locations = os.path.join(
        pkg_share,
        "config",
        "locations.yaml",
    )

    default_task_params = os.path.join(
        pkg_share,
        "config",
        "task_params.yaml",
    )

    locations_arg = DeclareLaunchArgument(
        "locations_file",
        default_value=default_locations,
        description="Full path to locations.yaml",
    )

    task_params_arg = DeclareLaunchArgument(
        "task_params_file",
        default_value=default_task_params,
        description="Full path to task_params.yaml",
    )

    use_sim_time_arg = DeclareLaunchArgument(
        "use_sim_time",
        default_value="false",
        description="Use simulation time if true",
    )

    task_manager_node = Node(
        package="delivery_task_manager",
        executable="task_manager_node",
        name="task_manager_node",
        output="screen",
        parameters=[
            {"locations_file": LaunchConfiguration("locations_file")},
            {"task_params_file": LaunchConfiguration("task_params_file")},
            {"use_sim_time": LaunchConfiguration("use_sim_time")},
        ],
    )

    return LaunchDescription(
        [
            locations_arg,
            task_params_arg,
            use_sim_time_arg,
            task_manager_node,
        ]
    )
