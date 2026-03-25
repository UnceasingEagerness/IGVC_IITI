// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/ObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_

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
// Member 'obstacles'
#include "marti_nav_msgs/msg/detail/obstacle__struct.h"

/// Struct defined in msg/ObstacleArray in the package marti_nav_msgs.
/**
  * This message is used to communicate the position of one or more
  * obstacles.
 */
typedef struct marti_nav_msgs__msg__ObstacleArray
{
  std_msgs__msg__Header header;
  /// The header defines the frame that the obstacles are defined in.
  marti_nav_msgs__msg__Obstacle__Sequence obstacles;
} marti_nav_msgs__msg__ObstacleArray;

// Struct for a sequence of marti_nav_msgs__msg__ObstacleArray.
typedef struct marti_nav_msgs__msg__ObstacleArray__Sequence
{
  marti_nav_msgs__msg__ObstacleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__ObstacleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_
