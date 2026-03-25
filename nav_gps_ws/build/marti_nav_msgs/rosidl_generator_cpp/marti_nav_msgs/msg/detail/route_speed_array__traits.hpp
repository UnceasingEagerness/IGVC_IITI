// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:msg/RouteSpeedArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__TRAITS_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/msg/detail/route_speed_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'speeds'
#include "marti_nav_msgs/msg/detail/route_speed__traits.hpp"

namespace marti_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteSpeedArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: speeds
  {
    if (msg.speeds.size() == 0) {
      out << "speeds: []";
    } else {
      out << "speeds: [";
      size_t pending_items = msg.speeds.size();
      for (auto item : msg.speeds) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RouteSpeedArray & msg,
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

  // member: speeds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speeds.size() == 0) {
      out << "speeds: []\n";
    } else {
      out << "speeds:\n";
      for (auto item : msg.speeds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RouteSpeedArray & msg, bool use_flow_style = false)
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
  const marti_nav_msgs::msg::RouteSpeedArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::msg::RouteSpeedArray & msg)
{
  return marti_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::msg::RouteSpeedArray>()
{
  return "marti_nav_msgs::msg::RouteSpeedArray";
}

template<>
inline const char * name<marti_nav_msgs::msg::RouteSpeedArray>()
{
  return "marti_nav_msgs/msg/RouteSpeedArray";
}

template<>
struct has_fixed_size<marti_nav_msgs::msg::RouteSpeedArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::msg::RouteSpeedArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::msg::RouteSpeedArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__TRAITS_HPP_
