// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_dbw_msgs:msg/PrimaryControl.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__TRAITS_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_dbw_msgs/msg/detail/primary_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PrimaryControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: estop
  {
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
    out << ", ";
  }

  // member: steering_command
  {
    out << "steering_command: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_command, out);
    out << ", ";
  }

  // member: throttle_command
  {
    out << "throttle_command: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_command, out);
    out << ", ";
  }

  // member: brake_command
  {
    out << "brake_command: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimaryControl & msg,
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

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
    out << "\n";
  }

  // member: steering_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_command: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_command, out);
    out << "\n";
  }

  // member: throttle_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_command: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_command, out);
    out << "\n";
  }

  // member: brake_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_command: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimaryControl & msg, bool use_flow_style = false)
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

}  // namespace marti_dbw_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_dbw_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_dbw_msgs::msg::PrimaryControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_dbw_msgs::msg::PrimaryControl & msg)
{
  return marti_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_dbw_msgs::msg::PrimaryControl>()
{
  return "marti_dbw_msgs::msg::PrimaryControl";
}

template<>
inline const char * name<marti_dbw_msgs::msg::PrimaryControl>()
{
  return "marti_dbw_msgs/msg/PrimaryControl";
}

template<>
struct has_fixed_size<marti_dbw_msgs::msg::PrimaryControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_dbw_msgs::msg::PrimaryControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_dbw_msgs::msg::PrimaryControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__TRAITS_HPP_
