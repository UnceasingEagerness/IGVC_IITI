// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/RouteSpeed.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/route_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteSpeed_speed
{
public:
  explicit Init_RouteSpeed_speed(::marti_nav_msgs::msg::RouteSpeed & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::RouteSpeed speed(::marti_nav_msgs::msg::RouteSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteSpeed msg_;
};

class Init_RouteSpeed_distance
{
public:
  explicit Init_RouteSpeed_distance(::marti_nav_msgs::msg::RouteSpeed & msg)
  : msg_(msg)
  {}
  Init_RouteSpeed_speed distance(::marti_nav_msgs::msg::RouteSpeed::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_RouteSpeed_speed(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteSpeed msg_;
};

class Init_RouteSpeed_id
{
public:
  explicit Init_RouteSpeed_id(::marti_nav_msgs::msg::RouteSpeed & msg)
  : msg_(msg)
  {}
  Init_RouteSpeed_distance id(::marti_nav_msgs::msg::RouteSpeed::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RouteSpeed_distance(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteSpeed msg_;
};

class Init_RouteSpeed_header
{
public:
  Init_RouteSpeed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteSpeed_id header(::marti_nav_msgs::msg::RouteSpeed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RouteSpeed_id(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::RouteSpeed>()
{
  return marti_nav_msgs::msg::builder::Init_RouteSpeed_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED__BUILDER_HPP_
