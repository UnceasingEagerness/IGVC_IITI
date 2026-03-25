// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_status_msgs:msg/ChronyTrackingStatus.idl
// generated code does not contain a copyright notice

#ifndef MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__STRUCT_HPP_
#define MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__STRUCT_HPP_

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
# define DEPRECATED__marti_status_msgs__msg__ChronyTrackingStatus __attribute__((deprecated))
#else
# define DEPRECATED__marti_status_msgs__msg__ChronyTrackingStatus __declspec(deprecated)
#endif

namespace marti_status_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChronyTrackingStatus_
{
  using Type = ChronyTrackingStatus_<ContainerAllocator>;

  explicit ChronyTrackingStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference = "";
      this->stratum = 0l;
      this->system_time_offset = 0.0;
      this->last_offset = 0.0;
      this->rms_offset = 0.0;
      this->frequency_offset = 0.0f;
      this->residual_frequency = 0.0f;
      this->skew = 0.0f;
      this->root_delay = 0.0;
      this->root_dispersion = 0.0;
      this->update_interval = 0.0f;
      this->leap_status = "";
    }
  }

  explicit ChronyTrackingStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    reference(_alloc),
    leap_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference = "";
      this->stratum = 0l;
      this->system_time_offset = 0.0;
      this->last_offset = 0.0;
      this->rms_offset = 0.0;
      this->frequency_offset = 0.0f;
      this->residual_frequency = 0.0f;
      this->skew = 0.0f;
      this->root_delay = 0.0;
      this->root_dispersion = 0.0;
      this->update_interval = 0.0f;
      this->leap_status = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _reference_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reference_type reference;
  using _stratum_type =
    int32_t;
  _stratum_type stratum;
  using _system_time_offset_type =
    double;
  _system_time_offset_type system_time_offset;
  using _last_offset_type =
    double;
  _last_offset_type last_offset;
  using _rms_offset_type =
    double;
  _rms_offset_type rms_offset;
  using _frequency_offset_type =
    float;
  _frequency_offset_type frequency_offset;
  using _residual_frequency_type =
    float;
  _residual_frequency_type residual_frequency;
  using _skew_type =
    float;
  _skew_type skew;
  using _root_delay_type =
    double;
  _root_delay_type root_delay;
  using _root_dispersion_type =
    double;
  _root_dispersion_type root_dispersion;
  using _update_interval_type =
    float;
  _update_interval_type update_interval;
  using _leap_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _leap_status_type leap_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__reference(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reference = _arg;
    return *this;
  }
  Type & set__stratum(
    const int32_t & _arg)
  {
    this->stratum = _arg;
    return *this;
  }
  Type & set__system_time_offset(
    const double & _arg)
  {
    this->system_time_offset = _arg;
    return *this;
  }
  Type & set__last_offset(
    const double & _arg)
  {
    this->last_offset = _arg;
    return *this;
  }
  Type & set__rms_offset(
    const double & _arg)
  {
    this->rms_offset = _arg;
    return *this;
  }
  Type & set__frequency_offset(
    const float & _arg)
  {
    this->frequency_offset = _arg;
    return *this;
  }
  Type & set__residual_frequency(
    const float & _arg)
  {
    this->residual_frequency = _arg;
    return *this;
  }
  Type & set__skew(
    const float & _arg)
  {
    this->skew = _arg;
    return *this;
  }
  Type & set__root_delay(
    const double & _arg)
  {
    this->root_delay = _arg;
    return *this;
  }
  Type & set__root_dispersion(
    const double & _arg)
  {
    this->root_dispersion = _arg;
    return *this;
  }
  Type & set__update_interval(
    const float & _arg)
  {
    this->update_interval = _arg;
    return *this;
  }
  Type & set__leap_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->leap_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_status_msgs__msg__ChronyTrackingStatus
    std::shared_ptr<marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_status_msgs__msg__ChronyTrackingStatus
    std::shared_ptr<marti_status_msgs::msg::ChronyTrackingStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChronyTrackingStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->reference != other.reference) {
      return false;
    }
    if (this->stratum != other.stratum) {
      return false;
    }
    if (this->system_time_offset != other.system_time_offset) {
      return false;
    }
    if (this->last_offset != other.last_offset) {
      return false;
    }
    if (this->rms_offset != other.rms_offset) {
      return false;
    }
    if (this->frequency_offset != other.frequency_offset) {
      return false;
    }
    if (this->residual_frequency != other.residual_frequency) {
      return false;
    }
    if (this->skew != other.skew) {
      return false;
    }
    if (this->root_delay != other.root_delay) {
      return false;
    }
    if (this->root_dispersion != other.root_dispersion) {
      return false;
    }
    if (this->update_interval != other.update_interval) {
      return false;
    }
    if (this->leap_status != other.leap_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChronyTrackingStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChronyTrackingStatus_

// alias to use template instance with default allocator
using ChronyTrackingStatus =
  marti_status_msgs::msg::ChronyTrackingStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_status_msgs

#endif  // MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__STRUCT_HPP_
