// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_

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
// Member 'startstop'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Command in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__Command
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence startstop;
} marti_nav_msgs__msg__Command;

// Struct for a sequence of marti_nav_msgs__msg__Command.
typedef struct marti_nav_msgs__msg__Command__Sequence
{
  marti_nav_msgs__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
