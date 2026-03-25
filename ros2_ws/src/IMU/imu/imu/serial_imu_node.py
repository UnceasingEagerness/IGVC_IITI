#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import serial
import math
import re
from sensor_msgs.msg import Imu
from geometry_msgs.msg import Quaternion

def euler_to_quaternion(roll, pitch, yaw):
    qx = math.sin(roll / 2) * math.cos(pitch / 2) * math.cos(yaw / 2) - \
         math.cos(roll / 2) * math.sin(pitch / 2) * math.sin(yaw / 2)
    qy = math.cos(roll / 2) * math.sin(pitch / 2) * math.cos(yaw / 2) + \
         math.sin(roll / 2) * math.cos(pitch / 2) * math.sin(yaw / 2)
    qz = math.cos(roll / 2) * math.cos(pitch / 2) * math.sin(yaw / 2) - \
         math.sin(roll / 2) * math.sin(pitch / 2) * math.cos(yaw / 2)
    qw = math.cos(roll / 2) * math.cos(pitch / 2) * math.cos(yaw / 2) + \
         math.sin(roll / 2) * math.sin(pitch / 2) * math.sin(yaw / 2)
    return Quaternion(x=qx, y=qy, z=qz, w=qw)

class SerialNodeIMU(Node):
    def __init__(self):
        super().__init__('serial_imu_node')
        self.publisher_ = self.create_publisher(Imu, 'imu/data_raw', 10)

        # adjust device & baud to match your hardware
        try:
            self.serial_port = serial.Serial('/dev/ttyACM2', 9600, timeout=1)
        except Exception as e:
            self.get_logger().error(f"Failed to open serial port: {e}")
            raise

        self.get_logger().info(f"Serial open: {self.serial_port.port}, baud {self.serial_port.baudrate}")
        self.imu_msg = Imu()
        self.imu_msg.header.frame_id = "imu_link"
        self.timer = self.create_timer(0.05, self.timer_callback)  # 20 Hz

    def timer_callback(self):
        if not self.serial_port.is_open:
            self.get_logger().error("Serial port closed.")
            return

        try:
            raw = self.serial_port.readline()
        except Exception as e:
            self.get_logger().warn(f"Serial read error: {e}")
            return

        if not raw:
            # no data this cycle
            return

        try:
            line = raw.decode('utf-8', errors='ignore').strip()
        except Exception:
            line = raw.decode('latin-1', errors='ignore').strip()

        # LOG the raw line so you can see what's coming
        self.get_logger().debug(f"raw: '{line}'")

        # safe split: only on first colon
        if ':' not in line:
            self.get_logger().debug("no ':' in line, skipping")
            return

        label, values_str = line.split(':', 1)
        label = label.strip().upper()
        values = [v for v in re.split(r'[ ,]+', values_str.strip()) if v]

        if not values:
            self.get_logger().debug("no values parsed, skipping")
            return

        try:
            if label == "A" and len(values) >= 3:
                self.imu_msg.linear_acceleration.x = float(values[0])
                self.imu_msg.linear_acceleration.y = float(values[1])
                self.imu_msg.linear_acceleration.z = float(values[2])
                self.imu_msg.linear_acceleration_covariance = [
                    0.04, 0.0, 0.0,
                    0.0, 0.04, 0.0,
                    0.0, 0.0, 0.04
                ]
            elif label == "G" and len(values) >= 3:
                # ensure gyro units: expect rad/s. If your IMU gives deg/s, convert:
                # vals = [math.radians(float(v)) for v in values[:3]]
                self.imu_msg.angular_velocity.x = float(values[0])
                self.imu_msg.angular_velocity.y = float(values[1])
                self.imu_msg.angular_velocity.z = float(values[2])
                self.imu_msg.angular_velocity_covariance = [
                    0.0025, 0.0, 0.0,
                    0.0, 0.0025, 0.0,
                    0.0, 0.0, 0.0025
                ]
            elif label == "R" and len(values) >= 3:
                # Many IMUs send roll,pitch,yaw in degrees — check your device!
                # If values are in degrees, uncomment the next three lines:
                # roll = math.radians(float(values[0]))
                # pitch = math.radians(float(values[1]))
                # yaw = math.radians(float(values[2]))
                roll = float(values[0])
                pitch = float(values[1])
                yaw = float(values[2])
                # If those were degrees and euler_to_quaternion expects radians, convert above.
                self.imu_msg.orientation = euler_to_quaternion(roll, pitch, yaw)
                self.imu_msg.orientation_covariance = [
                    0.0001, 0.0, 0.0,
                    0.0, 0.0001, 0.0,
                    0.0, 0.0, 0.0001
                ]
            else:
                self.get_logger().debug(f"Unknown label '{label}' or not enough values: {values}")
        except ValueError as e:
            self.get_logger().warn(f"Value conversion error for line '{line}': {e}")
            return
        except Exception as e:
            self.get_logger().error(f"Unexpected error processing line '{line}': {e}")
            return

        self.imu_msg.header.stamp = self.get_clock().now().to_msg()
        self.publisher_.publish(self.imu_msg)

def main(args=None):
    rclpy.init(args=args)
    node = SerialNodeIMU()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

