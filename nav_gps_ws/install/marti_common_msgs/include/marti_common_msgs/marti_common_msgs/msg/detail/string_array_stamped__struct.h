// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_common_msgs:msg/StringArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__STRUCT_H_
#define MARTI_COMMON_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__STRUCT_H_

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
// Member 'strings'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StringArrayStamped in the package marti_common_msgs.
/**
  * A generic message for publishing a list of strings.
 */
typedef struct marti_common_msgs__msg__StringArrayStamped
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence strings;
} marti_common_msgs__msg__StringArrayStamped;

// Struct for a sequence of marti_common_msgs__msg__StringArrayStamped.
typedef struct marti_common_msgs__msg__StringArrayStamped__Sequence
{
  marti_common_msgs__msg__StringArrayStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_common_msgs__msg__StringArrayStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__STRUCT_H_
