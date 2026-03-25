// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_dbw_msgs:msg/PrimaryControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_dbw_msgs/msg/detail/primary_control__rosidl_typesupport_introspection_c.h"
#include "marti_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_dbw_msgs/msg/detail/primary_control__functions.h"
#include "marti_dbw_msgs/msg/detail/primary_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_dbw_msgs__msg__PrimaryControl__init(message_memory);
}

void marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_fini_function(void * message_memory)
{
  marti_dbw_msgs__msg__PrimaryControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_dbw_msgs__msg__PrimaryControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_dbw_msgs__msg__PrimaryControl, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_dbw_msgs__msg__PrimaryControl, estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_dbw_msgs__msg__PrimaryControl, steering_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_dbw_msgs__msg__PrimaryControl, throttle_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_dbw_msgs__msg__PrimaryControl, brake_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_members = {
  "marti_dbw_msgs__msg",  // message namespace
  "PrimaryControl",  // message name
  6,  // number of fields
  sizeof(marti_dbw_msgs__msg__PrimaryControl),
  marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_member_array,  // message members
  marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_type_support_handle = {
  0,
  &marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_dbw_msgs, msg, PrimaryControl)() {
  marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_type_support_handle.typesupport_identifier) {
    marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_dbw_msgs__msg__PrimaryControl__rosidl_typesupport_introspection_c__PrimaryControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
