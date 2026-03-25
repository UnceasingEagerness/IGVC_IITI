// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_

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

/// Struct defined in msg/Velocity in the package marti_sensor_msgs.
/**
  * Single axis linear velocity reading.
 */
typedef struct marti_sensor_msgs__msg__Velocity
{
  /// The time and location of the measurement.
  /// The x-axis in the sensor space is interpreted as the
  /// axis of linear motion.
  std_msgs__msg__Header header;
  /// Velocity measurement in meters / sec
  double velocity;
  /// 0 is interpreted as variance unknown
  double variance;
} marti_sensor_msgs__msg__Velocity;

// Struct for a sequence of marti_sensor_msgs__msg__Velocity.
typedef struct marti_sensor_msgs__msg__Velocity__Sequence
{
  marti_sensor_msgs__msg__Velocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__Velocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_
