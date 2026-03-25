// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/VehicleControl.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__STRUCT_H_

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

/// Struct defined in msg/VehicleControl in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__VehicleControl
{
  std_msgs__msg__Header header;
  int32_t engine;
  int32_t gear;
  double steering;
  double throttle;
  double brake;
  int16_t steering_position;
  int16_t gb_position;
} marti_nav_msgs__msg__VehicleControl;

// Struct for a sequence of marti_nav_msgs__msg__VehicleControl.
typedef struct marti_nav_msgs__msg__VehicleControl__Sequence
{
  marti_nav_msgs__msg__VehicleControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__VehicleControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__STRUCT_H_
