// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_common_msgs:msg/KeyValueArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_common_msgs/msg/detail/key_value_array__rosidl_typesupport_introspection_c.h"
#include "marti_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_common_msgs/msg/detail/key_value_array__functions.h"
#include "marti_common_msgs/msg/detail/key_value_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `items`
#include "marti_common_msgs/msg/key_value.h"
// Member `items`
#include "marti_common_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_common_msgs__msg__KeyValueArray__init(message_memory);
}

void marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_fini_function(void * message_memory)
{
  marti_common_msgs__msg__KeyValueArray__fini(message_memory);
}

size_t marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__size_function__KeyValueArray__items(
  const void * untyped_member)
{
  const marti_common_msgs__msg__KeyValue__Sequence * member =
    (const marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__get_const_function__KeyValueArray__items(
  const void * untyped_member, size_t index)
{
  const marti_common_msgs__msg__KeyValue__Sequence * member =
    (const marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__get_function__KeyValueArray__items(
  void * untyped_member, size_t index)
{
  marti_common_msgs__msg__KeyValue__Sequence * member =
    (marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__fetch_function__KeyValueArray__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_common_msgs__msg__KeyValue * item =
    ((const marti_common_msgs__msg__KeyValue *)
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__get_const_function__KeyValueArray__items(untyped_member, index));
  marti_common_msgs__msg__KeyValue * value =
    (marti_common_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__assign_function__KeyValueArray__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_common_msgs__msg__KeyValue * item =
    ((marti_common_msgs__msg__KeyValue *)
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__get_function__KeyValueArray__items(untyped_member, index));
  const marti_common_msgs__msg__KeyValue * value =
    (const marti_common_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__resize_function__KeyValueArray__items(
  void * untyped_member, size_t size)
{
  marti_common_msgs__msg__KeyValue__Sequence * member =
    (marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  marti_common_msgs__msg__KeyValue__Sequence__fini(member);
  return marti_common_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_common_msgs__msg__KeyValueArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "items",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_common_msgs__msg__KeyValueArray, items),  // bytes offset in struct
    NULL,  // default value
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__size_function__KeyValueArray__items,  // size() function pointer
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__get_const_function__KeyValueArray__items,  // get_const(index) function pointer
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__get_function__KeyValueArray__items,  // get(index) function pointer
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__fetch_function__KeyValueArray__items,  // fetch(index, &value) function pointer
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__assign_function__KeyValueArray__items,  // assign(index, value) function pointer
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__resize_function__KeyValueArray__items  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_members = {
  "marti_common_msgs__msg",  // message namespace
  "KeyValueArray",  // message name
  2,  // number of fields
  sizeof(marti_common_msgs__msg__KeyValueArray),
  marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_member_array,  // message members
  marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_type_support_handle = {
  0,
  &marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_common_msgs, msg, KeyValueArray)() {
  marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_common_msgs, msg, KeyValue)();
  if (!marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_type_support_handle.typesupport_identifier) {
    marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_common_msgs__msg__KeyValueArray__rosidl_typesupport_introspection_c__KeyValueArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
