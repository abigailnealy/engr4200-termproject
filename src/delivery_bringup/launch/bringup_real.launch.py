import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description() -> LaunchDescription:
    # -------------------------------
    # TB4 real bringup
    # -------------------------------
    tb4_actions = []
    try:
        tb4_bringup_launch = os.path.join(
            get_package_share_directory("turtlebot4_bringup"),
            "launch",
            "standard.launch.py",  
        )

        tb4_actions.append(
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(tb4_bringup_launch)
            )
        )
    except Exception:
        # If TB4 packages aren't installed, skip.
        tb4_actions = []

    # -------------------------------
    # Mapping / Nav2 bringup
    # -------------------------------
    mapping_nav_share = get_package_share_directory("delivery_mapping_nav")

    # Launch files for mapping (SLAM) and Nav2
    nav_launch_file = os.path.join(
        mapping_nav_share,
        "launch",
        "nav.launch.py",
    )
    mapping_launch_file = os.path.join(
        mapping_nav_share,
        "launch",
        "mapping.launch.py",
    )

    repo_root = os.path.expanduser("~/engr4200-termproject")

    map_file_path = os.path.join(repo_root, "maps", "lab_map.yaml")

    map_exists = os.path.exists(map_file_path)

    if map_exists:
        print(f"[bringup_real] Map found at {map_file_path}. Starting Nav2 + delivery.")
        nav_or_mapping_include = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(nav_launch_file),
            launch_arguments={
                # Use real-time clock
                "use_sim_time": "false",
                # nav.launch.py defines a 'map' argument used by nav2_map_server
                "map": map_file_path,
            }.items(),
        )
    else:
        print(f"[bringup_real] No map found at {map_file_path}. Starting SLAM mapping.")
        nav_or_mapping_include = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(mapping_launch_file),
            # mapping.launch.py just launches slam_toolbox; no arguments needed
        )



    # -------------------------------
    # Vision scanner
    # -------------------------------
    vision_scanner_node = Node(
        package="delivery_vision_scanner",
        executable="scanner_node",
        name="scanner_node",
        output="screen",
        parameters=[
            {"use_sim_time": False, "scan_timeout_sec": 5.0},
        ],
    )

    # -------------------------------
    # Manipulator controller
    # -------------------------------
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
        parameters=[rack_pinion_params],
    )

    # -------------------------------
    # Task manager
    # -------------------------------
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
                "use_sim_time": False,
            }
        ],
    )

    # -------------------------------
    # Bringup manager (simple node)
    # -------------------------------
    bringup_manager_node = Node(
        package="delivery_bringup",
        executable="bringup_manager",
        name="bringup_manager",
        output="screen",
    )

    # Build the launch actions depending on whether a map already exists
    actions = []

    # Optionally TB4 base + sensors
    actions.extend(tb4_actions)

    actions.append(nav_or_mapping_include)

    if map_exists:
        # Map exists: bring up full delivery stack
        actions.extend(
            [
                vision_scanner_node,
                manipulator_node,
                task_manager_node,
                bringup_manager_node,
            ]
        )
    else:
        # No map yet: keep system in mapping mode only
        print("[bringup_real] Mapping-only mode: not starting delivery nodes yet.")

    return LaunchDescription(actions)

