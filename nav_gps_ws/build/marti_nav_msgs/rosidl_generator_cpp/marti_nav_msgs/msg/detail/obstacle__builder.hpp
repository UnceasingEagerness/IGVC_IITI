// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_polygon
{
public:
  explicit Init_Obstacle_polygon(::marti_nav_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::Obstacle polygon(::marti_nav_msgs::msg::Obstacle::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_pose
{
public:
  explicit Init_Obstacle_pose(::marti_nav_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_polygon pose(::marti_nav_msgs::msg::Obstacle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Obstacle_polygon(msg_);
  }

private:
  ::marti_nav_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_id
{
public:
  Init_Obstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_pose id(::marti_nav_msgs::msg::Obstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Obstacle_pose(msg_);
  }

private:
  ::marti_nav_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::Obstacle>()
{
  return marti_nav_msgs::msg::builder::Init_Obstacle_id();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
