// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
// generated code does not contain a copyright notice
#include "marti_dbw_msgs/msg/detail/primary_feedback__rosidl_typesupport_fastrtps_cpp.hpp"
#include "marti_dbw_msgs/msg/detail/primary_feedback__struct.hpp"

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


namespace marti_dbw_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_dbw_msgs
cdr_serialize(
  const marti_dbw_msgs::msg::PrimaryFeedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: present
  cdr << (ros_message.present ? true : false);
  // Member: robotic_mode
  cdr << (ros_message.robotic_mode ? true : false);
  // Member: steering_command
  cdr << ros_message.steering_command;
  // Member: steering_measure
  cdr << ros_message.steering_measure;
  // Member: throttle_command
  cdr << ros_message.throttle_command;
  // Member: throttle_measure
  cdr << ros_message.throttle_measure;
  // Member: brake_command
  cdr << ros_message.brake_command;
  // Member: brake_measure
  cdr << ros_message.brake_measure;
  // Member: estop_command
  cdr << (ros_message.estop_command ? true : false);
  // Member: estop_measure
  cdr << (ros_message.estop_measure ? true : false);
  // Member: error_steering
  cdr << (ros_message.error_steering ? true : false);
  // Member: error_throttle
  cdr << (ros_message.error_throttle ? true : false);
  // Member: error_brake
  cdr << (ros_message.error_brake ? true : false);
  // Member: error_other
  cdr << (ros_message.error_other ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  marti_dbw_msgs::msg::PrimaryFeedback & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.present = tmp ? true : false;
  }

  // Member: robotic_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.robotic_mode = tmp ? true : false;
  }

  // Member: steering_command
  cdr >> ros_message.steering_command;

  // Member: steering_measure
  cdr >> ros_message.steering_measure;

  // Member: throttle_command
  cdr >> ros_message.throttle_command;

  // Member: throttle_measure
  cdr >> ros_message.throttle_measure;

  // Member: brake_command
  cdr >> ros_message.brake_command;

  // Member: brake_measure
  cdr >> ros_message.brake_measure;

  // Member: estop_command
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.estop_command = tmp ? true : false;
  }

  // Member: estop_measure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.estop_measure = tmp ? true : false;
  }

  // Member: error_steering
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.error_steering = tmp ? true : false;
  }

  // Member: error_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.error_throttle = tmp ? true : false;
  }

  // Member: error_brake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.error_brake = tmp ? true : false;
  }

  // Member: error_other
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.error_other = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_dbw_msgs
get_serialized_size(
  const marti_dbw_msgs::msg::PrimaryFeedback & ros_message,
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
  // Member: present
  {
    size_t item_size = sizeof(ros_message.present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robotic_mode
  {
    size_t item_size = sizeof(ros_message.robotic_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_command
  {
    size_t item_size = sizeof(ros_message.steering_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_measure
  {
    size_t item_size = sizeof(ros_message.steering_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_command
  {
    size_t item_size = sizeof(ros_message.throttle_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_measure
  {
    size_t item_size = sizeof(ros_message.throttle_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_command
  {
    size_t item_size = sizeof(ros_message.brake_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_measure
  {
    size_t item_size = sizeof(ros_message.brake_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop_command
  {
    size_t item_size = sizeof(ros_message.estop_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop_measure
  {
    size_t item_size = sizeof(ros_message.estop_measure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_steering
  {
    size_t item_size = sizeof(ros_message.error_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_throttle
  {
    size_t item_size = sizeof(ros_message.error_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_brake
  {
    size_t item_size = sizeof(ros_message.error_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_other
  {
    size_t item_size = sizeof(ros_message.error_other);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_dbw_msgs
max_serialized_size_PrimaryFeedback(
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

  // Member: present
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robotic_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steering_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_measure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_measure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_measure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: estop_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: estop_measure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_steering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_other
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
    using DataType = marti_dbw_msgs::msg::PrimaryFeedback;
    is_plain =
      (
      offsetof(DataType, error_other) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PrimaryFeedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const marti_dbw_msgs::msg::PrimaryFeedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PrimaryFeedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<marti_dbw_msgs::msg::PrimaryFeedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PrimaryFeedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const marti_dbw_msgs::msg::PrimaryFeedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PrimaryFeedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PrimaryFeedback(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PrimaryFeedback__callbacks = {
  "marti_dbw_msgs::msg",
  "PrimaryFeedback",
  _PrimaryFeedback__cdr_serialize,
  _PrimaryFeedback__cdr_deserialize,
  _PrimaryFeedback__get_serialized_size,
  _PrimaryFeedback__max_serialized_size
};

static rosidl_message_type_support_t _PrimaryFeedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PrimaryFeedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace marti_dbw_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_marti_dbw_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_dbw_msgs::msg::PrimaryFeedback>()
{
  return &marti_dbw_msgs::msg::typesupport_fastrtps_cpp::_PrimaryFeedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marti_dbw_msgs, msg, PrimaryFeedback)() {
  return &marti_dbw_msgs::msg::typesupport_fastrtps_cpp::_PrimaryFeedback__handle;
}

#ifdef __cplusplus
}
#endif
