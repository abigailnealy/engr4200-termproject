from setuptools import find_packages
from setuptools import setup

setup(
    name='delivery_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('delivery_interfaces', 'delivery_interfaces.*')),
)
