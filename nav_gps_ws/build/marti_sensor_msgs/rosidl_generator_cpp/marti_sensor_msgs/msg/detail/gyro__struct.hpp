// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_sensor_msgs:msg/Gyro.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__STRUCT_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__STRUCT_HPP_

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
# define DEPRECATED__marti_sensor_msgs__msg__Gyro __attribute__((deprecated))
#else
# define DEPRECATED__marti_sensor_msgs__msg__Gyro __declspec(deprecated)
#endif

namespace marti_sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gyro_
{
  using Type = Gyro_<ContainerAllocator>;

  explicit Gyro_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angular_rate = 0.0;
      this->variance = 0.0;
    }
  }

  explicit Gyro_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angular_rate = 0.0;
      this->variance = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angular_rate_type =
    double;
  _angular_rate_type angular_rate;
  using _variance_type =
    double;
  _variance_type variance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angular_rate(
    const double & _arg)
  {
    this->angular_rate = _arg;
    return *this;
  }
  Type & set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_sensor_msgs::msg::Gyro_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_sensor_msgs::msg::Gyro_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::Gyro_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::Gyro_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::Gyro_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::Gyro_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::Gyro_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::Gyro_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::Gyro_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::Gyro_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_sensor_msgs__msg__Gyro
    std::shared_ptr<marti_sensor_msgs::msg::Gyro_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_sensor_msgs__msg__Gyro
    std::shared_ptr<marti_sensor_msgs::msg::Gyro_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gyro_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angular_rate != other.angular_rate) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gyro_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gyro_

// alias to use template instance with default allocator
using Gyro =
  marti_sensor_msgs::msg::Gyro_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__GYRO__STRUCT_HPP_
