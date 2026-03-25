// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_sensor_msgs:msg/WheelEncoderSet.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__STRUCT_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__STRUCT_HPP_

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
// Member 'encoders'
#include "marti_sensor_msgs/msg/detail/wheel_encoder__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_sensor_msgs__msg__WheelEncoderSet __attribute__((deprecated))
#else
# define DEPRECATED__marti_sensor_msgs__msg__WheelEncoderSet __declspec(deprecated)
#endif

namespace marti_sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelEncoderSet_
{
  using Type = WheelEncoderSet_<ContainerAllocator>;

  explicit WheelEncoderSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit WheelEncoderSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _encoders_type =
    std::vector<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>>>;
  _encoders_type encoders;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__encoders(
    const std::vector<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_sensor_msgs::msg::WheelEncoder_<ContainerAllocator>>> & _arg)
  {
    this->encoders = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_sensor_msgs__msg__WheelEncoderSet
    std::shared_ptr<marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_sensor_msgs__msg__WheelEncoderSet
    std::shared_ptr<marti_sensor_msgs::msg::WheelEncoderSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelEncoderSet_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->encoders != other.encoders) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelEncoderSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelEncoderSet_

// alias to use template instance with default allocator
using WheelEncoderSet =
  marti_sensor_msgs::msg::WheelEncoderSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__WHEEL_ENCODER_SET__STRUCT_HPP_
