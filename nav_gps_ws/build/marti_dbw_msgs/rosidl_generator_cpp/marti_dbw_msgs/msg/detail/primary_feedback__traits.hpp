// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__TRAITS_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_dbw_msgs/msg/detail/primary_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PrimaryFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: present
  {
    out << "present: ";
    rosidl_generator_traits::value_to_yaml(msg.present, out);
    out << ", ";
  }

  // member: robotic_mode
  {
    out << "robotic_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.robotic_mode, out);
    out << ", ";
  }

  // member: steering_command
  {
    out << "steering_command: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_command, out);
    out << ", ";
  }

  // member: steering_measure
  {
    out << "steering_measure: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_measure, out);
    out << ", ";
  }

  // member: throttle_command
  {
    out << "throttle_command: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_command, out);
    out << ", ";
  }

  // member: throttle_measure
  {
    out << "throttle_measure: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_measure, out);
    out << ", ";
  }

  // member: brake_command
  {
    out << "brake_command: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_command, out);
    out << ", ";
  }

  // member: brake_measure
  {
    out << "brake_measure: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_measure, out);
    out << ", ";
  }

  // member: estop_command
  {
    out << "estop_command: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_command, out);
    out << ", ";
  }

  // member: estop_measure
  {
    out << "estop_measure: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_measure, out);
    out << ", ";
  }

  // member: error_steering
  {
    out << "error_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.error_steering, out);
    out << ", ";
  }

  // member: error_throttle
  {
    out << "error_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.error_throttle, out);
    out << ", ";
  }

  // member: error_brake
  {
    out << "error_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.error_brake, out);
    out << ", ";
  }

  // member: error_other
  {
    out << "error_other: ";
    rosidl_generator_traits::value_to_yaml(msg.error_other, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimaryFeedback & msg,
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

  // member: present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present: ";
    rosidl_generator_traits::value_to_yaml(msg.present, out);
    out << "\n";
  }

  // member: robotic_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robotic_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.robotic_mode, out);
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

  // member: steering_measure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_measure: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_measure, out);
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

  // member: throttle_measure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_measure: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_measure, out);
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

  // member: brake_measure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_measure: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_measure, out);
    out << "\n";
  }

  // member: estop_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_command: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_command, out);
    out << "\n";
  }

  // member: estop_measure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_measure: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_measure, out);
    out << "\n";
  }

  // member: error_steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.error_steering, out);
    out << "\n";
  }

  // member: error_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.error_throttle, out);
    out << "\n";
  }

  // member: error_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.error_brake, out);
    out << "\n";
  }

  // member: error_other
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_other: ";
    rosidl_generator_traits::value_to_yaml(msg.error_other, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimaryFeedback & msg, bool use_flow_style = false)
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
  const marti_dbw_msgs::msg::PrimaryFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_dbw_msgs::msg::PrimaryFeedback & msg)
{
  return marti_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_dbw_msgs::msg::PrimaryFeedback>()
{
  return "marti_dbw_msgs::msg::PrimaryFeedback";
}

template<>
inline const char * name<marti_dbw_msgs::msg::PrimaryFeedback>()
{
  return "marti_dbw_msgs/msg/PrimaryFeedback";
}

template<>
struct has_fixed_size<marti_dbw_msgs::msg::PrimaryFeedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_dbw_msgs::msg::PrimaryFeedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_dbw_msgs::msg::PrimaryFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__TRAITS_HPP_
