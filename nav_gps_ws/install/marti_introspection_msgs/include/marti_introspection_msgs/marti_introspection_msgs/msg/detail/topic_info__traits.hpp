// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_introspection_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__TRAITS_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_introspection_msgs/msg/detail/topic_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marti_introspection_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TopicInfo & msg,
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

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: advertised
  {
    out << "advertised: ";
    rosidl_generator_traits::value_to_yaml(msg.advertised, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TopicInfo & msg,
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

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: advertised
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "advertised: ";
    rosidl_generator_traits::value_to_yaml(msg.advertised, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TopicInfo & msg, bool use_flow_style = false)
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
  const marti_introspection_msgs::msg::TopicInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_introspection_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_introspection_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_introspection_msgs::msg::TopicInfo & msg)
{
  return marti_introspection_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_introspection_msgs::msg::TopicInfo>()
{
  return "marti_introspection_msgs::msg::TopicInfo";
}

template<>
inline const char * name<marti_introspection_msgs::msg::TopicInfo>()
{
  return "marti_introspection_msgs/msg/TopicInfo";
}

template<>
struct has_fixed_size<marti_introspection_msgs::msg::TopicInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_introspection_msgs::msg::TopicInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_introspection_msgs::msg::TopicInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__TRAITS_HPP_
