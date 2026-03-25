// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_sensor_msgs:msg/DifferentialMeasurement.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__STRUCT_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__STRUCT_HPP_

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
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_sensor_msgs__msg__DifferentialMeasurement __attribute__((deprecated))
#else
# define DEPRECATED__marti_sensor_msgs__msg__DifferentialMeasurement __declspec(deprecated)
#endif

namespace marti_sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DifferentialMeasurement_
{
  using Type = DifferentialMeasurement_<ContainerAllocator>;

  explicit DifferentialMeasurement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_frame_id = "";
      this->baseline_length = 0.0;
      this->baseline_length_variance = 0.0;
      this->heading = 0.0;
      this->heading_variance = 0.0;
      this->pitch = 0.0;
      this->pitch_variance = 0.0;
      this->roll = 0.0;
      this->roll_variance = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->position_covariance.begin(), this->position_covariance.end(), 0.0);
    }
  }

  explicit DifferentialMeasurement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    base_frame_id(_alloc),
    position(_alloc, _init),
    position_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_frame_id = "";
      this->baseline_length = 0.0;
      this->baseline_length_variance = 0.0;
      this->heading = 0.0;
      this->heading_variance = 0.0;
      this->pitch = 0.0;
      this->pitch_variance = 0.0;
      this->roll = 0.0;
      this->roll_variance = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->position_covariance.begin(), this->position_covariance.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _base_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _base_frame_id_type base_frame_id;
  using _baseline_length_type =
    double;
  _baseline_length_type baseline_length;
  using _baseline_length_variance_type =
    double;
  _baseline_length_variance_type baseline_length_variance;
  using _heading_type =
    double;
  _heading_type heading;
  using _heading_variance_type =
    double;
  _heading_variance_type heading_variance;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _pitch_variance_type =
    double;
  _pitch_variance_type pitch_variance;
  using _roll_type =
    double;
  _roll_type roll;
  using _roll_variance_type =
    double;
  _roll_variance_type roll_variance;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _position_covariance_type =
    std::array<double, 9>;
  _position_covariance_type position_covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__base_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->base_frame_id = _arg;
    return *this;
  }
  Type & set__baseline_length(
    const double & _arg)
  {
    this->baseline_length = _arg;
    return *this;
  }
  Type & set__baseline_length_variance(
    const double & _arg)
  {
    this->baseline_length_variance = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_variance(
    const double & _arg)
  {
    this->heading_variance = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__pitch_variance(
    const double & _arg)
  {
    this->pitch_variance = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__roll_variance(
    const double & _arg)
  {
    this->roll_variance = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__position_covariance(
    const std::array<double, 9> & _arg)
  {
    this->position_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_sensor_msgs__msg__DifferentialMeasurement
    std::shared_ptr<marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_sensor_msgs__msg__DifferentialMeasurement
    std::shared_ptr<marti_sensor_msgs::msg::DifferentialMeasurement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DifferentialMeasurement_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->base_frame_id != other.base_frame_id) {
      return false;
    }
    if (this->baseline_length != other.baseline_length) {
      return false;
    }
    if (this->baseline_length_variance != other.baseline_length_variance) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_variance != other.heading_variance) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->pitch_variance != other.pitch_variance) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->roll_variance != other.roll_variance) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const DifferentialMeasurement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DifferentialMeasurement_

// alias to use template instance with default allocator
using DifferentialMeasurement =
  marti_sensor_msgs::msg::DifferentialMeasurement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__STRUCT_HPP_
