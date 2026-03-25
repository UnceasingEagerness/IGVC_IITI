// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_common_msgs:msg/HealthStatus.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__STRUCT_H_
#define MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
/**
  * Initialized with no issues
 */
enum
{
  marti_common_msgs__msg__HealthStatus__OK = 0
};

/// Constant 'WARN'.
/**
  * Component is operating but the data may be inaccurate or there may be minor problems
 */
enum
{
  marti_common_msgs__msg__HealthStatus__WARN = 1
};

/// Constant 'ERROR'.
/**
  * Component has encountered a serious problem and cannot or will not operate
 */
enum
{
  marti_common_msgs__msg__HealthStatus__ERROR = 2
};

/// Constant 'STALE'.
/**
  * Uninitialized or cannot determine status
 */
enum
{
  marti_common_msgs__msg__HealthStatus__STALE = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HealthStatus in the package marti_common_msgs.
/**
  * This message is intended for use as a light-weight machine status indicator for robot consumption
  * whereas Diagnostics are for human consumption
 */
typedef struct marti_common_msgs__msg__HealthStatus
{
  std_msgs__msg__Header header;
  int8_t status;
  rosidl_runtime_c__String message;
} marti_common_msgs__msg__HealthStatus;

// Struct for a sequence of marti_common_msgs__msg__HealthStatus.
typedef struct marti_common_msgs__msg__HealthStatus__Sequence
{
  marti_common_msgs__msg__HealthStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_common_msgs__msg__HealthStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__HEALTH_STATUS__STRUCT_H_
