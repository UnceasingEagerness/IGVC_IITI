// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_nav_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_nav_msgs/msg/detail/tracked_object__rosidl_typesupport_introspection_c.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_nav_msgs/msg/detail/tracked_object__functions.h"
#include "marti_nav_msgs/msg/detail/tracked_object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `linear_acceleration`
#include "geometry_msgs/msg/vector3.h"
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `polygon`
#include "geometry_msgs/msg/point.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `age_duration`
// Member `prediction_duration`
#include "builtin_interfaces/msg/duration.h"
// Member `age_duration`
// Member `prediction_duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__msg__TrackedObject__init(message_memory);
}

void marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_fini_function(void * message_memory)
{
  marti_nav_msgs__msg__TrackedObject__fini(message_memory);
}

size_t marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__size_function__TrackedObject__linear_acceleration_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_const_function__TrackedObject__linear_acceleration_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_function__TrackedObject__linear_acceleration_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__fetch_function__TrackedObject__linear_acceleration_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_const_function__TrackedObject__linear_acceleration_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__assign_function__TrackedObject__linear_acceleration_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_function__TrackedObject__linear_acceleration_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__size_function__TrackedObject__polygon(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_const_function__TrackedObject__polygon(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_function__TrackedObject__polygon(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__fetch_function__TrackedObject__polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_const_function__TrackedObject__polygon(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__assign_function__TrackedObject__polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_function__TrackedObject__polygon(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__resize_function__TrackedObject__polygon(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[17] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, header),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, linear_acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__size_function__TrackedObject__linear_acceleration_covariance,  // size() function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_const_function__TrackedObject__linear_acceleration_covariance,  // get_const(index) function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_function__TrackedObject__linear_acceleration_covariance,  // get(index) function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__fetch_function__TrackedObject__linear_acceleration_covariance,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__assign_function__TrackedObject__linear_acceleration_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, polygon),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__size_function__TrackedObject__polygon,  // size() function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_const_function__TrackedObject__polygon,  // get_const(index) function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__get_function__TrackedObject__polygon,  // get(index) function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__fetch_function__TrackedObject__polygon,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__assign_function__TrackedObject__polygon,  // assign(index, value) function pointer
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__resize_function__TrackedObject__polygon  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, length_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, width_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, classification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, classification_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "existence_probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, existence_probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, age_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prediction_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObject, prediction_duration),  // bytes offset in struct
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
    offsetof(marti_nav_msgs__msg__TrackedObject, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_members = {
  "marti_nav_msgs__msg",  // message namespace
  "TrackedObject",  // message name
  17,  // number of fields
  sizeof(marti_nav_msgs__msg__TrackedObject),
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array,  // message members
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_type_support_handle = {
  0,
  &marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, TrackedObject)() {
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__msg__TrackedObject__rosidl_typesupport_introspection_c__TrackedObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
