// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/tracked_object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObjectArray_objects
{
public:
  explicit Init_TrackedObjectArray_objects(::marti_nav_msgs::msg::TrackedObjectArray & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::TrackedObjectArray objects(::marti_nav_msgs::msg::TrackedObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObjectArray msg_;
};

class Init_TrackedObjectArray_header
{
public:
  Init_TrackedObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObjectArray_objects header(::marti_nav_msgs::msg::TrackedObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedObjectArray_objects(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::TrackedObjectArray>()
{
  return marti_nav_msgs::msg::builder::Init_TrackedObjectArray_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__BUILDER_HPP_
