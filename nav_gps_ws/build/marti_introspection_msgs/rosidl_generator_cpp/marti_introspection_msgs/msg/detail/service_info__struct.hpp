// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_introspection_msgs:msg/ServiceInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__STRUCT_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marti_introspection_msgs__msg__ServiceInfo __attribute__((deprecated))
#else
# define DEPRECATED__marti_introspection_msgs__msg__ServiceInfo __declspec(deprecated)
#endif

namespace marti_introspection_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceInfo_
{
  using Type = ServiceInfo_<ContainerAllocator>;

  explicit ServiceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->resolved_name = "";
      this->description = "";
      this->group = "";
      this->message_type = "";
      this->server = false;
      this->topic_service = false;
    }
  }

  explicit ServiceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    resolved_name(_alloc),
    description(_alloc),
    group(_alloc),
    message_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->resolved_name = "";
      this->description = "";
      this->group = "";
      this->message_type = "";
      this->server = false;
      this->topic_service = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _resolved_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _resolved_name_type resolved_name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_type group;
  using _message_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type_type message_type;
  using _server_type =
    bool;
  _server_type server;
  using _topic_service_type =
    bool;
  _topic_service_type topic_service;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__resolved_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->resolved_name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group = _arg;
    return *this;
  }
  Type & set__message_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__server(
    const bool & _arg)
  {
    this->server = _arg;
    return *this;
  }
  Type & set__topic_service(
    const bool & _arg)
  {
    this->topic_service = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_introspection_msgs__msg__ServiceInfo
    std::shared_ptr<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_introspection_msgs__msg__ServiceInfo
    std::shared_ptr<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->resolved_name != other.resolved_name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->group != other.group) {
      return false;
    }
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->server != other.server) {
      return false;
    }
    if (this->topic_service != other.topic_service) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceInfo_

// alias to use template instance with default allocator
using ServiceInfo =
  marti_introspection_msgs::msg::ServiceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_introspection_msgs

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__STRUCT_HPP_
