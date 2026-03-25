// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_dbw_msgs:msg/TransmissionFeedback.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__STRUCT_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__STRUCT_HPP_

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
# define DEPRECATED__marti_dbw_msgs__msg__TransmissionFeedback __attribute__((deprecated))
#else
# define DEPRECATED__marti_dbw_msgs__msg__TransmissionFeedback __declspec(deprecated)
#endif

namespace marti_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransmissionFeedback_
{
  using Type = TransmissionFeedback_<ContainerAllocator>;

  explicit TransmissionFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_range = "";
      this->stable = false;
      this->reverse = false;
      this->forward = false;
    }
  }

  explicit TransmissionFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current_range(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_range = "";
      this->stable = false;
      this->reverse = false;
      this->forward = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_range_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_range_type current_range;
  using _stable_type =
    bool;
  _stable_type stable;
  using _reverse_type =
    bool;
  _reverse_type reverse;
  using _forward_type =
    bool;
  _forward_type forward;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_range(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_range = _arg;
    return *this;
  }
  Type & set__stable(
    const bool & _arg)
  {
    this->stable = _arg;
    return *this;
  }
  Type & set__reverse(
    const bool & _arg)
  {
    this->reverse = _arg;
    return *this;
  }
  Type & set__forward(
    const bool & _arg)
  {
    this->forward = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_dbw_msgs__msg__TransmissionFeedback
    std::shared_ptr<marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_dbw_msgs__msg__TransmissionFeedback
    std::shared_ptr<marti_dbw_msgs::msg::TransmissionFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransmissionFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_range != other.current_range) {
      return false;
    }
    if (this->stable != other.stable) {
      return false;
    }
    if (this->reverse != other.reverse) {
      return false;
    }
    if (this->forward != other.forward) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransmissionFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransmissionFeedback_

// alias to use template instance with default allocator
using TransmissionFeedback =
  marti_dbw_msgs::msg::TransmissionFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_dbw_msgs

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__STRUCT_HPP_
