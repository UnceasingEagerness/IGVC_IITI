// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_introspection_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'topics'
#include "marti_introspection_msgs/msg/detail/topic_info__struct.hpp"
// Member 'parameters'
#include "marti_introspection_msgs/msg/detail/param_info__struct.hpp"
// Member 'services'
#include "marti_introspection_msgs/msg/detail/service_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_introspection_msgs__msg__NodeInfo __attribute__((deprecated))
#else
# define DEPRECATED__marti_introspection_msgs__msg__NodeInfo __declspec(deprecated)
#endif

namespace marti_introspection_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeInfo_
{
  using Type = NodeInfo_<ContainerAllocator>;

  explicit NodeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->location = "";
      this->nodelet_manager = "";
      this->description = "";
    }
  }

  explicit NodeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    location(_alloc),
    nodelet_manager(_alloc),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->location = "";
      this->nodelet_manager = "";
      this->description = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;
  using _nodelet_manager_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nodelet_manager_type nodelet_manager;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _topics_type =
    std::vector<marti_introspection_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_introspection_msgs::msg::TopicInfo_<ContainerAllocator>>>;
  _topics_type topics;
  using _parameters_type =
    std::vector<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>>>;
  _parameters_type parameters;
  using _services_type =
    std::vector<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>>>;
  _services_type services;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__nodelet_manager(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nodelet_manager = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__topics(
    const std::vector<marti_introspection_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_introspection_msgs::msg::TopicInfo_<ContainerAllocator>>> & _arg)
  {
    this->topics = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::vector<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>>> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }
  Type & set__services(
    const std::vector<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_introspection_msgs::msg::ServiceInfo_<ContainerAllocator>>> & _arg)
  {
    this->services = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_introspection_msgs__msg__NodeInfo
    std::shared_ptr<marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_introspection_msgs__msg__NodeInfo
    std::shared_ptr<marti_introspection_msgs::msg::NodeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->nodelet_manager != other.nodelet_manager) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->topics != other.topics) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    if (this->services != other.services) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeInfo_

// alias to use template instance with default allocator
using NodeInfo =
  marti_introspection_msgs::msg::NodeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_introspection_msgs

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_
