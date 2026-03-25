from setuptools import find_packages
from setuptools import setup

setup(
    name='marti_status_msgs',
    version='1.6.1',
    packages=find_packages(
        include=('marti_status_msgs', 'marti_status_msgs.*')),
)
