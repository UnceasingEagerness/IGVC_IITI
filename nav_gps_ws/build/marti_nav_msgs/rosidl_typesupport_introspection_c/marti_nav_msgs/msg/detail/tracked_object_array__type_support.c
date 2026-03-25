// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_nav_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_nav_msgs/msg/detail/tracked_object_array__rosidl_typesupport_introspection_c.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_nav_msgs/msg/detail/tracked_object_array__functions.h"
#include "marti_nav_msgs/msg/detail/tracked_object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "marti_nav_msgs/msg/tracked_object.h"
// Member `objects`
#include "marti_nav_msgs/msg/detail/tracked_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__msg__TrackedObjectArray__init(message_memory);
}

void marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_fini_function(void * message_memory)
{
  marti_nav_msgs__msg__TrackedObjectArray__fini(message_memory);
}

size_t marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__size_function__TrackedObjectArray__objects(
  const void * untyped_member)
{
  const marti_nav_msgs__msg__TrackedObject__Sequence * member =
    (const marti_nav_msgs__msg__TrackedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__get_const_function__TrackedObjectArray__objects(
  const void * untyped_member, size_t index)
{
  const marti_nav_msgs__msg__TrackedObject__Sequence * member =
    (const marti_nav_msgs__msg__TrackedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__get_function__TrackedObjectArray__objects(
  void * untyped_member, size_t index)
{
  marti_nav_msgs__msg__TrackedObject__Sequence * member =
    (marti_nav_msgs__msg__TrackedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__fetch_function__TrackedObjectArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_nav_msgs__msg__TrackedObject * item =
    ((const marti_nav_msgs__msg__TrackedObject *)
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__get_const_function__TrackedObjectArray__objects(untyped_member, index));
  marti_nav_msgs__msg__TrackedObject * value =
    (marti_nav_msgs__msg__TrackedObject *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__assign_function__TrackedObjectArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_nav_msgs__msg__TrackedObject * item =
    ((marti_nav_msgs__msg__TrackedObject *)
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__get_function__TrackedObjectArray__objects(untyped_member, index));
  const marti_nav_msgs__msg__TrackedObject * value =
    (const marti_nav_msgs__msg__TrackedObject *)(untyped_value);
  *item = *value;
}

bool marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__resize_function__TrackedObjectArray__objects(
  void * untyped_member, size_t size)
{
  marti_nav_msgs__msg__TrackedObject__Sequence * member =
    (marti_nav_msgs__msg__TrackedObject__Sequence *)(untyped_member);
  marti_nav_msgs__msg__TrackedObject__Sequence__fini(member);
  return marti_nav_msgs__msg__TrackedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__TrackedObjectArray, objects),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__size_function__TrackedObjectArray__objects,  // size() function pointer
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__get_const_function__TrackedObjectArray__objects,  // get_const(index) function pointer
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__get_function__TrackedObjectArray__objects,  // get(index) function pointer
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__fetch_function__TrackedObjectArray__objects,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__assign_function__TrackedObjectArray__objects,  // assign(index, value) function pointer
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__resize_function__TrackedObjectArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_members = {
  "marti_nav_msgs__msg",  // message namespace
  "TrackedObjectArray",  // message name
  2,  // number of fields
  sizeof(marti_nav_msgs__msg__TrackedObjectArray),
  marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_member_array,  // message members
  marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_type_support_handle = {
  0,
  &marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, TrackedObjectArray)() {
  marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, TrackedObject)();
  if (!marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__msg__TrackedObjectArray__rosidl_typesupport_introspection_c__TrackedObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
