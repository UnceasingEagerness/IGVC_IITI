// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Route_properties
{
public:
  explicit Init_Route_properties(::marti_nav_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::Route properties(::marti_nav_msgs::msg::Route::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::Route msg_;
};

class Init_Route_route_points
{
public:
  explicit Init_Route_route_points(::marti_nav_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_properties route_points(::marti_nav_msgs::msg::Route::_route_points_type arg)
  {
    msg_.route_points = std::move(arg);
    return Init_Route_properties(msg_);
  }

private:
  ::marti_nav_msgs::msg::Route msg_;
};

class Init_Route_header
{
public:
  Init_Route_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Route_route_points header(::marti_nav_msgs::msg::Route::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Route_route_points(msg_);
  }

private:
  ::marti_nav_msgs::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::Route>()
{
  return marti_nav_msgs::msg::builder::Init_Route_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
