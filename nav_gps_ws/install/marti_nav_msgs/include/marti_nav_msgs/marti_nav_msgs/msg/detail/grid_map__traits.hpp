// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:msg/GridMap.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__TRAITS_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/msg/detail/grid_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'top_left'
// Member 'top_right'
// Member 'bottom_right'
// Member 'bottom_left'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'map_data'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace marti_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GridMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: top_left
  {
    out << "top_left: ";
    to_flow_style_yaml(msg.top_left, out);
    out << ", ";
  }

  // member: top_right
  {
    out << "top_right: ";
    to_flow_style_yaml(msg.top_right, out);
    out << ", ";
  }

  // member: bottom_right
  {
    out << "bottom_right: ";
    to_flow_style_yaml(msg.bottom_right, out);
    out << ", ";
  }

  // member: bottom_left
  {
    out << "bottom_left: ";
    to_flow_style_yaml(msg.bottom_left, out);
    out << ", ";
  }

  // member: map_names
  {
    if (msg.map_names.size() == 0) {
      out << "map_names: []";
    } else {
      out << "map_names: [";
      size_t pending_items = msg.map_names.size();
      for (auto item : msg.map_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: map_data
  {
    if (msg.map_data.size() == 0) {
      out << "map_data: []";
    } else {
      out << "map_data: [";
      size_t pending_items = msg.map_data.size();
      for (auto item : msg.map_data) {
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
  const GridMap & msg,
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

  // member: top_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_left:\n";
    to_block_style_yaml(msg.top_left, out, indentation + 2);
  }

  // member: top_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_right:\n";
    to_block_style_yaml(msg.top_right, out, indentation + 2);
  }

  // member: bottom_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_right:\n";
    to_block_style_yaml(msg.bottom_right, out, indentation + 2);
  }

  // member: bottom_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_left:\n";
    to_block_style_yaml(msg.bottom_left, out, indentation + 2);
  }

  // member: map_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.map_names.size() == 0) {
      out << "map_names: []\n";
    } else {
      out << "map_names:\n";
      for (auto item : msg.map_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: map_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.map_data.size() == 0) {
      out << "map_data: []\n";
    } else {
      out << "map_data:\n";
      for (auto item : msg.map_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GridMap & msg, bool use_flow_style = false)
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
  const marti_nav_msgs::msg::GridMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::msg::GridMap & msg)
{
  return marti_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::msg::GridMap>()
{
  return "marti_nav_msgs::msg::GridMap";
}

template<>
inline const char * name<marti_nav_msgs::msg::GridMap>()
{
  return "marti_nav_msgs/msg/GridMap";
}

template<>
struct has_fixed_size<marti_nav_msgs::msg::GridMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::msg::GridMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::msg::GridMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__TRAITS_HPP_
