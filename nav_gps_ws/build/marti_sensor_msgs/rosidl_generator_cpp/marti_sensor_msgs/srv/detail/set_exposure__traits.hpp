// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_sensor_msgs:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__TRAITS_HPP_
#define MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_sensor_msgs/srv/detail/set_exposure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marti_sensor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetExposure_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: auto_exposure
  {
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetExposure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: auto_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetExposure_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace marti_sensor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_sensor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_sensor_msgs::srv::SetExposure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_sensor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_sensor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const marti_sensor_msgs::srv::SetExposure_Request & msg)
{
  return marti_sensor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marti_sensor_msgs::srv::SetExposure_Request>()
{
  return "marti_sensor_msgs::srv::SetExposure_Request";
}

template<>
inline const char * name<marti_sensor_msgs::srv::SetExposure_Request>()
{
  return "marti_sensor_msgs/srv/SetExposure_Request";
}

template<>
struct has_fixed_size<marti_sensor_msgs::srv::SetExposure_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<marti_sensor_msgs::srv::SetExposure_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<marti_sensor_msgs::srv::SetExposure_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace marti_sensor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetExposure_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: auto_exposure
  {
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetExposure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: auto_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetExposure_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace marti_sensor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_sensor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_sensor_msgs::srv::SetExposure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_sensor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_sensor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const marti_sensor_msgs::srv::SetExposure_Response & msg)
{
  return marti_sensor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marti_sensor_msgs::srv::SetExposure_Response>()
{
  return "marti_sensor_msgs::srv::SetExposure_Response";
}

template<>
inline const char * name<marti_sensor_msgs::srv::SetExposure_Response>()
{
  return "marti_sensor_msgs/srv/SetExposure_Response";
}

template<>
struct has_fixed_size<marti_sensor_msgs::srv::SetExposure_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<marti_sensor_msgs::srv::SetExposure_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<marti_sensor_msgs::srv::SetExposure_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<marti_sensor_msgs::srv::SetExposure>()
{
  return "marti_sensor_msgs::srv::SetExposure";
}

template<>
inline const char * name<marti_sensor_msgs::srv::SetExposure>()
{
  return "marti_sensor_msgs/srv/SetExposure";
}

template<>
struct has_fixed_size<marti_sensor_msgs::srv::SetExposure>
  : std::integral_constant<
    bool,
    has_fixed_size<marti_sensor_msgs::srv::SetExposure_Request>::value &&
    has_fixed_size<marti_sensor_msgs::srv::SetExposure_Response>::value
  >
{
};

template<>
struct has_bounded_size<marti_sensor_msgs::srv::SetExposure>
  : std::integral_constant<
    bool,
    has_bounded_size<marti_sensor_msgs::srv::SetExposure_Request>::value &&
    has_bounded_size<marti_sensor_msgs::srv::SetExposure_Response>::value
  >
{
};

template<>
struct is_service<marti_sensor_msgs::srv::SetExposure>
  : std::true_type
{
};

template<>
struct is_service_request<marti_sensor_msgs::srv::SetExposure_Request>
  : std::true_type
{
};

template<>
struct is_service_response<marti_sensor_msgs::srv::SetExposure_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__TRAITS_HPP_
