// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:srv/GetRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE__STRUCT_H_
#define MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'guid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRoute in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__GetRoute_Request
{
  /// GUID of route to retrieve, as 32 hex digits
  rosidl_runtime_c__String guid;
} marti_nav_msgs__srv__GetRoute_Request;

// Struct for a sequence of marti_nav_msgs__srv__GetRoute_Request.
typedef struct marti_nav_msgs__srv__GetRoute_Request__Sequence
{
  marti_nav_msgs__srv__GetRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__GetRoute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'route'
#include "marti_nav_msgs/msg/detail/route__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRoute in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__GetRoute_Response
{
  marti_nav_msgs__msg__Route route;
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} marti_nav_msgs__srv__GetRoute_Response;

// Struct for a sequence of marti_nav_msgs__srv__GetRoute_Response.
typedef struct marti_nav_msgs__srv__GetRoute_Response__Sequence
{
  marti_nav_msgs__srv__GetRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__GetRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE__STRUCT_H_
