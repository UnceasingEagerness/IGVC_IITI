import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan

class ScanRelay(Node):
    def __init__(self):
        super().__init__('scan_relay')
        # Listen to the raw, buggy LiDAR data
        self.sub = self.create_subscription(LaserScan, 'scan_raw', self.scan_cb, 10)
        # Publish the sanitized data for Cartographer and Nav2
        self.pub = self.create_publisher(LaserScan, 'scan', 10)
        self.get_logger().info("Scan Relay Started! Fixing timestamps and frame_id...")

    def scan_cb(self, msg):
        # Force the timestamp to be the true Wall Time
        msg.header.stamp = self.get_clock().now().to_msg()
        # Force the frame_id to match our TF skeleton
        msg.header.frame_id = 'igvc_laser'
        self.pub.publish(msg)

def main():
    rclpy.init()
    node = ScanRelay()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
