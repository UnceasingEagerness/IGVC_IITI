// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_common_msgs:msg/KeyValueArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__TRAITS_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_common_msgs/msg/detail/key_value_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'items'
#include "marti_common_msgs/msg/detail/key_value__traits.hpp"

namespace marti_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyValueArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: items
  {
    if (msg.items.size() == 0) {
      out << "items: []";
    } else {
      out << "items: [";
      size_t pending_items = msg.items.size();
      for (auto item : msg.items) {
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
  const KeyValueArray & msg,
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

  // member: items
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.items.size() == 0) {
      out << "items: []\n";
    } else {
      out << "items:\n";
      for (auto item : msg.items) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyValueArray & msg, bool use_flow_style = false)
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
  const marti_common_msgs::msg::KeyValueArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_common_msgs::msg::KeyValueArray & msg)
{
  return marti_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_common_msgs::msg::KeyValueArray>()
{
  return "marti_common_msgs::msg::KeyValueArray";
}

template<>
inline const char * name<marti_common_msgs::msg::KeyValueArray>()
{
  return "marti_common_msgs/msg/KeyValueArray";
}

template<>
struct has_fixed_size<marti_common_msgs::msg::KeyValueArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_common_msgs::msg::KeyValueArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_common_msgs::msg::KeyValueArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__TRAITS_HPP_
