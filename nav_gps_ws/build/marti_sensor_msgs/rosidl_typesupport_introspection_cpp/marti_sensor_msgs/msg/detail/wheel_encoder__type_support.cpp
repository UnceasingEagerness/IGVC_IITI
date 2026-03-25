// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marti_sensor_msgs:msg/WheelEncoder.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marti_sensor_msgs/msg/detail/wheel_encoder__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace marti_sensor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelEncoder_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marti_sensor_msgs::msg::WheelEncoder(_init);
}

void WheelEncoder_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marti_sensor_msgs::msg::WheelEncoder *>(message_memory);
  typed_message->~WheelEncoder();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelEncoder_message_member_array[3] = {
  {
    "frequency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs::msg::WheelEncoder, frequency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "directional",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs::msg::WheelEncoder, directional),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marti_sensor_msgs::msg::WheelEncoder, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelEncoder_message_members = {
  "marti_sensor_msgs::msg",  // message namespace
  "WheelEncoder",  // message name
  3,  // number of fields
  sizeof(marti_sensor_msgs::msg::WheelEncoder),
  WheelEncoder_message_member_array,  // message members
  WheelEncoder_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelEncoder_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelEncoder_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelEncoder_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marti_sensor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_sensor_msgs::msg::WheelEncoder>()
{
  return &::marti_sensor_msgs::msg::rosidl_typesupport_introspection_cpp::WheelEncoder_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marti_sensor_msgs, msg, WheelEncoder)() {
  return &::marti_sensor_msgs::msg::rosidl_typesupport_introspection_cpp::WheelEncoder_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
