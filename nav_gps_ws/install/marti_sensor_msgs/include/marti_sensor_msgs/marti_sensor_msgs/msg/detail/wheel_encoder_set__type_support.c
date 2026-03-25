// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_sensor_msgs:msg/WheelEncoderSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_sensor_msgs/msg/detail/wheel_encoder_set__rosidl_typesupport_introspection_c.h"
#include "marti_sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_sensor_msgs/msg/detail/wheel_encoder_set__functions.h"
#include "marti_sensor_msgs/msg/detail/wheel_encoder_set__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `encoders`
#include "marti_sensor_msgs/msg/wheel_encoder.h"
// Member `encoders`
#include "marti_sensor_msgs/msg/detail/wheel_encoder__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_sensor_msgs__msg__WheelEncoderSet__init(message_memory);
}

void marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_fini_function(void * message_memory)
{
  marti_sensor_msgs__msg__WheelEncoderSet__fini(message_memory);
}

size_t marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__size_function__WheelEncoderSet__encoders(
  const void * untyped_member)
{
  const marti_sensor_msgs__msg__WheelEncoder__Sequence * member =
    (const marti_sensor_msgs__msg__WheelEncoder__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__get_const_function__WheelEncoderSet__encoders(
  const void * untyped_member, size_t index)
{
  const marti_sensor_msgs__msg__WheelEncoder__Sequence * member =
    (const marti_sensor_msgs__msg__WheelEncoder__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__get_function__WheelEncoderSet__encoders(
  void * untyped_member, size_t index)
{
  marti_sensor_msgs__msg__WheelEncoder__Sequence * member =
    (marti_sensor_msgs__msg__WheelEncoder__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__fetch_function__WheelEncoderSet__encoders(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_sensor_msgs__msg__WheelEncoder * item =
    ((const marti_sensor_msgs__msg__WheelEncoder *)
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__get_const_function__WheelEncoderSet__encoders(untyped_member, index));
  marti_sensor_msgs__msg__WheelEncoder * value =
    (marti_sensor_msgs__msg__WheelEncoder *)(untyped_value);
  *value = *item;
}

void marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__assign_function__WheelEncoderSet__encoders(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_sensor_msgs__msg__WheelEncoder * item =
    ((marti_sensor_msgs__msg__WheelEncoder *)
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__get_function__WheelEncoderSet__encoders(untyped_member, index));
  const marti_sensor_msgs__msg__WheelEncoder * value =
    (const marti_sensor_msgs__msg__WheelEncoder *)(untyped_value);
  *item = *value;
}

bool marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__resize_function__WheelEncoderSet__encoders(
  void * untyped_member, size_t size)
{
  marti_sensor_msgs__msg__WheelEncoder__Sequence * member =
    (marti_sensor_msgs__msg__WheelEncoder__Sequence *)(untyped_member);
  marti_sensor_msgs__msg__WheelEncoder__Sequence__fini(member);
  return marti_sensor_msgs__msg__WheelEncoder__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__WheelEncoderSet, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoders",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs__msg__WheelEncoderSet, encoders),  // bytes offset in struct
    NULL,  // default value
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__size_function__WheelEncoderSet__encoders,  // size() function pointer
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__get_const_function__WheelEncoderSet__encoders,  // get_const(index) function pointer
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__get_function__WheelEncoderSet__encoders,  // get(index) function pointer
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__fetch_function__WheelEncoderSet__encoders,  // fetch(index, &value) function pointer
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__assign_function__WheelEncoderSet__encoders,  // assign(index, value) function pointer
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__resize_function__WheelEncoderSet__encoders  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_members = {
  "marti_sensor_msgs__msg",  // message namespace
  "WheelEncoderSet",  // message name
  2,  // number of fields
  sizeof(marti_sensor_msgs__msg__WheelEncoderSet),
  marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_member_array,  // message members
  marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_type_support_handle = {
  0,
  &marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_sensor_msgs, msg, WheelEncoderSet)() {
  marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_sensor_msgs, msg, WheelEncoder)();
  if (!marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_type_support_handle.typesupport_identifier) {
    marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_sensor_msgs__msg__WheelEncoderSet__rosidl_typesupport_introspection_c__WheelEncoderSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
