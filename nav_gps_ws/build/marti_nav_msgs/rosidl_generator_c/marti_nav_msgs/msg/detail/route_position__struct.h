// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/RoutePosition.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__STRUCT_H_

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
// Member 'route_id'
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RoutePosition in the package marti_nav_msgs.
/**
  * Position along route
 */
typedef struct marti_nav_msgs__msg__RoutePosition
{
  /// only stamp used
  std_msgs__msg__Header header;
  /// unique ID of the corresponding route
  rosidl_runtime_c__String route_id;
  /// unique ID of nearest point
  rosidl_runtime_c__String id;
  /// forward along route, in meters from point identified by id
  /// field (negative values indicate the distance is backward
  /// along the route)
  float distance;
} marti_nav_msgs__msg__RoutePosition;

// Struct for a sequence of marti_nav_msgs__msg__RoutePosition.
typedef struct marti_nav_msgs__msg__RoutePosition__Sequence
{
  marti_nav_msgs__msg__RoutePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__RoutePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__STRUCT_H_
