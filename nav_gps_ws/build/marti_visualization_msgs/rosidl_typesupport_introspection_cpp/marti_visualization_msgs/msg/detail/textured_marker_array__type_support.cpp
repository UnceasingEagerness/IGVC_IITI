// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marti_visualization_msgs/msg/detail/textured_marker_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace marti_visualization_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TexturedMarkerArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marti_visualization_msgs::msg::TexturedMarkerArray(_init);
}

void TexturedMarkerArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marti_visualization_msgs::msg::TexturedMarkerArray *>(message_memory);
  typed_message->~TexturedMarkerArray();
}

size_t size_function__TexturedMarkerArray__markers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marti_visualization_msgs::msg::TexturedMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TexturedMarkerArray__markers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marti_visualization_msgs::msg::TexturedMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__TexturedMarkerArray__markers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marti_visualization_msgs::msg::TexturedMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__TexturedMarkerArray__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marti_visualization_msgs::msg::TexturedMarker *>(
    get_const_function__TexturedMarkerArray__markers(untyped_member, index));
  auto & value = *reinterpret_cast<marti_visualization_msgs::msg::TexturedMarker *>(untyped_value);
  value = item;
}

void assign_function__TexturedMarkerArray__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marti_visualization_msgs::msg::TexturedMarker *>(
    get_function__TexturedMarkerArray__markers(untyped_member, index));
  const auto & value = *reinterpret_cast<const marti_visualization_msgs::msg::TexturedMarker *>(untyped_value);
  item = value;
}

void resize_function__TexturedMarkerArray__markers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marti_visualization_msgs::msg::TexturedMarker> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TexturedMarkerArray_message_member_array[1] = {
  {
    "markers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_visualization_msgs::msg::TexturedMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_visualization_msgs::msg::TexturedMarkerArray, markers),  // bytes offset in struct
    nullptr,  // default value
    size_function__TexturedMarkerArray__markers,  // size() function pointer
    get_const_function__TexturedMarkerArray__markers,  // get_const(index) function pointer
    get_function__TexturedMarkerArray__markers,  // get(index) function pointer
    fetch_function__TexturedMarkerArray__markers,  // fetch(index, &value) function pointer
    assign_function__TexturedMarkerArray__markers,  // assign(index, value) function pointer
    resize_function__TexturedMarkerArray__markers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TexturedMarkerArray_message_members = {
  "marti_visualization_msgs::msg",  // message namespace
  "TexturedMarkerArray",  // message name
  1,  // number of fields
  sizeof(marti_visualization_msgs::msg::TexturedMarkerArray),
  TexturedMarkerArray_message_member_array,  // message members
  TexturedMarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TexturedMarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TexturedMarkerArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TexturedMarkerArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marti_visualization_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_visualization_msgs::msg::TexturedMarkerArray>()
{
  return &::marti_visualization_msgs::msg::rosidl_typesupport_introspection_cpp::TexturedMarkerArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marti_visualization_msgs, msg, TexturedMarkerArray)() {
  return &::marti_visualization_msgs::msg::rosidl_typesupport_introspection_cpp::TexturedMarkerArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
