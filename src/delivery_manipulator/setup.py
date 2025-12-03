from setuptools import find_packages, setup

package_name = 'delivery_manipulator'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
    ("share/ament_index/resource_index/packages",
     ["resource/" + package_name]),
    ("share/" + package_name, ["package.xml"]),
    ("share/" + package_name + "/launch", ["launch/rack_pinion.launch.py"]),
    ("share/" + package_name + "/config", ["config/rack_pinion.params.yaml"]),
    ],
    install_requires=['setuptools','pyserial'],
    zip_safe=True,
    maintainer='yoga7i',
    maintainer_email='anealy3@lsu.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            "rack_pinion_controller = delivery_manipulator.rack_pinion_controller:main",
        ],
    },
)
