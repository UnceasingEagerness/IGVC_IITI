// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/Wgs84Sample.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__STRUCT_HPP_

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
// Member 'odom'
// Member 'wgs84'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__msg__Wgs84Sample __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__Wgs84Sample __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Wgs84Sample_
{
  using Type = Wgs84Sample_<ContainerAllocator>;

  explicit Wgs84Sample_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    odom(_init),
    wgs84(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->wgs84_covariance.begin(), this->wgs84_covariance.end(), 0.0);
    }
  }

  explicit Wgs84Sample_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    odom(_alloc, _init),
    wgs84(_alloc, _init),
    wgs84_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->wgs84_covariance.begin(), this->wgs84_covariance.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _odom_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _odom_type odom;
  using _wgs84_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _wgs84_type wgs84;
  using _wgs84_covariance_type =
    std::array<double, 9>;
  _wgs84_covariance_type wgs84_covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__odom(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->odom = _arg;
    return *this;
  }
  Type & set__wgs84(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->wgs84 = _arg;
    return *this;
  }
  Type & set__wgs84_covariance(
    const std::array<double, 9> & _arg)
  {
    this->wgs84_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__Wgs84Sample
    std::shared_ptr<marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__Wgs84Sample
    std::shared_ptr<marti_nav_msgs::msg::Wgs84Sample_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wgs84Sample_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->odom != other.odom) {
      return false;
    }
    if (this->wgs84 != other.wgs84) {
      return false;
    }
    if (this->wgs84_covariance != other.wgs84_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wgs84Sample_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wgs84Sample_

// alias to use template instance with default allocator
using Wgs84Sample =
  marti_nav_msgs::msg::Wgs84Sample_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__STRUCT_HPP_
