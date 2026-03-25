// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__STRUCT_H_
#define MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__STRUCT_H_

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
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/PlanRoute in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__PlanRoute_Request
{
  /// the frame the request and response are
  /// referenced in
  std_msgs__msg__Header header;
  /// series of points the route should pass through
  geometry_msgs__msg__Pose__Sequence waypoints;
  /// add the vehicle position as the first waypoint
  bool plan_from_vehicle;
} marti_nav_msgs__srv__PlanRoute_Request;

// Struct for a sequence of marti_nav_msgs__srv__PlanRoute_Request.
typedef struct marti_nav_msgs__srv__PlanRoute_Request__Sequence
{
  marti_nav_msgs__srv__PlanRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__PlanRoute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'route'
#include "marti_nav_msgs/msg/detail/route__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlanRoute in the package marti_nav_msgs.
typedef struct marti_nav_msgs__srv__PlanRoute_Response
{
  /// planned route
  marti_nav_msgs__msg__Route route;
  /// indicate successful run of service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
  /// informational, cost of planned route
  double cost;
} marti_nav_msgs__srv__PlanRoute_Response;

// Struct for a sequence of marti_nav_msgs__srv__PlanRoute_Response.
typedef struct marti_nav_msgs__srv__PlanRoute_Response__Sequence
{
  marti_nav_msgs__srv__PlanRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__srv__PlanRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__STRUCT_H_
