import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description() -> LaunchDescription:
    pkg_share = get_package_share_directory("delivery_manipulator")

    # Default parameter file
    default_params = os.path.join(
        pkg_share,
        "config",
        "rack_pinion.params.yaml",
    )

    # Allow user to override params file
    params_arg = DeclareLaunchArgument(
        "params_file",
        default_value=default_params,
        description="Full path to rack_pinion.params.yaml",
    )

    use_sim_time_arg = DeclareLaunchArgument(
        "use_sim_time",
        default_value="false",
        description="Use simulation time if true",
    )

    # Rack-and-pinion controller node
    controller_node = Node(
        package="delivery_manipulator",
        executable="rack_pinion_controller",
        name="rack_pinion_controller",
        output="screen",
        parameters=[
            LaunchConfiguration("params_file"),
            {"use_sim_time": LaunchConfiguration("use_sim_time")},
        ],
    )

    return LaunchDescription(
        [
            params_arg,
            use_sim_time_arg,
            controller_node,
        ]
    )
