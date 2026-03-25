// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/PathPlanning.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__STRUCT_H_

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

/// Struct defined in msg/PathPlanning in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__PathPlanning
{
  std_msgs__msg__Header header;
  /// Type of path segment
  int32_t segment_type;
  /// Length of path segment
  float length;
  /// Desired speed at start of path segment
  float start_speed;
  /// Desired speed at end of path segment
  float end_speed;
  /// Starting x-coordinate of the vehicle
  float startx;
  /// Starting y-coordinate of the vehicle
  float starty;
  /// Ending x-coordinate of the vehicle
  float endx;
  /// Ending y-coordinate of the vehicle
  float endy;
  /// theta0 (constant) parameter for initial heading
  float theta0;
  /// a1 (linear) parameter for the x-y track
  float a1;
  /// a2 (quadratric) parameter for the x-y track
  float a2;
  /// k0 (constant) parameter for the curvature
  float k0;
  /// c1 (linear) parameter for the curvature
  float c1;
  /// c2 (quadratic) parameter for the curvature
  float c2;
  /// Type of behavior for the segment
  int32_t behavior;
  /// Whether we should be in creep mode of not (0-No, 1-Yes)
  int32_t creep;
  /// Whether ACC Override is on (0-Normal ACC, 1-Override ACC)
  int32_t acc;
  /// Whether we should be in reverse or not (0-No, 1-Yes)
  int32_t reverse;
  /// Whether we are tracking a vehicle (0-No, 1-Yes)
  int32_t vehicle_track;
  /// The following items are used in Intelligence, but won't be transmitted with
  /// the segments to C&C
  /// Flag to indicate whether the path segment has been
  /// transmitted
  bool transmitted;
  bool aux_transmitted;
  /// End heading (provided explicitly)
  float theta_end;
  /// End curvature
  float k_end;
  /// Number of route points used to calculate the segment
  int32_t seg_len;
  /// Minimum speed of route points used (comes from MDF or -1)
  float speed_limit;
  /// Other variables
  float max_error;
  float max_smooth;
  float max_curv;
  int32_t possible_points;
  bool exit_segment;
} marti_nav_msgs__msg__PathPlanning;

// Struct for a sequence of marti_nav_msgs__msg__PathPlanning.
typedef struct marti_nav_msgs__msg__PathPlanning__Sequence
{
  marti_nav_msgs__msg__PathPlanning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__PathPlanning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__STRUCT_H_
