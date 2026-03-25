// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/msg/detail/tracked_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'age_duration'
// Member 'prediction_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace marti_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedObject & msg,
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

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: linear_acceleration_covariance
  {
    if (msg.linear_acceleration_covariance.size() == 0) {
      out << "linear_acceleration_covariance: []";
    } else {
      out << "linear_acceleration_covariance: [";
      size_t pending_items = msg.linear_acceleration_covariance.size();
      for (auto item : msg.linear_acceleration_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: polygon
  {
    if (msg.polygon.size() == 0) {
      out << "polygon: []";
    } else {
      out << "polygon: [";
      size_t pending_items = msg.polygon.size();
      for (auto item : msg.polygon) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: length_quality
  {
    out << "length_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.length_quality, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: width_quality
  {
    out << "width_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.width_quality, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << ", ";
  }

  // member: classification_quality
  {
    out << "classification_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_quality, out);
    out << ", ";
  }

  // member: existence_probability
  {
    out << "existence_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.existence_probability, out);
    out << ", ";
  }

  // member: age_duration
  {
    out << "age_duration: ";
    to_flow_style_yaml(msg.age_duration, out);
    out << ", ";
  }

  // member: prediction_duration
  {
    out << "prediction_duration: ";
    to_flow_style_yaml(msg.prediction_duration, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackedObject & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: linear_acceleration_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear_acceleration_covariance.size() == 0) {
      out << "linear_acceleration_covariance: []\n";
    } else {
      out << "linear_acceleration_covariance:\n";
      for (auto item : msg.linear_acceleration_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygon.size() == 0) {
      out << "polygon: []\n";
    } else {
      out << "polygon:\n";
      for (auto item : msg.polygon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: length_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.length_quality, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: width_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.width_quality, out);
    out << "\n";
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << "\n";
  }

  // member: classification_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_quality, out);
    out << "\n";
  }

  // member: existence_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "existence_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.existence_probability, out);
    out << "\n";
  }

  // member: age_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age_duration:\n";
    to_block_style_yaml(msg.age_duration, out, indentation + 2);
  }

  // member: prediction_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_duration:\n";
    to_block_style_yaml(msg.prediction_duration, out, indentation + 2);
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedObject & msg, bool use_flow_style = false)
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

}  // namespace marti_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_nav_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_nav_msgs::msg::TrackedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::msg::TrackedObject & msg)
{
  return marti_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::msg::TrackedObject>()
{
  return "marti_nav_msgs::msg::TrackedObject";
}

template<>
inline const char * name<marti_nav_msgs::msg::TrackedObject>()
{
  return "marti_nav_msgs/msg/TrackedObject";
}

template<>
struct has_fixed_size<marti_nav_msgs::msg::TrackedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::msg::TrackedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::msg::TrackedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_
