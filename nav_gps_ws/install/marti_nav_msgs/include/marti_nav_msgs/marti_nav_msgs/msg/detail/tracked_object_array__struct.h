// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_H_

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
// Member 'objects'
#include "marti_nav_msgs/msg/detail/tracked_object__struct.h"

/// Struct defined in msg/TrackedObjectArray in the package marti_nav_msgs.
/**
  * This message is used to communicate tracking data for one or more objects.
 */
typedef struct marti_nav_msgs__msg__TrackedObjectArray
{
  /// The frame that the objects are defined in.
  std_msgs__msg__Header header;
  /// The tracked objects.
  marti_nav_msgs__msg__TrackedObject__Sequence objects;
} marti_nav_msgs__msg__TrackedObjectArray;

// Struct for a sequence of marti_nav_msgs__msg__TrackedObjectArray.
typedef struct marti_nav_msgs__msg__TrackedObjectArray__Sequence
{
  marti_nav_msgs__msg__TrackedObjectArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__TrackedObjectArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_H_
