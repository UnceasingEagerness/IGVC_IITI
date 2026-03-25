// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__msg__PathPoint __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__PathPoint __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPoint_
{
  using Type = PathPoint_<ContainerAllocator>;

  explicit PathPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0f;
      this->speed = 0.0f;
    }
  }

  explicit PathPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0f;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::PathPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::PathPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::PathPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::PathPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::PathPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::PathPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::PathPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::PathPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__PathPoint
    std::shared_ptr<marti_nav_msgs::msg::PathPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__PathPoint
    std::shared_ptr<marti_nav_msgs::msg::PathPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPoint_

// alias to use template instance with default allocator
using PathPoint =
  marti_nav_msgs::msg::PathPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
