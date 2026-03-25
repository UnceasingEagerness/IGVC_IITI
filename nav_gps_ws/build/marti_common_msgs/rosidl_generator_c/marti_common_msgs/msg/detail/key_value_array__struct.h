// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_common_msgs:msg/KeyValueArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__STRUCT_H_
#define MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__STRUCT_H_

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
// Member 'items'
#include "marti_common_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/KeyValueArray in the package marti_common_msgs.
/**
  * A generic message for publishing a list of key value pairs directly.
 */
typedef struct marti_common_msgs__msg__KeyValueArray
{
  std_msgs__msg__Header header;
  marti_common_msgs__msg__KeyValue__Sequence items;
} marti_common_msgs__msg__KeyValueArray;

// Struct for a sequence of marti_common_msgs__msg__KeyValueArray.
typedef struct marti_common_msgs__msg__KeyValueArray__Sequence
{
  marti_common_msgs__msg__KeyValueArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_common_msgs__msg__KeyValueArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__STRUCT_H_
