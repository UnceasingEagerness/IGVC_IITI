// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/Altitude.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_H_

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

/// Struct defined in msg/Altitude in the package marti_sensor_msgs.
/**
  * Altitude estimate for the origin of the frame specified by header.frame_id
 */
typedef struct marti_sensor_msgs__msg__Altitude
{
  std_msgs__msg__Header header;
  /// meters above sea level
  double altitude;
  /// Uncertainty (standard deviation) of the altitude
  double sigma;
} marti_sensor_msgs__msg__Altitude;

// Struct for a sequence of marti_sensor_msgs__msg__Altitude.
typedef struct marti_sensor_msgs__msg__Altitude__Sequence
{
  marti_sensor_msgs__msg__Altitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__Altitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_H_
