// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_sensor_msgs:msg/DifferentialMeasurement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_sensor_msgs/msg/detail/differential_measurement__rosidl_typesupport_introspection_c.h"
#include "marti_sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_sensor_msgs/msg/detail/differential_measurement__functions.h"
#include "marti_sensor_msgs/msg/detail/differential_measurement__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `base_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/vector3.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_sensor_msgs__msg__DifferentialMeasurement__init(message_memory);
}

void marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_fini_function(void * message_memory)
{
  marti_sensor_msgs__msg__DifferentialMeasurement__fini(message_memory);
}

size_t marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__size_function__DifferentialMeasurement__position_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__get_const_function__DifferentialMeasurement__position_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__get_function__DifferentialMeasurement__position_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__fetch_function__DifferentialMeasurement__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__get_const_function__DifferentialMeasurement__position_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__assign_function__DifferentialMeasurement__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__get_function__DifferentialMeasurement__position_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, base_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baseline_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, baseline_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baseline_length_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, baseline_length_variance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, heading_variance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, pitch_variance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, roll_variance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DifferentialMeasurement, position_covariance),  // bytes offset in struct
    NULL,  // default value
    marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__size_function__DifferentialMeasurement__position_covariance,  // size() function pointer
    marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__get_const_function__DifferentialMeasurement__position_covariance,  // get_const(index) function pointer
    marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__get_function__DifferentialMeasurement__position_covariance,  // get(index) function pointer
    marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__fetch_function__DifferentialMeasurement__position_covariance,  // fetch(index, &value) function pointer
    marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__assign_function__DifferentialMeasurement__position_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_members = {
  "marti_sensor_msgs__msg",  // message namespace
  "DifferentialMeasurement",  // message name
  12,  // number of fields
  sizeof(marti_sensor_msgs__msg__DifferentialMeasurement),
  marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_member_array,  // message members
  marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_type_support_handle = {
  0,
  &marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_sensor_msgs, msg, DifferentialMeasurement)() {
  marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_type_support_handle.typesupport_identifier) {
    marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_sensor_msgs__msg__DifferentialMeasurement__rosidl_typesupport_introspection_c__DifferentialMeasurement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
