// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_common_msgs:msg/Matrix3x3Stamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__TRAITS_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_common_msgs/msg/detail/matrix3x3_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Matrix3x3Stamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: matrix
  {
    if (msg.matrix.size() == 0) {
      out << "matrix: []";
    } else {
      out << "matrix: [";
      size_t pending_items = msg.matrix.size();
      for (auto item : msg.matrix) {
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
  const Matrix3x3Stamped & msg,
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

  // member: matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.matrix.size() == 0) {
      out << "matrix: []\n";
    } else {
      out << "matrix:\n";
      for (auto item : msg.matrix) {
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

inline std::string to_yaml(const Matrix3x3Stamped & msg, bool use_flow_style = false)
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
  const marti_common_msgs::msg::Matrix3x3Stamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_common_msgs::msg::Matrix3x3Stamped & msg)
{
  return marti_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_common_msgs::msg::Matrix3x3Stamped>()
{
  return "marti_common_msgs::msg::Matrix3x3Stamped";
}

template<>
inline const char * name<marti_common_msgs::msg::Matrix3x3Stamped>()
{
  return "marti_common_msgs/msg/Matrix3x3Stamped";
}

template<>
struct has_fixed_size<marti_common_msgs::msg::Matrix3x3Stamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_common_msgs::msg::Matrix3x3Stamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_common_msgs::msg::Matrix3x3Stamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__TRAITS_HPP_
