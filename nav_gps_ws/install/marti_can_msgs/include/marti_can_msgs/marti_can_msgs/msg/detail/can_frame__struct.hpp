// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_can_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

#ifndef MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_
#define MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_

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
# define DEPRECATED__marti_can_msgs__msg__CanFrame __attribute__((deprecated))
#else
# define DEPRECATED__marti_can_msgs__msg__CanFrame __declspec(deprecated)
#endif

namespace marti_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanFrame_
{
  using Type = CanFrame_<ContainerAllocator>;

  explicit CanFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->msg_type = 0;
      this->data_length = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit CanFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->msg_type = 0;
      this->data_length = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _msg_type_type =
    uint8_t;
  _msg_type_type msg_type;
  using _data_length_type =
    uint8_t;
  _data_length_type data_length;
  using _data_type =
    std::array<uint8_t, 8>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__msg_type(
    const uint8_t & _arg)
  {
    this->msg_type = _arg;
    return *this;
  }
  Type & set__data_length(
    const uint8_t & _arg)
  {
    this->data_length = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 8> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MSGTYPE_STANDARD =
    0u;
  static constexpr uint8_t MSGTYPE_RTR =
    1u;
  static constexpr uint8_t MSGTYPE_EXTENDED =
    2u;
  static constexpr uint8_t MSGTYPE_STATUS =
    128u;

  // pointer types
  using RawPtr =
    marti_can_msgs::msg::CanFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_can_msgs::msg::CanFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_can_msgs::msg::CanFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_can_msgs::msg::CanFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_can_msgs::msg::CanFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_can_msgs::msg::CanFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_can_msgs::msg::CanFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_can_msgs::msg::CanFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_can_msgs::msg::CanFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_can_msgs::msg::CanFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_can_msgs__msg__CanFrame
    std::shared_ptr<marti_can_msgs::msg::CanFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_can_msgs__msg__CanFrame
    std::shared_ptr<marti_can_msgs::msg::CanFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanFrame_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->msg_type != other.msg_type) {
      return false;
    }
    if (this->data_length != other.data_length) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanFrame_

// alias to use template instance with default allocator
using CanFrame =
  marti_can_msgs::msg::CanFrame_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanFrame_<ContainerAllocator>::MSGTYPE_STANDARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanFrame_<ContainerAllocator>::MSGTYPE_RTR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanFrame_<ContainerAllocator>::MSGTYPE_EXTENDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanFrame_<ContainerAllocator>::MSGTYPE_STATUS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace marti_can_msgs

#endif  // MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_
