// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_dbw_msgs:msg/PrimaryControl.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__STRUCT_H_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__STRUCT_H_

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

/// Struct defined in msg/PrimaryControl in the package marti_dbw_msgs.
typedef struct marti_dbw_msgs__msg__PrimaryControl
{
  std_msgs__msg__Header header;
  bool active;
  bool estop;
  float steering_command;
  /// Steering command in range
  float throttle_command;
  /// Throttle command in range
  float brake_command;
} marti_dbw_msgs__msg__PrimaryControl;

// Struct for a sequence of marti_dbw_msgs__msg__PrimaryControl.
typedef struct marti_dbw_msgs__msg__PrimaryControl__Sequence
{
  marti_dbw_msgs__msg__PrimaryControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_dbw_msgs__msg__PrimaryControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__STRUCT_H_
