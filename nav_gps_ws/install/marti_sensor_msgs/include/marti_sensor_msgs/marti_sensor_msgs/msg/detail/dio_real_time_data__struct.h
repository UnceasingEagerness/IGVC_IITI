// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_sensor_msgs:msg/DioRealTimeData.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__STRUCT_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__STRUCT_H_

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
// Member 'sample_states'
// Member 'sample_times'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DioRealTimeData in the package marti_sensor_msgs.
/**
  * Message for containing digital data obtained by a real-time DAQ.
 */
typedef struct marti_sensor_msgs__msg__DioRealTimeData
{
  std_msgs__msg__Header header;
  /// header contains the timestamp of when this data was obtained from
  /// the device.
  double sample_frequency;
  /// The sampling frequency of the DAQ.
  uint64_t latest_sample_time;
  /// The most recent time (in sampling clock ticks) that the port was
  /// sampled.
  rosidl_runtime_c__uint16__Sequence sample_states;
  rosidl_runtime_c__uint32__Sequence sample_times;
} marti_sensor_msgs__msg__DioRealTimeData;

// Struct for a sequence of marti_sensor_msgs__msg__DioRealTimeData.
typedef struct marti_sensor_msgs__msg__DioRealTimeData__Sequence
{
  marti_sensor_msgs__msg__DioRealTimeData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_sensor_msgs__msg__DioRealTimeData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__STRUCT_H_
