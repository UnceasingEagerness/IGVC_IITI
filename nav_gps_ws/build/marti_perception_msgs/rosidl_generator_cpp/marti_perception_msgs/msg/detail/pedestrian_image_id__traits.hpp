// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_perception_msgs:msg/PedestrianImageID.idl
// generated code does not contain a copyright notice

#ifndef MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__TRAITS_HPP_
#define MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_perception_msgs/msg/detail/pedestrian_image_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PedestrianImageID & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pixel_x
  {
    out << "pixel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_x, out);
    out << ", ";
  }

  // member: pixel_y
  {
    out << "pixel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_y, out);
    out << ", ";
  }

  // member: image_width
  {
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << ", ";
  }

  // member: image_height
  {
    out << "image_height: ";
    rosidl_generator_traits::value_to_yaml(msg.image_height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PedestrianImageID & msg,
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

  // member: pixel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_x, out);
    out << "\n";
  }

  // member: pixel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_y, out);
    out << "\n";
  }

  // member: image_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << "\n";
  }

  // member: image_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_height: ";
    rosidl_generator_traits::value_to_yaml(msg.image_height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PedestrianImageID & msg, bool use_flow_style = false)
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

}  // namespace marti_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_perception_msgs::msg::PedestrianImageID & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_perception_msgs::msg::PedestrianImageID & msg)
{
  return marti_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_perception_msgs::msg::PedestrianImageID>()
{
  return "marti_perception_msgs::msg::PedestrianImageID";
}

template<>
inline const char * name<marti_perception_msgs::msg::PedestrianImageID>()
{
  return "marti_perception_msgs/msg/PedestrianImageID";
}

template<>
struct has_fixed_size<marti_perception_msgs::msg::PedestrianImageID>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_perception_msgs::msg::PedestrianImageID>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_perception_msgs::msg::PedestrianImageID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__TRAITS_HPP_
