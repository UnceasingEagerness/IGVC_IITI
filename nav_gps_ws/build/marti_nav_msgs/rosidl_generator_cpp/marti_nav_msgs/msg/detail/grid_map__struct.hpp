// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/GridMap.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__STRUCT_HPP_

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
// Member 'top_left'
// Member 'top_right'
// Member 'bottom_right'
// Member 'bottom_left'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'map_data'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__msg__GridMap __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__GridMap __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GridMap_
{
  using Type = GridMap_<ContainerAllocator>;

  explicit GridMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    top_left(_init),
    top_right(_init),
    bottom_right(_init),
    bottom_left(_init)
  {
    (void)_init;
  }

  explicit GridMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    top_left(_alloc, _init),
    top_right(_alloc, _init),
    bottom_right(_alloc, _init),
    bottom_left(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _top_left_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _top_left_type top_left;
  using _top_right_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _top_right_type top_right;
  using _bottom_right_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _bottom_right_type bottom_right;
  using _bottom_left_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _bottom_left_type bottom_left;
  using _map_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _map_names_type map_names;
  using _map_data_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _map_data_type map_data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__top_left(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->top_left = _arg;
    return *this;
  }
  Type & set__top_right(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->top_right = _arg;
    return *this;
  }
  Type & set__bottom_right(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->bottom_right = _arg;
    return *this;
  }
  Type & set__bottom_left(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->bottom_left = _arg;
    return *this;
  }
  Type & set__map_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->map_names = _arg;
    return *this;
  }
  Type & set__map_data(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->map_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::GridMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::GridMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::GridMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::GridMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::GridMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::GridMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::GridMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::GridMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::GridMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::GridMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__GridMap
    std::shared_ptr<marti_nav_msgs::msg::GridMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__GridMap
    std::shared_ptr<marti_nav_msgs::msg::GridMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GridMap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->top_left != other.top_left) {
      return false;
    }
    if (this->top_right != other.top_right) {
      return false;
    }
    if (this->bottom_right != other.bottom_right) {
      return false;
    }
    if (this->bottom_left != other.bottom_left) {
      return false;
    }
    if (this->map_names != other.map_names) {
      return false;
    }
    if (this->map_data != other.map_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GridMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GridMap_

// alias to use template instance with default allocator
using GridMap =
  marti_nav_msgs::msg::GridMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__GRID_MAP__STRUCT_HPP_
