// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_common_msgs:msg/KeyValueArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__BUILDER_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_common_msgs/msg/detail/key_value_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_common_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyValueArray_items
{
public:
  explicit Init_KeyValueArray_items(::marti_common_msgs::msg::KeyValueArray & msg)
  : msg_(msg)
  {}
  ::marti_common_msgs::msg::KeyValueArray items(::marti_common_msgs::msg::KeyValueArray::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_common_msgs::msg::KeyValueArray msg_;
};

class Init_KeyValueArray_header
{
public:
  Init_KeyValueArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyValueArray_items header(::marti_common_msgs::msg::KeyValueArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KeyValueArray_items(msg_);
  }

private:
  ::marti_common_msgs::msg::KeyValueArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_common_msgs::msg::KeyValueArray>()
{
  return marti_common_msgs::msg::builder::Init_KeyValueArray_header();
}

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__BUILDER_HPP_
