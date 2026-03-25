// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:srv/GetRouteList.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE_LIST__STRUCT_H_
#define MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRouteList in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__GetRouteList_Request
{
  uint8_t structure_needs_at_least_one_member;
} marti_nav_msgs__srv__GetRouteList_Request;

// Struct for a sequence of marti_nav_msgs__srv__GetRouteList_Request.
typedef struct marti_nav_msgs__srv__GetRouteList_Request__Sequence
{
  marti_nav_msgs__srv__GetRouteList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__GetRouteList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'routes'
#include "marti_nav_msgs/msg/detail/route__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRouteList in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__GetRouteList_Response
{
  marti_nav_msgs__msg__Route__Sequence routes;
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} marti_nav_msgs__srv__GetRouteList_Response;

// Struct for a sequence of marti_nav_msgs__srv__GetRouteList_Response.
typedef struct marti_nav_msgs__srv__GetRouteList_Response__Sequence
{
  marti_nav_msgs__srv__GetRouteList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__GetRouteList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE_LIST__STRUCT_H_
