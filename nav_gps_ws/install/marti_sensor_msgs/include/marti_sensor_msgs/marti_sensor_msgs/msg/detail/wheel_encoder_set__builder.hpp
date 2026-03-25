// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/WheelEncoderSet.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/wheel_encoder_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelEncoderSet_encoders
{
public:
  explicit Init_WheelEncoderSet_encoders(::marti_sensor_msgs::msg::WheelEncoderSet & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::WheelEncoderSet encoders(::marti_sensor_msgs::msg::WheelEncoderSet::_encoders_type arg)
  {
    msg_.encoders = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::WheelEncoderSet msg_;
};

class Init_WheelEncoderSet_header
{
public:
  Init_WheelEncoderSet_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelEncoderSet_encoders header(::marti_sensor_msgs::msg::WheelEncoderSet::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelEncoderSet_encoders(msg_);
  }

private:
  ::marti_sensor_msgs::msg::WheelEncoderSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::WheelEncoderSet>()
{
  return marti_sensor_msgs::msg::builder::Init_WheelEncoderSet_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__BUILDER_HPP_
