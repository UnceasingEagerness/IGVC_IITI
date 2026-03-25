// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:msg/RouteOffset.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__TRAITS_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/msg/detail/route_offset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'relative_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'route_position'
#include "marti_nav_msgs/msg/detail/route_position__traits.hpp"

namespace marti_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteOffset & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: relative_pose
  {
    out << "relative_pose: ";
    to_flow_style_yaml(msg.relative_pose, out);
    out << ", ";
  }

  // member: route_position
  {
    out << "route_position: ";
    to_flow_style_yaml(msg.route_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RouteOffset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: relative_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_pose:\n";
    to_block_style_yaml(msg.relative_pose, out, indentation + 2);
  }

  // member: route_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_position:\n";
    to_block_style_yaml(msg.route_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RouteOffset & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace marti_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_nav_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_nav_msgs::msg::RouteOffset & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::msg::RouteOffset & msg)
{
  return marti_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::msg::RouteOffset>()
{
  return "marti_nav_msgs::msg::RouteOffset";
}

template<>
inline const char * name<marti_nav_msgs::msg::RouteOffset>()
{
  return "marti_nav_msgs/msg/RouteOffset";
}

template<>
struct has_fixed_size<marti_nav_msgs::msg::RouteOffset>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<marti_nav_msgs::msg::RoutePosition>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_nav_msgs::msg::RouteOffset>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<marti_nav_msgs::msg::RoutePosition>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_nav_msgs::msg::RouteOffset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__TRAITS_HPP_
