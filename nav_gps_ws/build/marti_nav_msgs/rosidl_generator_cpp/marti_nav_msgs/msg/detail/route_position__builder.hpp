// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/RoutePosition.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/route_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RoutePosition_distance
{
public:
  explicit Init_RoutePosition_distance(::marti_nav_msgs::msg::RoutePosition & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::RoutePosition distance(::marti_nav_msgs::msg::RoutePosition::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::RoutePosition msg_;
};

class Init_RoutePosition_id
{
public:
  explicit Init_RoutePosition_id(::marti_nav_msgs::msg::RoutePosition & msg)
  : msg_(msg)
  {}
  Init_RoutePosition_distance id(::marti_nav_msgs::msg::RoutePosition::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RoutePosition_distance(msg_);
  }

private:
  ::marti_nav_msgs::msg::RoutePosition msg_;
};

class Init_RoutePosition_route_id
{
public:
  explicit Init_RoutePosition_route_id(::marti_nav_msgs::msg::RoutePosition & msg)
  : msg_(msg)
  {}
  Init_RoutePosition_id route_id(::marti_nav_msgs::msg::RoutePosition::_route_id_type arg)
  {
    msg_.route_id = std::move(arg);
    return Init_RoutePosition_id(msg_);
  }

private:
  ::marti_nav_msgs::msg::RoutePosition msg_;
};

class Init_RoutePosition_header
{
public:
  Init_RoutePosition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoutePosition_route_id header(::marti_nav_msgs::msg::RoutePosition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RoutePosition_route_id(msg_);
  }

private:
  ::marti_nav_msgs::msg::RoutePosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::RoutePosition>()
{
  return marti_nav_msgs::msg::builder::Init_RoutePosition_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__BUILDER_HPP_
