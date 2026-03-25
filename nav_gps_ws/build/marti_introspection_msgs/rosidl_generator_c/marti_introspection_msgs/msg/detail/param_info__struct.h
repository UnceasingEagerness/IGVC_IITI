// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_introspection_msgs:msg/ParamInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__STRUCT_H_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_XMLRPC'.
enum
{
  marti_introspection_msgs__msg__ParamInfo__TYPE_XMLRPC = 0
};

/// Constant 'TYPE_DOUBLE'.
enum
{
  marti_introspection_msgs__msg__ParamInfo__TYPE_DOUBLE = 1
};

/// Constant 'TYPE_STRING'.
enum
{
  marti_introspection_msgs__msg__ParamInfo__TYPE_STRING = 2
};

/// Constant 'TYPE_INT'.
enum
{
  marti_introspection_msgs__msg__ParamInfo__TYPE_INT = 3
};

/// Constant 'TYPE_FLOAT'.
enum
{
  marti_introspection_msgs__msg__ParamInfo__TYPE_FLOAT = 4
};

/// Constant 'TYPE_BOOL'.
enum
{
  marti_introspection_msgs__msg__ParamInfo__TYPE_BOOL = 5
};

// Include directives for member types
// Member 'name'
// Member 'resolved_name'
// Member 'description'
// Member 'group'
// Member 'default_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ParamInfo in the package marti_introspection_msgs.
/**
  * This message contains documentation data about a parameter in a node
 */
typedef struct marti_introspection_msgs__msg__ParamInfo
{
  /// The internal name of the parameter
  rosidl_runtime_c__String name;
  /// The external, global name of the parameter
  rosidl_runtime_c__String resolved_name;
  /// A description of the parameter and what it does
  rosidl_runtime_c__String description;
  /// Used to group related components
  rosidl_runtime_c__String group;
  /// The type of parameter using the enums above
  uint8_t type;
  /// If the parameter is dynamic or not
  bool dynamic;
  /// Default values
  int32_t default_int;
  float default_float;
  double default_double;
  rosidl_runtime_c__String default_string;
  bool default_bool;
  /// Max and minimum values (may have rounding issues)
  /// Unused if both are 0.0
  double max_value;
  double min_value;
} marti_introspection_msgs__msg__ParamInfo;

// Struct for a sequence of marti_introspection_msgs__msg__ParamInfo.
typedef struct marti_introspection_msgs__msg__ParamInfo__Sequence
{
  marti_introspection_msgs__msg__ParamInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_introspection_msgs__msg__ParamInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__STRUCT_H_
