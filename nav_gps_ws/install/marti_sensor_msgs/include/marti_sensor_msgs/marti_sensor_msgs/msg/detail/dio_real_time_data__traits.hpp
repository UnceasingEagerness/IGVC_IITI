// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_sensor_msgs:msg/DioRealTimeData.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__TRAITS_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_sensor_msgs/msg/detail/dio_real_time_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_sensor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DioRealTimeData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sample_frequency
  {
    out << "sample_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_frequency, out);
    out << ", ";
  }

  // member: latest_sample_time
  {
    out << "latest_sample_time: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_sample_time, out);
    out << ", ";
  }

  // member: sample_states
  {
    if (msg.sample_states.size() == 0) {
      out << "sample_states: []";
    } else {
      out << "sample_states: [";
      size_t pending_items = msg.sample_states.size();
      for (auto item : msg.sample_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sample_times
  {
    if (msg.sample_times.size() == 0) {
      out << "sample_times: []";
    } else {
      out << "sample_times: [";
      size_t pending_items = msg.sample_times.size();
      for (auto item : msg.sample_times) {
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
  const DioRealTimeData & msg,
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

  // member: sample_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_frequency, out);
    out << "\n";
  }

  // member: latest_sample_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_sample_time: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_sample_time, out);
    out << "\n";
  }

  // member: sample_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sample_states.size() == 0) {
      out << "sample_states: []\n";
    } else {
      out << "sample_states:\n";
      for (auto item : msg.sample_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sample_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sample_times.size() == 0) {
      out << "sample_times: []\n";
    } else {
      out << "sample_times:\n";
      for (auto item : msg.sample_times) {
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

inline std::string to_yaml(const DioRealTimeData & msg, bool use_flow_style = false)
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
  const marti_sensor_msgs::msg::DioRealTimeData & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_sensor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_sensor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_sensor_msgs::msg::DioRealTimeData & msg)
{
  return marti_sensor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_sensor_msgs::msg::DioRealTimeData>()
{
  return "marti_sensor_msgs::msg::DioRealTimeData";
}

template<>
inline const char * name<marti_sensor_msgs::msg::DioRealTimeData>()
{
  return "marti_sensor_msgs/msg/DioRealTimeData";
}

template<>
struct has_fixed_size<marti_sensor_msgs::msg::DioRealTimeData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_sensor_msgs::msg::DioRealTimeData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_sensor_msgs::msg::DioRealTimeData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__TRAITS_HPP_
