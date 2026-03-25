// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__STRUCT_H_
#define MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetExposure in the package marti_sensor_msgs.
typedef struct marti_sensor_msgs__srv__SetExposure_Request
{
  bool auto_exposure;
  int64_t time;
} marti_sensor_msgs__srv__SetExposure_Request;

// Struct for a sequence of marti_sensor_msgs__srv__SetExposure_Request.
typedef struct marti_sensor_msgs__srv__SetExposure_Request__Sequence
{
  marti_sensor_msgs__srv__SetExposure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__srv__SetExposure_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetExposure in the package marti_sensor_msgs.
typedef struct marti_sensor_msgs__srv__SetExposure_Response
{
  bool auto_exposure;
  int64_t time;
} marti_sensor_msgs__srv__SetExposure_Response;

// Struct for a sequence of marti_sensor_msgs__srv__SetExposure_Response.
typedef struct marti_sensor_msgs__srv__SetExposure_Response__Sequence
{
  marti_sensor_msgs__srv__SetExposure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__srv__SetExposure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__STRUCT_H_
