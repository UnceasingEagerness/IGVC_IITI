// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/RouteSpeedArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__STRUCT_H_

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
// Member 'speeds'
#include "marti_nav_msgs/msg/detail/route_speed__struct.h"

/// Struct defined in msg/RouteSpeedArray in the package marti_nav_msgs.
/**
  * List of target speeds along a route.
 */
typedef struct marti_nav_msgs__msg__RouteSpeedArray
{
  /// only stamp used
  std_msgs__msg__Header header;
  marti_nav_msgs__msg__RouteSpeed__Sequence speeds;
} marti_nav_msgs__msg__RouteSpeedArray;

// Struct for a sequence of marti_nav_msgs__msg__RouteSpeedArray.
typedef struct marti_nav_msgs__msg__RouteSpeedArray__Sequence
{
  marti_nav_msgs__msg__RouteSpeedArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__RouteSpeedArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_SPEED_ARRAY__STRUCT_H_
