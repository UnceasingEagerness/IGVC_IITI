// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:srv/SaveRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__STRUCT_H_
#define MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__STRUCT_H_

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
// Member 'guid'
// Member 'thumbnail'
#include "rosidl_runtime_c/string.h"
// Member 'route'
#include "marti_nav_msgs/msg/detail/route__struct.h"

/// Struct defined in srv/SaveRoute in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__SaveRoute_Request
{
  /// Name to save the route as
  rosidl_runtime_c__String name;
  /// GUID of the route, as 32 hex digits
  rosidl_runtime_c__String guid;
  /// The route that should be saved
  marti_nav_msgs__msg__Route route;
  /// base64-encoded JPG or PNG thumbnail image
  rosidl_runtime_c__String thumbnail;
} marti_nav_msgs__srv__SaveRoute_Request;

// Struct for a sequence of marti_nav_msgs__srv__SaveRoute_Request.
typedef struct marti_nav_msgs__srv__SaveRoute_Request__Sequence
{
  marti_nav_msgs__srv__SaveRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__SaveRoute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveRoute in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__SaveRoute_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e. g. for error messages
  rosidl_runtime_c__String message;
} marti_nav_msgs__srv__SaveRoute_Response;

// Struct for a sequence of marti_nav_msgs__srv__SaveRoute_Response.
typedef struct marti_nav_msgs__srv__SaveRoute_Response__Sequence
{
  marti_nav_msgs__srv__SaveRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__SaveRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__STRUCT_H_
