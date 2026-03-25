// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:msg/RouteSpeed.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED__TRAITS_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/msg/detail/route_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RouteSpeed & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RouteSpeed & msg, bool use_flow_style = false)
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
  const marti_nav_msgs::msg::RouteSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::msg::RouteSpeed & msg)
{
  return marti_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::msg::RouteSpeed>()
{
  return "marti_nav_msgs::msg::RouteSpeed";
}

template<>
inline const char * name<marti_nav_msgs::msg::RouteSpeed>()
{
  return "marti_nav_msgs/msg/RouteSpeed";
}

template<>
struct has_fixed_size<marti_nav_msgs::msg::RouteSpeed>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::msg::RouteSpeed>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::msg::RouteSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED__TRAITS_HPP_
