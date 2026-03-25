// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_common_msgs:msg/UInt64Stamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__U_INT64_STAMPED__STRUCT_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__U_INT64_STAMPED__STRUCT_HPP_

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
# define DEPRECATED__marti_common_msgs__msg__UInt64Stamped __attribute__((deprecated))
#else
# define DEPRECATED__marti_common_msgs__msg__UInt64Stamped __declspec(deprecated)
#endif

namespace marti_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UInt64Stamped_
{
  using Type = UInt64Stamped_<ContainerAllocator>;

  explicit UInt64Stamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ull;
    }
  }

  explicit UInt64Stamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _value_type =
    uint64_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__value(
    const uint64_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_common_msgs__msg__UInt64Stamped
    std::shared_ptr<marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_common_msgs__msg__UInt64Stamped
    std::shared_ptr<marti_common_msgs::msg::UInt64Stamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UInt64Stamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const UInt64Stamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UInt64Stamped_

// alias to use template instance with default allocator
using UInt64Stamped =
  marti_common_msgs::msg::UInt64Stamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__U_INT64_STAMPED__STRUCT_HPP_
