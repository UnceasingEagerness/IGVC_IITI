// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swri_roscpp:msg/TestTopicServiceRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swri_roscpp/msg/detail/test_topic_service_request__rosidl_typesupport_introspection_c.h"
#include "swri_roscpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swri_roscpp/msg/detail/test_topic_service_request__functions.h"
#include "swri_roscpp/msg/detail/test_topic_service_request__struct.h"


// Include directives for member types
// Member `srv_header`
#include "marti_common_msgs/msg/service_header.h"
// Member `srv_header`
#include "marti_common_msgs/msg/detail/service_header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swri_roscpp__msg__TestTopicServiceRequest__init(message_memory);
}

void swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_fini_function(void * message_memory)
{
  swri_roscpp__msg__TestTopicServiceRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_member_array[2] = {
  {
    "srv_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swri_roscpp__msg__TestTopicServiceRequest, srv_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swri_roscpp__msg__TestTopicServiceRequest, request_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_members = {
  "swri_roscpp__msg",  // message namespace
  "TestTopicServiceRequest",  // message name
  2,  // number of fields
  sizeof(swri_roscpp__msg__TestTopicServiceRequest),
  swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_member_array,  // message members
  swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_type_support_handle = {
  0,
  &swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swri_roscpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swri_roscpp, msg, TestTopicServiceRequest)() {
  swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_common_msgs, msg, ServiceHeader)();
  if (!swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_type_support_handle.typesupport_identifier) {
    swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swri_roscpp__msg__TestTopicServiceRequest__rosidl_typesupport_introspection_c__TestTopicServiceRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
