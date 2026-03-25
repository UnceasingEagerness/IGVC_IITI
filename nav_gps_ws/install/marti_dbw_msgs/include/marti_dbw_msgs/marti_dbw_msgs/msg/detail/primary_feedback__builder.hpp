// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__BUILDER_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_dbw_msgs/msg/detail/primary_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_PrimaryFeedback_error_other
{
public:
  explicit Init_PrimaryFeedback_error_other(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  ::marti_dbw_msgs::msg::PrimaryFeedback error_other(::marti_dbw_msgs::msg::PrimaryFeedback::_error_other_type arg)
  {
    msg_.error_other = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_error_brake
{
public:
  explicit Init_PrimaryFeedback_error_brake(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_error_other error_brake(::marti_dbw_msgs::msg::PrimaryFeedback::_error_brake_type arg)
  {
    msg_.error_brake = std::move(arg);
    return Init_PrimaryFeedback_error_other(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_error_throttle
{
public:
  explicit Init_PrimaryFeedback_error_throttle(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_error_brake error_throttle(::marti_dbw_msgs::msg::PrimaryFeedback::_error_throttle_type arg)
  {
    msg_.error_throttle = std::move(arg);
    return Init_PrimaryFeedback_error_brake(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_error_steering
{
public:
  explicit Init_PrimaryFeedback_error_steering(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_error_throttle error_steering(::marti_dbw_msgs::msg::PrimaryFeedback::_error_steering_type arg)
  {
    msg_.error_steering = std::move(arg);
    return Init_PrimaryFeedback_error_throttle(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_estop_measure
{
public:
  explicit Init_PrimaryFeedback_estop_measure(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_error_steering estop_measure(::marti_dbw_msgs::msg::PrimaryFeedback::_estop_measure_type arg)
  {
    msg_.estop_measure = std::move(arg);
    return Init_PrimaryFeedback_error_steering(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_estop_command
{
public:
  explicit Init_PrimaryFeedback_estop_command(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_estop_measure estop_command(::marti_dbw_msgs::msg::PrimaryFeedback::_estop_command_type arg)
  {
    msg_.estop_command = std::move(arg);
    return Init_PrimaryFeedback_estop_measure(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_brake_measure
{
public:
  explicit Init_PrimaryFeedback_brake_measure(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_estop_command brake_measure(::marti_dbw_msgs::msg::PrimaryFeedback::_brake_measure_type arg)
  {
    msg_.brake_measure = std::move(arg);
    return Init_PrimaryFeedback_estop_command(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_brake_command
{
public:
  explicit Init_PrimaryFeedback_brake_command(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_brake_measure brake_command(::marti_dbw_msgs::msg::PrimaryFeedback::_brake_command_type arg)
  {
    msg_.brake_command = std::move(arg);
    return Init_PrimaryFeedback_brake_measure(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_throttle_measure
{
public:
  explicit Init_PrimaryFeedback_throttle_measure(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_brake_command throttle_measure(::marti_dbw_msgs::msg::PrimaryFeedback::_throttle_measure_type arg)
  {
    msg_.throttle_measure = std::move(arg);
    return Init_PrimaryFeedback_brake_command(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_throttle_command
{
public:
  explicit Init_PrimaryFeedback_throttle_command(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_throttle_measure throttle_command(::marti_dbw_msgs::msg::PrimaryFeedback::_throttle_command_type arg)
  {
    msg_.throttle_command = std::move(arg);
    return Init_PrimaryFeedback_throttle_measure(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_steering_measure
{
public:
  explicit Init_PrimaryFeedback_steering_measure(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_throttle_command steering_measure(::marti_dbw_msgs::msg::PrimaryFeedback::_steering_measure_type arg)
  {
    msg_.steering_measure = std::move(arg);
    return Init_PrimaryFeedback_throttle_command(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_steering_command
{
public:
  explicit Init_PrimaryFeedback_steering_command(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_steering_measure steering_command(::marti_dbw_msgs::msg::PrimaryFeedback::_steering_command_type arg)
  {
    msg_.steering_command = std::move(arg);
    return Init_PrimaryFeedback_steering_measure(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_robotic_mode
{
public:
  explicit Init_PrimaryFeedback_robotic_mode(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_steering_command robotic_mode(::marti_dbw_msgs::msg::PrimaryFeedback::_robotic_mode_type arg)
  {
    msg_.robotic_mode = std::move(arg);
    return Init_PrimaryFeedback_steering_command(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_present
{
public:
  explicit Init_PrimaryFeedback_present(::marti_dbw_msgs::msg::PrimaryFeedback & msg)
  : msg_(msg)
  {}
  Init_PrimaryFeedback_robotic_mode present(::marti_dbw_msgs::msg::PrimaryFeedback::_present_type arg)
  {
    msg_.present = std::move(arg);
    return Init_PrimaryFeedback_robotic_mode(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

class Init_PrimaryFeedback_header
{
public:
  Init_PrimaryFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrimaryFeedback_present header(::marti_dbw_msgs::msg::PrimaryFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PrimaryFeedback_present(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_dbw_msgs::msg::PrimaryFeedback>()
{
  return marti_dbw_msgs::msg::builder::Init_PrimaryFeedback_header();
}

}  // namespace marti_dbw_msgs

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__BUILDER_HPP_
