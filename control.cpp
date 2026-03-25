#include "can-driver.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

std::string charToHex(unsigned char c) {
  std::stringstream ss;
  ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(c);
  return ss.str();
}

class TwistSubscriber : public rclcpp::Node {
private:
  CanDriverSender driver;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;

  // ✅ Added parameters for wheel base & radius
  const double wheel_base_;   // distance between wheels
  const double wheel_radius_; // radius of each wheel

public:
  TwistSubscriber()
      : Node("twist_subscriber"),
        driver{"/dev/ttyACM0", "1", CANUSB_SPEED::CANUSB_SPEED_125000},
        wheel_base_(0.72),   // <-- set your robot's wheel base here (meters)
        wheel_radius_(0.13)  // <-- set your robot's wheel radius here (meters)
  {
    subscription_ = this->create_subscription<geometry_msgs::msg::Twist>(
        "/cmd_vel", 10,
        std::bind(&TwistSubscriber::topic_callback, this,
                  std::placeholders::_1));

    velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/velocity", 10);

    RCLCPP_INFO(this->get_logger(), "Twist Subscriber Node Started");
  }

private:
  void topic_callback(const geometry_msgs::msg::Twist::SharedPtr msg) const {
    auto speed = charToHex(msg->linear.x) + charToHex(msg->linear.y);

    // ✅ Compute wheel velocities using base & radius
    double v_left = (msg->linear.x - (msg->angular.z * wheel_base_ / 2.0)) / wheel_radius_;
    double v_right = (msg->linear.x + (msg->angular.z * wheel_base_ / 2.0)) / wheel_radius_;

    auto speed_hex = charToHex(v_left) + charToHex(v_right);

    RCLCPP_INFO(this->get_logger(), "Left: %.2f, Right: %.2f", v_left, v_right);
    driver.send_data(speed_hex);

    // ✅ Publish wheel velocities
    auto wheel_msg = geometry_msgs::msg::Twist();
    wheel_msg.linear.x = v_left;
    wheel_msg.linear.y = v_right;
    velocity_publisher_->publish(wheel_msg);
  }

  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr subscription_;
};

