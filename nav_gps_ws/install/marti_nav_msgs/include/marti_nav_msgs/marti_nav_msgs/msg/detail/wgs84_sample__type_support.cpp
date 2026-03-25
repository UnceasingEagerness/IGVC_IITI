// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marti_nav_msgs:msg/Wgs84Sample.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marti_nav_msgs/msg/detail/wgs84_sample__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace marti_nav_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Wgs84Sample_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marti_nav_msgs::msg::Wgs84Sample(_init);
}

void Wgs84Sample_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marti_nav_msgs::msg::Wgs84Sample *>(message_memory);
  typed_message->~Wgs84Sample();
}

size_t size_function__Wgs84Sample__wgs84_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Wgs84Sample__wgs84_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Wgs84Sample__wgs84_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__Wgs84Sample__wgs84_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Wgs84Sample__wgs84_covariance(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Wgs84Sample__wgs84_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Wgs84Sample__wgs84_covariance(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Wgs84Sample_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs::msg::Wgs84Sample, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "odom",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs::msg::Wgs84Sample, odom),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wgs84",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs::msg::Wgs84Sample, wgs84),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wgs84_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs::msg::Wgs84Sample, wgs84_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Wgs84Sample__wgs84_covariance,  // size() function pointer
    get_const_function__Wgs84Sample__wgs84_covariance,  // get_const(index) function pointer
    get_function__Wgs84Sample__wgs84_covariance,  // get(index) function pointer
    fetch_function__Wgs84Sample__wgs84_covariance,  // fetch(index, &value) function pointer
    assign_function__Wgs84Sample__wgs84_covariance,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Wgs84Sample_message_members = {
  "marti_nav_msgs::msg",  // message namespace
  "Wgs84Sample",  // message name
  4,  // number of fields
  sizeof(marti_nav_msgs::msg::Wgs84Sample),
  Wgs84Sample_message_member_array,  // message members
  Wgs84Sample_init_function,  // function to initialize message memory (memory has to be allocated)
  Wgs84Sample_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Wgs84Sample_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Wgs84Sample_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marti_nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_nav_msgs::msg::Wgs84Sample>()
{
  return &::marti_nav_msgs::msg::rosidl_typesupport_introspection_cpp::Wgs84Sample_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marti_nav_msgs, msg, Wgs84Sample)() {
  return &::marti_nav_msgs::msg::rosidl_typesupport_introspection_cpp::Wgs84Sample_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
