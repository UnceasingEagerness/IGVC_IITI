// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/RouteOffset.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/route_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteOffset_route_position
{
public:
  explicit Init_RouteOffset_route_position(::marti_nav_msgs::msg::RouteOffset & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::RouteOffset route_position(::marti_nav_msgs::msg::RouteOffset::_route_position_type arg)
  {
    msg_.route_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteOffset msg_;
};

class Init_RouteOffset_relative_pose
{
public:
  explicit Init_RouteOffset_relative_pose(::marti_nav_msgs::msg::RouteOffset & msg)
  : msg_(msg)
  {}
  Init_RouteOffset_route_position relative_pose(::marti_nav_msgs::msg::RouteOffset::_relative_pose_type arg)
  {
    msg_.relative_pose = std::move(arg);
    return Init_RouteOffset_route_position(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteOffset msg_;
};

class Init_RouteOffset_header
{
public:
  Init_RouteOffset_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteOffset_relative_pose header(::marti_nav_msgs::msg::RouteOffset::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RouteOffset_relative_pose(msg_);
  }

private:
  ::marti_nav_msgs::msg::RouteOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::RouteOffset>()
{
  return marti_nav_msgs::msg::builder::Init_RouteOffset_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__BUILDER_HPP_
