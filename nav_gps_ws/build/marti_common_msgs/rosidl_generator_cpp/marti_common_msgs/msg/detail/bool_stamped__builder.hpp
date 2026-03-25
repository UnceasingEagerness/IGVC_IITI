// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_common_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_common_msgs/msg/detail/bool_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_common_msgs
{

namespace msg
{

namespace builder
{

class Init_BoolStamped_value
{
public:
  explicit Init_BoolStamped_value(::marti_common_msgs::msg::BoolStamped & msg)
  : msg_(msg)
  {}
  ::marti_common_msgs::msg::BoolStamped value(::marti_common_msgs::msg::BoolStamped::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_common_msgs::msg::BoolStamped msg_;
};

class Init_BoolStamped_header
{
public:
  Init_BoolStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoolStamped_value header(::marti_common_msgs::msg::BoolStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoolStamped_value(msg_);
  }

private:
  ::marti_common_msgs::msg::BoolStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_common_msgs::msg::BoolStamped>()
{
  return marti_common_msgs::msg::builder::Init_BoolStamped_header();
}

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_
