// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/RoutePoint.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'properties'
#include "marti_common_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/RoutePoint in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__RoutePoint
{
  geometry_msgs__msg__Pose pose;
  /// unique identifier for this point
  rosidl_runtime_c__String id;
  marti_common_msgs__msg__KeyValue__Sequence properties;
} marti_nav_msgs__msg__RoutePoint;

// Struct for a sequence of marti_nav_msgs__msg__RoutePoint.
typedef struct marti_nav_msgs__msg__RoutePoint__Sequence
{
  marti_nav_msgs__msg__RoutePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__RoutePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POINT__STRUCT_H_
