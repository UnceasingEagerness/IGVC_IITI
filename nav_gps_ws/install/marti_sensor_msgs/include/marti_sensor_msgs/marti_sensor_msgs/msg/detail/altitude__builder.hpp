// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/Altitude.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/altitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Altitude_sigma
{
public:
  explicit Init_Altitude_sigma(::marti_sensor_msgs::msg::Altitude & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::Altitude sigma(::marti_sensor_msgs::msg::Altitude::_sigma_type arg)
  {
    msg_.sigma = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Altitude msg_;
};

class Init_Altitude_altitude
{
public:
  explicit Init_Altitude_altitude(::marti_sensor_msgs::msg::Altitude & msg)
  : msg_(msg)
  {}
  Init_Altitude_sigma altitude(::marti_sensor_msgs::msg::Altitude::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_Altitude_sigma(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Altitude msg_;
};

class Init_Altitude_header
{
public:
  Init_Altitude_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Altitude_altitude header(::marti_sensor_msgs::msg::Altitude::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Altitude_altitude(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Altitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::Altitude>()
{
  return marti_sensor_msgs::msg::builder::Init_Altitude_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__BUILDER_HPP_
