// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from marti_introspection_msgs:msg/ServiceInfo.idl
// generated code does not contain a copyright notice
#include "marti_introspection_msgs/msg/detail/service_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "marti_introspection_msgs/msg/detail/service_info__struct.hpp"

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

namespace marti_introspection_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_introspection_msgs
cdr_serialize(
  const marti_introspection_msgs::msg::ServiceInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: resolved_name
  cdr << ros_message.resolved_name;
  // Member: description
  cdr << ros_message.description;
  // Member: group
  cdr << ros_message.group;
  // Member: message_type
  cdr << ros_message.message_type;
  // Member: server
  cdr << (ros_message.server ? true : false);
  // Member: topic_service
  cdr << (ros_message.topic_service ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_introspection_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  marti_introspection_msgs::msg::ServiceInfo & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: resolved_name
  cdr >> ros_message.resolved_name;

  // Member: description
  cdr >> ros_message.description;

  // Member: group
  cdr >> ros_message.group;

  // Member: message_type
  cdr >> ros_message.message_type;

  // Member: server
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.server = tmp ? true : false;
  }

  // Member: topic_service
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.topic_service = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_introspection_msgs
get_serialized_size(
  const marti_introspection_msgs::msg::ServiceInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: resolved_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.resolved_name.size() + 1);
  // Member: description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.description.size() + 1);
  // Member: group
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.group.size() + 1);
  // Member: message_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message_type.size() + 1);
  // Member: server
  {
    size_t item_size = sizeof(ros_message.server);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: topic_service
  {
    size_t item_size = sizeof(ros_message.topic_service);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_introspection_msgs
max_serialized_size_ServiceInfo(
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


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: resolved_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: description
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: group
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: message_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: server
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: topic_service
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marti_introspection_msgs::msg::ServiceInfo;
    is_plain =
      (
      offsetof(DataType, topic_service) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ServiceInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const marti_introspection_msgs::msg::ServiceInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServiceInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<marti_introspection_msgs::msg::ServiceInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServiceInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const marti_introspection_msgs::msg::ServiceInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServiceInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ServiceInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ServiceInfo__callbacks = {
  "marti_introspection_msgs::msg",
  "ServiceInfo",
  _ServiceInfo__cdr_serialize,
  _ServiceInfo__cdr_deserialize,
  _ServiceInfo__get_serialized_size,
  _ServiceInfo__max_serialized_size
};

static rosidl_message_type_support_t _ServiceInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServiceInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace marti_introspection_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_marti_introspection_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_introspection_msgs::msg::ServiceInfo>()
{
  return &marti_introspection_msgs::msg::typesupport_fastrtps_cpp::_ServiceInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marti_introspection_msgs, msg, ServiceInfo)() {
  return &marti_introspection_msgs::msg::typesupport_fastrtps_cpp::_ServiceInfo__handle;
}

#ifdef __cplusplus
}
#endif
