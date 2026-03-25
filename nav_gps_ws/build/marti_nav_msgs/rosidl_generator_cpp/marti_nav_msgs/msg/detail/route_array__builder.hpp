// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/RouteArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_ARRAY__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/route_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteArray_properties
{
public:
  explicit Init_RouteArray_properties(::marti_nav_msgs::msg::RouteArray & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::RouteArray properties(::marti_nav_msgs::msg::RouteArray::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteArray msg_;
};

class Init_RouteArray_routes
{
public:
  explicit Init_RouteArray_routes(::marti_nav_msgs::msg::RouteArray & msg)
  : msg_(msg)
  {}
  Init_RouteArray_properties routes(::marti_nav_msgs::msg::RouteArray::_routes_type arg)
  {
    msg_.routes = std::move(arg);
    return Init_RouteArray_properties(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteArray msg_;
};

class Init_RouteArray_header
{
public:
  Init_RouteArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteArray_routes header(::marti_nav_msgs::msg::RouteArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RouteArray_routes(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::RouteArray>()
{
  return marti_nav_msgs::msg::builder::Init_RouteArray_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_ARRAY__BUILDER_HPP_
