// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/WheelEncoderSet.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__STRUCT_H_

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
// Member 'encoders'
#include "marti_sensor_msgs/msg/detail/wheel_encoder__struct.h"

/// Struct defined in msg/WheelEncoderSet in the package marti_sensor_msgs.
typedef struct marti_sensor_msgs__msg__WheelEncoderSet
{
  std_msgs__msg__Header header;
  marti_sensor_msgs__msg__WheelEncoder__Sequence encoders;
} marti_sensor_msgs__msg__WheelEncoderSet;

// Struct for a sequence of marti_sensor_msgs__msg__WheelEncoderSet.
typedef struct marti_sensor_msgs__msg__WheelEncoderSet__Sequence
{
  marti_sensor_msgs__msg__WheelEncoderSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__WheelEncoderSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__STRUCT_H_
