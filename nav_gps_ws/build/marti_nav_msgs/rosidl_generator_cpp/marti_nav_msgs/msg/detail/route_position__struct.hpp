// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/RoutePosition.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__msg__RoutePosition __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__RoutePosition __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoutePosition_
{
  using Type = RoutePosition_<ContainerAllocator>;

  explicit RoutePosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = "";
      this->id = "";
      this->distance = 0.0f;
    }
  }

  explicit RoutePosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    route_id(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = "";
      this->id = "";
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _route_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _route_id_type route_id;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__route_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->route_id = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::RoutePosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::RoutePosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::RoutePosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::RoutePosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::RoutePosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::RoutePosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::RoutePosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::RoutePosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::RoutePosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::RoutePosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__RoutePosition
    std::shared_ptr<marti_nav_msgs::msg::RoutePosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__RoutePosition
    std::shared_ptr<marti_nav_msgs::msg::RoutePosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoutePosition_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->route_id != other.route_id) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoutePosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoutePosition_

// alias to use template instance with default allocator
using RoutePosition =
  marti_nav_msgs::msg::RoutePosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_POSITION__STRUCT_HPP_
