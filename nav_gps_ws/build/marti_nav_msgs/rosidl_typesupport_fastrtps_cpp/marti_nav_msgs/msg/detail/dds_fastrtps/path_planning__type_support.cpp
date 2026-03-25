// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from marti_nav_msgs:msg/PathPlanning.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/path_planning__rosidl_typesupport_fastrtps_cpp.hpp"
#include "marti_nav_msgs/msg/detail/path_planning__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace marti_nav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_nav_msgs
cdr_serialize(
  const marti_nav_msgs::msg::PathPlanning & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: segment_type
  cdr << ros_message.segment_type;
  // Member: length
  cdr << ros_message.length;
  // Member: start_speed
  cdr << ros_message.start_speed;
  // Member: end_speed
  cdr << ros_message.end_speed;
  // Member: startx
  cdr << ros_message.startx;
  // Member: starty
  cdr << ros_message.starty;
  // Member: endx
  cdr << ros_message.endx;
  // Member: endy
  cdr << ros_message.endy;
  // Member: theta0
  cdr << ros_message.theta0;
  // Member: a1
  cdr << ros_message.a1;
  // Member: a2
  cdr << ros_message.a2;
  // Member: k0
  cdr << ros_message.k0;
  // Member: c1
  cdr << ros_message.c1;
  // Member: c2
  cdr << ros_message.c2;
  // Member: behavior
  cdr << ros_message.behavior;
  // Member: creep
  cdr << ros_message.creep;
  // Member: acc
  cdr << ros_message.acc;
  // Member: reverse
  cdr << ros_message.reverse;
  // Member: vehicle_track
  cdr << ros_message.vehicle_track;
  // Member: transmitted
  cdr << (ros_message.transmitted ? true : false);
  // Member: aux_transmitted
  cdr << (ros_message.aux_transmitted ? true : false);
  // Member: theta_end
  cdr << ros_message.theta_end;
  // Member: k_end
  cdr << ros_message.k_end;
  // Member: seg_len
  cdr << ros_message.seg_len;
  // Member: speed_limit
  cdr << ros_message.speed_limit;
  // Member: max_error
  cdr << ros_message.max_error;
  // Member: max_smooth
  cdr << ros_message.max_smooth;
  // Member: max_curv
  cdr << ros_message.max_curv;
  // Member: possible_points
  cdr << ros_message.possible_points;
  // Member: exit_segment
  cdr << (ros_message.exit_segment ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  marti_nav_msgs::msg::PathPlanning & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: segment_type
  cdr >> ros_message.segment_type;

  // Member: length
  cdr >> ros_message.length;

  // Member: start_speed
  cdr >> ros_message.start_speed;

  // Member: end_speed
  cdr >> ros_message.end_speed;

  // Member: startx
  cdr >> ros_message.startx;

  // Member: starty
  cdr >> ros_message.starty;

  // Member: endx
  cdr >> ros_message.endx;

  // Member: endy
  cdr >> ros_message.endy;

  // Member: theta0
  cdr >> ros_message.theta0;

  // Member: a1
  cdr >> ros_message.a1;

  // Member: a2
  cdr >> ros_message.a2;

  // Member: k0
  cdr >> ros_message.k0;

  // Member: c1
  cdr >> ros_message.c1;

  // Member: c2
  cdr >> ros_message.c2;

  // Member: behavior
  cdr >> ros_message.behavior;

  // Member: creep
  cdr >> ros_message.creep;

  // Member: acc
  cdr >> ros_message.acc;

  // Member: reverse
  cdr >> ros_message.reverse;

  // Member: vehicle_track
  cdr >> ros_message.vehicle_track;

  // Member: transmitted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.transmitted = tmp ? true : false;
  }

  // Member: aux_transmitted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aux_transmitted = tmp ? true : false;
  }

  // Member: theta_end
  cdr >> ros_message.theta_end;

  // Member: k_end
  cdr >> ros_message.k_end;

  // Member: seg_len
  cdr >> ros_message.seg_len;

  // Member: speed_limit
  cdr >> ros_message.speed_limit;

  // Member: max_error
  cdr >> ros_message.max_error;

  // Member: max_smooth
  cdr >> ros_message.max_smooth;

  // Member: max_curv
  cdr >> ros_message.max_curv;

  // Member: possible_points
  cdr >> ros_message.possible_points;

  // Member: exit_segment
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.exit_segment = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_nav_msgs
get_serialized_size(
  const marti_nav_msgs::msg::PathPlanning & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: segment_type
  {
    size_t item_size = sizeof(ros_message.segment_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_speed
  {
    size_t item_size = sizeof(ros_message.start_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_speed
  {
    size_t item_size = sizeof(ros_message.end_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: startx
  {
    size_t item_size = sizeof(ros_message.startx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: starty
  {
    size_t item_size = sizeof(ros_message.starty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: endx
  {
    size_t item_size = sizeof(ros_message.endx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: endy
  {
    size_t item_size = sizeof(ros_message.endy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta0
  {
    size_t item_size = sizeof(ros_message.theta0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a1
  {
    size_t item_size = sizeof(ros_message.a1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a2
  {
    size_t item_size = sizeof(ros_message.a2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k0
  {
    size_t item_size = sizeof(ros_message.k0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c1
  {
    size_t item_size = sizeof(ros_message.c1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c2
  {
    size_t item_size = sizeof(ros_message.c2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: behavior
  {
    size_t item_size = sizeof(ros_message.behavior);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: creep
  {
    size_t item_size = sizeof(ros_message.creep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc
  {
    size_t item_size = sizeof(ros_message.acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reverse
  {
    size_t item_size = sizeof(ros_message.reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_track
  {
    size_t item_size = sizeof(ros_message.vehicle_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmitted
  {
    size_t item_size = sizeof(ros_message.transmitted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux_transmitted
  {
    size_t item_size = sizeof(ros_message.aux_transmitted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_end
  {
    size_t item_size = sizeof(ros_message.theta_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_end
  {
    size_t item_size = sizeof(ros_message.k_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seg_len
  {
    size_t item_size = sizeof(ros_message.seg_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit
  {
    size_t item_size = sizeof(ros_message.speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_error
  {
    size_t item_size = sizeof(ros_message.max_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_smooth
  {
    size_t item_size = sizeof(ros_message.max_smooth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_curv
  {
    size_t item_size = sizeof(ros_message.max_curv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: possible_points
  {
    size_t item_size = sizeof(ros_message.possible_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exit_segment
  {
    size_t item_size = sizeof(ros_message.exit_segment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_nav_msgs
max_serialized_size_PathPlanning(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: segment_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: start_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: end_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: startx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: starty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: endx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: endy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: theta0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: a1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: a2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: c1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: c2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: behavior
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: creep
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reverse
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_track
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: transmitted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aux_transmitted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: theta_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: seg_len
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_smooth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_curv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: possible_points
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: exit_segment
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
    using DataType = marti_nav_msgs::msg::PathPlanning;
    is_plain =
      (
      offsetof(DataType, exit_segment) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PathPlanning__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const marti_nav_msgs::msg::PathPlanning *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<marti_nav_msgs::msg::PathPlanning *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const marti_nav_msgs::msg::PathPlanning *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PathPlanning(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PathPlanning__callbacks = {
  "marti_nav_msgs::msg",
  "PathPlanning",
  _PathPlanning__cdr_serialize,
  _PathPlanning__cdr_deserialize,
  _PathPlanning__get_serialized_size,
  _PathPlanning__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace marti_nav_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_nav_msgs::msg::PathPlanning>()
{
  return &marti_nav_msgs::msg::typesupport_fastrtps_cpp::_PathPlanning__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marti_nav_msgs, msg, PathPlanning)() {
  return &marti_nav_msgs::msg::typesupport_fastrtps_cpp::_PathPlanning__handle;
}

#ifdef __cplusplus
}
#endif
