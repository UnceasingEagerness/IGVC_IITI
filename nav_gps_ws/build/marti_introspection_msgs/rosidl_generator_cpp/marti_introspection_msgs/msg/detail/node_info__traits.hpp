// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marti_introspection_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marti_introspection_msgs/msg/detail/node_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'topics'
#include "marti_introspection_msgs/msg/detail/topic_info__traits.hpp"
// Member 'parameters'
#include "marti_introspection_msgs/msg/detail/param_info__traits.hpp"
// Member 'services'
#include "marti_introspection_msgs/msg/detail/service_info__traits.hpp"

namespace marti_introspection_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << ", ";
  }

  // member: nodelet_manager
  {
    out << "nodelet_manager: ";
    rosidl_generator_traits::value_to_yaml(msg.nodelet_manager, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: topics
  {
    if (msg.topics.size() == 0) {
      out << "topics: []";
    } else {
      out << "topics: [";
      size_t pending_items = msg.topics.size();
      for (auto item : msg.topics) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parameters
  {
    if (msg.parameters.size() == 0) {
      out << "parameters: []";
    } else {
      out << "parameters: [";
      size_t pending_items = msg.parameters.size();
      for (auto item : msg.parameters) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: services
  {
    if (msg.services.size() == 0) {
      out << "services: []";
    } else {
      out << "services: [";
      size_t pending_items = msg.services.size();
      for (auto item : msg.services) {
        to_flow_style_yaml(item, out);
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
  const NodeInfo & msg,
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

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << "\n";
  }

  // member: nodelet_manager
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodelet_manager: ";
    rosidl_generator_traits::value_to_yaml(msg.nodelet_manager, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: topics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topics.size() == 0) {
      out << "topics: []\n";
    } else {
      out << "topics:\n";
      for (auto item : msg.topics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameters.size() == 0) {
      out << "parameters: []\n";
    } else {
      out << "parameters:\n";
      for (auto item : msg.parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: services
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.services.size() == 0) {
      out << "services: []\n";
    } else {
      out << "services:\n";
      for (auto item : msg.services) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeInfo & msg, bool use_flow_style = false)
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

}  // namespace marti_introspection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marti_introspection_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marti_introspection_msgs::msg::NodeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  marti_introspection_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marti_introspection_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marti_introspection_msgs::msg::NodeInfo & msg)
{
  return marti_introspection_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marti_introspection_msgs::msg::NodeInfo>()
{
  return "marti_introspection_msgs::msg::NodeInfo";
}

template<>
inline const char * name<marti_introspection_msgs::msg::NodeInfo>()
{
  return "marti_introspection_msgs/msg/NodeInfo";
}

template<>
struct has_fixed_size<marti_introspection_msgs::msg::NodeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marti_introspection_msgs::msg::NodeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marti_introspection_msgs::msg::NodeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_
