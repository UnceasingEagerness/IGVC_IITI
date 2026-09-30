#!/bin/bash
# IGVC Jetson Hardware Setup Script
# This script sets up a Conda environment and installs all required packages for the IGVC physical robot.

set -e

ENV_NAME="igvc_env"

echo "=========================================================="
echo "    Starting IGVC Jetson Setup"
echo "=========================================================="

# 1. Create and Activate Conda Environment for Python dependencies
echo "=> Creating Conda environment '$ENV_NAME'..."
# Check if conda is installed
if ! command -v conda &> /dev/null
then
    echo "Conda could not be found. Please install Miniforge or Anaconda first!"
    exit 1
fi

# Create the environment with Python 3.10 (matches ROS 2 Humble)
conda create -y -n $ENV_NAME python=3.10

# Initialize conda for bash script usage
eval "$(conda shell.bash hook)"
conda activate $ENV_NAME

# Install required Python packages via Conda/Pip inside the environment
echo "=> Installing Python dependencies..."
conda install -y -c conda-forge numpy scipy opencv pyserial

# 2. Install ROS 2 Core and Hardware Drivers via APT
# WARNING: Installing ROS 2 directly through Conda (RoboStack) on an NVIDIA Jetson 
# is highly discouraged because it breaks JetPack's proprietary L4T GPU and Camera drivers.
# We MUST install the core ROS 2 and hardware packages via the system APT manager to ensure hardware acceleration works.

echo "=> Installing ROS 2 Navigation and Hardware Drivers via APT..."
sudo apt update
sudo apt install -y \
    ros-humble-navigation2 \
    ros-humble-nav2-bringup \
    ros-humble-robot-localization \
    ros-humble-rplidar-ros \
    ros-humble-realsense2-camera \
    ros-humble-realsense2-description \
    ros-humble-ublox-gps \
    ros-humble-bno055 \
    ros-humble-xacro \
    ros-humble-tf2-ros \
    ros-humble-tf2-tools \
    python3-colcon-common-extensions

echo "=========================================================="
echo "    Setup Complete!"
echo "=========================================================="
echo ""
echo "To run your robot, open a terminal and run:"
echo "1. conda activate $ENV_NAME"
echo "2. source /opt/ros/humble/setup.bash"
echo "3. cd ~/IGVC/igvc && colcon build"
echo "4. source install/setup.bash"
echo "5. ros2 launch igvc_hardware hardware_bringup_launch.py"
