// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BACKWARD'.
enum
{
  marti_sensor_msgs__msg__Direction__BACKWARD = -1
};

/// Constant 'ZERO'.
enum
{
  marti_sensor_msgs__msg__Direction__ZERO = 0
};

/// Constant 'FORWARD'.
enum
{
  marti_sensor_msgs__msg__Direction__FORWARD = 1
};

/// Constant 'UNKNOWN'.
/**
  * Indicates either unknown motion or motion that isn't clear if it is forwards
  * or backwards such as turning in place
 */
enum
{
  marti_sensor_msgs__msg__Direction__UNKNOWN = 127
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Direction in the package marti_sensor_msgs.
/**
  * Direction of vehicle motion
  *
  * When combined with an unsigned speed, this message can be used to determine
  * signed vehicle speed
 */
typedef struct marti_sensor_msgs__msg__Direction
{
  /// The time and location of the measurement.
  /// The x-axis in the sensor space is interpreted as the
  /// axis of linear motion.
  std_msgs__msg__Header header;
  /// The direction of motion. Positive is forward, negative is
  /// backward, and 0 is stopped.
  int8_t direction;
} marti_sensor_msgs__msg__Direction;

// Struct for a sequence of marti_sensor_msgs__msg__Direction.
typedef struct marti_sensor_msgs__msg__Direction__Sequence
{
  marti_sensor_msgs__msg__Direction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__Direction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_
