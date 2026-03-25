// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/DioPortState.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_PORT_STATE__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_PORT_STATE__STRUCT_H_

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

/// Struct defined in msg/DioPortState in the package marti_sensor_msgs.
/**
  * Message containing the value of a digital i/o port.  This is used by
  * the rtd_dm7820 driver to send digital input changes and accept
  * digital output commands.
 */
typedef struct marti_sensor_msgs__msg__DioPortState
{
  std_msgs__msg__Header header;
  /// header contains the time that the event occurred.
  uint64_t value;
} marti_sensor_msgs__msg__DioPortState;

// Struct for a sequence of marti_sensor_msgs__msg__DioPortState.
typedef struct marti_sensor_msgs__msg__DioPortState__Sequence
{
  marti_sensor_msgs__msg__DioPortState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__DioPortState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_PORT_STATE__STRUCT_H_
