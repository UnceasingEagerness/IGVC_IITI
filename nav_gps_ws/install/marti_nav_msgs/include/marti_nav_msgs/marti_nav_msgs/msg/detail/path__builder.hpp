// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Path_in_reverse
{
public:
  explicit Init_Path_in_reverse(::marti_nav_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::Path in_reverse(::marti_nav_msgs::msg::Path::_in_reverse_type arg)
  {
    msg_.in_reverse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::Path msg_;
};

class Init_Path_points
{
public:
  explicit Init_Path_points(::marti_nav_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_in_reverse points(::marti_nav_msgs::msg::Path::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_Path_in_reverse(msg_);
  }

private:
  ::marti_nav_msgs::msg::Path msg_;
};

class Init_Path_header
{
public:
  Init_Path_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_points header(::marti_nav_msgs::msg::Path::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path_points(msg_);
  }

private:
  ::marti_nav_msgs::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::Path>()
{
  return marti_nav_msgs::msg::builder::Init_Path_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
