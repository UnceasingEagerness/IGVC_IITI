// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/VehicleControl.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__marti_nav_msgs__msg__VehicleControl __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__VehicleControl __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleControl_
{
  using Type = VehicleControl_<ContainerAllocator>;

  explicit VehicleControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->engine = 0l;
      this->gear = 0l;
      this->steering = 0.0;
      this->throttle = 0.0;
      this->brake = 0.0;
      this->steering_position = 0;
      this->gb_position = 0;
    }
  }

  explicit VehicleControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->engine = 0l;
      this->gear = 0l;
      this->steering = 0.0;
      this->throttle = 0.0;
      this->brake = 0.0;
      this->steering_position = 0;
      this->gb_position = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _engine_type =
    int32_t;
  _engine_type engine;
  using _gear_type =
    int32_t;
  _gear_type gear;
  using _steering_type =
    double;
  _steering_type steering;
  using _throttle_type =
    double;
  _throttle_type throttle;
  using _brake_type =
    double;
  _brake_type brake;
  using _steering_position_type =
    int16_t;
  _steering_position_type steering_position;
  using _gb_position_type =
    int16_t;
  _gb_position_type gb_position;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__engine(
    const int32_t & _arg)
  {
    this->engine = _arg;
    return *this;
  }
  Type & set__gear(
    const int32_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__steering(
    const double & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__steering_position(
    const int16_t & _arg)
  {
    this->steering_position = _arg;
    return *this;
  }
  Type & set__gb_position(
    const int16_t & _arg)
  {
    this->gb_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::VehicleControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::VehicleControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::VehicleControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::VehicleControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::VehicleControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::VehicleControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::VehicleControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::VehicleControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::VehicleControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::VehicleControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__VehicleControl
    std::shared_ptr<marti_nav_msgs::msg::VehicleControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__VehicleControl
    std::shared_ptr<marti_nav_msgs::msg::VehicleControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->engine != other.engine) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->steering_position != other.steering_position) {
      return false;
    }
    if (this->gb_position != other.gb_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleControl_

// alias to use template instance with default allocator
using VehicleControl =
  marti_nav_msgs::msg::VehicleControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__STRUCT_HPP_
