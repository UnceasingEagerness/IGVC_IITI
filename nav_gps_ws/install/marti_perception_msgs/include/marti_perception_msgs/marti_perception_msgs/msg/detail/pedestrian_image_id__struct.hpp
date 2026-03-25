// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_perception_msgs:msg/PedestrianImageID.idl
// generated code does not contain a copyright notice

#ifndef MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__STRUCT_HPP_
#define MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__STRUCT_HPP_

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
# define DEPRECATED__marti_perception_msgs__msg__PedestrianImageID __attribute__((deprecated))
#else
# define DEPRECATED__marti_perception_msgs__msg__PedestrianImageID __declspec(deprecated)
#endif

namespace marti_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PedestrianImageID_
{
  using Type = PedestrianImageID_<ContainerAllocator>;

  explicit PedestrianImageID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pixel_x = 0l;
      this->pixel_y = 0l;
      this->image_width = 0l;
      this->image_height = 0l;
    }
  }

  explicit PedestrianImageID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pixel_x = 0l;
      this->pixel_y = 0l;
      this->image_width = 0l;
      this->image_height = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pixel_x_type =
    int32_t;
  _pixel_x_type pixel_x;
  using _pixel_y_type =
    int32_t;
  _pixel_y_type pixel_y;
  using _image_width_type =
    int32_t;
  _image_width_type image_width;
  using _image_height_type =
    int32_t;
  _image_height_type image_height;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pixel_x(
    const int32_t & _arg)
  {
    this->pixel_x = _arg;
    return *this;
  }
  Type & set__pixel_y(
    const int32_t & _arg)
  {
    this->pixel_y = _arg;
    return *this;
  }
  Type & set__image_width(
    const int32_t & _arg)
  {
    this->image_width = _arg;
    return *this;
  }
  Type & set__image_height(
    const int32_t & _arg)
  {
    this->image_height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_perception_msgs__msg__PedestrianImageID
    std::shared_ptr<marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_perception_msgs__msg__PedestrianImageID
    std::shared_ptr<marti_perception_msgs::msg::PedestrianImageID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PedestrianImageID_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pixel_x != other.pixel_x) {
      return false;
    }
    if (this->pixel_y != other.pixel_y) {
      return false;
    }
    if (this->image_width != other.image_width) {
      return false;
    }
    if (this->image_height != other.image_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const PedestrianImageID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PedestrianImageID_

// alias to use template instance with default allocator
using PedestrianImageID =
  marti_perception_msgs::msg::PedestrianImageID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_perception_msgs

#endif  // MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__STRUCT_HPP_
