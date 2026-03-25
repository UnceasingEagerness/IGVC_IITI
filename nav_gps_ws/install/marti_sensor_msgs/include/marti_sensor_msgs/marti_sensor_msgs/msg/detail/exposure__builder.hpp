// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/Exposure.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__EXPOSURE__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__EXPOSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/exposure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Exposure_value
{
public:
  explicit Init_Exposure_value(::marti_sensor_msgs::msg::Exposure & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::Exposure value(::marti_sensor_msgs::msg::Exposure::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Exposure msg_;
};

class Init_Exposure_header
{
public:
  Init_Exposure_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Exposure_value header(::marti_sensor_msgs::msg::Exposure::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Exposure_value(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Exposure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::Exposure>()
{
  return marti_sensor_msgs::msg::builder::Init_Exposure_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__EXPOSURE__BUILDER_HPP_
