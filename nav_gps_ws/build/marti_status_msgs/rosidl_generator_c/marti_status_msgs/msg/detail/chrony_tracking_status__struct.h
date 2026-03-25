// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_status_msgs:msg/ChronyTrackingStatus.idl
// generated code does not contain a copyright notice

#ifndef MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__STRUCT_H_
#define MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__STRUCT_H_

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
// Member 'reference'
// Member 'leap_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChronyTrackingStatus in the package marti_status_msgs.
typedef struct marti_status_msgs__msg__ChronyTrackingStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String reference;
  int32_t stratum;
  double system_time_offset;
  double last_offset;
  double rms_offset;
  float frequency_offset;
  float residual_frequency;
  float skew;
  double root_delay;
  double root_dispersion;
  float update_interval;
  rosidl_runtime_c__String leap_status;
} marti_status_msgs__msg__ChronyTrackingStatus;

// Struct for a sequence of marti_status_msgs__msg__ChronyTrackingStatus.
typedef struct marti_status_msgs__msg__ChronyTrackingStatus__Sequence
{
  marti_status_msgs__msg__ChronyTrackingStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_status_msgs__msg__ChronyTrackingStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__STRUCT_H_
