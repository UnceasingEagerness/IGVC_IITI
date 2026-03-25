// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:msg/RoutePoint.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__TRAITS_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/msg/detail/route_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'properties'
#include "marti_common_msgs/msg/detail/key_value__traits.hpp"

namespace marti_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoutePoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: properties
  {
    if (msg.properties.size() == 0) {
      out << "properties: []";
    } else {
      out << "properties: [";
      size_t pending_items = msg.properties.size();
      for (auto item : msg.properties) {
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
  const RoutePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
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

  // member: properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.properties.size() == 0) {
      out << "properties: []\n";
    } else {
      out << "properties:\n";
      for (auto item : msg.properties) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoutePoint & msg, bool use_flow_style = false)
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
  const marti_nav_msgs::msg::RoutePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::msg::RoutePoint & msg)
{
  return marti_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::msg::RoutePoint>()
{
  return "marti_nav_msgs::msg::RoutePoint";
}

template<>
inline const char * name<marti_nav_msgs::msg::RoutePoint>()
{
  return "marti_nav_msgs/msg/RoutePoint";
}

template<>
struct has_fixed_size<marti_nav_msgs::msg::RoutePoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::msg::RoutePoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::msg::RoutePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__TRAITS_HPP_
