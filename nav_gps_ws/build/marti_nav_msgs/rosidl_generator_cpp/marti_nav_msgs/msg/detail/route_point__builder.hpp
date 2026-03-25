// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/RoutePoint.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/route_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RoutePoint_properties
{
public:
  explicit Init_RoutePoint_properties(::marti_nav_msgs::msg::RoutePoint & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::RoutePoint properties(::marti_nav_msgs::msg::RoutePoint::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::RoutePoint msg_;
};

class Init_RoutePoint_id
{
public:
  explicit Init_RoutePoint_id(::marti_nav_msgs::msg::RoutePoint & msg)
  : msg_(msg)
  {}
  Init_RoutePoint_properties id(::marti_nav_msgs::msg::RoutePoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RoutePoint_properties(msg_);
  }

private:
  ::marti_nav_msgs::msg::RoutePoint msg_;
};

class Init_RoutePoint_pose
{
public:
  Init_RoutePoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoutePoint_id pose(::marti_nav_msgs::msg::RoutePoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RoutePoint_id(msg_);
  }

private:
  ::marti_nav_msgs::msg::RoutePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::RoutePoint>()
{
  return marti_nav_msgs::msg::builder::Init_RoutePoint_pose();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__BUILDER_HPP_
