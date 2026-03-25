// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_introspection_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_H_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_H_

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
// Member 'location'
// Member 'nodelet_manager'
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'topics'
#include "marti_introspection_msgs/msg/detail/topic_info__struct.h"
// Member 'parameters'
#include "marti_introspection_msgs/msg/detail/param_info__struct.h"
// Member 'services'
#include "marti_introspection_msgs/msg/detail/service_info__struct.h"

/// Struct defined in msg/NodeInfo in the package marti_introspection_msgs.
/**
  * This message contains documentation data about a specific node
 */
typedef struct marti_introspection_msgs__msg__NodeInfo
{
  /// The fully qualified node name
  rosidl_runtime_c__String name;
  /// The location the node handle is constructed
  rosidl_runtime_c__String location;
  /// The name of the nodelet manager this is running in, if any
  rosidl_runtime_c__String nodelet_manager;
  /// A human readable description of the node
  rosidl_runtime_c__String description;
  /// A list of each topic used in the node
  marti_introspection_msgs__msg__TopicInfo__Sequence topics;
  /// A list of each parameter used in the node
  marti_introspection_msgs__msg__ParamInfo__Sequence parameters;
  /// A list of each service used in the node
  marti_introspection_msgs__msg__ServiceInfo__Sequence services;
} marti_introspection_msgs__msg__NodeInfo;

// Struct for a sequence of marti_introspection_msgs__msg__NodeInfo.
typedef struct marti_introspection_msgs__msg__NodeInfo__Sequence
{
  marti_introspection_msgs__msg__NodeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_introspection_msgs__msg__NodeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_H_
