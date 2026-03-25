// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_sensor_msgs:msg/Gyro.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__TRAITS_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_sensor_msgs/msg/detail/gyro__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_sensor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gyro & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: angular_rate
  {
    out << "angular_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gyro & msg,
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

  // member: angular_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gyro & msg, bool use_flow_style = false)
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
  const marti_sensor_msgs::msg::Gyro & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_sensor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_sensor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_sensor_msgs::msg::Gyro & msg)
{
  return marti_sensor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_sensor_msgs::msg::Gyro>()
{
  return "marti_sensor_msgs::msg::Gyro";
}

template<>
inline const char * name<marti_sensor_msgs::msg::Gyro>()
{
  return "marti_sensor_msgs/msg/Gyro";
}

template<>
struct has_fixed_size<marti_sensor_msgs::msg::Gyro>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_sensor_msgs::msg::Gyro>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_sensor_msgs::msg::Gyro>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__TRAITS_HPP_
