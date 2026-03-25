// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:srv/SaveRecordedRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__SAVE_RECORDED_ROUTE__STRUCT_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__SAVE_RECORDED_ROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__srv__SaveRecordedRoute_Request __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__srv__SaveRecordedRoute_Request __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveRecordedRoute_Request_
{
  using Type = SaveRecordedRoute_Request_<ContainerAllocator>;

  explicit SaveRecordedRoute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->thumbnail = "";
    }
  }

  explicit SaveRecordedRoute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    thumbnail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->thumbnail = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _thumbnail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _thumbnail_type thumbnail;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__thumbnail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->thumbnail = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__srv__SaveRecordedRoute_Request
    std::shared_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__srv__SaveRecordedRoute_Request
    std::shared_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveRecordedRoute_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->thumbnail != other.thumbnail) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveRecordedRoute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveRecordedRoute_Request_

// alias to use template instance with default allocator
using SaveRecordedRoute_Request =
  marti_nav_msgs::srv::SaveRecordedRoute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_nav_msgs


#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__srv__SaveRecordedRoute_Response __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__srv__SaveRecordedRoute_Response __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveRecordedRoute_Response_
{
  using Type = SaveRecordedRoute_Response_<ContainerAllocator>;

  explicit SaveRecordedRoute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SaveRecordedRoute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__srv__SaveRecordedRoute_Response
    std::shared_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__srv__SaveRecordedRoute_Response
    std::shared_ptr<marti_nav_msgs::srv::SaveRecordedRoute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveRecordedRoute_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveRecordedRoute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveRecordedRoute_Response_

// alias to use template instance with default allocator
using SaveRecordedRoute_Response =
  marti_nav_msgs::srv::SaveRecordedRoute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_nav_msgs

namespace marti_nav_msgs
{

namespace srv
{

struct SaveRecordedRoute
{
  using Request = marti_nav_msgs::srv::SaveRecordedRoute_Request;
  using Response = marti_nav_msgs::srv::SaveRecordedRoute_Response;
};

}  // namespace srv

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__SAVE_RECORDED_ROUTE__STRUCT_HPP_
