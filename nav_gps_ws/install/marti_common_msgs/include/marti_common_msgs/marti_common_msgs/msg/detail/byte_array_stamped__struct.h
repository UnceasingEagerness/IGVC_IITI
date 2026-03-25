// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_common_msgs:msg/ByteArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__BYTE_ARRAY_STAMPED__STRUCT_H_
#define MARTI_COMMON_MSGS__MSG__DETAIL__BYTE_ARRAY_STAMPED__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ByteArrayStamped in the package marti_common_msgs.
typedef struct marti_common_msgs__msg__ByteArrayStamped
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__octet__Sequence value;
} marti_common_msgs__msg__ByteArrayStamped;

// Struct for a sequence of marti_common_msgs__msg__ByteArrayStamped.
typedef struct marti_common_msgs__msg__ByteArrayStamped__Sequence
{
  marti_common_msgs__msg__ByteArrayStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_common_msgs__msg__ByteArrayStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__BYTE_ARRAY_STAMPED__STRUCT_H_
