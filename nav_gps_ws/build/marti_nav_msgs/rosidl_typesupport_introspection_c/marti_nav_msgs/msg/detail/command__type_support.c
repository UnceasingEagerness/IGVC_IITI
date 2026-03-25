// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_nav_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_nav_msgs/msg/detail/command__rosidl_typesupport_introspection_c.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_nav_msgs/msg/detail/command__functions.h"
#include "marti_nav_msgs/msg/detail/command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `startstop`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__msg__Command__init(message_memory);
}

void marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_fini_function(void * message_memory)
{
  marti_nav_msgs__msg__Command__fini(message_memory);
}

size_t marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__size_function__Command__startstop(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__get_const_function__Command__startstop(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__get_function__Command__startstop(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__fetch_function__Command__startstop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__get_const_function__Command__startstop(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__assign_function__Command__startstop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__get_function__Command__startstop(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__resize_function__Command__startstop(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Command, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "startstop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__Command, startstop),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__size_function__Command__startstop,  // size() function pointer
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__get_const_function__Command__startstop,  // get_const(index) function pointer
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__get_function__Command__startstop,  // get(index) function pointer
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__fetch_function__Command__startstop,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__assign_function__Command__startstop,  // assign(index, value) function pointer
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__resize_function__Command__startstop  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_members = {
  "marti_nav_msgs__msg",  // message namespace
  "Command",  // message name
  2,  // number of fields
  sizeof(marti_nav_msgs__msg__Command),
  marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_member_array,  // message members
  marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_type_support_handle = {
  0,
  &marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, Command)() {
  marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__msg__Command__rosidl_typesupport_introspection_c__Command_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
