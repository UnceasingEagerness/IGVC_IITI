// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_visualization_msgs:msg/TexturedMarker.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__TRAITS_HPP_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_visualization_msgs/msg/detail/textured_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace marti_visualization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TexturedMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ns
  {
    out << "ns: ";
    rosidl_generator_traits::value_to_yaml(msg.ns, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    to_flow_style_yaml(msg.lifetime, out);
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: alpha
  {
    out << "alpha: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TexturedMarker & msg,
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

  // member: ns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ns: ";
    rosidl_generator_traits::value_to_yaml(msg.ns, out);
    out << "\n";
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

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime:\n";
    to_block_style_yaml(msg.lifetime, out, indentation + 2);
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: alpha
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TexturedMarker & msg, bool use_flow_style = false)
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

}  // namespace marti_visualization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_visualization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_visualization_msgs::msg::TexturedMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_visualization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_visualization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_visualization_msgs::msg::TexturedMarker & msg)
{
  return marti_visualization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_visualization_msgs::msg::TexturedMarker>()
{
  return "marti_visualization_msgs::msg::TexturedMarker";
}

template<>
inline const char * name<marti_visualization_msgs::msg::TexturedMarker>()
{
  return "marti_visualization_msgs/msg/TexturedMarker";
}

template<>
struct has_fixed_size<marti_visualization_msgs::msg::TexturedMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_visualization_msgs::msg::TexturedMarker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_visualization_msgs::msg::TexturedMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__TRAITS_HPP_
