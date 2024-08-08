from setuptools import find_packages
from setuptools import setup

setup(
    name='esda_ros_interface',
    version='0.0.0',
    packages=find_packages(
        include=('esda_ros_interface', 'esda_ros_interface.*')),
)
