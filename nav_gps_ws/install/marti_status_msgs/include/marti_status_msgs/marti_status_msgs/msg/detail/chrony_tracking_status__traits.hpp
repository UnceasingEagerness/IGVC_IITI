// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_status_msgs:msg/ChronyTrackingStatus.idl
// generated code does not contain a copyright notice

#ifndef MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__TRAITS_HPP_
#define MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_status_msgs/msg/detail/chrony_tracking_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_status_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChronyTrackingStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: reference
  {
    out << "reference: ";
    rosidl_generator_traits::value_to_yaml(msg.reference, out);
    out << ", ";
  }

  // member: stratum
  {
    out << "stratum: ";
    rosidl_generator_traits::value_to_yaml(msg.stratum, out);
    out << ", ";
  }

  // member: system_time_offset
  {
    out << "system_time_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.system_time_offset, out);
    out << ", ";
  }

  // member: last_offset
  {
    out << "last_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.last_offset, out);
    out << ", ";
  }

  // member: rms_offset
  {
    out << "rms_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.rms_offset, out);
    out << ", ";
  }

  // member: frequency_offset
  {
    out << "frequency_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency_offset, out);
    out << ", ";
  }

  // member: residual_frequency
  {
    out << "residual_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.residual_frequency, out);
    out << ", ";
  }

  // member: skew
  {
    out << "skew: ";
    rosidl_generator_traits::value_to_yaml(msg.skew, out);
    out << ", ";
  }

  // member: root_delay
  {
    out << "root_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.root_delay, out);
    out << ", ";
  }

  // member: root_dispersion
  {
    out << "root_dispersion: ";
    rosidl_generator_traits::value_to_yaml(msg.root_dispersion, out);
    out << ", ";
  }

  // member: update_interval
  {
    out << "update_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.update_interval, out);
    out << ", ";
  }

  // member: leap_status
  {
    out << "leap_status: ";
    rosidl_generator_traits::value_to_yaml(msg.leap_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChronyTrackingStatus & msg,
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

  // member: reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference: ";
    rosidl_generator_traits::value_to_yaml(msg.reference, out);
    out << "\n";
  }

  // member: stratum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stratum: ";
    rosidl_generator_traits::value_to_yaml(msg.stratum, out);
    out << "\n";
  }

  // member: system_time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_time_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.system_time_offset, out);
    out << "\n";
  }

  // member: last_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.last_offset, out);
    out << "\n";
  }

  // member: rms_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rms_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.rms_offset, out);
    out << "\n";
  }

  // member: frequency_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency_offset, out);
    out << "\n";
  }

  // member: residual_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "residual_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.residual_frequency, out);
    out << "\n";
  }

  // member: skew
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skew: ";
    rosidl_generator_traits::value_to_yaml(msg.skew, out);
    out << "\n";
  }

  // member: root_delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.root_delay, out);
    out << "\n";
  }

  // member: root_dispersion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_dispersion: ";
    rosidl_generator_traits::value_to_yaml(msg.root_dispersion, out);
    out << "\n";
  }

  // member: update_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.update_interval, out);
    out << "\n";
  }

  // member: leap_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leap_status: ";
    rosidl_generator_traits::value_to_yaml(msg.leap_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChronyTrackingStatus & msg, bool use_flow_style = false)
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

}  // namespace marti_status_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_status_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_status_msgs::msg::ChronyTrackingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_status_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_status_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_status_msgs::msg::ChronyTrackingStatus & msg)
{
  return marti_status_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_status_msgs::msg::ChronyTrackingStatus>()
{
  return "marti_status_msgs::msg::ChronyTrackingStatus";
}

template<>
inline const char * name<marti_status_msgs::msg::ChronyTrackingStatus>()
{
  return "marti_status_msgs/msg/ChronyTrackingStatus";
}

template<>
struct has_fixed_size<marti_status_msgs::msg::ChronyTrackingStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_status_msgs::msg::ChronyTrackingStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_status_msgs::msg::ChronyTrackingStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__TRAITS_HPP_
