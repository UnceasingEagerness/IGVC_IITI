// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_common_msgs:msg/StringArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__BUILDER_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_common_msgs/msg/detail/string_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_common_msgs
{

namespace msg
{

namespace builder
{

class Init_StringArrayStamped_strings
{
public:
  explicit Init_StringArrayStamped_strings(::marti_common_msgs::msg::StringArrayStamped & msg)
  : msg_(msg)
  {}
  ::marti_common_msgs::msg::StringArrayStamped strings(::marti_common_msgs::msg::StringArrayStamped::_strings_type arg)
  {
    msg_.strings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_common_msgs::msg::StringArrayStamped msg_;
};

class Init_StringArrayStamped_header
{
public:
  Init_StringArrayStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringArrayStamped_strings header(::marti_common_msgs::msg::StringArrayStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StringArrayStamped_strings(msg_);
  }

private:
  ::marti_common_msgs::msg::StringArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_common_msgs::msg::StringArrayStamped>()
{
  return marti_common_msgs::msg::builder::Init_StringArrayStamped_header();
}

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__BUILDER_HPP_
