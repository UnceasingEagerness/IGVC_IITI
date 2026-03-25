// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__TRAITS_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/srv/detail/plan_route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace marti_nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanRoute_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plan_from_vehicle
  {
    out << "plan_from_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_from_vehicle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanRoute_Request & msg,
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

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: plan_from_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_from_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_from_vehicle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanRoute_Request & msg, bool use_flow_style = false)
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
  const marti_nav_msgs::srv::PlanRoute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::srv::PlanRoute_Request & msg)
{
  return marti_nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::srv::PlanRoute_Request>()
{
  return "marti_nav_msgs::srv::PlanRoute_Request";
}

template<>
inline const char * name<marti_nav_msgs::srv::PlanRoute_Request>()
{
  return "marti_nav_msgs/srv/PlanRoute_Request";
}

template<>
struct has_fixed_size<marti_nav_msgs::srv::PlanRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::srv::PlanRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::srv::PlanRoute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'route'
#include "marti_nav_msgs/msg/detail/route__traits.hpp"

namespace marti_nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanRoute_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: route
  {
    out << "route: ";
    to_flow_style_yaml(msg.route, out);
    out << ", ";
  }

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
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanRoute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route:\n";
    to_block_style_yaml(msg.route, out, indentation + 2);
  }

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

  // member: cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanRoute_Response & msg, bool use_flow_style = false)
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
  const marti_nav_msgs::srv::PlanRoute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::srv::PlanRoute_Response & msg)
{
  return marti_nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::srv::PlanRoute_Response>()
{
  return "marti_nav_msgs::srv::PlanRoute_Response";
}

template<>
inline const char * name<marti_nav_msgs::srv::PlanRoute_Response>()
{
  return "marti_nav_msgs/srv/PlanRoute_Response";
}

template<>
struct has_fixed_size<marti_nav_msgs::srv::PlanRoute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_nav_msgs::srv::PlanRoute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_nav_msgs::srv::PlanRoute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<marti_nav_msgs::srv::PlanRoute>()
{
  return "marti_nav_msgs::srv::PlanRoute";
}

template<>
inline const char * name<marti_nav_msgs::srv::PlanRoute>()
{
  return "marti_nav_msgs/srv/PlanRoute";
}

template<>
struct has_fixed_size<marti_nav_msgs::srv::PlanRoute>
  : std::integral_constant<
    bool,
    has_fixed_size<marti_nav_msgs::srv::PlanRoute_Request>::value &&
    has_fixed_size<marti_nav_msgs::srv::PlanRoute_Response>::value
  >
{
};

template<>
struct has_bounded_size<marti_nav_msgs::srv::PlanRoute>
  : std::integral_constant<
    bool,
    has_bounded_size<marti_nav_msgs::srv::PlanRoute_Request>::value &&
    has_bounded_size<marti_nav_msgs::srv::PlanRoute_Response>::value
  >
{
};

template<>
struct is_service<marti_nav_msgs::srv::PlanRoute>
  : std::true_type
{
};

template<>
struct is_service_request<marti_nav_msgs::srv::PlanRoute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<marti_nav_msgs::srv::PlanRoute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__TRAITS_HPP_
