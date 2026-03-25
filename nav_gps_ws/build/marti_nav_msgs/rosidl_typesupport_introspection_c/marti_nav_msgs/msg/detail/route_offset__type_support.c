// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_nav_msgs:msg/RouteOffset.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_nav_msgs/msg/detail/route_offset__rosidl_typesupport_introspection_c.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_nav_msgs/msg/detail/route_offset__functions.h"
#include "marti_nav_msgs/msg/detail/route_offset__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `relative_pose`
#include "geometry_msgs/msg/pose.h"
// Member `relative_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `route_position`
#include "marti_nav_msgs/msg/route_position.h"
// Member `route_position`
#include "marti_nav_msgs/msg/detail/route_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__msg__RouteOffset__init(message_memory);
}

void marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_fini_function(void * message_memory)
{
  marti_nav_msgs__msg__RouteOffset__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__RouteOffset, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__RouteOffset, relative_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__RouteOffset, route_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_members = {
  "marti_nav_msgs__msg",  // message namespace
  "RouteOffset",  // message name
  3,  // number of fields
  sizeof(marti_nav_msgs__msg__RouteOffset),
  marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_member_array,  // message members
  marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_type_support_handle = {
  0,
  &marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, RouteOffset)() {
  marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, RoutePosition)();
  if (!marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__msg__RouteOffset__rosidl_typesupport_introspection_c__RouteOffset_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
