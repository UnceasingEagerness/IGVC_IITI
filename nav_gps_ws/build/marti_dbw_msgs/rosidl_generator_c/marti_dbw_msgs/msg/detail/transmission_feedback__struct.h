// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_dbw_msgs:msg/TransmissionFeedback.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__STRUCT_H_
#define MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'current_range'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TransmissionFeedback in the package marti_dbw_msgs.
typedef struct marti_dbw_msgs__msg__TransmissionFeedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String current_range;
  /// This is false during shifting when the actuator is moving or
  /// settling into the final position.
  bool stable;
  /// This is true when the vehicle is in a reversing gear.
  bool reverse;
  /// This is true when the vehicle is in a forward gear.
  bool forward;
} marti_dbw_msgs__msg__TransmissionFeedback;

// Struct for a sequence of marti_dbw_msgs__msg__TransmissionFeedback.
typedef struct marti_dbw_msgs__msg__TransmissionFeedback__Sequence
{
  marti_dbw_msgs__msg__TransmissionFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_dbw_msgs__msg__TransmissionFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__STRUCT_H_
