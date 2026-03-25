// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/RouteOffset.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__STRUCT_HPP_

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
// Member 'relative_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'route_position'
#include "marti_nav_msgs/msg/detail/route_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__msg__RouteOffset __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__RouteOffset __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteOffset_
{
  using Type = RouteOffset_<ContainerAllocator>;

  explicit RouteOffset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    relative_pose(_init),
    route_position(_init)
  {
    (void)_init;
  }

  explicit RouteOffset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    relative_pose(_alloc, _init),
    route_position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _relative_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _relative_pose_type relative_pose;
  using _route_position_type =
    marti_nav_msgs::msg::RoutePosition_<ContainerAllocator>;
  _route_position_type route_position;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__relative_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->relative_pose = _arg;
    return *this;
  }
  Type & set__route_position(
    const marti_nav_msgs::msg::RoutePosition_<ContainerAllocator> & _arg)
  {
    this->route_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::RouteOffset_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::RouteOffset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::RouteOffset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::RouteOffset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::RouteOffset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::RouteOffset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::RouteOffset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::RouteOffset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::RouteOffset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::RouteOffset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__RouteOffset
    std::shared_ptr<marti_nav_msgs::msg::RouteOffset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__RouteOffset
    std::shared_ptr<marti_nav_msgs::msg::RouteOffset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteOffset_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->relative_pose != other.relative_pose) {
      return false;
    }
    if (this->route_position != other.route_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const RouteOffset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteOffset_

// alias to use template instance with default allocator
using RouteOffset =
  marti_nav_msgs::msg::RouteOffset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE_OFFSET__STRUCT_HPP_
