// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/RouteArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_ARRAY__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_ARRAY__STRUCT_H_

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
// Member 'routes'
#include "marti_nav_msgs/msg/detail/route__struct.h"
// Member 'properties'
#include "marti_common_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/RouteArray in the package marti_nav_msgs.
/**
  * list of muliple routes, for instance to support multi-lane roads
 */
typedef struct marti_nav_msgs__msg__RouteArray
{
  std_msgs__msg__Header header;
  marti_nav_msgs__msg__Route__Sequence routes;
  /// properties common to all routes
  marti_common_msgs__msg__KeyValue__Sequence properties;
} marti_nav_msgs__msg__RouteArray;

// Struct for a sequence of marti_nav_msgs__msg__RouteArray.
typedef struct marti_nav_msgs__msg__RouteArray__Sequence
{
  marti_nav_msgs__msg__RouteArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__RouteArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_ARRAY__STRUCT_H_
