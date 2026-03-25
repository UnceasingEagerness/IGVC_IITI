// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_nav_msgs:msg/PathPlanning.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__TRAITS_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_nav_msgs/msg/detail/path_planning__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marti_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathPlanning & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: segment_type
  {
    out << "segment_type: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_type, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: start_speed
  {
    out << "start_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.start_speed, out);
    out << ", ";
  }

  // member: end_speed
  {
    out << "end_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.end_speed, out);
    out << ", ";
  }

  // member: startx
  {
    out << "startx: ";
    rosidl_generator_traits::value_to_yaml(msg.startx, out);
    out << ", ";
  }

  // member: starty
  {
    out << "starty: ";
    rosidl_generator_traits::value_to_yaml(msg.starty, out);
    out << ", ";
  }

  // member: endx
  {
    out << "endx: ";
    rosidl_generator_traits::value_to_yaml(msg.endx, out);
    out << ", ";
  }

  // member: endy
  {
    out << "endy: ";
    rosidl_generator_traits::value_to_yaml(msg.endy, out);
    out << ", ";
  }

  // member: theta0
  {
    out << "theta0: ";
    rosidl_generator_traits::value_to_yaml(msg.theta0, out);
    out << ", ";
  }

  // member: a1
  {
    out << "a1: ";
    rosidl_generator_traits::value_to_yaml(msg.a1, out);
    out << ", ";
  }

  // member: a2
  {
    out << "a2: ";
    rosidl_generator_traits::value_to_yaml(msg.a2, out);
    out << ", ";
  }

  // member: k0
  {
    out << "k0: ";
    rosidl_generator_traits::value_to_yaml(msg.k0, out);
    out << ", ";
  }

  // member: c1
  {
    out << "c1: ";
    rosidl_generator_traits::value_to_yaml(msg.c1, out);
    out << ", ";
  }

  // member: c2
  {
    out << "c2: ";
    rosidl_generator_traits::value_to_yaml(msg.c2, out);
    out << ", ";
  }

  // member: behavior
  {
    out << "behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior, out);
    out << ", ";
  }

  // member: creep
  {
    out << "creep: ";
    rosidl_generator_traits::value_to_yaml(msg.creep, out);
    out << ", ";
  }

  // member: acc
  {
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << ", ";
  }

  // member: reverse
  {
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << ", ";
  }

  // member: vehicle_track
  {
    out << "vehicle_track: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_track, out);
    out << ", ";
  }

  // member: transmitted
  {
    out << "transmitted: ";
    rosidl_generator_traits::value_to_yaml(msg.transmitted, out);
    out << ", ";
  }

  // member: aux_transmitted
  {
    out << "aux_transmitted: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_transmitted, out);
    out << ", ";
  }

  // member: theta_end
  {
    out << "theta_end: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_end, out);
    out << ", ";
  }

  // member: k_end
  {
    out << "k_end: ";
    rosidl_generator_traits::value_to_yaml(msg.k_end, out);
    out << ", ";
  }

  // member: seg_len
  {
    out << "seg_len: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_len, out);
    out << ", ";
  }

  // member: speed_limit
  {
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << ", ";
  }

  // member: max_error
  {
    out << "max_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_error, out);
    out << ", ";
  }

  // member: max_smooth
  {
    out << "max_smooth: ";
    rosidl_generator_traits::value_to_yaml(msg.max_smooth, out);
    out << ", ";
  }

  // member: max_curv
  {
    out << "max_curv: ";
    rosidl_generator_traits::value_to_yaml(msg.max_curv, out);
    out << ", ";
  }

  // member: possible_points
  {
    out << "possible_points: ";
    rosidl_generator_traits::value_to_yaml(msg.possible_points, out);
    out << ", ";
  }

  // member: exit_segment
  {
    out << "exit_segment: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_segment, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathPlanning & msg,
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

  // member: segment_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment_type: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_type, out);
    out << "\n";
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

  // member: start_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.start_speed, out);
    out << "\n";
  }

  // member: end_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.end_speed, out);
    out << "\n";
  }

  // member: startx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startx: ";
    rosidl_generator_traits::value_to_yaml(msg.startx, out);
    out << "\n";
  }

  // member: starty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starty: ";
    rosidl_generator_traits::value_to_yaml(msg.starty, out);
    out << "\n";
  }

  // member: endx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endx: ";
    rosidl_generator_traits::value_to_yaml(msg.endx, out);
    out << "\n";
  }

  // member: endy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endy: ";
    rosidl_generator_traits::value_to_yaml(msg.endy, out);
    out << "\n";
  }

  // member: theta0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta0: ";
    rosidl_generator_traits::value_to_yaml(msg.theta0, out);
    out << "\n";
  }

  // member: a1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a1: ";
    rosidl_generator_traits::value_to_yaml(msg.a1, out);
    out << "\n";
  }

  // member: a2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a2: ";
    rosidl_generator_traits::value_to_yaml(msg.a2, out);
    out << "\n";
  }

  // member: k0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k0: ";
    rosidl_generator_traits::value_to_yaml(msg.k0, out);
    out << "\n";
  }

  // member: c1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c1: ";
    rosidl_generator_traits::value_to_yaml(msg.c1, out);
    out << "\n";
  }

  // member: c2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c2: ";
    rosidl_generator_traits::value_to_yaml(msg.c2, out);
    out << "\n";
  }

  // member: behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior, out);
    out << "\n";
  }

  // member: creep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "creep: ";
    rosidl_generator_traits::value_to_yaml(msg.creep, out);
    out << "\n";
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
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

  // member: vehicle_track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_track: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_track, out);
    out << "\n";
  }

  // member: transmitted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmitted: ";
    rosidl_generator_traits::value_to_yaml(msg.transmitted, out);
    out << "\n";
  }

  // member: aux_transmitted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_transmitted: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_transmitted, out);
    out << "\n";
  }

  // member: theta_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_end: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_end, out);
    out << "\n";
  }

  // member: k_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_end: ";
    rosidl_generator_traits::value_to_yaml(msg.k_end, out);
    out << "\n";
  }

  // member: seg_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_len: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_len, out);
    out << "\n";
  }

  // member: speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << "\n";
  }

  // member: max_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_error, out);
    out << "\n";
  }

  // member: max_smooth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_smooth: ";
    rosidl_generator_traits::value_to_yaml(msg.max_smooth, out);
    out << "\n";
  }

  // member: max_curv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_curv: ";
    rosidl_generator_traits::value_to_yaml(msg.max_curv, out);
    out << "\n";
  }

  // member: possible_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "possible_points: ";
    rosidl_generator_traits::value_to_yaml(msg.possible_points, out);
    out << "\n";
  }

  // member: exit_segment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_segment: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_segment, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathPlanning & msg, bool use_flow_style = false)
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
  const marti_nav_msgs::msg::PathPlanning & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_nav_msgs::msg::PathPlanning & msg)
{
  return marti_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_nav_msgs::msg::PathPlanning>()
{
  return "marti_nav_msgs::msg::PathPlanning";
}

template<>
inline const char * name<marti_nav_msgs::msg::PathPlanning>()
{
  return "marti_nav_msgs/msg/PathPlanning";
}

template<>
struct has_fixed_size<marti_nav_msgs::msg::PathPlanning>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marti_nav_msgs::msg::PathPlanning>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marti_nav_msgs::msg::PathPlanning>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__TRAITS_HPP_
