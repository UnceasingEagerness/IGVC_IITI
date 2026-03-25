// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/path_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_PathPoint_speed
{
public:
  explicit Init_PathPoint_speed(::marti_nav_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::PathPoint speed(::marti_nav_msgs::msg::PathPoint::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_yaw
{
public:
  explicit Init_PathPoint_yaw(::marti_nav_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_speed yaw(::marti_nav_msgs::msg::PathPoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PathPoint_speed(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_y
{
public:
  explicit Init_PathPoint_y(::marti_nav_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_yaw y(::marti_nav_msgs::msg::PathPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PathPoint_yaw(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_x
{
public:
  Init_PathPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPoint_y x(::marti_nav_msgs::msg::PathPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PathPoint_y(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::PathPoint>()
{
  return marti_nav_msgs::msg::builder::Init_PathPoint_x();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
