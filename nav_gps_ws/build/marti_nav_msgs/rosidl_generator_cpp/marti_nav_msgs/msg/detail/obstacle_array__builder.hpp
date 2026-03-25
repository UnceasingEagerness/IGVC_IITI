// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/ObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleArray_obstacles
{
public:
  explicit Init_ObstacleArray_obstacles(::marti_nav_msgs::msg::ObstacleArray & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::ObstacleArray obstacles(::marti_nav_msgs::msg::ObstacleArray::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::ObstacleArray msg_;
};

class Init_ObstacleArray_header
{
public:
  Init_ObstacleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleArray_obstacles header(::marti_nav_msgs::msg::ObstacleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleArray_obstacles(msg_);
  }

private:
  ::marti_nav_msgs::msg::ObstacleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::ObstacleArray>()
{
  return marti_nav_msgs::msg::builder::Init_ObstacleArray_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_
