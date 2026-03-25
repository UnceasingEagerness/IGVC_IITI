// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/GridMap.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__STRUCT_H_

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
// Member 'top_left'
// Member 'top_right'
// Member 'bottom_right'
// Member 'bottom_left'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'map_names'
#include "rosidl_runtime_c/string.h"
// Member 'map_data'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/GridMap in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__GridMap
{
  std_msgs__msg__Header header;
  /// Map extents in the header frame.
  geometry_msgs__msg__Point top_left;
  geometry_msgs__msg__Point top_right;
  geometry_msgs__msg__Point bottom_right;
  geometry_msgs__msg__Point bottom_left;
  /// Map data layers
  rosidl_runtime_c__String__Sequence map_names;
  sensor_msgs__msg__Image__Sequence map_data;
} marti_nav_msgs__msg__GridMap;

// Struct for a sequence of marti_nav_msgs__msg__GridMap.
typedef struct marti_nav_msgs__msg__GridMap__Sequence
{
  marti_nav_msgs__msg__GridMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__GridMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__STRUCT_H_
