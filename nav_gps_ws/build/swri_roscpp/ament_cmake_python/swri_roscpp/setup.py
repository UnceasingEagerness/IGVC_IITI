from setuptools import find_packages
from setuptools import setup

setup(
    name='swri_roscpp',
    version='3.8.7',
    packages=find_packages(
        include=('swri_roscpp', 'swri_roscpp.*')),
)
