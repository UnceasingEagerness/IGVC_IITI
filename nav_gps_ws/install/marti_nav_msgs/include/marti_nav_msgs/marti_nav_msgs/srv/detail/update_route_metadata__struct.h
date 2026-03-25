// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:srv/UpdateRouteMetadata.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__STRUCT_H_
#define MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'route_guid'
#include "rosidl_runtime_c/string.h"
// Member 'metadata_points'
#include "marti_nav_msgs/msg/detail/route_point__struct.h"

/// Struct defined in srv/UpdateRouteMetadata in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__UpdateRouteMetadata_Request
{
  /// The GUID of the route to modify
  rosidl_runtime_c__String route_guid;
  /// All of the points that should be modified
  marti_nav_msgs__msg__RoutePoint__Sequence metadata_points;
} marti_nav_msgs__srv__UpdateRouteMetadata_Request;

// Struct for a sequence of marti_nav_msgs__srv__UpdateRouteMetadata_Request.
typedef struct marti_nav_msgs__srv__UpdateRouteMetadata_Request__Sequence
{
  marti_nav_msgs__srv__UpdateRouteMetadata_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__UpdateRouteMetadata_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UpdateRouteMetadata in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__UpdateRouteMetadata_Response
{
  bool success;
  rosidl_runtime_c__String message;
} marti_nav_msgs__srv__UpdateRouteMetadata_Response;

// Struct for a sequence of marti_nav_msgs__srv__UpdateRouteMetadata_Response.
typedef struct marti_nav_msgs__srv__UpdateRouteMetadata_Response__Sequence
{
  marti_nav_msgs__srv__UpdateRouteMetadata_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__UpdateRouteMetadata_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__STRUCT_H_
