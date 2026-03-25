// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_common_msgs:msg/ServiceHeader.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__TRAITS_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_common_msgs/msg/detail/service_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace marti_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServiceHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: sequence
  {
    out << "sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence, out);
    out << ", ";
  }

  // member: sender
  {
    out << "sender: ";
    rosidl_generator_traits::value_to_yaml(msg.sender, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence, out);
    out << "\n";
  }

  // member: sender
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender: ";
    rosidl_generator_traits::value_to_yaml(msg.sender, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceHeader & msg, bool use_flow_style = false)
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
  const marti_common_msgs::msg::ServiceHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_common_msgs::msg::ServiceHeader & msg)
{
  return marti_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_common_msgs::msg::ServiceHeader>()
{
  return "marti_common_msgs::msg::ServiceHeader";
}

template<>
inline const char * name<marti_common_msgs::msg::ServiceHeader>()
{
  return "marti_common_msgs/msg/ServiceHeader";
}

template<>
struct has_fixed_size<marti_common_msgs::msg::ServiceHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_common_msgs::msg::ServiceHeader>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_common_msgs::msg::ServiceHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__TRAITS_HPP_
