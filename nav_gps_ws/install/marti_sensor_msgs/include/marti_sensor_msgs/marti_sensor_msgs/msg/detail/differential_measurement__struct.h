// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/DifferentialMeasurement.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__STRUCT_H_

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
// Member 'base_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/DifferentialMeasurement in the package marti_sensor_msgs.
/**
  * A differential measurement between two places in the world
  *  Usually used with RTK-gps setups
 */
typedef struct marti_sensor_msgs__msg__DifferentialMeasurement
{
  /// The time and location where this measurement is taken from
  std_msgs__msg__Header header;
  /// The location we are measuring relative to
  rosidl_runtime_c__String base_frame_id;
  /// Distance in meters between the two locations
  double baseline_length;
  /// set > 1e14 to mark as invalid
  double baseline_length_variance;
  /// Heading in degrees of the relative position vector
  double heading;
  /// set > 1e14 to mark as invalid
  double heading_variance;
  /// Pitch in degrees of the relative position vector
  double pitch;
  /// set > 1e14 to mark as invalid
  double pitch_variance;
  /// Roll in degrees of the relative position vector
  double roll;
  /// set > 1e14 to mark as invalid
  double roll_variance;
  /// position measurement between this point and our reference location
  /// coordinates are given in ENU meters
  geometry_msgs__msg__Vector3 position;
  /// Covariance for the position measurement
  /// set > 1e14 to mark as invalid
  double position_covariance[9];
} marti_sensor_msgs__msg__DifferentialMeasurement;

// Struct for a sequence of marti_sensor_msgs__msg__DifferentialMeasurement.
typedef struct marti_sensor_msgs__msg__DifferentialMeasurement__Sequence
{
  marti_sensor_msgs__msg__DifferentialMeasurement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__DifferentialMeasurement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__STRUCT_H_
