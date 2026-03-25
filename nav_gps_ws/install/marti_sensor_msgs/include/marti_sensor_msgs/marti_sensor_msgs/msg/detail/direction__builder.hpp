// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIRECTION__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Direction_direction
{
public:
  explicit Init_Direction_direction(::marti_sensor_msgs::msg::Direction & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::Direction direction(::marti_sensor_msgs::msg::Direction::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Direction msg_;
};

class Init_Direction_header
{
public:
  Init_Direction_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Direction_direction header(::marti_sensor_msgs::msg::Direction::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Direction_direction(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Direction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::Direction>()
{
  return marti_sensor_msgs::msg::builder::Init_Direction_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIRECTION__BUILDER_HPP_
