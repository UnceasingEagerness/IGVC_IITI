// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from swri_roscpp:msg/TestTopicServiceResponse.idl
// generated code does not contain a copyright notice
#include "swri_roscpp/msg/detail/test_topic_service_response__rosidl_typesupport_fastrtps_cpp.hpp"
#include "swri_roscpp/msg/detail/test_topic_service_response__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace marti_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const marti_common_msgs::msg::ServiceHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  marti_common_msgs::msg::ServiceHeader &);
size_t get_serialized_size(
  const marti_common_msgs::msg::ServiceHeader &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace marti_common_msgs


namespace swri_roscpp
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
cdr_serialize(
  const swri_roscpp::msg::TestTopicServiceResponse & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: srv_header
  marti_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.srv_header,
    cdr);
  // Member: response_value
  cdr << ros_message.response_value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  swri_roscpp::msg::TestTopicServiceResponse & ros_message)
{
  // Member: srv_header
  marti_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.srv_header);

  // Member: response_value
  cdr >> ros_message.response_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
get_serialized_size(
  const swri_roscpp::msg::TestTopicServiceResponse & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: srv_header

  current_alignment +=
    marti_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.srv_header, current_alignment);
  // Member: response_value
  {
    size_t item_size = sizeof(ros_message.response_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swri_roscpp
max_serialized_size_TestTopicServiceResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: srv_header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        marti_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swri_roscpp::msg::TestTopicServiceResponse;
    is_plain =
      (
      offsetof(DataType, response_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TestTopicServiceResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const swri_roscpp::msg::TestTopicServiceResponse *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TestTopicServiceResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<swri_roscpp::msg::TestTopicServiceResponse *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TestTopicServiceResponse__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const swri_roscpp::msg::TestTopicServiceResponse *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TestTopicServiceResponse__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TestTopicServiceResponse(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TestTopicServiceResponse__callbacks = {
  "swri_roscpp::msg",
  "TestTopicServiceResponse",
  _TestTopicServiceResponse__cdr_serialize,
  _TestTopicServiceResponse__cdr_deserialize,
  _TestTopicServiceResponse__get_serialized_size,
  _TestTopicServiceResponse__max_serialized_size
};

static rosidl_message_type_support_t _TestTopicServiceResponse__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TestTopicServiceResponse__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace swri_roscpp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_swri_roscpp
const rosidl_message_type_support_t *
get_message_type_support_handle<swri_roscpp::msg::TestTopicServiceResponse>()
{
  return &swri_roscpp::msg::typesupport_fastrtps_cpp::_TestTopicServiceResponse__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swri_roscpp, msg, TestTopicServiceResponse)() {
  return &swri_roscpp::msg::typesupport_fastrtps_cpp::_TestTopicServiceResponse__handle;
}

#ifdef __cplusplus
}
#endif
