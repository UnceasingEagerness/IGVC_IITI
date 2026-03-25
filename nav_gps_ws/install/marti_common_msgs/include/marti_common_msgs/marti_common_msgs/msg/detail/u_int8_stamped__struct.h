// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_common_msgs:msg/UInt8Stamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__U_INT8_STAMPED__STRUCT_H_
#define MARTI_COMMON_MSGS__MSG__DETAIL__U_INT8_STAMPED__STRUCT_H_

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

/// Struct defined in msg/UInt8Stamped in the package marti_common_msgs.
typedef struct marti_common_msgs__msg__UInt8Stamped
{
  std_msgs__msg__Header header;
  uint8_t value;
} marti_common_msgs__msg__UInt8Stamped;

// Struct for a sequence of marti_common_msgs__msg__UInt8Stamped.
typedef struct marti_common_msgs__msg__UInt8Stamped__Sequence
{
  marti_common_msgs__msg__UInt8Stamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_common_msgs__msg__UInt8Stamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__U_INT8_STAMPED__STRUCT_H_
