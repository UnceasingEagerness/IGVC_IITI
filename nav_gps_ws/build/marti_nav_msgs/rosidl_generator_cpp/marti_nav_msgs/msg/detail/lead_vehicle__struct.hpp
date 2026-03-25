// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/LeadVehicle.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__STRUCT_HPP_

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
# define DEPRECATED__marti_nav_msgs__msg__LeadVehicle __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__LeadVehicle __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LeadVehicle_
{
  using Type = LeadVehicle_<ContainerAllocator>;

  explicit LeadVehicle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->headway_distance = 0.0f;
      this->speed = 0.0f;
      this->heading = 0.0f;
      this->x_pos = 0.0f;
      this->y_pos = 0.0f;
      this->classification = 0;
      this->type = 0;
    }
  }

  explicit LeadVehicle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->headway_distance = 0.0f;
      this->speed = 0.0f;
      this->heading = 0.0f;
      this->x_pos = 0.0f;
      this->y_pos = 0.0f;
      this->classification = 0;
      this->type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _headway_distance_type =
    float;
  _headway_distance_type headway_distance;
  using _speed_type =
    float;
  _speed_type speed;
  using _heading_type =
    float;
  _heading_type heading;
  using _x_pos_type =
    float;
  _x_pos_type x_pos;
  using _y_pos_type =
    float;
  _y_pos_type y_pos;
  using _classification_type =
    int8_t;
  _classification_type classification;
  using _type_type =
    int8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__headway_distance(
    const float & _arg)
  {
    this->headway_distance = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__x_pos(
    const float & _arg)
  {
    this->x_pos = _arg;
    return *this;
  }
  Type & set__y_pos(
    const float & _arg)
  {
    this->y_pos = _arg;
    return *this;
  }
  Type & set__classification(
    const int8_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__type(
    const int8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__LeadVehicle
    std::shared_ptr<marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__LeadVehicle
    std::shared_ptr<marti_nav_msgs::msg::LeadVehicle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LeadVehicle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->headway_distance != other.headway_distance) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->x_pos != other.x_pos) {
      return false;
    }
    if (this->y_pos != other.y_pos) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LeadVehicle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LeadVehicle_

// alias to use template instance with default allocator
using LeadVehicle =
  marti_nav_msgs::msg::LeadVehicle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__STRUCT_HPP_
