// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_nav_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_nav_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_nav_msgs/msg/detail/route__functions.h"
#include "marti_nav_msgs/msg/detail/route__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `route_points`
#include "marti_nav_msgs/msg/route_point.h"
// Member `route_points`
#include "marti_nav_msgs/msg/detail/route_point__rosidl_typesupport_introspection_c.h"
// Member `properties`
#include "marti_common_msgs/msg/key_value.h"
// Member `properties`
#include "marti_common_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__msg__Route__init(message_memory);
}

void marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_fini_function(void * message_memory)
{
  marti_nav_msgs__msg__Route__fini(message_memory);
}

size_t marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__route_points(
  const void * untyped_member)
{
  const marti_nav_msgs__msg__RoutePoint__Sequence * member =
    (const marti_nav_msgs__msg__RoutePoint__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_points(
  const void * untyped_member, size_t index)
{
  const marti_nav_msgs__msg__RoutePoint__Sequence * member =
    (const marti_nav_msgs__msg__RoutePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_points(
  void * untyped_member, size_t index)
{
  marti_nav_msgs__msg__RoutePoint__Sequence * member =
    (marti_nav_msgs__msg__RoutePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__route_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_nav_msgs__msg__RoutePoint * item =
    ((const marti_nav_msgs__msg__RoutePoint *)
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_points(untyped_member, index));
  marti_nav_msgs__msg__RoutePoint * value =
    (marti_nav_msgs__msg__RoutePoint *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__route_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_nav_msgs__msg__RoutePoint * item =
    ((marti_nav_msgs__msg__RoutePoint *)
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_points(untyped_member, index));
  const marti_nav_msgs__msg__RoutePoint * value =
    (const marti_nav_msgs__msg__RoutePoint *)(untyped_value);
  *item = *value;
}

bool marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__route_points(
  void * untyped_member, size_t size)
{
  marti_nav_msgs__msg__RoutePoint__Sequence * member =
    (marti_nav_msgs__msg__RoutePoint__Sequence *)(untyped_member);
  marti_nav_msgs__msg__RoutePoint__Sequence__fini(member);
  return marti_nav_msgs__msg__RoutePoint__Sequence__init(member, size);
}

size_t marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__properties(
  const void * untyped_member)
{
  const marti_common_msgs__msg__KeyValue__Sequence * member =
    (const marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__properties(
  const void * untyped_member, size_t index)
{
  const marti_common_msgs__msg__KeyValue__Sequence * member =
    (const marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__properties(
  void * untyped_member, size_t index)
{
  marti_common_msgs__msg__KeyValue__Sequence * member =
    (marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_common_msgs__msg__KeyValue * item =
    ((const marti_common_msgs__msg__KeyValue *)
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__properties(untyped_member, index));
  marti_common_msgs__msg__KeyValue * value =
    (marti_common_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_common_msgs__msg__KeyValue * item =
    ((marti_common_msgs__msg__KeyValue *)
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__properties(untyped_member, index));
  const marti_common_msgs__msg__KeyValue * value =
    (const marti_common_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__properties(
  void * untyped_member, size_t size)
{
  marti_common_msgs__msg__KeyValue__Sequence * member =
    (marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  marti_common_msgs__msg__KeyValue__Sequence__fini(member);
  return marti_common_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Route, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Route, route_points),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__route_points,  // size() function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_points,  // get_const(index) function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_points,  // get(index) function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__route_points,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__route_points,  // assign(index, value) function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__route_points  // resize(index) function pointer
  },
  {
    "properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Route, properties),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__properties,  // size() function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__properties,  // get_const(index) function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__properties,  // get(index) function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__properties,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__properties,  // assign(index, value) function pointer
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__properties  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_members = {
  "marti_nav_msgs__msg",  // message namespace
  "Route",  // message name
  3,  // number of fields
  sizeof(marti_nav_msgs__msg__Route),
  marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array,  // message members
  marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle = {
  0,
  &marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, Route)() {
  marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, RoutePoint)();
  marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_common_msgs, msg, KeyValue)();
  if (!marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
