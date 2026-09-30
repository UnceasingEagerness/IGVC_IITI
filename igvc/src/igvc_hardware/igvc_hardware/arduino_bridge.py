import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Imu
import serial
import threading
import math
import time

class ArduinoBridge(Node):
    def __init__(self):
        super().__init__('arduino_bridge')
        
        # Parameters found in IGVC_IITI/control.cpp
        self.declare_parameter('port', '/dev/arduino')
        self.declare_parameter('baudrate', 115200)
        self.declare_parameter('wheel_base', 0.78) # distance between wheels in meters
        self.declare_parameter('wheel_radius', 0.13) # in meters
        self.declare_parameter('ticks_per_rev', 90) # Hoverboard hub motors have 90 ticks per revolution
        self.declare_parameter('max_rpm', 250.0) # physical max RPM of wheels
        
        port = self.get_parameter('port').value
        baudrate = self.get_parameter('baudrate').value
        self.wheel_base = self.get_parameter('wheel_base').value
        self.wheel_radius = self.get_parameter('wheel_radius').value
        self.ticks_per_rev = self.get_parameter('ticks_per_rev').value
        self.max_rpm = self.get_parameter('max_rpm').value
        
        # Serial connection
        try:
            self.serial_port = serial.Serial(port, baudrate, timeout=1.0)
            self.get_logger().info(f"Connected to Arduino on {port}")
        except Exception as e:
            self.get_logger().error(f"Failed to connect to Arduino: {e}")
            self.serial_port = None
            
        # ROS 2 Interfaces
        self.cmd_vel_sub = self.create_subscription(Twist, 'cmd_vel', self.cmd_vel_callback, 10)
        self.odom_pub = self.create_publisher(Odometry, 'wheel/odometry', 10)
        self.imu_pub = self.create_publisher(Imu, '/imu/data', 10)
        
        # Odometry state
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0
        self.last_left_ticks = 0
        self.last_right_ticks = 0
        self.last_time = self.get_clock().now()
        self.first_read = True
        
        # Start reading thread
        if self.serial_port:
            self.read_thread = threading.Thread(target=self.read_serial_loop)
            self.read_thread.daemon = True
            self.read_thread.start()

    def cmd_vel_callback(self, msg):
        if not self.serial_port:
            return
            
        v = msg.linear.x
        w = msg.angular.z
        
        # Differential drive kinematics (meters/second)
        v_left = v - (w * self.wheel_base / 2.0)
        v_right = v + (w * self.wheel_base / 2.0)
        
        # Convert m/s to RPM
        rpm_left = (v_left / (2.0 * math.pi * self.wheel_radius)) * 60.0
        rpm_right = (v_right / (2.0 * math.pi * self.wheel_radius)) * 60.0
        
        # Convert RPM to RoboteQ command scale (-1000 to 1000)
        cmd_left = int(max(min((rpm_left / self.max_rpm) * 1000.0, 1000), -1000))
        cmd_right = int(max(min((rpm_right / self.max_rpm) * 1000.0, 1000), -1000))
        
        # Send to Arduino CAN Bridge as "L<val> R<val>\n" (Inverted for physical layout)
        cmd_str = f"L{-cmd_left} R{-cmd_right}\n"
        self.serial_port.write(cmd_str.encode('utf-8'))

    def read_serial_loop(self):
        while rclpy.ok():
            try:
                line = self.serial_port.readline().decode('utf-8', errors='ignore').strip()
                if line.startswith("FEEDBACK:"):
                    # Expected format: "FEEDBACK: L<rpm> R<rpm> RPM | HALL L<ticks> R<ticks> | IMU <w> <x> <y> <z>"
                    parts = line.split('|')
                    
                    # 1. Parse Encoders
                    if len(parts) >= 2 and "HALL" in parts[1]:
                        hall_parts = parts[1].strip().split(' ')
                        if len(hall_parts) >= 3:
                            left_str = hall_parts[1].replace('L', '')
                            right_str = hall_parts[2].replace('R', '')
                            
                            left_ticks = -int(left_str) # Inverted for physical layout
                            right_ticks = -int(right_str) # Inverted for physical layout
                            self.update_odometry(left_ticks, right_ticks)
                            
                    # 2. Parse IMU
                    if len(parts) >= 3 and "IMU" in parts[2]:
                        imu_parts = parts[2].strip().split(' ')
                        if len(imu_parts) >= 11:
                            qw = float(imu_parts[1])
                            qx = float(imu_parts[2])
                            qy = float(imu_parts[3])
                            qz = float(imu_parts[4])
                            gx = float(imu_parts[5])
                            gy = float(imu_parts[6])
                            gz = float(imu_parts[7])
                            ax = float(imu_parts[8])
                            ay = float(imu_parts[9])
                            az = float(imu_parts[10])
                            self.publish_imu(qw, qx, qy, qz, gx, gy, gz, ax, ay, az)
                            
            except Exception as e:
                self.get_logger().error(f"Serial read error: {e}")

    def publish_imu(self, qw, qx, qy, qz, gx, gy, gz, ax, ay, az):
        imu_msg = Imu()
        imu_msg.header.stamp = self.get_clock().now().to_msg()
        imu_msg.header.frame_id = "igvc_imu_link"
        
        imu_msg.orientation.w = qw
        imu_msg.orientation.x = qx
        imu_msg.orientation.y = qy
        imu_msg.orientation.z = qz
        
        imu_msg.angular_velocity.x = gx
        imu_msg.angular_velocity.y = gy
        imu_msg.angular_velocity.z = gz
        
        imu_msg.linear_acceleration.x = ax
        imu_msg.linear_acceleration.y = ay
        imu_msg.linear_acceleration.z = az
        
        # Basic covariance to satisfy Nav2/EKF
        imu_msg.orientation_covariance[0] = 0.01
        imu_msg.orientation_covariance[4] = 0.01
        imu_msg.orientation_covariance[8] = 0.01
        
        # Basic covariance to satisfy Nav2/EKF
        imu_msg.angular_velocity_covariance[0] = 0.01
        imu_msg.angular_velocity_covariance[4] = 0.01
        imu_msg.angular_velocity_covariance[8] = 0.01
        
        imu_msg.linear_acceleration_covariance[0] = 0.01
        imu_msg.linear_acceleration_covariance[4] = 0.01
        imu_msg.linear_acceleration_covariance[8] = 0.01
        
        self.imu_pub.publish(imu_msg)

    def update_odometry(self, left_ticks, right_ticks):
        current_time = self.get_clock().now()
        
        if self.first_read:
            self.last_left_ticks = left_ticks
            self.last_right_ticks = right_ticks
            self.last_time = current_time
            self.first_read = False
            return
            
        # Calculate delta ticks
        delta_left_ticks = left_ticks - self.last_left_ticks
        delta_right_ticks = right_ticks - self.last_right_ticks
        
        self.last_left_ticks = left_ticks
        self.last_right_ticks = right_ticks
        
        # Convert ticks to meters
        meters_per_tick = (2.0 * math.pi * self.wheel_radius) / self.ticks_per_rev
        d_left = delta_left_ticks * meters_per_tick
        d_right = delta_right_ticks * meters_per_tick
        
        # Calculate robot movement
        d_center = (d_left + d_right) / 2.0
        d_theta = (d_right - d_left) / self.wheel_base
        
        # Calculate dt
        dt = (current_time - self.last_time).nanoseconds / 1e9
        self.last_time = current_time
        
        if dt <= 0:
            return
            
        # Update pose
        self.x += d_center * math.cos(self.theta + d_theta / 2.0)
        self.y += d_center * math.sin(self.theta + d_theta / 2.0)
        self.theta += d_theta
        
        # Calculate velocities
        v_x = d_center / dt
        v_theta = d_theta / dt
        
        # Publish Odometry
        odom = Odometry()
        odom.header.stamp = current_time.to_msg()
        odom.header.frame_id = "igvc_odom"
        odom.child_frame_id = "igvc_base_link"
        
        # Set pose
        odom.pose.pose.position.x = self.x
        odom.pose.pose.position.y = self.y
        odom.pose.pose.position.z = 0.0
        
        # Convert theta to quaternion
        odom.pose.pose.orientation.z = math.sin(self.theta / 2.0)
        odom.pose.pose.orientation.w = math.cos(self.theta / 2.0)
        
        # Set velocity
        odom.twist.twist.linear.x = v_x
        odom.twist.twist.angular.z = v_theta
        
        # Publish
        self.odom_pub.publish(odom)

def main(args=None):
    rclpy.init(args=args)
    node = ArduinoBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
