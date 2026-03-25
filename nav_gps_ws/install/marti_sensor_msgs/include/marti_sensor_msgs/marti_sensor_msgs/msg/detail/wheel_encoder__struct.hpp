// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_sensor_msgs:msg/WheelEncoder.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marti_sensor_msgs__msg__WheelEncoder __attribute__((deprecated))
#else
# define DEPRECATED__marti_sensor_msgs__msg__WheelEncoder __declspec(deprecated)
#endif

namespace marti_sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelEncoder_
{
  using Type = WheelEncoder_<ContainerAllocator>;

  explicit WheelEncoder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0.0;
      this->directional = false;
      this->id = 0;
    }
  }

  explicit WheelEncoder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0.0;
      this->directional = false;
      this->id = 0;
    }
  }

  // field types and members
  using _frequency_type =
    double;
  _frequency_type frequency;
  using _directional_type =
    bool;
  _directional_type directional;
  using _id_type =
    uint8_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__frequency(
    const double & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__directional(
    const bool & _arg)
  {
    this->directional = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_sensor_msgs__msg__WheelEncoder
    std::shared_ptr<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_sensor_msgs__msg__WheelEncoder
    std::shared_ptr<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelEncoder_ & other) const
  {
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->directional != other.directional) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelEncoder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelEncoder_

// alias to use template instance with default allocator
using WheelEncoder =
  marti_sensor_msgs::msg::WheelEncoder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_HPP_
