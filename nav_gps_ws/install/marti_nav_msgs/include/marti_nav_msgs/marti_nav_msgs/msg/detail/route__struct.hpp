// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_

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
// Member 'route_points'
#include "marti_nav_msgs/msg/detail/route_point__struct.hpp"
// Member 'properties'
#include "marti_common_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__msg__Route __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__Route __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Route_
{
  using Type = Route_<ContainerAllocator>;

  explicit Route_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Route_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _route_points_type =
    std::vector<marti_nav_msgs::msg::RoutePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_nav_msgs::msg::RoutePoint_<ContainerAllocator>>>;
  _route_points_type route_points;
  using _properties_type =
    std::vector<marti_common_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_common_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__route_points(
    const std::vector<marti_nav_msgs::msg::RoutePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_nav_msgs::msg::RoutePoint_<ContainerAllocator>>> & _arg)
  {
    this->route_points = _arg;
    return *this;
  }
  Type & set__properties(
    const std::vector<marti_common_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_common_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->properties = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::Route_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::Route_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::Route_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::Route_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::Route_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::Route_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::Route_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::Route_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::Route_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::Route_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__Route
    std::shared_ptr<marti_nav_msgs::msg::Route_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__Route
    std::shared_ptr<marti_nav_msgs::msg::Route_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Route_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->route_points != other.route_points) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const Route_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Route_

// alias to use template instance with default allocator
using Route =
  marti_nav_msgs::msg::Route_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
