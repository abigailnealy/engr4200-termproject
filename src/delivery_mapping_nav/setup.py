from setuptools import setup

package_name = "delivery_mapping_nav"

setup(
    name=package_name,
    version="0.0.0",
    packages=[package_name],
    data_files=[
        # Required index + package.xml
        ("share/ament_index/resource_index/packages",
         ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),

        # Launch files
        ("share/" + package_name + "/launch", [
            "launch/mapping.launch.py",
            "launch/nav.launch.py",
        ]),

        # Config files
        ("share/" + package_name + "/config/slam_toolbox", [
            "config/slam_toolbox/mapping.yaml",
        ]),
        ("share/" + package_name + "/config/nav2", [
            "config/nav2/nav2_params.yaml",
            "config/nav2/costmap_params.yaml",
        ]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="yoga7i",
    maintainer_email="anealy3@lsu.edu",
    description="Mapping (SLAM) and Nav2 bringup for delivery project",
    license="TODO",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "nav_manager = delivery_mapping_nav.nav_manager:main",
        ],
    },
)
