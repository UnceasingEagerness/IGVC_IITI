// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/DioPortState.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_PORT_STATE__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_PORT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/dio_port_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_DioPortState_value
{
public:
  explicit Init_DioPortState_value(::marti_sensor_msgs::msg::DioPortState & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::DioPortState value(::marti_sensor_msgs::msg::DioPortState::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DioPortState msg_;
};

class Init_DioPortState_header
{
public:
  Init_DioPortState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DioPortState_value header(::marti_sensor_msgs::msg::DioPortState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DioPortState_value(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DioPortState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::DioPortState>()
{
  return marti_sensor_msgs::msg::builder::Init_DioPortState_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_PORT_STATE__BUILDER_HPP_
