// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Velocity_variance
{
public:
  explicit Init_Velocity_variance(::marti_sensor_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::Velocity variance(::marti_sensor_msgs::msg::Velocity::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Velocity msg_;
};

class Init_Velocity_velocity
{
public:
  explicit Init_Velocity_velocity(::marti_sensor_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  Init_Velocity_variance velocity(::marti_sensor_msgs::msg::Velocity::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Velocity_variance(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Velocity msg_;
};

class Init_Velocity_header
{
public:
  Init_Velocity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_velocity header(::marti_sensor_msgs::msg::Velocity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Velocity_velocity(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Velocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::Velocity>()
{
  return marti_sensor_msgs::msg::builder::Init_Velocity_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_
