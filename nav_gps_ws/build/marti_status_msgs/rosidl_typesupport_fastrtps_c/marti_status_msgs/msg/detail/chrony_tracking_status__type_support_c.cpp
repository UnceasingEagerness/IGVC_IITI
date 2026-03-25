// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marti_status_msgs:msg/ChronyTrackingStatus.idl
// generated code does not contain a copyright notice
#include "marti_status_msgs/msg/detail/chrony_tracking_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marti_status_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marti_status_msgs/msg/detail/chrony_tracking_status__struct.h"
#include "marti_status_msgs/msg/detail/chrony_tracking_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // leap_status, reference
#include "rosidl_runtime_c/string_functions.h"  // leap_status, reference
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_status_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_status_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_status_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ChronyTrackingStatus__ros_msg_type = marti_status_msgs__msg__ChronyTrackingStatus;

static bool _ChronyTrackingStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChronyTrackingStatus__ros_msg_type * ros_message = static_cast<const _ChronyTrackingStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: reference
  {
    const rosidl_runtime_c__String * str = &ros_message->reference;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stratum
  {
    cdr << ros_message->stratum;
  }

  // Field name: system_time_offset
  {
    cdr << ros_message->system_time_offset;
  }

  // Field name: last_offset
  {
    cdr << ros_message->last_offset;
  }

  // Field name: rms_offset
  {
    cdr << ros_message->rms_offset;
  }

  // Field name: frequency_offset
  {
    cdr << ros_message->frequency_offset;
  }

  // Field name: residual_frequency
  {
    cdr << ros_message->residual_frequency;
  }

  // Field name: skew
  {
    cdr << ros_message->skew;
  }

  // Field name: root_delay
  {
    cdr << ros_message->root_delay;
  }

  // Field name: root_dispersion
  {
    cdr << ros_message->root_dispersion;
  }

  // Field name: update_interval
  {
    cdr << ros_message->update_interval;
  }

  // Field name: leap_status
  {
    const rosidl_runtime_c__String * str = &ros_message->leap_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ChronyTrackingStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChronyTrackingStatus__ros_msg_type * ros_message = static_cast<_ChronyTrackingStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: reference
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reference.data) {
      rosidl_runtime_c__String__init(&ros_message->reference);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reference,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reference'\n");
      return false;
    }
  }

  // Field name: stratum
  {
    cdr >> ros_message->stratum;
  }

  // Field name: system_time_offset
  {
    cdr >> ros_message->system_time_offset;
  }

  // Field name: last_offset
  {
    cdr >> ros_message->last_offset;
  }

  // Field name: rms_offset
  {
    cdr >> ros_message->rms_offset;
  }

  // Field name: frequency_offset
  {
    cdr >> ros_message->frequency_offset;
  }

  // Field name: residual_frequency
  {
    cdr >> ros_message->residual_frequency;
  }

  // Field name: skew
  {
    cdr >> ros_message->skew;
  }

  // Field name: root_delay
  {
    cdr >> ros_message->root_delay;
  }

  // Field name: root_dispersion
  {
    cdr >> ros_message->root_dispersion;
  }

  // Field name: update_interval
  {
    cdr >> ros_message->update_interval;
  }

  // Field name: leap_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->leap_status.data) {
      rosidl_runtime_c__String__init(&ros_message->leap_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->leap_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'leap_status'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marti_status_msgs
size_t get_serialized_size_marti_status_msgs__msg__ChronyTrackingStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChronyTrackingStatus__ros_msg_type * ros_message = static_cast<const _ChronyTrackingStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name reference
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reference.size + 1);
  // field.name stratum
  {
    size_t item_size = sizeof(ros_message->stratum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_time_offset
  {
    size_t item_size = sizeof(ros_message->system_time_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_offset
  {
    size_t item_size = sizeof(ros_message->last_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rms_offset
  {
    size_t item_size = sizeof(ros_message->rms_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frequency_offset
  {
    size_t item_size = sizeof(ros_message->frequency_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name residual_frequency
  {
    size_t item_size = sizeof(ros_message->residual_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name skew
  {
    size_t item_size = sizeof(ros_message->skew);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name root_delay
  {
    size_t item_size = sizeof(ros_message->root_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name root_dispersion
  {
    size_t item_size = sizeof(ros_message->root_dispersion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name update_interval
  {
    size_t item_size = sizeof(ros_message->update_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leap_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->leap_status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ChronyTrackingStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marti_status_msgs__msg__ChronyTrackingStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marti_status_msgs
size_t max_serialized_size_marti_status_msgs__msg__ChronyTrackingStatus(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: reference
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
  // member: stratum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_time_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: last_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rms_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: frequency_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: residual_frequency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: skew
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: root_delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: root_dispersion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: update_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leap_status
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marti_status_msgs__msg__ChronyTrackingStatus;
    is_plain =
      (
      offsetof(DataType, leap_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChronyTrackingStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marti_status_msgs__msg__ChronyTrackingStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChronyTrackingStatus = {
  "marti_status_msgs::msg",
  "ChronyTrackingStatus",
  _ChronyTrackingStatus__cdr_serialize,
  _ChronyTrackingStatus__cdr_deserialize,
  _ChronyTrackingStatus__get_serialized_size,
  _ChronyTrackingStatus__max_serialized_size
};

static rosidl_message_type_support_t _ChronyTrackingStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChronyTrackingStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marti_status_msgs, msg, ChronyTrackingStatus)() {
  return &_ChronyTrackingStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
