// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_nav_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_H_
#define MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE'.
enum
{
  marti_nav_msgs__msg__TrackedObject__VEHICLE = 0
};

/// Constant 'PEDESTRIAN'.
enum
{
  marti_nav_msgs__msg__TrackedObject__PEDESTRIAN = 1
};

/// Constant 'UNKNOWN'.
enum
{
  marti_nav_msgs__msg__TrackedObject__UNKNOWN = 255
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'age_duration'
// Member 'prediction_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/TrackedObject in the package marti_nav_msgs.
typedef struct marti_nav_msgs__msg__TrackedObject
{
  /// Frame and timestamp
  std_msgs__msg__Header header;
  /// Id
  uint16_t id;
  /// Pose in the header frame.
  geometry_msgs__msg__PoseWithCovariance pose;
  /// Velocity in the header frame.
  geometry_msgs__msg__TwistWithCovariance velocity;
  /// Acceleration in the header frame.
  geometry_msgs__msg__Vector3 linear_acceleration;
  /// Row major x, y z
  double linear_acceleration_covariance[9];
  geometry_msgs__msg__Point__Sequence polygon;
  /// A list of points that define the obstacle's geometry in horizontal
  /// plane relative to the obstacle's pose.  The polygon is implicitly
  /// closed by a segment between the last and first points.
  /// Estimated oriented bounding box for object classes with rectangular shapes.
  /// Length of the object in meters
  float length;
  /// Length quality number [0,1]
  float length_quality;
  /// Width of the object in meters
  float width;
  /// Width quality number [0,1]
  float width_quality;
  /// Classification
  uint8_t classification;
  /// Classification quality number [0,1]
  float classification_quality;
  /// Existence probability [0,1]
  float existence_probability;
  /// Age of the track since first detection.
  builtin_interfaces__msg__Duration age_duration;
  /// Age of the prediction since the active flag was last true.
  builtin_interfaces__msg__Duration prediction_duration;
  /// Active flag for if the objects is currently being detected.
  bool active;
} marti_nav_msgs__msg__TrackedObject;

// Struct for a sequence of marti_nav_msgs__msg__TrackedObject.
typedef struct marti_nav_msgs__msg__TrackedObject__Sequence
{
  marti_nav_msgs__msg__TrackedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_nav_msgs__msg__TrackedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_H_
