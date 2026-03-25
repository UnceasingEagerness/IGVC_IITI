// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_nav_msgs:msg/Wgs84Sample.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_nav_msgs/msg/detail/wgs84_sample__rosidl_typesupport_introspection_c.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_nav_msgs/msg/detail/wgs84_sample__functions.h"
#include "marti_nav_msgs/msg/detail/wgs84_sample__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `odom`
// Member `wgs84`
#include "geometry_msgs/msg/point.h"
// Member `odom`
// Member `wgs84`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__msg__Wgs84Sample__init(message_memory);
}

void marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_fini_function(void * message_memory)
{
  marti_nav_msgs__msg__Wgs84Sample__fini(message_memory);
}

size_t marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__size_function__Wgs84Sample__wgs84_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__get_const_function__Wgs84Sample__wgs84_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__get_function__Wgs84Sample__wgs84_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__fetch_function__Wgs84Sample__wgs84_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__get_const_function__Wgs84Sample__wgs84_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__assign_function__Wgs84Sample__wgs84_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__get_function__Wgs84Sample__wgs84_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Wgs84Sample, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Wgs84Sample, odom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wgs84",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Wgs84Sample, wgs84),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wgs84_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Wgs84Sample, wgs84_covariance),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__size_function__Wgs84Sample__wgs84_covariance,  // size() function pointer
    marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__get_const_function__Wgs84Sample__wgs84_covariance,  // get_const(index) function pointer
    marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__get_function__Wgs84Sample__wgs84_covariance,  // get(index) function pointer
    marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__fetch_function__Wgs84Sample__wgs84_covariance,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__assign_function__Wgs84Sample__wgs84_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_members = {
  "marti_nav_msgs__msg",  // message namespace
  "Wgs84Sample",  // message name
  4,  // number of fields
  sizeof(marti_nav_msgs__msg__Wgs84Sample),
  marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_member_array,  // message members
  marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_type_support_handle = {
  0,
  &marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, Wgs84Sample)() {
  marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__msg__Wgs84Sample__rosidl_typesupport_introspection_c__Wgs84Sample_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
