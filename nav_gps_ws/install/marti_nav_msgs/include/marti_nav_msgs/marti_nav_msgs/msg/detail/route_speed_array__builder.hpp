// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/RouteSpeedArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/route_speed_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteSpeedArray_speeds
{
public:
  explicit Init_RouteSpeedArray_speeds(::marti_nav_msgs::msg::RouteSpeedArray & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::RouteSpeedArray speeds(::marti_nav_msgs::msg::RouteSpeedArray::_speeds_type arg)
  {
    msg_.speeds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteSpeedArray msg_;
};

class Init_RouteSpeedArray_header
{
public:
  Init_RouteSpeedArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteSpeedArray_speeds header(::marti_nav_msgs::msg::RouteSpeedArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RouteSpeedArray_speeds(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteSpeedArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::RouteSpeedArray>()
{
  return marti_nav_msgs::msg::builder::Init_RouteSpeedArray_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__BUILDER_HPP_
