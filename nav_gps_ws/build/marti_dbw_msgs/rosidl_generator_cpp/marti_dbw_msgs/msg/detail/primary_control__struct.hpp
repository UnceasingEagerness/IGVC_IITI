// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_dbw_msgs:msg/PrimaryControl.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__STRUCT_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__marti_dbw_msgs__msg__PrimaryControl __attribute__((deprecated))
#else
# define DEPRECATED__marti_dbw_msgs__msg__PrimaryControl __declspec(deprecated)
#endif

namespace marti_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrimaryControl_
{
  using Type = PrimaryControl_<ContainerAllocator>;

  explicit PrimaryControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->estop = false;
      this->steering_command = 0.0f;
      this->throttle_command = 0.0f;
      this->brake_command = 0.0f;
    }
  }

  explicit PrimaryControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->estop = false;
      this->steering_command = 0.0f;
      this->throttle_command = 0.0f;
      this->brake_command = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _active_type =
    bool;
  _active_type active;
  using _estop_type =
    bool;
  _estop_type estop;
  using _steering_command_type =
    float;
  _steering_command_type steering_command;
  using _throttle_command_type =
    float;
  _throttle_command_type throttle_command;
  using _brake_command_type =
    float;
  _brake_command_type brake_command;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__estop(
    const bool & _arg)
  {
    this->estop = _arg;
    return *this;
  }
  Type & set__steering_command(
    const float & _arg)
  {
    this->steering_command = _arg;
    return *this;
  }
  Type & set__throttle_command(
    const float & _arg)
  {
    this->throttle_command = _arg;
    return *this;
  }
  Type & set__brake_command(
    const float & _arg)
  {
    this->brake_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_dbw_msgs__msg__PrimaryControl
    std::shared_ptr<marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_dbw_msgs__msg__PrimaryControl
    std::shared_ptr<marti_dbw_msgs::msg::PrimaryControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrimaryControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->estop != other.estop) {
      return false;
    }
    if (this->steering_command != other.steering_command) {
      return false;
    }
    if (this->throttle_command != other.throttle_command) {
      return false;
    }
    if (this->brake_command != other.brake_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrimaryControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrimaryControl_

// alias to use template instance with default allocator
using PrimaryControl =
  marti_dbw_msgs::msg::PrimaryControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_dbw_msgs

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__STRUCT_HPP_
