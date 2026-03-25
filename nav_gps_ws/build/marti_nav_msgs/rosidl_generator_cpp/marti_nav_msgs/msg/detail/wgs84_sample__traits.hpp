// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:msg/Wgs84Sample.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__TRAITS_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/msg/detail/wgs84_sample__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'odom'
// Member 'wgs84'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace marti_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Wgs84Sample & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: odom
  {
    out << "odom: ";
    to_flow_style_yaml(msg.odom, out);
    out << ", ";
  }

  // member: wgs84
  {
    out << "wgs84: ";
    to_flow_style_yaml(msg.wgs84, out);
    out << ", ";
  }

  // member: wgs84_covariance
  {
    if (msg.wgs84_covariance.size() == 0) {
      out << "wgs84_covariance: []";
    } else {
      out << "wgs84_covariance: [";
      size_t pending_items = msg.wgs84_covariance.size();
      for (auto item : msg.wgs84_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Wgs84Sample & msg,
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

  // member: odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom:\n";
    to_block_style_yaml(msg.odom, out, indentation + 2);
  }

  // member: wgs84
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wgs84:\n";
    to_block_style_yaml(msg.wgs84, out, indentation + 2);
  }

  // member: wgs84_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wgs84_covariance.size() == 0) {
      out << "wgs84_covariance: []\n";
    } else {
      out << "wgs84_covariance:\n";
      for (auto item : msg.wgs84_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Wgs84Sample & msg, bool use_flow_style = false)
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
  const marti_nav_msgs::msg::Wgs84Sample & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::msg::Wgs84Sample & msg)
{
  return marti_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::msg::Wgs84Sample>()
{
  return "marti_nav_msgs::msg::Wgs84Sample";
}

template<>
inline const char * name<marti_nav_msgs::msg::Wgs84Sample>()
{
  return "marti_nav_msgs/msg/Wgs84Sample";
}

template<>
struct has_fixed_size<marti_nav_msgs::msg::Wgs84Sample>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_nav_msgs::msg::Wgs84Sample>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_nav_msgs::msg::Wgs84Sample>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__TRAITS_HPP_
