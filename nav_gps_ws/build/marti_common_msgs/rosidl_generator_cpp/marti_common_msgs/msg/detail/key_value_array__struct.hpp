// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_common_msgs:msg/KeyValueArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__STRUCT_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__STRUCT_HPP_

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
// Member 'items'
#include "marti_common_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_common_msgs__msg__KeyValueArray __attribute__((deprecated))
#else
# define DEPRECATED__marti_common_msgs__msg__KeyValueArray __declspec(deprecated)
#endif

namespace marti_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyValueArray_
{
  using Type = KeyValueArray_<ContainerAllocator>;

  explicit KeyValueArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit KeyValueArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _items_type =
    std::vector<marti_common_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_common_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _items_type items;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__items(
    const std::vector<marti_common_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_common_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->items = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_common_msgs::msg::KeyValueArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_common_msgs::msg::KeyValueArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_common_msgs::msg::KeyValueArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_common_msgs::msg::KeyValueArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::KeyValueArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::KeyValueArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::KeyValueArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::KeyValueArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_common_msgs::msg::KeyValueArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_common_msgs::msg::KeyValueArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_common_msgs__msg__KeyValueArray
    std::shared_ptr<marti_common_msgs::msg::KeyValueArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_common_msgs__msg__KeyValueArray
    std::shared_ptr<marti_common_msgs::msg::KeyValueArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyValueArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->items != other.items) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyValueArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyValueArray_

// alias to use template instance with default allocator
using KeyValueArray =
  marti_common_msgs::msg::KeyValueArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__KEY_VALUE_ARRAY__STRUCT_HPP_
