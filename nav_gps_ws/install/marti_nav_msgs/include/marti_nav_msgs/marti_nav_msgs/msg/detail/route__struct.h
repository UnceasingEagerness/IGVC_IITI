// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_

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
// Member 'route_points'
#include "marti_nav_msgs/msg/detail/route_point__struct.h"
// Member 'properties'
#include "marti_common_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/Route in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__Route
{
  std_msgs__msg__Header header;
  marti_nav_msgs__msg__RoutePoint__Sequence route_points;
  marti_common_msgs__msg__KeyValue__Sequence properties;
} marti_nav_msgs__msg__Route;

// Struct for a sequence of marti_nav_msgs__msg__Route.
typedef struct marti_nav_msgs__msg__Route__Sequence
{
  marti_nav_msgs__msg__Route * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__Route__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
