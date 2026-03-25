// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_can_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

#ifndef MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__TRAITS_HPP_
#define MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_can_msgs/msg/detail/can_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: msg_type
  {
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << ", ";
  }

  // member: data_length
  {
    out << "data_length: ";
    rosidl_generator_traits::value_to_yaml(msg.data_length, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CanFrame & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << "\n";
  }

  // member: data_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_length: ";
    rosidl_generator_traits::value_to_yaml(msg.data_length, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanFrame & msg, bool use_flow_style = false)
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

}  // namespace marti_can_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_can_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_can_msgs::msg::CanFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_can_msgs::msg::CanFrame & msg)
{
  return marti_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_can_msgs::msg::CanFrame>()
{
  return "marti_can_msgs::msg::CanFrame";
}

template<>
inline const char * name<marti_can_msgs::msg::CanFrame>()
{
  return "marti_can_msgs/msg/CanFrame";
}

template<>
struct has_fixed_size<marti_can_msgs::msg::CanFrame>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_can_msgs::msg::CanFrame>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_can_msgs::msg::CanFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__TRAITS_HPP_
