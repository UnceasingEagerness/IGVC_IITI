// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_visualization_msgs/msg/detail/textured_marker_array__rosidl_typesupport_introspection_c.h"
#include "marti_visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_visualization_msgs/msg/detail/textured_marker_array__functions.h"
#include "marti_visualization_msgs/msg/detail/textured_marker_array__struct.h"


// Include directives for member types
// Member `markers`
#include "marti_visualization_msgs/msg/textured_marker.h"
// Member `markers`
#include "marti_visualization_msgs/msg/detail/textured_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_visualization_msgs__msg__TexturedMarkerArray__init(message_memory);
}

void marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_fini_function(void * message_memory)
{
  marti_visualization_msgs__msg__TexturedMarkerArray__fini(message_memory);
}

size_t marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__size_function__TexturedMarkerArray__markers(
  const void * untyped_member)
{
  const marti_visualization_msgs__msg__TexturedMarker__Sequence * member =
    (const marti_visualization_msgs__msg__TexturedMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__get_const_function__TexturedMarkerArray__markers(
  const void * untyped_member, size_t index)
{
  const marti_visualization_msgs__msg__TexturedMarker__Sequence * member =
    (const marti_visualization_msgs__msg__TexturedMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__get_function__TexturedMarkerArray__markers(
  void * untyped_member, size_t index)
{
  marti_visualization_msgs__msg__TexturedMarker__Sequence * member =
    (marti_visualization_msgs__msg__TexturedMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__fetch_function__TexturedMarkerArray__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_visualization_msgs__msg__TexturedMarker * item =
    ((const marti_visualization_msgs__msg__TexturedMarker *)
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__get_const_function__TexturedMarkerArray__markers(untyped_member, index));
  marti_visualization_msgs__msg__TexturedMarker * value =
    (marti_visualization_msgs__msg__TexturedMarker *)(untyped_value);
  *value = *item;
}

void marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__assign_function__TexturedMarkerArray__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_visualization_msgs__msg__TexturedMarker * item =
    ((marti_visualization_msgs__msg__TexturedMarker *)
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__get_function__TexturedMarkerArray__markers(untyped_member, index));
  const marti_visualization_msgs__msg__TexturedMarker * value =
    (const marti_visualization_msgs__msg__TexturedMarker *)(untyped_value);
  *item = *value;
}

bool marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__resize_function__TexturedMarkerArray__markers(
  void * untyped_member, size_t size)
{
  marti_visualization_msgs__msg__TexturedMarker__Sequence * member =
    (marti_visualization_msgs__msg__TexturedMarker__Sequence *)(untyped_member);
  marti_visualization_msgs__msg__TexturedMarker__Sequence__fini(member);
  return marti_visualization_msgs__msg__TexturedMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_member_array[1] = {
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_visualization_msgs__msg__TexturedMarkerArray, markers),  // bytes offset in struct
    NULL,  // default value
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__size_function__TexturedMarkerArray__markers,  // size() function pointer
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__get_const_function__TexturedMarkerArray__markers,  // get_const(index) function pointer
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__get_function__TexturedMarkerArray__markers,  // get(index) function pointer
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__fetch_function__TexturedMarkerArray__markers,  // fetch(index, &value) function pointer
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__assign_function__TexturedMarkerArray__markers,  // assign(index, value) function pointer
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__resize_function__TexturedMarkerArray__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_members = {
  "marti_visualization_msgs__msg",  // message namespace
  "TexturedMarkerArray",  // message name
  1,  // number of fields
  sizeof(marti_visualization_msgs__msg__TexturedMarkerArray),
  marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_member_array,  // message members
  marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_type_support_handle = {
  0,
  &marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_visualization_msgs, msg, TexturedMarkerArray)() {
  marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_visualization_msgs, msg, TexturedMarker)();
  if (!marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_type_support_handle.typesupport_identifier) {
    marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_visualization_msgs__msg__TexturedMarkerArray__rosidl_typesupport_introspection_c__TexturedMarkerArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
