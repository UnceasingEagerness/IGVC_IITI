// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH__STRUCT_H_

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
// Member 'points'
#include "marti_nav_msgs/msg/detail/path_point__struct.h"

/// Struct defined in msg/Path in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__Path
{
  std_msgs__msg__Header header;
  marti_nav_msgs__msg__PathPoint__Sequence points;
  bool in_reverse;
} marti_nav_msgs__msg__Path;

// Struct for a sequence of marti_nav_msgs__msg__Path.
typedef struct marti_nav_msgs__msg__Path__Sequence
{
  marti_nav_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH__STRUCT_H_
