from setuptools import find_packages, setup

package_name = 'delivery_vision_scanner'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools','opencv-python'],
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
            "scanner_node = delivery_vision_scanner.scanner_node:main",
        ],
    },
)
