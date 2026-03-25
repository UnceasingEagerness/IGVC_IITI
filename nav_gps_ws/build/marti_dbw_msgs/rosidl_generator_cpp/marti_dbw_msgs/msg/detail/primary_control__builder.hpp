// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_dbw_msgs:msg/PrimaryControl.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__BUILDER_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_dbw_msgs/msg/detail/primary_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_PrimaryControl_brake_command
{
public:
  explicit Init_PrimaryControl_brake_command(::marti_dbw_msgs::msg::PrimaryControl & msg)
  : msg_(msg)
  {}
  ::marti_dbw_msgs::msg::PrimaryControl brake_command(::marti_dbw_msgs::msg::PrimaryControl::_brake_command_type arg)
  {
    msg_.brake_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryControl msg_;
};

class Init_PrimaryControl_throttle_command
{
public:
  explicit Init_PrimaryControl_throttle_command(::marti_dbw_msgs::msg::PrimaryControl & msg)
  : msg_(msg)
  {}
  Init_PrimaryControl_brake_command throttle_command(::marti_dbw_msgs::msg::PrimaryControl::_throttle_command_type arg)
  {
    msg_.throttle_command = std::move(arg);
    return Init_PrimaryControl_brake_command(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryControl msg_;
};

class Init_PrimaryControl_steering_command
{
public:
  explicit Init_PrimaryControl_steering_command(::marti_dbw_msgs::msg::PrimaryControl & msg)
  : msg_(msg)
  {}
  Init_PrimaryControl_throttle_command steering_command(::marti_dbw_msgs::msg::PrimaryControl::_steering_command_type arg)
  {
    msg_.steering_command = std::move(arg);
    return Init_PrimaryControl_throttle_command(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryControl msg_;
};

class Init_PrimaryControl_estop
{
public:
  explicit Init_PrimaryControl_estop(::marti_dbw_msgs::msg::PrimaryControl & msg)
  : msg_(msg)
  {}
  Init_PrimaryControl_steering_command estop(::marti_dbw_msgs::msg::PrimaryControl::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return Init_PrimaryControl_steering_command(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryControl msg_;
};

class Init_PrimaryControl_active
{
public:
  explicit Init_PrimaryControl_active(::marti_dbw_msgs::msg::PrimaryControl & msg)
  : msg_(msg)
  {}
  Init_PrimaryControl_estop active(::marti_dbw_msgs::msg::PrimaryControl::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_PrimaryControl_estop(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryControl msg_;
};

class Init_PrimaryControl_header
{
public:
  Init_PrimaryControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrimaryControl_active header(::marti_dbw_msgs::msg::PrimaryControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PrimaryControl_active(msg_);
  }

private:
  ::marti_dbw_msgs::msg::PrimaryControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_dbw_msgs::msg::PrimaryControl>()
{
  return marti_dbw_msgs::msg::builder::Init_PrimaryControl_header();
}

}  // namespace marti_dbw_msgs

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__BUILDER_HPP_
