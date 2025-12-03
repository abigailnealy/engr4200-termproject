import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description() -> LaunchDescription:
    # Package share dir for default params
    pkg_share = get_package_share_directory("delivery_mapping_nav")

    default_nav2_params = os.path.join(
        pkg_share,
        "config",
        "nav2",
        "nav2_params.yaml",
    )

    # ---- Launch arguments ----
    use_sim_time_arg = DeclareLaunchArgument(
        "use_sim_time",
        default_value="false",
        description="Use simulation (Gazebo) clock",
    )

    params_file_arg = DeclareLaunchArgument(
        "params_file",
        default_value=default_nav2_params,
        description="Full path to the Nav2 parameter file to use",
    )

    map_arg = DeclareLaunchArgument(
        "map",
        default_value="",
        description="Full path to map YAML file (optional)",
    )

    use_sim_time = LaunchConfiguration("use_sim_time")
    params_file = LaunchConfiguration("params_file")
    map_yaml = LaunchConfiguration("map")

    # ---- Nav2 nodes (no nav2_route, no nav2_bringup) ----

    # Map server (optional if running pure SLAM; here we support map-based nav)
    map_server_node = Node(
        package="nav2_map_server",
        executable="map_server",
        name="map_server",
        output="screen",
        parameters=[params_file, {"use_sim_time": use_sim_time, "yaml_filename": map_yaml}],
    )

    # AMCL localization
    amcl_node = Node(
        package="nav2_amcl",
        executable="amcl",
        name="amcl",
        output="screen",
        parameters=[params_file, {"use_sim_time": use_sim_time}],
    )

    # Planner server
    planner_server_node = Node(
        package="nav2_planner",
        executable="planner_server",
        name="planner_server",
        output="screen",
        parameters=[params_file, {"use_sim_time": use_sim_time}],
    )

    # Controller server
    controller_server_node = Node(
        package="nav2_controller",
        executable="controller_server",
        name="controller_server",
        output="screen",
        parameters=[params_file, {"use_sim_time": use_sim_time}],
    )

    # Behavior tree navigator
    bt_navigator_node = Node(
        package="nav2_bt_navigator",
        executable="bt_navigator",
        name="bt_navigator",
        output="screen",
        parameters=[params_file, {"use_sim_time": use_sim_time}],
    )

    # Waypoint follower (optional but handy)
    waypoint_follower_node = Node(
        package="nav2_waypoint_follower",
        executable="waypoint_follower",
        name="waypoint_follower",
        output="screen",
        parameters=[params_file, {"use_sim_time": use_sim_time}],
    )

    # Lifecycle manager to bring up Nav2 nodes
    lifecycle_manager_node = Node(
        package="nav2_lifecycle_manager",
        executable="lifecycle_manager",
        name="lifecycle_manager_navigation",
        output="screen",
        parameters=[
            {
                "use_sim_time": use_sim_time,
                "autostart": True,
                "node_names": [
                    "map_server",
                    "amcl",
                    "planner_server",
                    "controller_server",
                    "bt_navigator",
                    "waypoint_follower",
                ],
            }
        ],
    )

    return LaunchDescription(
        [
            use_sim_time_arg,
            params_file_arg,
            map_arg,
            map_server_node,
            amcl_node,
            planner_server_node,
            controller_server_node,
            bt_navigator_node,
            waypoint_follower_node,
            lifecycle_manager_node,
        ]
    )
