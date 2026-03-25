// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_dbw_msgs:msg/TransmissionFeedback.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__TRAITS_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_dbw_msgs/msg/detail/transmission_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TransmissionFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_range
  {
    out << "current_range: ";
    rosidl_generator_traits::value_to_yaml(msg.current_range, out);
    out << ", ";
  }

  // member: stable
  {
    out << "stable: ";
    rosidl_generator_traits::value_to_yaml(msg.stable, out);
    out << ", ";
  }

  // member: reverse
  {
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << ", ";
  }

  // member: forward
  {
    out << "forward: ";
    rosidl_generator_traits::value_to_yaml(msg.forward, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TransmissionFeedback & msg,
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

  // member: current_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_range: ";
    rosidl_generator_traits::value_to_yaml(msg.current_range, out);
    out << "\n";
  }

  // member: stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stable: ";
    rosidl_generator_traits::value_to_yaml(msg.stable, out);
    out << "\n";
  }

  // member: reverse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << "\n";
  }

  // member: forward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward: ";
    rosidl_generator_traits::value_to_yaml(msg.forward, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TransmissionFeedback & msg, bool use_flow_style = false)
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
  const marti_dbw_msgs::msg::TransmissionFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_dbw_msgs::msg::TransmissionFeedback & msg)
{
  return marti_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_dbw_msgs::msg::TransmissionFeedback>()
{
  return "marti_dbw_msgs::msg::TransmissionFeedback";
}

template<>
inline const char * name<marti_dbw_msgs::msg::TransmissionFeedback>()
{
  return "marti_dbw_msgs/msg/TransmissionFeedback";
}

template<>
struct has_fixed_size<marti_dbw_msgs::msg::TransmissionFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_dbw_msgs::msg::TransmissionFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_dbw_msgs::msg::TransmissionFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__TRAITS_HPP_
