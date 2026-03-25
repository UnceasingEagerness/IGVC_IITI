// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_introspection_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_introspection_msgs/msg/detail/node_info__rosidl_typesupport_introspection_c.h"
#include "marti_introspection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_introspection_msgs/msg/detail/node_info__functions.h"
#include "marti_introspection_msgs/msg/detail/node_info__struct.h"


// Include directives for member types
// Member `name`
// Member `location`
// Member `nodelet_manager`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `topics`
#include "marti_introspection_msgs/msg/topic_info.h"
// Member `topics`
#include "marti_introspection_msgs/msg/detail/topic_info__rosidl_typesupport_introspection_c.h"
// Member `parameters`
#include "marti_introspection_msgs/msg/param_info.h"
// Member `parameters`
#include "marti_introspection_msgs/msg/detail/param_info__rosidl_typesupport_introspection_c.h"
// Member `services`
#include "marti_introspection_msgs/msg/service_info.h"
// Member `services`
#include "marti_introspection_msgs/msg/detail/service_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_introspection_msgs__msg__NodeInfo__init(message_memory);
}

void marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_fini_function(void * message_memory)
{
  marti_introspection_msgs__msg__NodeInfo__fini(message_memory);
}

size_t marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__size_function__NodeInfo__topics(
  const void * untyped_member)
{
  const marti_introspection_msgs__msg__TopicInfo__Sequence * member =
    (const marti_introspection_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__topics(
  const void * untyped_member, size_t index)
{
  const marti_introspection_msgs__msg__TopicInfo__Sequence * member =
    (const marti_introspection_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__topics(
  void * untyped_member, size_t index)
{
  marti_introspection_msgs__msg__TopicInfo__Sequence * member =
    (marti_introspection_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__fetch_function__NodeInfo__topics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_introspection_msgs__msg__TopicInfo * item =
    ((const marti_introspection_msgs__msg__TopicInfo *)
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__topics(untyped_member, index));
  marti_introspection_msgs__msg__TopicInfo * value =
    (marti_introspection_msgs__msg__TopicInfo *)(untyped_value);
  *value = *item;
}

void marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__assign_function__NodeInfo__topics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_introspection_msgs__msg__TopicInfo * item =
    ((marti_introspection_msgs__msg__TopicInfo *)
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__topics(untyped_member, index));
  const marti_introspection_msgs__msg__TopicInfo * value =
    (const marti_introspection_msgs__msg__TopicInfo *)(untyped_value);
  *item = *value;
}

bool marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__resize_function__NodeInfo__topics(
  void * untyped_member, size_t size)
{
  marti_introspection_msgs__msg__TopicInfo__Sequence * member =
    (marti_introspection_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  marti_introspection_msgs__msg__TopicInfo__Sequence__fini(member);
  return marti_introspection_msgs__msg__TopicInfo__Sequence__init(member, size);
}

size_t marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__size_function__NodeInfo__parameters(
  const void * untyped_member)
{
  const marti_introspection_msgs__msg__ParamInfo__Sequence * member =
    (const marti_introspection_msgs__msg__ParamInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__parameters(
  const void * untyped_member, size_t index)
{
  const marti_introspection_msgs__msg__ParamInfo__Sequence * member =
    (const marti_introspection_msgs__msg__ParamInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__parameters(
  void * untyped_member, size_t index)
{
  marti_introspection_msgs__msg__ParamInfo__Sequence * member =
    (marti_introspection_msgs__msg__ParamInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__fetch_function__NodeInfo__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_introspection_msgs__msg__ParamInfo * item =
    ((const marti_introspection_msgs__msg__ParamInfo *)
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__parameters(untyped_member, index));
  marti_introspection_msgs__msg__ParamInfo * value =
    (marti_introspection_msgs__msg__ParamInfo *)(untyped_value);
  *value = *item;
}

void marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__assign_function__NodeInfo__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_introspection_msgs__msg__ParamInfo * item =
    ((marti_introspection_msgs__msg__ParamInfo *)
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__parameters(untyped_member, index));
  const marti_introspection_msgs__msg__ParamInfo * value =
    (const marti_introspection_msgs__msg__ParamInfo *)(untyped_value);
  *item = *value;
}

bool marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__resize_function__NodeInfo__parameters(
  void * untyped_member, size_t size)
{
  marti_introspection_msgs__msg__ParamInfo__Sequence * member =
    (marti_introspection_msgs__msg__ParamInfo__Sequence *)(untyped_member);
  marti_introspection_msgs__msg__ParamInfo__Sequence__fini(member);
  return marti_introspection_msgs__msg__ParamInfo__Sequence__init(member, size);
}

size_t marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__size_function__NodeInfo__services(
  const void * untyped_member)
{
  const marti_introspection_msgs__msg__ServiceInfo__Sequence * member =
    (const marti_introspection_msgs__msg__ServiceInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__services(
  const void * untyped_member, size_t index)
{
  const marti_introspection_msgs__msg__ServiceInfo__Sequence * member =
    (const marti_introspection_msgs__msg__ServiceInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__services(
  void * untyped_member, size_t index)
{
  marti_introspection_msgs__msg__ServiceInfo__Sequence * member =
    (marti_introspection_msgs__msg__ServiceInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__fetch_function__NodeInfo__services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_introspection_msgs__msg__ServiceInfo * item =
    ((const marti_introspection_msgs__msg__ServiceInfo *)
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__services(untyped_member, index));
  marti_introspection_msgs__msg__ServiceInfo * value =
    (marti_introspection_msgs__msg__ServiceInfo *)(untyped_value);
  *value = *item;
}

void marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__assign_function__NodeInfo__services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_introspection_msgs__msg__ServiceInfo * item =
    ((marti_introspection_msgs__msg__ServiceInfo *)
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__services(untyped_member, index));
  const marti_introspection_msgs__msg__ServiceInfo * value =
    (const marti_introspection_msgs__msg__ServiceInfo *)(untyped_value);
  *item = *value;
}

bool marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__resize_function__NodeInfo__services(
  void * untyped_member, size_t size)
{
  marti_introspection_msgs__msg__ServiceInfo__Sequence * member =
    (marti_introspection_msgs__msg__ServiceInfo__Sequence *)(untyped_member);
  marti_introspection_msgs__msg__ServiceInfo__Sequence__fini(member);
  return marti_introspection_msgs__msg__ServiceInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_member_array[7] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__NodeInfo, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__NodeInfo, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodelet_manager",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__NodeInfo, nodelet_manager),  // bytes offset in struct
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
    offsetof(marti_introspection_msgs__msg__NodeInfo, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__NodeInfo, topics),  // bytes offset in struct
    NULL,  // default value
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__size_function__NodeInfo__topics,  // size() function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__topics,  // get_const(index) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__topics,  // get(index) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__fetch_function__NodeInfo__topics,  // fetch(index, &value) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__assign_function__NodeInfo__topics,  // assign(index, value) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__resize_function__NodeInfo__topics  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__NodeInfo, parameters),  // bytes offset in struct
    NULL,  // default value
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__size_function__NodeInfo__parameters,  // size() function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__parameters,  // get_const(index) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__parameters,  // get(index) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__fetch_function__NodeInfo__parameters,  // fetch(index, &value) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__assign_function__NodeInfo__parameters,  // assign(index, value) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__resize_function__NodeInfo__parameters  // resize(index) function pointer
  },
  {
    "services",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs__msg__NodeInfo, services),  // bytes offset in struct
    NULL,  // default value
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__size_function__NodeInfo__services,  // size() function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_const_function__NodeInfo__services,  // get_const(index) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__get_function__NodeInfo__services,  // get(index) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__fetch_function__NodeInfo__services,  // fetch(index, &value) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__assign_function__NodeInfo__services,  // assign(index, value) function pointer
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__resize_function__NodeInfo__services  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_members = {
  "marti_introspection_msgs__msg",  // message namespace
  "NodeInfo",  // message name
  7,  // number of fields
  sizeof(marti_introspection_msgs__msg__NodeInfo),
  marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_member_array,  // message members
  marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_type_support_handle = {
  0,
  &marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_introspection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_introspection_msgs, msg, NodeInfo)() {
  marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_introspection_msgs, msg, TopicInfo)();
  marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_introspection_msgs, msg, ParamInfo)();
  marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_introspection_msgs, msg, ServiceInfo)();
  if (!marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_type_support_handle.typesupport_identifier) {
    marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_introspection_msgs__msg__NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
