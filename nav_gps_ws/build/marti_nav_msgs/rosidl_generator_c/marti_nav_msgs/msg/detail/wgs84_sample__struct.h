// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/Wgs84Sample.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__STRUCT_H_

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
// Member 'odom'
// Member 'wgs84'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Wgs84Sample in the package marti_nav_msgs.
/**
  * This message contains an absolute position measurement (in
  * spherical/WGS-84 coordinates) and the corresponding sensor
  * (e.g. antenna) location in a vehicle's relative odometry coordinate
  * frame.
 */
typedef struct marti_nav_msgs__msg__Wgs84Sample
{
  std_msgs__msg__Header header;
  /// The header contains the /tf name of the relative odometry frame and
  /// the timestamp of the measurement.
  geometry_msgs__msg__Point odom;
  /// The position of the sample in the relative odometry frame.
  geometry_msgs__msg__Point wgs84;
  /// The WGS84 measurement (x = longitude in decimal degrees, y =
  /// latitude in decimal degrees, z = altitude over the reference
  /// ellipsoid in meters)
  double wgs84_covariance[9];
} marti_nav_msgs__msg__Wgs84Sample;

// Struct for a sequence of marti_nav_msgs__msg__Wgs84Sample.
typedef struct marti_nav_msgs__msg__Wgs84Sample__Sequence
{
  marti_nav_msgs__msg__Wgs84Sample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__Wgs84Sample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__STRUCT_H_
