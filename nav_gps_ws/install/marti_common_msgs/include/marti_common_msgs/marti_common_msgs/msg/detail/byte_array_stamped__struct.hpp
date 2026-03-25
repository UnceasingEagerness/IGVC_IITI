// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_common_msgs:msg/ByteArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__BYTE_ARRAY_STAMPED__STRUCT_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__BYTE_ARRAY_STAMPED__STRUCT_HPP_

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
# define DEPRECATED__marti_common_msgs__msg__ByteArrayStamped __attribute__((deprecated))
#else
# define DEPRECATED__marti_common_msgs__msg__ByteArrayStamped __declspec(deprecated)
#endif

namespace marti_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ByteArrayStamped_
{
  using Type = ByteArrayStamped_<ContainerAllocator>;

  explicit ByteArrayStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ByteArrayStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _value_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__value(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_common_msgs__msg__ByteArrayStamped
    std::shared_ptr<marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_common_msgs__msg__ByteArrayStamped
    std::shared_ptr<marti_common_msgs::msg::ByteArrayStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ByteArrayStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ByteArrayStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ByteArrayStamped_

// alias to use template instance with default allocator
using ByteArrayStamped =
  marti_common_msgs::msg::ByteArrayStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__BYTE_ARRAY_STAMPED__STRUCT_HPP_
