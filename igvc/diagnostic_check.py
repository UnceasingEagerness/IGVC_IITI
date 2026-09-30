#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan, Image, Imu
from nav_msgs.msg import Odometry
import time
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
import sys

# ANSI color codes
GREEN = '\033[92m'
RED = '\033[91m'
YELLOW = '\033[93m'
RESET = '\033[0m'

class DiagnosticChecker(Node):
    def __init__(self):
        super().__init__('diagnostic_checker')
        self.status = {
            '/scan': False,
            '/camera/color/image_raw': False,
            '/imu/data': False,
            '/wheel/odometry': False
        }
        
        self.create_subscription(LaserScan, '/scan', lambda msg: self.cb('/scan'), 1)
        self.create_subscription(Image, '/camera/color/image_raw', lambda msg: self.cb('/camera/color/image_raw'), 1)
        self.create_subscription(Imu, '/imu/data', lambda msg: self.cb('/imu/data'), 1)
        self.create_subscription(Odometry, '/wheel/odometry', lambda msg: self.cb('/wheel/odometry'), 1)
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

    def cb(self, topic):
        self.status[topic] = True

    def check_tf(self, target, source):
        try:
            self.tf_buffer.lookup_transform(target, source, rclpy.time.Time())
            return True
        except TransformException:
            return False

def main():
    print(f"{YELLOW}Starting IGVC Hardware Diagnostics...{RESET}")
    rclpy.init()
    node = DiagnosticChecker()
    
    print(f"Listening for sensor data and TF frames (waiting 3 seconds)...\n")
    
    start = time.time()
    while time.time() - start < 3.0:
        rclpy.spin_once(node, timeout_sec=0.1)
        
    all_good = True

    print(f"{YELLOW}--- SENSOR TOPICS ---{RESET}")
    for topic, received in node.status.items():
        if received:
            print(f"{GREEN}[OK]{RESET} {topic} is publishing data.")
        else:
            print(f"{RED}[FAIL]{RESET} {topic} is NOT publishing!")
            all_good = False
            
    print(f"\n{YELLOW}--- TRANSFORM TREE (TF2) ---{RESET}")
    tfs = [
        ('odom', 'base_link', "EKF Sensor Fusion Output"),
        ('base_link', 'laser', "Static LiDAR Mount"),
        ('base_link', 'camera_link', "Static Camera Mount"),
        ('base_link', 'imu_link', "Static IMU Mount")
    ]
    
    for target, source, desc in tfs:
        if node.check_tf(target, source):
            print(f"{GREEN}[OK]{RESET} {target} -> {source} ({desc}) is connected.")
        else:
            print(f"{RED}[FAIL]{RESET} {target} -> {source} ({desc}) is MISSING!")
            all_good = False
            
    print("\n==============================================")
    if all_good:
        print(f"{GREEN}ALL SYSTEMS GO! The robot is ready for Navigation.{RESET}")
    else:
        print(f"{RED}DIAGNOSTIC FAILED! Please check the failing sensors/transforms before running Nav2.{RESET}")
    print("==============================================\n")
            
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
