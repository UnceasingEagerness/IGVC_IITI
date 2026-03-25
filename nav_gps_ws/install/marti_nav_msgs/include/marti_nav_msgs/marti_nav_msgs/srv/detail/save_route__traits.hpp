// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:srv/SaveRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__TRAITS_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/srv/detail/save_route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'route'
#include "marti_nav_msgs/msg/detail/route__traits.hpp"

namespace marti_nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveRoute_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: guid
  {
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << ", ";
  }

  // member: route
  {
    out << "route: ";
    to_flow_style_yaml(msg.route, out);
    out << ", ";
  }

  // member: thumbnail
  {
    out << "thumbnail: ";
    rosidl_generator_traits::value_to_yaml(msg.thumbnail, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveRoute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << "\n";
  }

  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route:\n";
    to_block_style_yaml(msg.route, out, indentation + 2);
  }

  // member: thumbnail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thumbnail: ";
    rosidl_generator_traits::value_to_yaml(msg.thumbnail, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveRoute_Request & msg, bool use_flow_style = false)
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

}  // namespace marti_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_nav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_nav_msgs::srv::SaveRoute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::srv::SaveRoute_Request & msg)
{
  return marti_nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::srv::SaveRoute_Request>()
{
  return "marti_nav_msgs::srv::SaveRoute_Request";
}

template<>
inline const char * name<marti_nav_msgs::srv::SaveRoute_Request>()
{
  return "marti_nav_msgs/srv/SaveRoute_Request";
}

template<>
struct has_fixed_size<marti_nav_msgs::srv::SaveRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::srv::SaveRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::srv::SaveRoute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace marti_nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveRoute_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveRoute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveRoute_Response & msg, bool use_flow_style = false)
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

}  // namespace marti_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_nav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_nav_msgs::srv::SaveRoute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::srv::SaveRoute_Response & msg)
{
  return marti_nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::srv::SaveRoute_Response>()
{
  return "marti_nav_msgs::srv::SaveRoute_Response";
}

template<>
inline const char * name<marti_nav_msgs::srv::SaveRoute_Response>()
{
  return "marti_nav_msgs/srv/SaveRoute_Response";
}

template<>
struct has_fixed_size<marti_nav_msgs::srv::SaveRoute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::srv::SaveRoute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::srv::SaveRoute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<marti_nav_msgs::srv::SaveRoute>()
{
  return "marti_nav_msgs::srv::SaveRoute";
}

template<>
inline const char * name<marti_nav_msgs::srv::SaveRoute>()
{
  return "marti_nav_msgs/srv/SaveRoute";
}

template<>
struct has_fixed_size<marti_nav_msgs::srv::SaveRoute>
  : std::integral_constant<
    bool,
    has_fixed_size<marti_nav_msgs::srv::SaveRoute_Request>::value &&
    has_fixed_size<marti_nav_msgs::srv::SaveRoute_Response>::value
  >
{
};

template<>
struct has_bounded_size<marti_nav_msgs::srv::SaveRoute>
  : std::integral_constant<
    bool,
    has_bounded_size<marti_nav_msgs::srv::SaveRoute_Request>::value &&
    has_bounded_size<marti_nav_msgs::srv::SaveRoute_Response>::value
  >
{
};

template<>
struct is_service<marti_nav_msgs::srv::SaveRoute>
  : std::true_type
{
};

template<>
struct is_service_request<marti_nav_msgs::srv::SaveRoute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<marti_nav_msgs::srv::SaveRoute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__TRAITS_HPP_
