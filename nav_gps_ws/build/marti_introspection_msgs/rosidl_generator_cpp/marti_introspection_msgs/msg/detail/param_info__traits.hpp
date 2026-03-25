// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_introspection_msgs:msg/ParamInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__TRAITS_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_introspection_msgs/msg/detail/param_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marti_introspection_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParamInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: resolved_name
  {
    out << "resolved_name: ";
    rosidl_generator_traits::value_to_yaml(msg.resolved_name, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: group
  {
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: dynamic
  {
    out << "dynamic: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic, out);
    out << ", ";
  }

  // member: default_int
  {
    out << "default_int: ";
    rosidl_generator_traits::value_to_yaml(msg.default_int, out);
    out << ", ";
  }

  // member: default_float
  {
    out << "default_float: ";
    rosidl_generator_traits::value_to_yaml(msg.default_float, out);
    out << ", ";
  }

  // member: default_double
  {
    out << "default_double: ";
    rosidl_generator_traits::value_to_yaml(msg.default_double, out);
    out << ", ";
  }

  // member: default_string
  {
    out << "default_string: ";
    rosidl_generator_traits::value_to_yaml(msg.default_string, out);
    out << ", ";
  }

  // member: default_bool
  {
    out << "default_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.default_bool, out);
    out << ", ";
  }

  // member: max_value
  {
    out << "max_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value, out);
    out << ", ";
  }

  // member: min_value
  {
    out << "min_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParamInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: resolved_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolved_name: ";
    rosidl_generator_traits::value_to_yaml(msg.resolved_name, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: dynamic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic, out);
    out << "\n";
  }

  // member: default_int
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_int: ";
    rosidl_generator_traits::value_to_yaml(msg.default_int, out);
    out << "\n";
  }

  // member: default_float
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_float: ";
    rosidl_generator_traits::value_to_yaml(msg.default_float, out);
    out << "\n";
  }

  // member: default_double
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_double: ";
    rosidl_generator_traits::value_to_yaml(msg.default_double, out);
    out << "\n";
  }

  // member: default_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_string: ";
    rosidl_generator_traits::value_to_yaml(msg.default_string, out);
    out << "\n";
  }

  // member: default_bool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.default_bool, out);
    out << "\n";
  }

  // member: max_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value, out);
    out << "\n";
  }

  // member: min_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParamInfo & msg, bool use_flow_style = false)
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

}  // namespace marti_introspection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_introspection_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_introspection_msgs::msg::ParamInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_introspection_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_introspection_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_introspection_msgs::msg::ParamInfo & msg)
{
  return marti_introspection_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_introspection_msgs::msg::ParamInfo>()
{
  return "marti_introspection_msgs::msg::ParamInfo";
}

template<>
inline const char * name<marti_introspection_msgs::msg::ParamInfo>()
{
  return "marti_introspection_msgs/msg/ParamInfo";
}

template<>
struct has_fixed_size<marti_introspection_msgs::msg::ParamInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_introspection_msgs::msg::ParamInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_introspection_msgs::msg::ParamInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__TRAITS_HPP_
