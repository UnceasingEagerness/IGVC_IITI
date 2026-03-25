// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from swri_roscpp:msg/TestTopicServiceRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "swri_roscpp/msg/detail/test_topic_service_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace swri_roscpp
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TestTopicServiceRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) swri_roscpp::msg::TestTopicServiceRequest(_init);
}

void TestTopicServiceRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<swri_roscpp::msg::TestTopicServiceRequest *>(message_memory);
  typed_message->~TestTopicServiceRequest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestTopicServiceRequest_message_member_array[2] = {
  {
    "srv_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_common_msgs::msg::ServiceHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swri_roscpp::msg::TestTopicServiceRequest, srv_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swri_roscpp::msg::TestTopicServiceRequest, request_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestTopicServiceRequest_message_members = {
  "swri_roscpp::msg",  // message namespace
  "TestTopicServiceRequest",  // message name
  2,  // number of fields
  sizeof(swri_roscpp::msg::TestTopicServiceRequest),
  TestTopicServiceRequest_message_member_array,  // message members
  TestTopicServiceRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  TestTopicServiceRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestTopicServiceRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestTopicServiceRequest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace swri_roscpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swri_roscpp::msg::TestTopicServiceRequest>()
{
  return &::swri_roscpp::msg::rosidl_typesupport_introspection_cpp::TestTopicServiceRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swri_roscpp, msg, TestTopicServiceRequest)() {
  return &::swri_roscpp::msg::rosidl_typesupport_introspection_cpp::TestTopicServiceRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
