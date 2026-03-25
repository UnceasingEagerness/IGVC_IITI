// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marti_common_msgs:msg/KeyValueArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marti_common_msgs/msg/detail/key_value_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace marti_common_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KeyValueArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marti_common_msgs::msg::KeyValueArray(_init);
}

void KeyValueArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marti_common_msgs::msg::KeyValueArray *>(message_memory);
  typed_message->~KeyValueArray();
}

size_t size_function__KeyValueArray__items(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KeyValueArray__items(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__KeyValueArray__items(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__KeyValueArray__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marti_common_msgs::msg::KeyValue *>(
    get_const_function__KeyValueArray__items(untyped_member, index));
  auto & value = *reinterpret_cast<marti_common_msgs::msg::KeyValue *>(untyped_value);
  value = item;
}

void assign_function__KeyValueArray__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marti_common_msgs::msg::KeyValue *>(
    get_function__KeyValueArray__items(untyped_member, index));
  const auto & value = *reinterpret_cast<const marti_common_msgs::msg::KeyValue *>(untyped_value);
  item = value;
}

void resize_function__KeyValueArray__items(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyValueArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_common_msgs::msg::KeyValueArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "items",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_common_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_common_msgs::msg::KeyValueArray, items),  // bytes offset in struct
    nullptr,  // default value
    size_function__KeyValueArray__items,  // size() function pointer
    get_const_function__KeyValueArray__items,  // get_const(index) function pointer
    get_function__KeyValueArray__items,  // get(index) function pointer
    fetch_function__KeyValueArray__items,  // fetch(index, &value) function pointer
    assign_function__KeyValueArray__items,  // assign(index, value) function pointer
    resize_function__KeyValueArray__items  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyValueArray_message_members = {
  "marti_common_msgs::msg",  // message namespace
  "KeyValueArray",  // message name
  2,  // number of fields
  sizeof(marti_common_msgs::msg::KeyValueArray),
  KeyValueArray_message_member_array,  // message members
  KeyValueArray_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyValueArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyValueArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyValueArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marti_common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_common_msgs::msg::KeyValueArray>()
{
  return &::marti_common_msgs::msg::rosidl_typesupport_introspection_cpp::KeyValueArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marti_common_msgs, msg, KeyValueArray)() {
  return &::marti_common_msgs::msg::rosidl_typesupport_introspection_cpp::KeyValueArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
