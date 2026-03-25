from setuptools import find_packages
from setuptools import setup

setup(
    name='marti_common_msgs',
    version='1.6.1',
    packages=find_packages(
        include=('marti_common_msgs', 'marti_common_msgs.*')),
)
