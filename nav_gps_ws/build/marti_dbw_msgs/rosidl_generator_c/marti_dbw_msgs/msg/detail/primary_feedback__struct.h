// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__STRUCT_H_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__STRUCT_H_

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

/// Struct defined in msg/PrimaryFeedback in the package marti_dbw_msgs.
typedef struct marti_dbw_msgs__msg__PrimaryFeedback
{
  std_msgs__msg__Header header;
  bool present;
  /// Boolean flag indicating that DBW system is present and communicating
  /// properly.  If this is false, none of the remaining data in the
  /// feedback can be considered valid.
  /// Boolean flag indicating that DBW system is in robotic mode.
  bool robotic_mode;
  float steering_command;
  float steering_measure;
  /// The current steering command and measured value of the steering
  /// axies in the range.  Typically 0.0 is full left and 1.0
  /// is full right, but the steering calibration can handle either
  /// direction.
  float throttle_command;
  float throttle_measure;
  /// The current throttle command and measured value of the throttle
  /// control in the range
  float brake_command;
  float brake_measure;
  /// The current throttle command and measured value of the throttle
  /// control in the range
  bool estop_command;
  bool estop_measure;
  bool error_steering;
  bool error_throttle;
  bool error_brake;
  bool error_other;
} marti_dbw_msgs__msg__PrimaryFeedback;

// Struct for a sequence of marti_dbw_msgs__msg__PrimaryFeedback.
typedef struct marti_dbw_msgs__msg__PrimaryFeedback__Sequence
{
  marti_dbw_msgs__msg__PrimaryFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_dbw_msgs__msg__PrimaryFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__STRUCT_H_
