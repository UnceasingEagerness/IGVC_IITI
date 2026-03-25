// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marti_can_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

#ifndef MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_
#define MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MSGTYPE_STANDARD'.
/**
  * CAN Message Type.  This should be one of the constants defined
  * below.  (Constants used to match pcan.h from Peak's driver.)
 */
enum
{
  marti_can_msgs__msg__CanFrame__MSGTYPE_STANDARD = 0
};

/// Constant 'MSGTYPE_RTR'.
enum
{
  marti_can_msgs__msg__CanFrame__MSGTYPE_RTR = 1
};

/// Constant 'MSGTYPE_EXTENDED'.
enum
{
  marti_can_msgs__msg__CanFrame__MSGTYPE_EXTENDED = 2
};

/// Constant 'MSGTYPE_STATUS'.
enum
{
  marti_can_msgs__msg__CanFrame__MSGTYPE_STATUS = 128
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/CanFrame in the package marti_can_msgs.
typedef struct marti_can_msgs__msg__CanFrame
{
  std_msgs__msg__Header header;
  /// Header timestamp is the time when all messages were acquired
  /// and synchronized.
  uint32_t id;
  /// CAN Message ID - This is 11 bits for standard frames or 29 bits for
  /// extended frames.
  uint8_t msg_type;
  uint8_t data_length;
  /// Count of data bytes (0..8)
  uint8_t data[8];
} marti_can_msgs__msg__CanFrame;

// Struct for a sequence of marti_can_msgs__msg__CanFrame.
typedef struct marti_can_msgs__msg__CanFrame__Sequence
{
  marti_can_msgs__msg__CanFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marti_can_msgs__msg__CanFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_
