// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_common_msgs:msg/Matrix3x3Stamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__STRUCT_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__STRUCT_HPP_

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
# define DEPRECATED__marti_common_msgs__msg__Matrix3x3Stamped __attribute__((deprecated))
#else
# define DEPRECATED__marti_common_msgs__msg__Matrix3x3Stamped __declspec(deprecated)
#endif

namespace marti_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Matrix3x3Stamped_
{
  using Type = Matrix3x3Stamped_<ContainerAllocator>;

  explicit Matrix3x3Stamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->matrix.begin(), this->matrix.end(), 0.0);
    }
  }

  explicit Matrix3x3Stamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    matrix(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->matrix.begin(), this->matrix.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _matrix_type =
    std::array<double, 9>;
  _matrix_type matrix;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__matrix(
    const std::array<double, 9> & _arg)
  {
    this->matrix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_common_msgs__msg__Matrix3x3Stamped
    std::shared_ptr<marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_common_msgs__msg__Matrix3x3Stamped
    std::shared_ptr<marti_common_msgs::msg::Matrix3x3Stamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Matrix3x3Stamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->matrix != other.matrix) {
      return false;
    }
    return true;
  }
  bool operator!=(const Matrix3x3Stamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Matrix3x3Stamped_

// alias to use template instance with default allocator
using Matrix3x3Stamped =
  marti_common_msgs::msg::Matrix3x3Stamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__STRUCT_HPP_
