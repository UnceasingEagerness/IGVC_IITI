// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/LeadVehicle.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__STRUCT_H_

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

/// Struct defined in msg/LeadVehicle in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__LeadVehicle
{
  std_msgs__msg__Header header;
  float headway_distance;
  float speed;
  float heading;
  float x_pos;
  float y_pos;
  int8_t classification;
  int8_t type;
} marti_nav_msgs__msg__LeadVehicle;

// Struct for a sequence of marti_nav_msgs__msg__LeadVehicle.
typedef struct marti_nav_msgs__msg__LeadVehicle__Sequence
{
  marti_nav_msgs__msg__LeadVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__LeadVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__STRUCT_H_
