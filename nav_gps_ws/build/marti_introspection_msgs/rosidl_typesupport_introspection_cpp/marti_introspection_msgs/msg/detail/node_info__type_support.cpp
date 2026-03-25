// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marti_introspection_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marti_introspection_msgs/msg/detail/node_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace marti_introspection_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NodeInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marti_introspection_msgs::msg::NodeInfo(_init);
}

void NodeInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marti_introspection_msgs::msg::NodeInfo *>(message_memory);
  typed_message->~NodeInfo();
}

size_t size_function__NodeInfo__topics(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marti_introspection_msgs::msg::TopicInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeInfo__topics(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marti_introspection_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeInfo__topics(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marti_introspection_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeInfo__topics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marti_introspection_msgs::msg::TopicInfo *>(
    get_const_function__NodeInfo__topics(untyped_member, index));
  auto & value = *reinterpret_cast<marti_introspection_msgs::msg::TopicInfo *>(untyped_value);
  value = item;
}

void assign_function__NodeInfo__topics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marti_introspection_msgs::msg::TopicInfo *>(
    get_function__NodeInfo__topics(untyped_member, index));
  const auto & value = *reinterpret_cast<const marti_introspection_msgs::msg::TopicInfo *>(untyped_value);
  item = value;
}

void resize_function__NodeInfo__topics(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marti_introspection_msgs::msg::TopicInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeInfo__parameters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marti_introspection_msgs::msg::ParamInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeInfo__parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marti_introspection_msgs::msg::ParamInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeInfo__parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marti_introspection_msgs::msg::ParamInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeInfo__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marti_introspection_msgs::msg::ParamInfo *>(
    get_const_function__NodeInfo__parameters(untyped_member, index));
  auto & value = *reinterpret_cast<marti_introspection_msgs::msg::ParamInfo *>(untyped_value);
  value = item;
}

void assign_function__NodeInfo__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marti_introspection_msgs::msg::ParamInfo *>(
    get_function__NodeInfo__parameters(untyped_member, index));
  const auto & value = *reinterpret_cast<const marti_introspection_msgs::msg::ParamInfo *>(untyped_value);
  item = value;
}

void resize_function__NodeInfo__parameters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marti_introspection_msgs::msg::ParamInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeInfo__services(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marti_introspection_msgs::msg::ServiceInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeInfo__services(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marti_introspection_msgs::msg::ServiceInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeInfo__services(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marti_introspection_msgs::msg::ServiceInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeInfo__services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marti_introspection_msgs::msg::ServiceInfo *>(
    get_const_function__NodeInfo__services(untyped_member, index));
  auto & value = *reinterpret_cast<marti_introspection_msgs::msg::ServiceInfo *>(untyped_value);
  value = item;
}

void assign_function__NodeInfo__services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marti_introspection_msgs::msg::ServiceInfo *>(
    get_function__NodeInfo__services(untyped_member, index));
  const auto & value = *reinterpret_cast<const marti_introspection_msgs::msg::ServiceInfo *>(untyped_value);
  item = value;
}

void resize_function__NodeInfo__services(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marti_introspection_msgs::msg::ServiceInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeInfo_message_member_array[7] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs::msg::NodeInfo, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "location",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs::msg::NodeInfo, location),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodelet_manager",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs::msg::NodeInfo, nodelet_manager),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs::msg::NodeInfo, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "topics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_introspection_msgs::msg::TopicInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs::msg::NodeInfo, topics),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeInfo__topics,  // size() function pointer
    get_const_function__NodeInfo__topics,  // get_const(index) function pointer
    get_function__NodeInfo__topics,  // get(index) function pointer
    fetch_function__NodeInfo__topics,  // fetch(index, &value) function pointer
    assign_function__NodeInfo__topics,  // assign(index, value) function pointer
    resize_function__NodeInfo__topics  // resize(index) function pointer
  },
  {
    "parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_introspection_msgs::msg::ParamInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs::msg::NodeInfo, parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeInfo__parameters,  // size() function pointer
    get_const_function__NodeInfo__parameters,  // get_const(index) function pointer
    get_function__NodeInfo__parameters,  // get(index) function pointer
    fetch_function__NodeInfo__parameters,  // fetch(index, &value) function pointer
    assign_function__NodeInfo__parameters,  // assign(index, value) function pointer
    resize_function__NodeInfo__parameters  // resize(index) function pointer
  },
  {
    "services",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_introspection_msgs::msg::ServiceInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_introspection_msgs::msg::NodeInfo, services),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeInfo__services,  // size() function pointer
    get_const_function__NodeInfo__services,  // get_const(index) function pointer
    get_function__NodeInfo__services,  // get(index) function pointer
    fetch_function__NodeInfo__services,  // fetch(index, &value) function pointer
    assign_function__NodeInfo__services,  // assign(index, value) function pointer
    resize_function__NodeInfo__services  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeInfo_message_members = {
  "marti_introspection_msgs::msg",  // message namespace
  "NodeInfo",  // message name
  7,  // number of fields
  sizeof(marti_introspection_msgs::msg::NodeInfo),
  NodeInfo_message_member_array,  // message members
  NodeInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marti_introspection_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_introspection_msgs::msg::NodeInfo>()
{
  return &::marti_introspection_msgs::msg::rosidl_typesupport_introspection_cpp::NodeInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marti_introspection_msgs, msg, NodeInfo)() {
  return &::marti_introspection_msgs::msg::rosidl_typesupport_introspection_cpp::NodeInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
