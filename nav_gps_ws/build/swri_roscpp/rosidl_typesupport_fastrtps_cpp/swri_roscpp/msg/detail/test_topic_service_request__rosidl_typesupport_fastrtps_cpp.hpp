// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from swri_roscpp:msg/TestTopicServiceRequest.idl
// generated code does not contain a copyright notice

#ifndef SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "swri_roscpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "swri_roscpp/msg/detail/test_topic_service_request__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace swri_roscpp
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
cdr_serialize(
  const swri_roscpp::msg::TestTopicServiceRequest & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  swri_roscpp::msg::TestTopicServiceRequest & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
get_serialized_size(
  const swri_roscpp::msg::TestTopicServiceRequest & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
max_serialized_size_TestTopicServiceRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace swri_roscpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swri_roscpp, msg, TestTopicServiceRequest)();

#ifdef __cplusplus
}
#endif

#endif  // SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
