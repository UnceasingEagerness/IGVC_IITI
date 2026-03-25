// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_common_msgs:msg/HealthStatus.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__BUILDER_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_common_msgs/msg/detail/health_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_common_msgs
{

namespace msg
{

namespace builder
{

class Init_HealthStatus_message
{
public:
  explicit Init_HealthStatus_message(::marti_common_msgs::msg::HealthStatus & msg)
  : msg_(msg)
  {}
  ::marti_common_msgs::msg::HealthStatus message(::marti_common_msgs::msg::HealthStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_common_msgs::msg::HealthStatus msg_;
};

class Init_HealthStatus_status
{
public:
  explicit Init_HealthStatus_status(::marti_common_msgs::msg::HealthStatus & msg)
  : msg_(msg)
  {}
  Init_HealthStatus_message status(::marti_common_msgs::msg::HealthStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_HealthStatus_message(msg_);
  }

private:
  ::marti_common_msgs::msg::HealthStatus msg_;
};

class Init_HealthStatus_header
{
public:
  Init_HealthStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HealthStatus_status header(::marti_common_msgs::msg::HealthStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HealthStatus_status(msg_);
  }

private:
  ::marti_common_msgs::msg::HealthStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_common_msgs::msg::HealthStatus>()
{
  return marti_common_msgs::msg::builder::Init_HealthStatus_header();
}

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__BUILDER_HPP_
