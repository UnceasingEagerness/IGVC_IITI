// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/GridMap.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/grid_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_GridMap_map_data
{
public:
  explicit Init_GridMap_map_data(::marti_nav_msgs::msg::GridMap & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::GridMap map_data(::marti_nav_msgs::msg::GridMap::_map_data_type arg)
  {
    msg_.map_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::GridMap msg_;
};

class Init_GridMap_map_names
{
public:
  explicit Init_GridMap_map_names(::marti_nav_msgs::msg::GridMap & msg)
  : msg_(msg)
  {}
  Init_GridMap_map_data map_names(::marti_nav_msgs::msg::GridMap::_map_names_type arg)
  {
    msg_.map_names = std::move(arg);
    return Init_GridMap_map_data(msg_);
  }

private:
  ::marti_nav_msgs::msg::GridMap msg_;
};

class Init_GridMap_bottom_left
{
public:
  explicit Init_GridMap_bottom_left(::marti_nav_msgs::msg::GridMap & msg)
  : msg_(msg)
  {}
  Init_GridMap_map_names bottom_left(::marti_nav_msgs::msg::GridMap::_bottom_left_type arg)
  {
    msg_.bottom_left = std::move(arg);
    return Init_GridMap_map_names(msg_);
  }

private:
  ::marti_nav_msgs::msg::GridMap msg_;
};

class Init_GridMap_bottom_right
{
public:
  explicit Init_GridMap_bottom_right(::marti_nav_msgs::msg::GridMap & msg)
  : msg_(msg)
  {}
  Init_GridMap_bottom_left bottom_right(::marti_nav_msgs::msg::GridMap::_bottom_right_type arg)
  {
    msg_.bottom_right = std::move(arg);
    return Init_GridMap_bottom_left(msg_);
  }

private:
  ::marti_nav_msgs::msg::GridMap msg_;
};

class Init_GridMap_top_right
{
public:
  explicit Init_GridMap_top_right(::marti_nav_msgs::msg::GridMap & msg)
  : msg_(msg)
  {}
  Init_GridMap_bottom_right top_right(::marti_nav_msgs::msg::GridMap::_top_right_type arg)
  {
    msg_.top_right = std::move(arg);
    return Init_GridMap_bottom_right(msg_);
  }

private:
  ::marti_nav_msgs::msg::GridMap msg_;
};

class Init_GridMap_top_left
{
public:
  explicit Init_GridMap_top_left(::marti_nav_msgs::msg::GridMap & msg)
  : msg_(msg)
  {}
  Init_GridMap_top_right top_left(::marti_nav_msgs::msg::GridMap::_top_left_type arg)
  {
    msg_.top_left = std::move(arg);
    return Init_GridMap_top_right(msg_);
  }

private:
  ::marti_nav_msgs::msg::GridMap msg_;
};

class Init_GridMap_header
{
public:
  Init_GridMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GridMap_top_left header(::marti_nav_msgs::msg::GridMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GridMap_top_left(msg_);
  }

private:
  ::marti_nav_msgs::msg::GridMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::GridMap>()
{
  return marti_nav_msgs::msg::builder::Init_GridMap_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__BUILDER_HPP_
