// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:srv/SaveRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__STRUCT_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'route'
#include "marti_nav_msgs/msg/detail/route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__srv__SaveRoute_Request __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__srv__SaveRoute_Request __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveRoute_Request_
{
  using Type = SaveRoute_Request_<ContainerAllocator>;

  explicit SaveRoute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->guid = "";
      this->thumbnail = "";
    }
  }

  explicit SaveRoute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    guid(_alloc),
    route(_alloc, _init),
    thumbnail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->guid = "";
      this->thumbnail = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _guid_type guid;
  using _route_type =
    marti_nav_msgs::msg::Route_<ContainerAllocator>;
  _route_type route;
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
  Type & set__guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->guid = _arg;
    return *this;
  }
  Type & set__route(
    const marti_nav_msgs::msg::Route_<ContainerAllocator> & _arg)
  {
    this->route = _arg;
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
    marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__srv__SaveRoute_Request
    std::shared_ptr<marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__srv__SaveRoute_Request
    std::shared_ptr<marti_nav_msgs::srv::SaveRoute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveRoute_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->guid != other.guid) {
      return false;
    }
    if (this->route != other.route) {
      return false;
    }
    if (this->thumbnail != other.thumbnail) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveRoute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveRoute_Request_

// alias to use template instance with default allocator
using SaveRoute_Request =
  marti_nav_msgs::srv::SaveRoute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_nav_msgs


#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__srv__SaveRoute_Response __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__srv__SaveRoute_Response __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveRoute_Response_
{
  using Type = SaveRoute_Response_<ContainerAllocator>;

  explicit SaveRoute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SaveRoute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__srv__SaveRoute_Response
    std::shared_ptr<marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__srv__SaveRoute_Response
    std::shared_ptr<marti_nav_msgs::srv::SaveRoute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveRoute_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveRoute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveRoute_Response_

// alias to use template instance with default allocator
using SaveRoute_Response =
  marti_nav_msgs::srv::SaveRoute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_nav_msgs

namespace marti_nav_msgs
{

namespace srv
{

struct SaveRoute
{
  using Request = marti_nav_msgs::srv::SaveRoute_Request;
  using Response = marti_nav_msgs::srv::SaveRoute_Response;
};

}  // namespace srv

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__STRUCT_HPP_
