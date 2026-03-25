// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_common_msgs:msg/DurationStamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__DURATION_STAMPED__STRUCT_H_
#define MARTI_COMMON_MSGS__MSG__DETAIL__DURATION_STAMPED__STRUCT_H_

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
// Member 'value'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/DurationStamped in the package marti_common_msgs.
typedef struct marti_common_msgs__msg__DurationStamped
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Duration value;
} marti_common_msgs__msg__DurationStamped;

// Struct for a sequence of marti_common_msgs__msg__DurationStamped.
typedef struct marti_common_msgs__msg__DurationStamped__Sequence
{
  marti_common_msgs__msg__DurationStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_common_msgs__msg__DurationStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__DURATION_STAMPED__STRUCT_H_
