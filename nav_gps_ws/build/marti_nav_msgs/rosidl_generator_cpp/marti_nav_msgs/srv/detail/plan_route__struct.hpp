// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__STRUCT_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__STRUCT_HPP_

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
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__srv__PlanRoute_Request __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__srv__PlanRoute_Request __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanRoute_Request_
{
  using Type = PlanRoute_Request_<ContainerAllocator>;

  explicit PlanRoute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_from_vehicle = false;
    }
  }

  explicit PlanRoute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_from_vehicle = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _waypoints_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _plan_from_vehicle_type =
    bool;
  _plan_from_vehicle_type plan_from_vehicle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__plan_from_vehicle(
    const bool & _arg)
  {
    this->plan_from_vehicle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__srv__PlanRoute_Request
    std::shared_ptr<marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__srv__PlanRoute_Request
    std::shared_ptr<marti_nav_msgs::srv::PlanRoute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanRoute_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->plan_from_vehicle != other.plan_from_vehicle) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanRoute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanRoute_Request_

// alias to use template instance with default allocator
using PlanRoute_Request =
  marti_nav_msgs::srv::PlanRoute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_nav_msgs


// Include directives for member types
// Member 'route'
#include "marti_nav_msgs/msg/detail/route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_nav_msgs__srv__PlanRoute_Response __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__srv__PlanRoute_Response __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanRoute_Response_
{
  using Type = PlanRoute_Response_<ContainerAllocator>;

  explicit PlanRoute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->cost = 0.0;
    }
  }

  explicit PlanRoute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->cost = 0.0;
    }
  }

  // field types and members
  using _route_type =
    marti_nav_msgs::msg::Route_<ContainerAllocator>;
  _route_type route;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _cost_type =
    double;
  _cost_type cost;

  // setters for named parameter idiom
  Type & set__route(
    const marti_nav_msgs::msg::Route_<ContainerAllocator> & _arg)
  {
    this->route = _arg;
    return *this;
  }
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
  Type & set__cost(
    const double & _arg)
  {
    this->cost = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__srv__PlanRoute_Response
    std::shared_ptr<marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__srv__PlanRoute_Response
    std::shared_ptr<marti_nav_msgs::srv::PlanRoute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanRoute_Response_ & other) const
  {
    if (this->route != other.route) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->cost != other.cost) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanRoute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanRoute_Response_

// alias to use template instance with default allocator
using PlanRoute_Response =
  marti_nav_msgs::srv::PlanRoute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marti_nav_msgs

namespace marti_nav_msgs
{

namespace srv
{

struct PlanRoute
{
  using Request = marti_nav_msgs::srv::PlanRoute_Request;
  using Response = marti_nav_msgs::srv::PlanRoute_Response;
};

}  // namespace srv

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__STRUCT_HPP_
