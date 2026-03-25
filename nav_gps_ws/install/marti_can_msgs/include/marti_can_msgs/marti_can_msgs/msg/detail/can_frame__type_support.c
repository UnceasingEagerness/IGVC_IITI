// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_can_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_can_msgs/msg/detail/can_frame__rosidl_typesupport_introspection_c.h"
#include "marti_can_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_can_msgs/msg/detail/can_frame__functions.h"
#include "marti_can_msgs/msg/detail/can_frame__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_can_msgs__msg__CanFrame__init(message_memory);
}

void marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_fini_function(void * message_memory)
{
  marti_can_msgs__msg__CanFrame__fini(message_memory);
}

size_t marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__size_function__CanFrame__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__get_const_function__CanFrame__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__get_function__CanFrame__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__fetch_function__CanFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__get_const_function__CanFrame__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__assign_function__CanFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__get_function__CanFrame__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_can_msgs__msg__CanFrame, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_can_msgs__msg__CanFrame, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_can_msgs__msg__CanFrame, msg_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_can_msgs__msg__CanFrame, data_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(marti_can_msgs__msg__CanFrame, data),  // bytes offset in struct
    NULL,  // default value
    marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__size_function__CanFrame__data,  // size() function pointer
    marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__get_const_function__CanFrame__data,  // get_const(index) function pointer
    marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__get_function__CanFrame__data,  // get(index) function pointer
    marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__fetch_function__CanFrame__data,  // fetch(index, &value) function pointer
    marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__assign_function__CanFrame__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_members = {
  "marti_can_msgs__msg",  // message namespace
  "CanFrame",  // message name
  5,  // number of fields
  sizeof(marti_can_msgs__msg__CanFrame),
  marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_member_array,  // message members
  marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_type_support_handle = {
  0,
  &marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_can_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_can_msgs, msg, CanFrame)() {
  marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_type_support_handle.typesupport_identifier) {
    marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_can_msgs__msg__CanFrame__rosidl_typesupport_introspection_c__CanFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
