// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/Gyro.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__STRUCT_H_

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

/// Struct defined in msg/Gyro in the package marti_sensor_msgs.
/**
  * Single axis gyro reading.
 */
typedef struct marti_sensor_msgs__msg__Gyro
{
  /// The time and location of the measurement.
  /// The x-axis in the sensor space is interpreted as the
  /// axis of rotation.
  std_msgs__msg__Header header;
  /// Angular rate measurement in radians / sec
  double angular_rate;
  /// 0 is interpreted as variance unknown
  double variance;
} marti_sensor_msgs__msg__Gyro;

// Struct for a sequence of marti_sensor_msgs__msg__Gyro.
typedef struct marti_sensor_msgs__msg__Gyro__Sequence
{
  marti_sensor_msgs__msg__Gyro * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__Gyro__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__STRUCT_H_
