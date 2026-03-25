// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_sensor_msgs:msg/WheelEncoderSet.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__TRAITS_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_sensor_msgs/msg/detail/wheel_encoder_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'encoders'
#include "marti_sensor_msgs/msg/detail/wheel_encoder__traits.hpp"

namespace marti_sensor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelEncoderSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: encoders
  {
    if (msg.encoders.size() == 0) {
      out << "encoders: []";
    } else {
      out << "encoders: [";
      size_t pending_items = msg.encoders.size();
      for (auto item : msg.encoders) {
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
  const WheelEncoderSet & msg,
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

  // member: encoders
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.encoders.size() == 0) {
      out << "encoders: []\n";
    } else {
      out << "encoders:\n";
      for (auto item : msg.encoders) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelEncoderSet & msg, bool use_flow_style = false)
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
  const marti_sensor_msgs::msg::WheelEncoderSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_sensor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_sensor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_sensor_msgs::msg::WheelEncoderSet & msg)
{
  return marti_sensor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_sensor_msgs::msg::WheelEncoderSet>()
{
  return "marti_sensor_msgs::msg::WheelEncoderSet";
}

template<>
inline const char * name<marti_sensor_msgs::msg::WheelEncoderSet>()
{
  return "marti_sensor_msgs/msg/WheelEncoderSet";
}

template<>
struct has_fixed_size<marti_sensor_msgs::msg::WheelEncoderSet>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_sensor_msgs::msg::WheelEncoderSet>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_sensor_msgs::msg::WheelEncoderSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__TRAITS_HPP_
