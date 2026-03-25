// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PathPoint in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__PathPoint
{
  double x;
  double y;
  /// In radians
  float yaw;
  /// In m/s
  float speed;
} marti_nav_msgs__msg__PathPoint;

// Struct for a sequence of marti_nav_msgs__msg__PathPoint.
typedef struct marti_nav_msgs__msg__PathPoint__Sequence
{
  marti_nav_msgs__msg__PathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__PathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
