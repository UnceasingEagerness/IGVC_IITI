// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_perception_msgs:msg/PedestrianImageID.idl
// generated code does not contain a copyright notice

#ifndef MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__STRUCT_H_
#define MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__STRUCT_H_

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

/// Struct defined in msg/PedestrianImageID in the package marti_perception_msgs.
typedef struct marti_perception_msgs__msg__PedestrianImageID
{
  std_msgs__msg__Header header;
  int32_t pixel_x;
  int32_t pixel_y;
  /// in pixels
  int32_t image_width;
  /// in pixels
  int32_t image_height;
} marti_perception_msgs__msg__PedestrianImageID;

// Struct for a sequence of marti_perception_msgs__msg__PedestrianImageID.
typedef struct marti_perception_msgs__msg__PedestrianImageID__Sequence
{
  marti_perception_msgs__msg__PedestrianImageID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_perception_msgs__msg__PedestrianImageID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__STRUCT_H_
