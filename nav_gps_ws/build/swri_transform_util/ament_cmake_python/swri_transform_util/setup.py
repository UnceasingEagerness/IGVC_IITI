from setuptools import find_packages
from setuptools import setup

setup(
    name='swri_transform_util',
    version='3.8.7',
    packages=find_packages(
        include=('swri_transform_util', 'swri_transform_util.*')),
)
