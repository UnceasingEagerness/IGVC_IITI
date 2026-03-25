// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/WheelEncoder.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/wheel_encoder__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelEncoder_id
{
public:
  explicit Init_WheelEncoder_id(::marti_sensor_msgs::msg::WheelEncoder & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::WheelEncoder id(::marti_sensor_msgs::msg::WheelEncoder::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::WheelEncoder msg_;
};

class Init_WheelEncoder_directional
{
public:
  explicit Init_WheelEncoder_directional(::marti_sensor_msgs::msg::WheelEncoder & msg)
  : msg_(msg)
  {}
  Init_WheelEncoder_id directional(::marti_sensor_msgs::msg::WheelEncoder::_directional_type arg)
  {
    msg_.directional = std::move(arg);
    return Init_WheelEncoder_id(msg_);
  }

private:
  ::marti_sensor_msgs::msg::WheelEncoder msg_;
};

class Init_WheelEncoder_frequency
{
public:
  Init_WheelEncoder_frequency()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelEncoder_directional frequency(::marti_sensor_msgs::msg::WheelEncoder::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_WheelEncoder_directional(msg_);
  }

private:
  ::marti_sensor_msgs::msg::WheelEncoder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::WheelEncoder>()
{
  return marti_sensor_msgs::msg::builder::Init_WheelEncoder_frequency();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__BUILDER_HPP_
