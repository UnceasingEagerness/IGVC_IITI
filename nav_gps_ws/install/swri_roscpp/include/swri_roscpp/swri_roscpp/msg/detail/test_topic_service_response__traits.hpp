// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swri_roscpp:msg/TestTopicServiceResponse.idl
// generated code does not contain a copyright notice

#ifndef SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__TRAITS_HPP_
#define SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swri_roscpp/msg/detail/test_topic_service_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'srv_header'
#include "marti_common_msgs/msg/detail/service_header__traits.hpp"

namespace swri_roscpp
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestTopicServiceResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: srv_header
  {
    out << "srv_header: ";
    to_flow_style_yaml(msg.srv_header, out);
    out << ", ";
  }

  // member: response_value
  {
    out << "response_value: ";
    rosidl_generator_traits::value_to_yaml(msg.response_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestTopicServiceResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: srv_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "srv_header:\n";
    to_block_style_yaml(msg.srv_header, out, indentation + 2);
  }

  // member: response_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_value: ";
    rosidl_generator_traits::value_to_yaml(msg.response_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestTopicServiceResponse & msg, bool use_flow_style = false)
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

}  // namespace swri_roscpp

namespace rosidl_generator_traits
{

[[deprecated("use swri_roscpp::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swri_roscpp::msg::TestTopicServiceResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  swri_roscpp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swri_roscpp::msg::to_yaml() instead")]]
inline std::string to_yaml(const swri_roscpp::msg::TestTopicServiceResponse & msg)
{
  return swri_roscpp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swri_roscpp::msg::TestTopicServiceResponse>()
{
  return "swri_roscpp::msg::TestTopicServiceResponse";
}

template<>
inline const char * name<swri_roscpp::msg::TestTopicServiceResponse>()
{
  return "swri_roscpp/msg/TestTopicServiceResponse";
}

template<>
struct has_fixed_size<swri_roscpp::msg::TestTopicServiceResponse>
  : std::integral_constant<bool, has_fixed_size<marti_common_msgs::msg::ServiceHeader>::value> {};

template<>
struct has_bounded_size<swri_roscpp::msg::TestTopicServiceResponse>
  : std::integral_constant<bool, has_bounded_size<marti_common_msgs::msg::ServiceHeader>::value> {};

template<>
struct is_message<swri_roscpp::msg::TestTopicServiceResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__TRAITS_HPP_
