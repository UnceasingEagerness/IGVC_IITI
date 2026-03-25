// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_sensor_msgs:msg/DioRealTimeData.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__STRUCT_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__STRUCT_HPP_

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
# define DEPRECATED__marti_sensor_msgs__msg__DioRealTimeData __attribute__((deprecated))
#else
# define DEPRECATED__marti_sensor_msgs__msg__DioRealTimeData __declspec(deprecated)
#endif

namespace marti_sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DioRealTimeData_
{
  using Type = DioRealTimeData_<ContainerAllocator>;

  explicit DioRealTimeData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sample_frequency = 0.0;
      this->latest_sample_time = 0ull;
    }
  }

  explicit DioRealTimeData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sample_frequency = 0.0;
      this->latest_sample_time = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sample_frequency_type =
    double;
  _sample_frequency_type sample_frequency;
  using _latest_sample_time_type =
    uint64_t;
  _latest_sample_time_type latest_sample_time;
  using _sample_states_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _sample_states_type sample_states;
  using _sample_times_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _sample_times_type sample_times;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sample_frequency(
    const double & _arg)
  {
    this->sample_frequency = _arg;
    return *this;
  }
  Type & set__latest_sample_time(
    const uint64_t & _arg)
  {
    this->latest_sample_time = _arg;
    return *this;
  }
  Type & set__sample_states(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->sample_states = _arg;
    return *this;
  }
  Type & set__sample_times(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->sample_times = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_sensor_msgs__msg__DioRealTimeData
    std::shared_ptr<marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_sensor_msgs__msg__DioRealTimeData
    std::shared_ptr<marti_sensor_msgs::msg::DioRealTimeData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DioRealTimeData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sample_frequency != other.sample_frequency) {
      return false;
    }
    if (this->latest_sample_time != other.latest_sample_time) {
      return false;
    }
    if (this->sample_states != other.sample_states) {
      return false;
    }
    if (this->sample_times != other.sample_times) {
      return false;
    }
    return true;
  }
  bool operator!=(const DioRealTimeData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DioRealTimeData_

// alias to use template instance with default allocator
using DioRealTimeData =
  marti_sensor_msgs::msg::DioRealTimeData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__STRUCT_HPP_
