// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_common_msgs:msg/ServiceHeader.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__STRUCT_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_common_msgs__msg__ServiceHeader __attribute__((deprecated))
#else
# define DEPRECATED__marti_common_msgs__msg__ServiceHeader __declspec(deprecated)
#endif

namespace marti_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceHeader_
{
  using Type = ServiceHeader_<ContainerAllocator>;

  explicit ServiceHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sequence = 0ul;
      this->sender = "";
      this->result = false;
    }
  }

  explicit ServiceHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    sender(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sequence = 0ul;
      this->sender = "";
      this->result = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _sequence_type =
    uint32_t;
  _sequence_type sequence;
  using _sender_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sender_type sender;
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__sequence(
    const uint32_t & _arg)
  {
    this->sequence = _arg;
    return *this;
  }
  Type & set__sender(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sender = _arg;
    return *this;
  }
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_common_msgs::msg::ServiceHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_common_msgs::msg::ServiceHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_common_msgs::msg::ServiceHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_common_msgs::msg::ServiceHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::ServiceHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::ServiceHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::ServiceHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::ServiceHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_common_msgs::msg::ServiceHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_common_msgs::msg::ServiceHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_common_msgs__msg__ServiceHeader
    std::shared_ptr<marti_common_msgs::msg::ServiceHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_common_msgs__msg__ServiceHeader
    std::shared_ptr<marti_common_msgs::msg::ServiceHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceHeader_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->sequence != other.sequence) {
      return false;
    }
    if (this->sender != other.sender) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceHeader_

// alias to use template instance with default allocator
using ServiceHeader =
  marti_common_msgs::msg::ServiceHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__STRUCT_HPP_
