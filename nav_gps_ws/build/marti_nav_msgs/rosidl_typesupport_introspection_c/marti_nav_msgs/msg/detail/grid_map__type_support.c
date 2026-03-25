// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_nav_msgs:msg/GridMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_nav_msgs/msg/detail/grid_map__rosidl_typesupport_introspection_c.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_nav_msgs/msg/detail/grid_map__functions.h"
#include "marti_nav_msgs/msg/detail/grid_map__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `top_left`
// Member `top_right`
// Member `bottom_right`
// Member `bottom_left`
#include "geometry_msgs/msg/point.h"
// Member `top_left`
// Member `top_right`
// Member `bottom_right`
// Member `bottom_left`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `map_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `map_data`
#include "sensor_msgs/msg/image.h"
// Member `map_data`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__msg__GridMap__init(message_memory);
}

void marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_fini_function(void * message_memory)
{
  marti_nav_msgs__msg__GridMap__fini(message_memory);
}

size_t marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__size_function__GridMap__map_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_const_function__GridMap__map_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_function__GridMap__map_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__fetch_function__GridMap__map_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_const_function__GridMap__map_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__assign_function__GridMap__map_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_function__GridMap__map_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__resize_function__GridMap__map_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__size_function__GridMap__map_data(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_const_function__GridMap__map_data(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_function__GridMap__map_data(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__fetch_function__GridMap__map_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Image * item =
    ((const sensor_msgs__msg__Image *)
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_const_function__GridMap__map_data(untyped_member, index));
  sensor_msgs__msg__Image * value =
    (sensor_msgs__msg__Image *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__assign_function__GridMap__map_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Image * item =
    ((sensor_msgs__msg__Image *)
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_function__GridMap__map_data(untyped_member, index));
  const sensor_msgs__msg__Image * value =
    (const sensor_msgs__msg__Image *)(untyped_value);
  *item = *value;
}

bool marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__resize_function__GridMap__map_data(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__GridMap, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__GridMap, top_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__GridMap, top_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__GridMap, bottom_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__GridMap, bottom_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__GridMap, map_names),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__size_function__GridMap__map_names,  // size() function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_const_function__GridMap__map_names,  // get_const(index) function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_function__GridMap__map_names,  // get(index) function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__fetch_function__GridMap__map_names,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__assign_function__GridMap__map_names,  // assign(index, value) function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__resize_function__GridMap__map_names  // resize(index) function pointer
  },
  {
    "map_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__msg__GridMap, map_data),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__size_function__GridMap__map_data,  // size() function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_const_function__GridMap__map_data,  // get_const(index) function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__get_function__GridMap__map_data,  // get(index) function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__fetch_function__GridMap__map_data,  // fetch(index, &value) function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__assign_function__GridMap__map_data,  // assign(index, value) function pointer
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__resize_function__GridMap__map_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_members = {
  "marti_nav_msgs__msg",  // message namespace
  "GridMap",  // message name
  7,  // number of fields
  sizeof(marti_nav_msgs__msg__GridMap),
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_member_array,  // message members
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_type_support_handle = {
  0,
  &marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, GridMap)() {
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__msg__GridMap__rosidl_typesupport_introspection_c__GridMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
