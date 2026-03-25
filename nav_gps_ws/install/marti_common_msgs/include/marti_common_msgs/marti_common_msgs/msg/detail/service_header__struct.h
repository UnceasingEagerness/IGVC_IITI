// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_common_msgs:msg/ServiceHeader.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__STRUCT_H_
#define MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'sender'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ServiceHeader in the package marti_common_msgs.
/**
  * This message contains all of the data filled in automatically by the service system
  * It is required in each request and response message to be named srv_header
 */
typedef struct marti_common_msgs__msg__ServiceHeader
{
  builtin_interfaces__msg__Time stamp;
  uint32_t sequence;
  rosidl_runtime_c__String sender;
  /// Used to indicate if the service request was successful or not
  bool result;
} marti_common_msgs__msg__ServiceHeader;

// Struct for a sequence of marti_common_msgs__msg__ServiceHeader.
typedef struct marti_common_msgs__msg__ServiceHeader__Sequence
{
  marti_common_msgs__msg__ServiceHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_common_msgs__msg__ServiceHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__STRUCT_H_
