// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marti_nav_msgs:srv/GetRouteList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marti_nav_msgs/srv/detail/get_route_list__rosidl_typesupport_introspection_c.h"
#include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marti_nav_msgs/srv/detail/get_route_list__functions.h"
#include "marti_nav_msgs/srv/detail/get_route_list__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__srv__GetRouteList_Request__init(message_memory);
}

void marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_fini_function(void * message_memory)
{
  marti_nav_msgs__srv__GetRouteList_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__srv__GetRouteList_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_message_members = {
  "marti_nav_msgs__srv",  // message namespace
  "GetRouteList_Request",  // message name
  1,  // number of fields
  sizeof(marti_nav_msgs__srv__GetRouteList_Request),
  marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_message_member_array,  // message members
  marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_message_type_support_handle = {
  0,
  &marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, srv, GetRouteList_Request)() {
  if (!marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__srv__GetRouteList_Request__rosidl_typesupport_introspection_c__GetRouteList_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "marti_nav_msgs/srv/detail/get_route_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "marti_nav_msgs/srv/detail/get_route_list__functions.h"
// already included above
// #include "marti_nav_msgs/srv/detail/get_route_list__struct.h"


// Include directives for member types
// Member `routes`
#include "marti_nav_msgs/msg/route.h"
// Member `routes`
#include "marti_nav_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marti_nav_msgs__srv__GetRouteList_Response__init(message_memory);
}

void marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_fini_function(void * message_memory)
{
  marti_nav_msgs__srv__GetRouteList_Response__fini(message_memory);
}

size_t marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__size_function__GetRouteList_Response__routes(
  const void * untyped_member)
{
  const marti_nav_msgs__msg__Route__Sequence * member =
    (const marti_nav_msgs__msg__Route__Sequence *)(untyped_member);
  return member->size;
}

const void * marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__get_const_function__GetRouteList_Response__routes(
  const void * untyped_member, size_t index)
{
  const marti_nav_msgs__msg__Route__Sequence * member =
    (const marti_nav_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__get_function__GetRouteList_Response__routes(
  void * untyped_member, size_t index)
{
  marti_nav_msgs__msg__Route__Sequence * member =
    (marti_nav_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

void marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__fetch_function__GetRouteList_Response__routes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_nav_msgs__msg__Route * item =
    ((const marti_nav_msgs__msg__Route *)
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__get_const_function__GetRouteList_Response__routes(untyped_member, index));
  marti_nav_msgs__msg__Route * value =
    (marti_nav_msgs__msg__Route *)(untyped_value);
  *value = *item;
}

void marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__assign_function__GetRouteList_Response__routes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_nav_msgs__msg__Route * item =
    ((marti_nav_msgs__msg__Route *)
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__get_function__GetRouteList_Response__routes(untyped_member, index));
  const marti_nav_msgs__msg__Route * value =
    (const marti_nav_msgs__msg__Route *)(untyped_value);
  *item = *value;
}

bool marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__resize_function__GetRouteList_Response__routes(
  void * untyped_member, size_t size)
{
  marti_nav_msgs__msg__Route__Sequence * member =
    (marti_nav_msgs__msg__Route__Sequence *)(untyped_member);
  marti_nav_msgs__msg__Route__Sequence__fini(member);
  return marti_nav_msgs__msg__Route__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_member_array[3] = {
  {
    "routes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__srv__GetRouteList_Response, routes),  // bytes offset in struct
    NULL,  // default value
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__size_function__GetRouteList_Response__routes,  // size() function pointer
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__get_const_function__GetRouteList_Response__routes,  // get_const(index) function pointer
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__get_function__GetRouteList_Response__routes,  // get(index) function pointer
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__fetch_function__GetRouteList_Response__routes,  // fetch(index, &value) function pointer
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__assign_function__GetRouteList_Response__routes,  // assign(index, value) function pointer
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__resize_function__GetRouteList_Response__routes  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__srv__GetRouteList_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs__srv__GetRouteList_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_members = {
  "marti_nav_msgs__srv",  // message namespace
  "GetRouteList_Response",  // message name
  3,  // number of fields
  sizeof(marti_nav_msgs__srv__GetRouteList_Response),
  marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_member_array,  // message members
  marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_type_support_handle = {
  0,
  &marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, srv, GetRouteList_Response)() {
  marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, msg, Route)();
  if (!marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marti_nav_msgs__srv__GetRouteList_Response__rosidl_typesupport_introspection_c__GetRouteList_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "marti_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "marti_nav_msgs/srv/detail/get_route_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_service_members = {
  "marti_nav_msgs__srv",  // service namespace
  "GetRouteList",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_Request_message_type_support_handle,
  NULL  // response message
  // marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_Response_message_type_support_handle
};

static rosidl_service_type_support_t marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_service_type_support_handle = {
  0,
  &marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, srv, GetRouteList_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, srv, GetRouteList_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marti_nav_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, srv, GetRouteList)() {
  if (!marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_service_type_support_handle.typesupport_identifier) {
    marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, srv, GetRouteList_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_nav_msgs, srv, GetRouteList_Response)()->data;
  }

  return &marti_nav_msgs__srv__detail__get_route_list__rosidl_typesupport_introspection_c__GetRouteList_service_type_support_handle;
}
