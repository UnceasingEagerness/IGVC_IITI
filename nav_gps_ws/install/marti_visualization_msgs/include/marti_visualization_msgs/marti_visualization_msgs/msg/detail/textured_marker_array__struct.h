// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__STRUCT_H_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'markers'
#include "marti_visualization_msgs/msg/detail/textured_marker__struct.h"

/// Struct defined in msg/TexturedMarkerArray in the package marti_visualization_msgs.
typedef struct marti_visualization_msgs__msg__TexturedMarkerArray
{
  marti_visualization_msgs__msg__TexturedMarker__Sequence markers;
} marti_visualization_msgs__msg__TexturedMarkerArray;

// Struct for a sequence of marti_visualization_msgs__msg__TexturedMarkerArray.
typedef struct marti_visualization_msgs__msg__TexturedMarkerArray__Sequence
{
  marti_visualization_msgs__msg__TexturedMarkerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_visualization_msgs__msg__TexturedMarkerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__STRUCT_H_
