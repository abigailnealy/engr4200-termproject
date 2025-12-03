from setuptools import find_packages, setup

package_name = 'delivery_bringup'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages",
         ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        ("share/" + package_name + "/launch", [
            "launch/bringup_real.launch.py",
            "launch/bringup_sim.launch.py",
        ]),
        ("share/" + package_name + "/config", [
            "config/robot_description.yaml",
            "config/sensor_params.yaml",
        ]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yoga7i',
    maintainer_email='anealy3@lsu.edu',
    description="Top-level bringup for Turtlebot4 delivery project",
    license="TODO",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "bringup_manager = delivery_bringup.bringup_manager:main",
        ],
    },
)
