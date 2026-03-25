// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/Gyro.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/gyro__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Gyro_variance
{
public:
  explicit Init_Gyro_variance(::marti_sensor_msgs::msg::Gyro & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::Gyro variance(::marti_sensor_msgs::msg::Gyro::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Gyro msg_;
};

class Init_Gyro_angular_rate
{
public:
  explicit Init_Gyro_angular_rate(::marti_sensor_msgs::msg::Gyro & msg)
  : msg_(msg)
  {}
  Init_Gyro_variance angular_rate(::marti_sensor_msgs::msg::Gyro::_angular_rate_type arg)
  {
    msg_.angular_rate = std::move(arg);
    return Init_Gyro_variance(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Gyro msg_;
};

class Init_Gyro_header
{
public:
  Init_Gyro_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gyro_angular_rate header(::marti_sensor_msgs::msg::Gyro::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gyro_angular_rate(msg_);
  }

private:
  ::marti_sensor_msgs::msg::Gyro msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::Gyro>()
{
  return marti_sensor_msgs::msg::builder::Init_Gyro_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__BUILDER_HPP_
