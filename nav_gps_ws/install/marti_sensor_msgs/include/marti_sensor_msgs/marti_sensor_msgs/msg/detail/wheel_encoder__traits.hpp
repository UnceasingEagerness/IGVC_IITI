// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_sensor_msgs:msg/WheelEncoder.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__TRAITS_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_sensor_msgs/msg/detail/wheel_encoder__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marti_sensor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelEncoder & msg,
  std::ostream & out)
{
  out << "{";
  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: directional
  {
    out << "directional: ";
    rosidl_generator_traits::value_to_yaml(msg.directional, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelEncoder & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: directional
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directional: ";
    rosidl_generator_traits::value_to_yaml(msg.directional, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelEncoder & msg, bool use_flow_style = false)
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

}  // namespace marti_sensor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_sensor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_sensor_msgs::msg::WheelEncoder & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_sensor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_sensor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_sensor_msgs::msg::WheelEncoder & msg)
{
  return marti_sensor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_sensor_msgs::msg::WheelEncoder>()
{
  return "marti_sensor_msgs::msg::WheelEncoder";
}

template<>
inline const char * name<marti_sensor_msgs::msg::WheelEncoder>()
{
  return "marti_sensor_msgs/msg/WheelEncoder";
}

template<>
struct has_fixed_size<marti_sensor_msgs::msg::WheelEncoder>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<marti_sensor_msgs::msg::WheelEncoder>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<marti_sensor_msgs::msg::WheelEncoder>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__TRAITS_HPP_
