// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_introspection_msgs:msg/ServiceInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_introspection_msgs/msg/detail/service_info__rosidl_typesupport_introspection_c.h"
#include "marti_introspection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_introspection_msgs/msg/detail/service_info__functions.h"
#include "marti_introspection_msgs/msg/detail/service_info__struct.h"


// Include directives for member types
// Member `name`
// Member `resolved_name`
// Member `description`
// Member `group`
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_introspection_msgs__msg__ServiceInfo__init(message_memory);
}

void marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_fini_function(void * message_memory)
{
  marti_introspection_msgs__msg__ServiceInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_message_member_array[7] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__ServiceInfo, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolved_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__ServiceInfo, resolved_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__ServiceInfo, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__ServiceInfo, group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__ServiceInfo, message_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "server",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__ServiceInfo, server),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topic_service",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__ServiceInfo, topic_service),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_message_members = {
  "marti_introspection_msgs__msg",  // message namespace
  "ServiceInfo",  // message name
  7,  // number of fields
  sizeof(marti_introspection_msgs__msg__ServiceInfo),
  marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_message_member_array,  // message members
  marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_message_type_support_handle = {
  0,
  &marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_introspection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_introspection_msgs, msg, ServiceInfo)() {
  if (!marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_message_type_support_handle.typesupport_identifier) {
    marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_introspection_msgs__msg__ServiceInfo__rosidl_typesupport_introspection_c__ServiceInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
