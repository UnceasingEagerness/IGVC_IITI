// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_sensor_msgs:msg/DifferentialMeasurement.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__TRAITS_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_sensor_msgs/msg/detail/differential_measurement__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace marti_sensor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DifferentialMeasurement & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: base_frame_id
  {
    out << "base_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.base_frame_id, out);
    out << ", ";
  }

  // member: baseline_length
  {
    out << "baseline_length: ";
    rosidl_generator_traits::value_to_yaml(msg.baseline_length, out);
    out << ", ";
  }

  // member: baseline_length_variance
  {
    out << "baseline_length_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.baseline_length_variance, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: heading_variance
  {
    out << "heading_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_variance, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: pitch_variance
  {
    out << "pitch_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_variance, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: roll_variance
  {
    out << "roll_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_variance, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: position_covariance
  {
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []";
    } else {
      out << "position_covariance: [";
      size_t pending_items = msg.position_covariance.size();
      for (auto item : msg.position_covariance) {
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
  const DifferentialMeasurement & msg,
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

  // member: base_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.base_frame_id, out);
    out << "\n";
  }

  // member: baseline_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baseline_length: ";
    rosidl_generator_traits::value_to_yaml(msg.baseline_length, out);
    out << "\n";
  }

  // member: baseline_length_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baseline_length_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.baseline_length_variance, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: heading_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_variance, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: pitch_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_variance, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: roll_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_variance, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []\n";
    } else {
      out << "position_covariance:\n";
      for (auto item : msg.position_covariance) {
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

inline std::string to_yaml(const DifferentialMeasurement & msg, bool use_flow_style = false)
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

}  // namespace marti_sensor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_sensor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_sensor_msgs::msg::DifferentialMeasurement & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_sensor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_sensor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_sensor_msgs::msg::DifferentialMeasurement & msg)
{
  return marti_sensor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_sensor_msgs::msg::DifferentialMeasurement>()
{
  return "marti_sensor_msgs::msg::DifferentialMeasurement";
}

template<>
inline const char * name<marti_sensor_msgs::msg::DifferentialMeasurement>()
{
  return "marti_sensor_msgs/msg/DifferentialMeasurement";
}

template<>
struct has_fixed_size<marti_sensor_msgs::msg::DifferentialMeasurement>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_sensor_msgs::msg::DifferentialMeasurement>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_sensor_msgs::msg::DifferentialMeasurement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__TRAITS_HPP_
