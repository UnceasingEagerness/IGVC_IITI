// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/Exposure.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__EXPOSURE__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__EXPOSURE__STRUCT_H_

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

/// Struct defined in msg/Exposure in the package marti_sensor_msgs.
/**
  * This message contains an an exposure value along with a
  * message header.  This message is to keep the same format
  * that we have with Image and CameraInfo.
 */
typedef struct marti_sensor_msgs__msg__Exposure
{
  /// Header timestamp is the time when all
  /// images were acquired and synchronized.
  /// Header frame_id is the count of these
  /// messages sent since the start.
  std_msgs__msg__Header header;
  /// Exposure value
  uint64_t value;
} marti_sensor_msgs__msg__Exposure;

// Struct for a sequence of marti_sensor_msgs__msg__Exposure.
typedef struct marti_sensor_msgs__msg__Exposure__Sequence
{
  marti_sensor_msgs__msg__Exposure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__Exposure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__EXPOSURE__STRUCT_H_
