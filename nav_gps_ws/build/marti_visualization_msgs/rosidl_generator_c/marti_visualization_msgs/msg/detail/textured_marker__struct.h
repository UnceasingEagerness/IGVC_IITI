// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_visualization_msgs:msg/TexturedMarker.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__STRUCT_H_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
enum
{
  marti_visualization_msgs__msg__TexturedMarker__ADD = 0
};

/// Constant 'MODIFY'.
enum
{
  marti_visualization_msgs__msg__TexturedMarker__MODIFY = 0
};

/// Constant 'DELETE'.
enum
{
  marti_visualization_msgs__msg__TexturedMarker__DELETE = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ns'
#include "rosidl_runtime_c/string.h"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/TexturedMarker in the package marti_visualization_msgs.
typedef struct marti_visualization_msgs__msg__TexturedMarker
{
  std_msgs__msg__Header header;
  /// Namespace to place this object in... used in
  /// conjunction with id to create a unique name
  /// for the object.
  rosidl_runtime_c__String ns;
  int32_t id;
  /// 0 add/modify an object, 2 deletes an object
  int32_t action;
  /// How long the object should last before being
  /// automatically deleted.  0 means forever
  builtin_interfaces__msg__Duration lifetime;
  sensor_msgs__msg__Image image;
  /// The pose of the image center with respect to
  /// the header frame.
  geometry_msgs__msg__Pose pose;
  /// The pixel scale in meters.
  double resolution;
  /// The overall alpha transparency to display the
  /// marker with.
  float alpha;
} marti_visualization_msgs__msg__TexturedMarker;

// Struct for a sequence of marti_visualization_msgs__msg__TexturedMarker.
typedef struct marti_visualization_msgs__msg__TexturedMarker__Sequence
{
  marti_visualization_msgs__msg__TexturedMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_visualization_msgs__msg__TexturedMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__STRUCT_H_
