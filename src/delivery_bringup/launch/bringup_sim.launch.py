import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description() -> LaunchDescription:
    tb4_sim_actions = []
    try:
        tb4_sim_launch = os.path.join(
            get_package_share_directory("turtlebot4_gazebo"),
            "launch",
            "turtlebot4_world.launch.py",  # adjust if different
        )

        tb4_sim_actions.append(
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(tb4_sim_launch)
            )
        )
    except Exception:
        tb4_sim_actions = []

    mapping_nav_share = get_package_share_directory("delivery_mapping_nav")
    nav_launch_file = os.path.join(
        mapping_nav_share,
        "launch",
        "nav.launch.py",
    )

    nav_include = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(nav_launch_file),
        launch_arguments={
            "use_sim_time": "true",
        }.items(),
    )

    # Vision (sim time)
    vision_scanner_node = Node(
        package="delivery_vision_scanner",
        executable="scanner_node",
        name="scanner_node",
        output="screen",
        parameters=[{"use_sim_time": True, "scan_timeout_sec": 5.0}],
    )

    # Manipulator (sim time)
    manip_share = get_package_share_directory("delivery_manipulator")
    rack_pinion_params = os.path.join(
        manip_share,
        "config",
        "rack_pinion.params.yaml",
    )

    manipulator_node = Node(
        package="delivery_manipulator",
        executable="rack_pinion_controller",
        name="rack_pinion_controller",
        output="screen",
        parameters=[rack_pinion_params, {"use_sim_time": True}],
    )

    # Task manager (sim time)
    task_share = get_package_share_directory("delivery_task_manager")
    locations_file = os.path.join(task_share, "config", "locations.yaml")
    task_params_file = os.path.join(task_share, "config", "task_params.yaml")

    task_manager_node = Node(
        package="delivery_task_manager",
        executable="task_manager_node",
        name="task_manager_node",
        output="screen",
        parameters=[
            {
                "locations_file": locations_file,
                "task_params_file": task_params_file,
                "use_sim_time": True,
            }
        ],
    )

    bringup_manager_node = Node(
        package="delivery_bringup",
        executable="bringup_manager",
        name="bringup_manager",
        output="screen",
    )

    return LaunchDescription(
        [
            *tb4_sim_actions,
            nav_include,
            vision_scanner_node,
            manipulator_node,
            task_manager_node,
            bringup_manager_node,
        ]
    )
