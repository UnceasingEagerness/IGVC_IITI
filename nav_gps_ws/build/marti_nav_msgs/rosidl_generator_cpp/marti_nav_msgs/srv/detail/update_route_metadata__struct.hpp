// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:srv/UpdateRouteMetadata.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__STRUCT_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'metadata_points'
#include "marti_nav_msgs/msg/detail/route_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__srv__UpdateRouteMetadata_Request __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__srv__UpdateRouteMetadata_Request __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateRouteMetadata_Request_
{
  using Type = UpdateRouteMetadata_Request_<ContainerAllocator>;

  explicit UpdateRouteMetadata_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_guid = "";
    }
  }

  explicit UpdateRouteMetadata_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route_guid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_guid = "";
    }
  }

  // field types and members
  using _route_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _route_guid_type route_guid;
  using _metadata_points_type =
    std::vector<marti_nav_msgs::msg::RoutePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_nav_msgs::msg::RoutePoint_<ContainerAllocator>>>;
  _metadata_points_type metadata_points;

  // setters for named parameter idiom
  Type & set__route_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->route_guid = _arg;
    return *this;
  }
  Type & set__metadata_points(
    const std::vector<marti_nav_msgs::msg::RoutePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_nav_msgs::msg::RoutePoint_<ContainerAllocator>>> & _arg)
  {
    this->metadata_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__srv__UpdateRouteMetadata_Request
    std::shared_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__srv__UpdateRouteMetadata_Request
    std::shared_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateRouteMetadata_Request_ & other) const
  {
    if (this->route_guid != other.route_guid) {
      return false;
    }
    if (this->metadata_points != other.metadata_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateRouteMetadata_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateRouteMetadata_Request_

// alias to use template instance with default allocator
using UpdateRouteMetadata_Request =
  marti_nav_msgs::srv::UpdateRouteMetadata_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_nav_msgs


#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__srv__UpdateRouteMetadata_Response __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__srv__UpdateRouteMetadata_Response __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateRouteMetadata_Response_
{
  using Type = UpdateRouteMetadata_Response_<ContainerAllocator>;

  explicit UpdateRouteMetadata_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit UpdateRouteMetadata_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__srv__UpdateRouteMetadata_Response
    std::shared_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__srv__UpdateRouteMetadata_Response
    std::shared_ptr<marti_nav_msgs::srv::UpdateRouteMetadata_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateRouteMetadata_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateRouteMetadata_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateRouteMetadata_Response_

// alias to use template instance with default allocator
using UpdateRouteMetadata_Response =
  marti_nav_msgs::srv::UpdateRouteMetadata_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_nav_msgs

namespace marti_nav_msgs
{

namespace srv
{

struct UpdateRouteMetadata
{
  using Request = marti_nav_msgs::srv::UpdateRouteMetadata_Request;
  using Response = marti_nav_msgs::srv::UpdateRouteMetadata_Response;
};

}  // namespace srv

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__STRUCT_HPP_
