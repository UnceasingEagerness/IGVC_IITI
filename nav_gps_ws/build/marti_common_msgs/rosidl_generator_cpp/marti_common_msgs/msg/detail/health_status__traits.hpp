// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_common_msgs:msg/HealthStatus.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__TRAITS_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_common_msgs/msg/detail/health_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HealthStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HealthStatus & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HealthStatus & msg, bool use_flow_style = false)
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

}  // namespace marti_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_common_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_common_msgs::msg::HealthStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_common_msgs::msg::HealthStatus & msg)
{
  return marti_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_common_msgs::msg::HealthStatus>()
{
  return "marti_common_msgs::msg::HealthStatus";
}

template<>
inline const char * name<marti_common_msgs::msg::HealthStatus>()
{
  return "marti_common_msgs/msg/HealthStatus";
}

template<>
struct has_fixed_size<marti_common_msgs::msg::HealthStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_common_msgs::msg::HealthStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_common_msgs::msg::HealthStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__TRAITS_HPP_
