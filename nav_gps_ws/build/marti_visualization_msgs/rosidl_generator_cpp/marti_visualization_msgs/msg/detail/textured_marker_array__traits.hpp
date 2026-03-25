// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__TRAITS_HPP_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_visualization_msgs/msg/detail/textured_marker_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'markers'
#include "marti_visualization_msgs/msg/detail/textured_marker__traits.hpp"

namespace marti_visualization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TexturedMarkerArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: markers
  {
    if (msg.markers.size() == 0) {
      out << "markers: []";
    } else {
      out << "markers: [";
      size_t pending_items = msg.markers.size();
      for (auto item : msg.markers) {
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
  const TexturedMarkerArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TexturedMarkerArray & msg, bool use_flow_style = false)
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
  const marti_visualization_msgs::msg::TexturedMarkerArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_visualization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_visualization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_visualization_msgs::msg::TexturedMarkerArray & msg)
{
  return marti_visualization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_visualization_msgs::msg::TexturedMarkerArray>()
{
  return "marti_visualization_msgs::msg::TexturedMarkerArray";
}

template<>
inline const char * name<marti_visualization_msgs::msg::TexturedMarkerArray>()
{
  return "marti_visualization_msgs/msg/TexturedMarkerArray";
}

template<>
struct has_fixed_size<marti_visualization_msgs::msg::TexturedMarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_visualization_msgs::msg::TexturedMarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_visualization_msgs::msg::TexturedMarkerArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__TRAITS_HPP_
