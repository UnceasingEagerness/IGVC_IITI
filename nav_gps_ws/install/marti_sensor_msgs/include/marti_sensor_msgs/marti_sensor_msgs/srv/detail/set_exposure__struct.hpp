// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_sensor_msgs:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__STRUCT_HPP_
#define MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marti_sensor_msgs__srv__SetExposure_Request __attribute__((deprecated))
#else
# define DEPRECATED__marti_sensor_msgs__srv__SetExposure_Request __declspec(deprecated)
#endif

namespace marti_sensor_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetExposure_Request_
{
  using Type = SetExposure_Request_<ContainerAllocator>;

  explicit SetExposure_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_exposure = false;
      this->time = 0ll;
    }
  }

  explicit SetExposure_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_exposure = false;
      this->time = 0ll;
    }
  }

  // field types and members
  using _auto_exposure_type =
    bool;
  _auto_exposure_type auto_exposure;
  using _time_type =
    int64_t;
  _time_type time;

  // setters for named parameter idiom
  Type & set__auto_exposure(
    const bool & _arg)
  {
    this->auto_exposure = _arg;
    return *this;
  }
  Type & set__time(
    const int64_t & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_sensor_msgs__srv__SetExposure_Request
    std::shared_ptr<marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_sensor_msgs__srv__SetExposure_Request
    std::shared_ptr<marti_sensor_msgs::srv::SetExposure_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetExposure_Request_ & other) const
  {
    if (this->auto_exposure != other.auto_exposure) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetExposure_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetExposure_Request_

// alias to use template instance with default allocator
using SetExposure_Request =
  marti_sensor_msgs::srv::SetExposure_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_sensor_msgs


#ifndef _WIN32
# define DEPRECATED__marti_sensor_msgs__srv__SetExposure_Response __attribute__((deprecated))
#else
# define DEPRECATED__marti_sensor_msgs__srv__SetExposure_Response __declspec(deprecated)
#endif

namespace marti_sensor_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetExposure_Response_
{
  using Type = SetExposure_Response_<ContainerAllocator>;

  explicit SetExposure_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_exposure = false;
      this->time = 0ll;
    }
  }

  explicit SetExposure_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_exposure = false;
      this->time = 0ll;
    }
  }

  // field types and members
  using _auto_exposure_type =
    bool;
  _auto_exposure_type auto_exposure;
  using _time_type =
    int64_t;
  _time_type time;

  // setters for named parameter idiom
  Type & set__auto_exposure(
    const bool & _arg)
  {
    this->auto_exposure = _arg;
    return *this;
  }
  Type & set__time(
    const int64_t & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_sensor_msgs__srv__SetExposure_Response
    std::shared_ptr<marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_sensor_msgs__srv__SetExposure_Response
    std::shared_ptr<marti_sensor_msgs::srv::SetExposure_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetExposure_Response_ & other) const
  {
    if (this->auto_exposure != other.auto_exposure) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetExposure_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetExposure_Response_

// alias to use template instance with default allocator
using SetExposure_Response =
  marti_sensor_msgs::srv::SetExposure_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_sensor_msgs

namespace marti_sensor_msgs
{

namespace srv
{

struct SetExposure
{
  using Request = marti_sensor_msgs::srv::SetExposure_Request;
  using Response = marti_sensor_msgs::srv::SetExposure_Response;
};

}  // namespace srv

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__STRUCT_HPP_
