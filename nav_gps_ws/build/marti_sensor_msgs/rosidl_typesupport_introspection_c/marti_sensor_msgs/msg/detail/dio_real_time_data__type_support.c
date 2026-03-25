// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_sensor_msgs:msg/DioRealTimeData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_sensor_msgs/msg/detail/dio_real_time_data__rosidl_typesupport_introspection_c.h"
#include "marti_sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_sensor_msgs/msg/detail/dio_real_time_data__functions.h"
#include "marti_sensor_msgs/msg/detail/dio_real_time_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sample_states`
// Member `sample_times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_sensor_msgs__msg__DioRealTimeData__init(message_memory);
}

void marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_fini_function(void * message_memory)
{
  marti_sensor_msgs__msg__DioRealTimeData__fini(message_memory);
}

size_t marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__size_function__DioRealTimeData__sample_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_const_function__DioRealTimeData__sample_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_function__DioRealTimeData__sample_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__fetch_function__DioRealTimeData__sample_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_const_function__DioRealTimeData__sample_states(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__assign_function__DioRealTimeData__sample_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_function__DioRealTimeData__sample_states(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__resize_function__DioRealTimeData__sample_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__size_function__DioRealTimeData__sample_times(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_const_function__DioRealTimeData__sample_times(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_function__DioRealTimeData__sample_times(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__fetch_function__DioRealTimeData__sample_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_const_function__DioRealTimeData__sample_times(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__assign_function__DioRealTimeData__sample_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_function__DioRealTimeData__sample_times(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__resize_function__DioRealTimeData__sample_times(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DioRealTimeData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sample_frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DioRealTimeData, sample_frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latest_sample_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DioRealTimeData, latest_sample_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sample_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DioRealTimeData, sample_states),  // bytes offset in struct
    NULL,  // default value
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__size_function__DioRealTimeData__sample_states,  // size() function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_const_function__DioRealTimeData__sample_states,  // get_const(index) function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_function__DioRealTimeData__sample_states,  // get(index) function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__fetch_function__DioRealTimeData__sample_states,  // fetch(index, &value) function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__assign_function__DioRealTimeData__sample_states,  // assign(index, value) function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__resize_function__DioRealTimeData__sample_states  // resize(index) function pointer
  },
  {
    "sample_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__DioRealTimeData, sample_times),  // bytes offset in struct
    NULL,  // default value
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__size_function__DioRealTimeData__sample_times,  // size() function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_const_function__DioRealTimeData__sample_times,  // get_const(index) function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__get_function__DioRealTimeData__sample_times,  // get(index) function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__fetch_function__DioRealTimeData__sample_times,  // fetch(index, &value) function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__assign_function__DioRealTimeData__sample_times,  // assign(index, value) function pointer
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__resize_function__DioRealTimeData__sample_times  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_members = {
  "marti_sensor_msgs__msg",  // message namespace
  "DioRealTimeData",  // message name
  5,  // number of fields
  sizeof(marti_sensor_msgs__msg__DioRealTimeData),
  marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_member_array,  // message members
  marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_type_support_handle = {
  0,
  &marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_sensor_msgs, msg, DioRealTimeData)() {
  marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_type_support_handle.typesupport_identifier) {
    marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_sensor_msgs__msg__DioRealTimeData__rosidl_typesupport_introspection_c__DioRealTimeData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
