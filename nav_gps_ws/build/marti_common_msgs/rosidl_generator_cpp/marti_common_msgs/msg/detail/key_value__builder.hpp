// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_common_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_common_msgs/msg/detail/key_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_common_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyValue_value
{
public:
  explicit Init_KeyValue_value(::marti_common_msgs::msg::KeyValue & msg)
  : msg_(msg)
  {}
  ::marti_common_msgs::msg::KeyValue value(::marti_common_msgs::msg::KeyValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_common_msgs::msg::KeyValue msg_;
};

class Init_KeyValue_key
{
public:
  Init_KeyValue_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyValue_value key(::marti_common_msgs::msg::KeyValue::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyValue_value(msg_);
  }

private:
  ::marti_common_msgs::msg::KeyValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_common_msgs::msg::KeyValue>()
{
  return marti_common_msgs::msg::builder::Init_KeyValue_key();
}

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
