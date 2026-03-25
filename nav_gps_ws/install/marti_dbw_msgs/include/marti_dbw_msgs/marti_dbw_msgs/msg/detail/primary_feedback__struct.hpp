// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__STRUCT_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__STRUCT_HPP_

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
# define DEPRECATED__marti_dbw_msgs__msg__PrimaryFeedback __attribute__((deprecated))
#else
# define DEPRECATED__marti_dbw_msgs__msg__PrimaryFeedback __declspec(deprecated)
#endif

namespace marti_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrimaryFeedback_
{
  using Type = PrimaryFeedback_<ContainerAllocator>;

  explicit PrimaryFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->present = false;
      this->robotic_mode = false;
      this->steering_command = 0.0f;
      this->steering_measure = 0.0f;
      this->throttle_command = 0.0f;
      this->throttle_measure = 0.0f;
      this->brake_command = 0.0f;
      this->brake_measure = 0.0f;
      this->estop_command = false;
      this->estop_measure = false;
      this->error_steering = false;
      this->error_throttle = false;
      this->error_brake = false;
      this->error_other = false;
    }
  }

  explicit PrimaryFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->present = false;
      this->robotic_mode = false;
      this->steering_command = 0.0f;
      this->steering_measure = 0.0f;
      this->throttle_command = 0.0f;
      this->throttle_measure = 0.0f;
      this->brake_command = 0.0f;
      this->brake_measure = 0.0f;
      this->estop_command = false;
      this->estop_measure = false;
      this->error_steering = false;
      this->error_throttle = false;
      this->error_brake = false;
      this->error_other = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _present_type =
    bool;
  _present_type present;
  using _robotic_mode_type =
    bool;
  _robotic_mode_type robotic_mode;
  using _steering_command_type =
    float;
  _steering_command_type steering_command;
  using _steering_measure_type =
    float;
  _steering_measure_type steering_measure;
  using _throttle_command_type =
    float;
  _throttle_command_type throttle_command;
  using _throttle_measure_type =
    float;
  _throttle_measure_type throttle_measure;
  using _brake_command_type =
    float;
  _brake_command_type brake_command;
  using _brake_measure_type =
    float;
  _brake_measure_type brake_measure;
  using _estop_command_type =
    bool;
  _estop_command_type estop_command;
  using _estop_measure_type =
    bool;
  _estop_measure_type estop_measure;
  using _error_steering_type =
    bool;
  _error_steering_type error_steering;
  using _error_throttle_type =
    bool;
  _error_throttle_type error_throttle;
  using _error_brake_type =
    bool;
  _error_brake_type error_brake;
  using _error_other_type =
    bool;
  _error_other_type error_other;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__present(
    const bool & _arg)
  {
    this->present = _arg;
    return *this;
  }
  Type & set__robotic_mode(
    const bool & _arg)
  {
    this->robotic_mode = _arg;
    return *this;
  }
  Type & set__steering_command(
    const float & _arg)
  {
    this->steering_command = _arg;
    return *this;
  }
  Type & set__steering_measure(
    const float & _arg)
  {
    this->steering_measure = _arg;
    return *this;
  }
  Type & set__throttle_command(
    const float & _arg)
  {
    this->throttle_command = _arg;
    return *this;
  }
  Type & set__throttle_measure(
    const float & _arg)
  {
    this->throttle_measure = _arg;
    return *this;
  }
  Type & set__brake_command(
    const float & _arg)
  {
    this->brake_command = _arg;
    return *this;
  }
  Type & set__brake_measure(
    const float & _arg)
  {
    this->brake_measure = _arg;
    return *this;
  }
  Type & set__estop_command(
    const bool & _arg)
  {
    this->estop_command = _arg;
    return *this;
  }
  Type & set__estop_measure(
    const bool & _arg)
  {
    this->estop_measure = _arg;
    return *this;
  }
  Type & set__error_steering(
    const bool & _arg)
  {
    this->error_steering = _arg;
    return *this;
  }
  Type & set__error_throttle(
    const bool & _arg)
  {
    this->error_throttle = _arg;
    return *this;
  }
  Type & set__error_brake(
    const bool & _arg)
  {
    this->error_brake = _arg;
    return *this;
  }
  Type & set__error_other(
    const bool & _arg)
  {
    this->error_other = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_dbw_msgs__msg__PrimaryFeedback
    std::shared_ptr<marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_dbw_msgs__msg__PrimaryFeedback
    std::shared_ptr<marti_dbw_msgs::msg::PrimaryFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrimaryFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->present != other.present) {
      return false;
    }
    if (this->robotic_mode != other.robotic_mode) {
      return false;
    }
    if (this->steering_command != other.steering_command) {
      return false;
    }
    if (this->steering_measure != other.steering_measure) {
      return false;
    }
    if (this->throttle_command != other.throttle_command) {
      return false;
    }
    if (this->throttle_measure != other.throttle_measure) {
      return false;
    }
    if (this->brake_command != other.brake_command) {
      return false;
    }
    if (this->brake_measure != other.brake_measure) {
      return false;
    }
    if (this->estop_command != other.estop_command) {
      return false;
    }
    if (this->estop_measure != other.estop_measure) {
      return false;
    }
    if (this->error_steering != other.error_steering) {
      return false;
    }
    if (this->error_throttle != other.error_throttle) {
      return false;
    }
    if (this->error_brake != other.error_brake) {
      return false;
    }
    if (this->error_other != other.error_other) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrimaryFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrimaryFeedback_

// alias to use template instance with default allocator
using PrimaryFeedback =
  marti_dbw_msgs::msg::PrimaryFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_dbw_msgs

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_FEEDBACK__STRUCT_HPP_
