// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_introspection_msgs:msg/ServiceInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__STRUCT_H_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'resolved_name'
// Member 'description'
// Member 'group'
// Member 'message_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ServiceInfo in the package marti_introspection_msgs.
/**
  * This message contains documentation data about a service client/server in a node
 */
typedef struct marti_introspection_msgs__msg__ServiceInfo
{
  /// The internal name of the service
  rosidl_runtime_c__String name;
  /// The external, global name of the service
  rosidl_runtime_c__String resolved_name;
  /// A human readable description of the service and how to use it
  rosidl_runtime_c__String description;
  /// Used to group related components
  rosidl_runtime_c__String group;
  /// The name of the message type
  rosidl_runtime_c__String message_type;
  /// If this is a service server, otherwise it is a service client
  bool server;
  /// Indicates if this is a topic service rather than a true service
  bool topic_service;
} marti_introspection_msgs__msg__ServiceInfo;

// Struct for a sequence of marti_introspection_msgs__msg__ServiceInfo.
typedef struct marti_introspection_msgs__msg__ServiceInfo__Sequence
{
  marti_introspection_msgs__msg__ServiceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_introspection_msgs__msg__ServiceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__STRUCT_H_
