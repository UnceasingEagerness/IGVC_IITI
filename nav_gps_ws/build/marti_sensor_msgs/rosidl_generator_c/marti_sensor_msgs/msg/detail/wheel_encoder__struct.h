// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/WheelEncoder.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelEncoder in the package marti_sensor_msgs.
/**
  * Frequency from wheel encoder
  *  If directional (below) is True, positive frequency means forward, and
  *   negative frequency means backward.
  *  If directional is False, frequency is non-negative and has no directional
  *   information
 */
typedef struct marti_sensor_msgs__msg__WheelEncoder
{
  double frequency;
  /// True if frequency sign is significant; false else
  bool directional;
  /// ID of the wheel with which this data is associated
  uint8_t id;
} marti_sensor_msgs__msg__WheelEncoder;

// Struct for a sequence of marti_sensor_msgs__msg__WheelEncoder.
typedef struct marti_sensor_msgs__msg__WheelEncoder__Sequence
{
  marti_sensor_msgs__msg__WheelEncoder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__WheelEncoder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_H_
