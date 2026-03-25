// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marti_nav_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marti_nav_msgs/msg/detail/route__struct.hpp"
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

void Route_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marti_nav_msgs::msg::Route(_init);
}

void Route_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marti_nav_msgs::msg::Route *>(message_memory);
  typed_message->~Route();
}

size_t size_function__Route__route_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marti_nav_msgs::msg::RoutePoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Route__route_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marti_nav_msgs::msg::RoutePoint> *>(untyped_member);
  return &member[index];
}

void * get_function__Route__route_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marti_nav_msgs::msg::RoutePoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__Route__route_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marti_nav_msgs::msg::RoutePoint *>(
    get_const_function__Route__route_points(untyped_member, index));
  auto & value = *reinterpret_cast<marti_nav_msgs::msg::RoutePoint *>(untyped_value);
  value = item;
}

void assign_function__Route__route_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marti_nav_msgs::msg::RoutePoint *>(
    get_function__Route__route_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const marti_nav_msgs::msg::RoutePoint *>(untyped_value);
  item = value;
}

void resize_function__Route__route_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marti_nav_msgs::msg::RoutePoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Route__properties(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Route__properties(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__Route__properties(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__Route__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marti_common_msgs::msg::KeyValue *>(
    get_const_function__Route__properties(untyped_member, index));
  auto & value = *reinterpret_cast<marti_common_msgs::msg::KeyValue *>(untyped_value);
  value = item;
}

void assign_function__Route__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marti_common_msgs::msg::KeyValue *>(
    get_function__Route__properties(untyped_member, index));
  const auto & value = *reinterpret_cast<const marti_common_msgs::msg::KeyValue *>(untyped_value);
  item = value;
}

void resize_function__Route__properties(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Route_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs::msg::Route, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "route_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_nav_msgs::msg::RoutePoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs::msg::Route, route_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Route__route_points,  // size() function pointer
    get_const_function__Route__route_points,  // get_const(index) function pointer
    get_function__Route__route_points,  // get(index) function pointer
    fetch_function__Route__route_points,  // fetch(index, &value) function pointer
    assign_function__Route__route_points,  // assign(index, value) function pointer
    resize_function__Route__route_points  // resize(index) function pointer
  },
  {
    "properties",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_common_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_nav_msgs::msg::Route, properties),  // bytes offset in struct
    nullptr,  // default value
    size_function__Route__properties,  // size() function pointer
    get_const_function__Route__properties,  // get_const(index) function pointer
    get_function__Route__properties,  // get(index) function pointer
    fetch_function__Route__properties,  // fetch(index, &value) function pointer
    assign_function__Route__properties,  // assign(index, value) function pointer
    resize_function__Route__properties  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Route_message_members = {
  "marti_nav_msgs::msg",  // message namespace
  "Route",  // message name
  3,  // number of fields
  sizeof(marti_nav_msgs::msg::Route),
  Route_message_member_array,  // message members
  Route_init_function,  // function to initialize message memory (memory has to be allocated)
  Route_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Route_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Route_message_members,
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
get_message_type_support_handle<marti_nav_msgs::msg::Route>()
{
  return &::marti_nav_msgs::msg::rosidl_typesupport_introspection_cpp::Route_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marti_nav_msgs, msg, Route)() {
  return &::marti_nav_msgs::msg::rosidl_typesupport_introspection_cpp::Route_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
