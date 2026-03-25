// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_common_msgs:msg/Int8Stamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__INT8_STAMPED__BUILDER_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__INT8_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_common_msgs/msg/detail/int8_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Int8Stamped_value
{
public:
  explicit Init_Int8Stamped_value(::marti_common_msgs::msg::Int8Stamped & msg)
  : msg_(msg)
  {}
  ::marti_common_msgs::msg::Int8Stamped value(::marti_common_msgs::msg::Int8Stamped::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_common_msgs::msg::Int8Stamped msg_;
};

class Init_Int8Stamped_header
{
public:
  Init_Int8Stamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int8Stamped_value header(::marti_common_msgs::msg::Int8Stamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Int8Stamped_value(msg_);
  }

private:
  ::marti_common_msgs::msg::Int8Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_common_msgs::msg::Int8Stamped>()
{
  return marti_common_msgs::msg::builder::Init_Int8Stamped_header();
}

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__INT8_STAMPED__BUILDER_HPP_
