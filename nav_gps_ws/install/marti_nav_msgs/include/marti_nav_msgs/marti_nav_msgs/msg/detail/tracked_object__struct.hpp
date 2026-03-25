// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'age_duration'
// Member 'prediction_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__msg__TrackedObject __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__TrackedObject __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedObject_
{
  using Type = TrackedObject_<ContainerAllocator>;

  explicit TrackedObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    velocity(_init),
    linear_acceleration(_init),
    age_duration(_init),
    prediction_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->linear_acceleration_covariance.begin(), this->linear_acceleration_covariance.end(), 0.0);
      this->length = 0.0f;
      this->length_quality = 0.0f;
      this->width = 0.0f;
      this->width_quality = 0.0f;
      this->classification = 0;
      this->classification_quality = 0.0f;
      this->existence_probability = 0.0f;
      this->active = false;
    }
  }

  explicit TrackedObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    velocity(_alloc, _init),
    linear_acceleration(_alloc, _init),
    linear_acceleration_covariance(_alloc),
    age_duration(_alloc, _init),
    prediction_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->linear_acceleration_covariance.begin(), this->linear_acceleration_covariance.end(), 0.0);
      this->length = 0.0f;
      this->length_quality = 0.0f;
      this->width = 0.0f;
      this->width_quality = 0.0f;
      this->classification = 0;
      this->classification_quality = 0.0f;
      this->existence_probability = 0.0f;
      this->active = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint16_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _velocity_type velocity;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _linear_acceleration_covariance_type =
    std::array<double, 9>;
  _linear_acceleration_covariance_type linear_acceleration_covariance;
  using _polygon_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _polygon_type polygon;
  using _length_type =
    float;
  _length_type length;
  using _length_quality_type =
    float;
  _length_quality_type length_quality;
  using _width_type =
    float;
  _width_type width;
  using _width_quality_type =
    float;
  _width_quality_type width_quality;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _classification_quality_type =
    float;
  _classification_quality_type classification_quality;
  using _existence_probability_type =
    float;
  _existence_probability_type existence_probability;
  using _age_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _age_duration_type age_duration;
  using _prediction_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _prediction_duration_type prediction_duration;
  using _active_type =
    bool;
  _active_type active;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__linear_acceleration_covariance(
    const std::array<double, 9> & _arg)
  {
    this->linear_acceleration_covariance = _arg;
    return *this;
  }
  Type & set__polygon(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__length_quality(
    const float & _arg)
  {
    this->length_quality = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__width_quality(
    const float & _arg)
  {
    this->width_quality = _arg;
    return *this;
  }
  Type & set__classification(
    const uint8_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__classification_quality(
    const float & _arg)
  {
    this->classification_quality = _arg;
    return *this;
  }
  Type & set__existence_probability(
    const float & _arg)
  {
    this->existence_probability = _arg;
    return *this;
  }
  Type & set__age_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->age_duration = _arg;
    return *this;
  }
  Type & set__prediction_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->prediction_duration = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VEHICLE =
    0u;
  static constexpr uint8_t PEDESTRIAN =
    1u;
  static constexpr uint8_t UNKNOWN =
    255u;

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::TrackedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::TrackedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::TrackedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::TrackedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::TrackedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::TrackedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::TrackedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::TrackedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::TrackedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::TrackedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__TrackedObject
    std::shared_ptr<marti_nav_msgs::msg::TrackedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__TrackedObject
    std::shared_ptr<marti_nav_msgs::msg::TrackedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->linear_acceleration_covariance != other.linear_acceleration_covariance) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->length_quality != other.length_quality) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->width_quality != other.width_quality) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->classification_quality != other.classification_quality) {
      return false;
    }
    if (this->existence_probability != other.existence_probability) {
      return false;
    }
    if (this->age_duration != other.age_duration) {
      return false;
    }
    if (this->prediction_duration != other.prediction_duration) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedObject_

// alias to use template instance with default allocator
using TrackedObject =
  marti_nav_msgs::msg::TrackedObject_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackedObject_<ContainerAllocator>::VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackedObject_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrackedObject_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_
