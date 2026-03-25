// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
// generated code does not contain a copyright notice
#include "marti_dbw_msgs/msg/detail/primary_feedback__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marti_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marti_dbw_msgs/msg/detail/primary_feedback__struct.h"
#include "marti_dbw_msgs/msg/detail/primary_feedback__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_dbw_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_dbw_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_dbw_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PrimaryFeedback__ros_msg_type = marti_dbw_msgs__msg__PrimaryFeedback;

static bool _PrimaryFeedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PrimaryFeedback__ros_msg_type * ros_message = static_cast<const _PrimaryFeedback__ros_msg_type *>(untyped_ros_message);
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

  // Field name: present
  {
    cdr << (ros_message->present ? true : false);
  }

  // Field name: robotic_mode
  {
    cdr << (ros_message->robotic_mode ? true : false);
  }

  // Field name: steering_command
  {
    cdr << ros_message->steering_command;
  }

  // Field name: steering_measure
  {
    cdr << ros_message->steering_measure;
  }

  // Field name: throttle_command
  {
    cdr << ros_message->throttle_command;
  }

  // Field name: throttle_measure
  {
    cdr << ros_message->throttle_measure;
  }

  // Field name: brake_command
  {
    cdr << ros_message->brake_command;
  }

  // Field name: brake_measure
  {
    cdr << ros_message->brake_measure;
  }

  // Field name: estop_command
  {
    cdr << (ros_message->estop_command ? true : false);
  }

  // Field name: estop_measure
  {
    cdr << (ros_message->estop_measure ? true : false);
  }

  // Field name: error_steering
  {
    cdr << (ros_message->error_steering ? true : false);
  }

  // Field name: error_throttle
  {
    cdr << (ros_message->error_throttle ? true : false);
  }

  // Field name: error_brake
  {
    cdr << (ros_message->error_brake ? true : false);
  }

  // Field name: error_other
  {
    cdr << (ros_message->error_other ? true : false);
  }

  return true;
}

static bool _PrimaryFeedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PrimaryFeedback__ros_msg_type * ros_message = static_cast<_PrimaryFeedback__ros_msg_type *>(untyped_ros_message);
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

  // Field name: present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->present = tmp ? true : false;
  }

  // Field name: robotic_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->robotic_mode = tmp ? true : false;
  }

  // Field name: steering_command
  {
    cdr >> ros_message->steering_command;
  }

  // Field name: steering_measure
  {
    cdr >> ros_message->steering_measure;
  }

  // Field name: throttle_command
  {
    cdr >> ros_message->throttle_command;
  }

  // Field name: throttle_measure
  {
    cdr >> ros_message->throttle_measure;
  }

  // Field name: brake_command
  {
    cdr >> ros_message->brake_command;
  }

  // Field name: brake_measure
  {
    cdr >> ros_message->brake_measure;
  }

  // Field name: estop_command
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->estop_command = tmp ? true : false;
  }

  // Field name: estop_measure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->estop_measure = tmp ? true : false;
  }

  // Field name: error_steering
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error_steering = tmp ? true : false;
  }

  // Field name: error_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error_throttle = tmp ? true : false;
  }

  // Field name: error_brake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error_brake = tmp ? true : false;
  }

  // Field name: error_other
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error_other = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marti_dbw_msgs
size_t get_serialized_size_marti_dbw_msgs__msg__PrimaryFeedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PrimaryFeedback__ros_msg_type * ros_message = static_cast<const _PrimaryFeedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name present
  {
    size_t item_size = sizeof(ros_message->present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robotic_mode
  {
    size_t item_size = sizeof(ros_message->robotic_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_command
  {
    size_t item_size = sizeof(ros_message->steering_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_measure
  {
    size_t item_size = sizeof(ros_message->steering_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_command
  {
    size_t item_size = sizeof(ros_message->throttle_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_measure
  {
    size_t item_size = sizeof(ros_message->throttle_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_command
  {
    size_t item_size = sizeof(ros_message->brake_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_measure
  {
    size_t item_size = sizeof(ros_message->brake_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop_command
  {
    size_t item_size = sizeof(ros_message->estop_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop_measure
  {
    size_t item_size = sizeof(ros_message->estop_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_steering
  {
    size_t item_size = sizeof(ros_message->error_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_throttle
  {
    size_t item_size = sizeof(ros_message->error_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_brake
  {
    size_t item_size = sizeof(ros_message->error_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_other
  {
    size_t item_size = sizeof(ros_message->error_other);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PrimaryFeedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marti_dbw_msgs__msg__PrimaryFeedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marti_dbw_msgs
size_t max_serialized_size_marti_dbw_msgs__msg__PrimaryFeedback(
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
  // member: present
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robotic_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_measure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_measure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_measure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: estop_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: estop_measure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_steering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_other
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
    using DataType = marti_dbw_msgs__msg__PrimaryFeedback;
    is_plain =
      (
      offsetof(DataType, error_other) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PrimaryFeedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marti_dbw_msgs__msg__PrimaryFeedback(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PrimaryFeedback = {
  "marti_dbw_msgs::msg",
  "PrimaryFeedback",
  _PrimaryFeedback__cdr_serialize,
  _PrimaryFeedback__cdr_deserialize,
  _PrimaryFeedback__get_serialized_size,
  _PrimaryFeedback__max_serialized_size
};

static rosidl_message_type_support_t _PrimaryFeedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PrimaryFeedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marti_dbw_msgs, msg, PrimaryFeedback)() {
  return &_PrimaryFeedback__type_support;
}

#if defined(__cplusplus)
}
#endif
