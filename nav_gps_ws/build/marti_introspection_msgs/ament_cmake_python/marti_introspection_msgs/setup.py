from setuptools import find_packages
from setuptools import setup

setup(
    name='marti_introspection_msgs',
    version='1.6.1',
    packages=find_packages(
        include=('marti_introspection_msgs', 'marti_introspection_msgs.*')),
)
