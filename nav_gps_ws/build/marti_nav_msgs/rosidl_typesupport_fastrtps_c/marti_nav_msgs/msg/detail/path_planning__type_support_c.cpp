// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marti_nav_msgs:msg/PathPlanning.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/path_planning__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marti_nav_msgs/msg/detail/path_planning__struct.h"
#include "marti_nav_msgs/msg/detail/path_planning__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_nav_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_nav_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marti_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PathPlanning__ros_msg_type = marti_nav_msgs__msg__PathPlanning;

static bool _PathPlanning__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning__ros_msg_type * ros_message = static_cast<const _PathPlanning__ros_msg_type *>(untyped_ros_message);
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

  // Field name: segment_type
  {
    cdr << ros_message->segment_type;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: start_speed
  {
    cdr << ros_message->start_speed;
  }

  // Field name: end_speed
  {
    cdr << ros_message->end_speed;
  }

  // Field name: startx
  {
    cdr << ros_message->startx;
  }

  // Field name: starty
  {
    cdr << ros_message->starty;
  }

  // Field name: endx
  {
    cdr << ros_message->endx;
  }

  // Field name: endy
  {
    cdr << ros_message->endy;
  }

  // Field name: theta0
  {
    cdr << ros_message->theta0;
  }

  // Field name: a1
  {
    cdr << ros_message->a1;
  }

  // Field name: a2
  {
    cdr << ros_message->a2;
  }

  // Field name: k0
  {
    cdr << ros_message->k0;
  }

  // Field name: c1
  {
    cdr << ros_message->c1;
  }

  // Field name: c2
  {
    cdr << ros_message->c2;
  }

  // Field name: behavior
  {
    cdr << ros_message->behavior;
  }

  // Field name: creep
  {
    cdr << ros_message->creep;
  }

  // Field name: acc
  {
    cdr << ros_message->acc;
  }

  // Field name: reverse
  {
    cdr << ros_message->reverse;
  }

  // Field name: vehicle_track
  {
    cdr << ros_message->vehicle_track;
  }

  // Field name: transmitted
  {
    cdr << (ros_message->transmitted ? true : false);
  }

  // Field name: aux_transmitted
  {
    cdr << (ros_message->aux_transmitted ? true : false);
  }

  // Field name: theta_end
  {
    cdr << ros_message->theta_end;
  }

  // Field name: k_end
  {
    cdr << ros_message->k_end;
  }

  // Field name: seg_len
  {
    cdr << ros_message->seg_len;
  }

  // Field name: speed_limit
  {
    cdr << ros_message->speed_limit;
  }

  // Field name: max_error
  {
    cdr << ros_message->max_error;
  }

  // Field name: max_smooth
  {
    cdr << ros_message->max_smooth;
  }

  // Field name: max_curv
  {
    cdr << ros_message->max_curv;
  }

  // Field name: possible_points
  {
    cdr << ros_message->possible_points;
  }

  // Field name: exit_segment
  {
    cdr << (ros_message->exit_segment ? true : false);
  }

  return true;
}

static bool _PathPlanning__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning__ros_msg_type * ros_message = static_cast<_PathPlanning__ros_msg_type *>(untyped_ros_message);
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

  // Field name: segment_type
  {
    cdr >> ros_message->segment_type;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: start_speed
  {
    cdr >> ros_message->start_speed;
  }

  // Field name: end_speed
  {
    cdr >> ros_message->end_speed;
  }

  // Field name: startx
  {
    cdr >> ros_message->startx;
  }

  // Field name: starty
  {
    cdr >> ros_message->starty;
  }

  // Field name: endx
  {
    cdr >> ros_message->endx;
  }

  // Field name: endy
  {
    cdr >> ros_message->endy;
  }

  // Field name: theta0
  {
    cdr >> ros_message->theta0;
  }

  // Field name: a1
  {
    cdr >> ros_message->a1;
  }

  // Field name: a2
  {
    cdr >> ros_message->a2;
  }

  // Field name: k0
  {
    cdr >> ros_message->k0;
  }

  // Field name: c1
  {
    cdr >> ros_message->c1;
  }

  // Field name: c2
  {
    cdr >> ros_message->c2;
  }

  // Field name: behavior
  {
    cdr >> ros_message->behavior;
  }

  // Field name: creep
  {
    cdr >> ros_message->creep;
  }

  // Field name: acc
  {
    cdr >> ros_message->acc;
  }

  // Field name: reverse
  {
    cdr >> ros_message->reverse;
  }

  // Field name: vehicle_track
  {
    cdr >> ros_message->vehicle_track;
  }

  // Field name: transmitted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->transmitted = tmp ? true : false;
  }

  // Field name: aux_transmitted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aux_transmitted = tmp ? true : false;
  }

  // Field name: theta_end
  {
    cdr >> ros_message->theta_end;
  }

  // Field name: k_end
  {
    cdr >> ros_message->k_end;
  }

  // Field name: seg_len
  {
    cdr >> ros_message->seg_len;
  }

  // Field name: speed_limit
  {
    cdr >> ros_message->speed_limit;
  }

  // Field name: max_error
  {
    cdr >> ros_message->max_error;
  }

  // Field name: max_smooth
  {
    cdr >> ros_message->max_smooth;
  }

  // Field name: max_curv
  {
    cdr >> ros_message->max_curv;
  }

  // Field name: possible_points
  {
    cdr >> ros_message->possible_points;
  }

  // Field name: exit_segment
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->exit_segment = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marti_nav_msgs
size_t get_serialized_size_marti_nav_msgs__msg__PathPlanning(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning__ros_msg_type * ros_message = static_cast<const _PathPlanning__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name segment_type
  {
    size_t item_size = sizeof(ros_message->segment_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_speed
  {
    size_t item_size = sizeof(ros_message->start_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_speed
  {
    size_t item_size = sizeof(ros_message->end_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name startx
  {
    size_t item_size = sizeof(ros_message->startx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name starty
  {
    size_t item_size = sizeof(ros_message->starty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endx
  {
    size_t item_size = sizeof(ros_message->endx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endy
  {
    size_t item_size = sizeof(ros_message->endy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta0
  {
    size_t item_size = sizeof(ros_message->theta0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a1
  {
    size_t item_size = sizeof(ros_message->a1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a2
  {
    size_t item_size = sizeof(ros_message->a2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k0
  {
    size_t item_size = sizeof(ros_message->k0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c1
  {
    size_t item_size = sizeof(ros_message->c1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c2
  {
    size_t item_size = sizeof(ros_message->c2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name behavior
  {
    size_t item_size = sizeof(ros_message->behavior);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name creep
  {
    size_t item_size = sizeof(ros_message->creep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc
  {
    size_t item_size = sizeof(ros_message->acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reverse
  {
    size_t item_size = sizeof(ros_message->reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_track
  {
    size_t item_size = sizeof(ros_message->vehicle_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmitted
  {
    size_t item_size = sizeof(ros_message->transmitted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_transmitted
  {
    size_t item_size = sizeof(ros_message->aux_transmitted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_end
  {
    size_t item_size = sizeof(ros_message->theta_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_end
  {
    size_t item_size = sizeof(ros_message->k_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_len
  {
    size_t item_size = sizeof(ros_message->seg_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limit
  {
    size_t item_size = sizeof(ros_message->speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_error
  {
    size_t item_size = sizeof(ros_message->max_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_smooth
  {
    size_t item_size = sizeof(ros_message->max_smooth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_curv
  {
    size_t item_size = sizeof(ros_message->max_curv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name possible_points
  {
    size_t item_size = sizeof(ros_message->possible_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exit_segment
  {
    size_t item_size = sizeof(ros_message->exit_segment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathPlanning__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marti_nav_msgs__msg__PathPlanning(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marti_nav_msgs
size_t max_serialized_size_marti_nav_msgs__msg__PathPlanning(
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
  // member: segment_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: startx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: starty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: endx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: endy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: theta0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: a1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: a2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: c1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: c2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: behavior
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: creep
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reverse
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_track
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: transmitted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aux_transmitted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: theta_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: seg_len
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_smooth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_curv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: possible_points
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: exit_segment
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
    using DataType = marti_nav_msgs__msg__PathPlanning;
    is_plain =
      (
      offsetof(DataType, exit_segment) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PathPlanning__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marti_nav_msgs__msg__PathPlanning(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PathPlanning = {
  "marti_nav_msgs::msg",
  "PathPlanning",
  _PathPlanning__cdr_serialize,
  _PathPlanning__cdr_deserialize,
  _PathPlanning__get_serialized_size,
  _PathPlanning__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marti_nav_msgs, msg, PathPlanning)() {
  return &_PathPlanning__type_support;
}

#if defined(__cplusplus)
}
#endif
