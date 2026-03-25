// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_introspection_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_H_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_H_

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

/// Struct defined in msg/TopicInfo in the package marti_introspection_msgs.
/**
  * This message contains documentation data about a topic in a node
 */
typedef struct marti_introspection_msgs__msg__TopicInfo
{
  /// The internal name of the topic
  rosidl_runtime_c__String name;
  /// The external, global name of the topic
  rosidl_runtime_c__String resolved_name;
  /// A human readable description of the topic and how to use it
  rosidl_runtime_c__String description;
  /// Used to group related components
  rosidl_runtime_c__String group;
  /// The name of the message type
  rosidl_runtime_c__String message_type;
  /// If the topic is being advertised, otherwise it is being subscribed to
  bool advertised;
} marti_introspection_msgs__msg__TopicInfo;

// Struct for a sequence of marti_introspection_msgs__msg__TopicInfo.
typedef struct marti_introspection_msgs__msg__TopicInfo__Sequence
{
  marti_introspection_msgs__msg__TopicInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_introspection_msgs__msg__TopicInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_H_
