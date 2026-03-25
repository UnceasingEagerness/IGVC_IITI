// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/RouteOffset.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__STRUCT_H_

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
// Member 'relative_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'route_position'
#include "marti_nav_msgs/msg/detail/route_position__struct.h"

/// Struct defined in msg/RouteOffset in the package marti_nav_msgs.
/**
  * Gives a position and orientation relative to a position on a route
 */
typedef struct marti_nav_msgs__msg__RouteOffset
{
  /// only stamp used
  std_msgs__msg__Header header;
  /// pose relative to position on route
  geometry_msgs__msg__Pose relative_pose;
  /// position on route
  marti_nav_msgs__msg__RoutePosition route_position;
} marti_nav_msgs__msg__RouteOffset;

// Struct for a sequence of marti_nav_msgs__msg__RouteOffset.
typedef struct marti_nav_msgs__msg__RouteOffset__Sequence
{
  marti_nav_msgs__msg__RouteOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__RouteOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__STRUCT_H_
