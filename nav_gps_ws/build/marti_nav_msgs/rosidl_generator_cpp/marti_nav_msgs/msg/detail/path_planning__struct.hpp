// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_nav_msgs:msg/PathPlanning.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__STRUCT_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__STRUCT_HPP_

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
# define DEPRECATED__marti_nav_msgs__msg__PathPlanning __attribute__((deprecated))
#else
# define DEPRECATED__marti_nav_msgs__msg__PathPlanning __declspec(deprecated)
#endif

namespace marti_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPlanning_
{
  using Type = PathPlanning_<ContainerAllocator>;

  explicit PathPlanning_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_type = 0l;
      this->length = 0.0f;
      this->start_speed = 0.0f;
      this->end_speed = 0.0f;
      this->startx = 0.0f;
      this->starty = 0.0f;
      this->endx = 0.0f;
      this->endy = 0.0f;
      this->theta0 = 0.0f;
      this->a1 = 0.0f;
      this->a2 = 0.0f;
      this->k0 = 0.0f;
      this->c1 = 0.0f;
      this->c2 = 0.0f;
      this->behavior = 0l;
      this->creep = 0l;
      this->acc = 0l;
      this->reverse = 0l;
      this->vehicle_track = 0l;
      this->transmitted = false;
      this->aux_transmitted = false;
      this->theta_end = 0.0f;
      this->k_end = 0.0f;
      this->seg_len = 0l;
      this->speed_limit = 0.0f;
      this->max_error = 0.0f;
      this->max_smooth = 0.0f;
      this->max_curv = 0.0f;
      this->possible_points = 0l;
      this->exit_segment = false;
    }
  }

  explicit PathPlanning_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_type = 0l;
      this->length = 0.0f;
      this->start_speed = 0.0f;
      this->end_speed = 0.0f;
      this->startx = 0.0f;
      this->starty = 0.0f;
      this->endx = 0.0f;
      this->endy = 0.0f;
      this->theta0 = 0.0f;
      this->a1 = 0.0f;
      this->a2 = 0.0f;
      this->k0 = 0.0f;
      this->c1 = 0.0f;
      this->c2 = 0.0f;
      this->behavior = 0l;
      this->creep = 0l;
      this->acc = 0l;
      this->reverse = 0l;
      this->vehicle_track = 0l;
      this->transmitted = false;
      this->aux_transmitted = false;
      this->theta_end = 0.0f;
      this->k_end = 0.0f;
      this->seg_len = 0l;
      this->speed_limit = 0.0f;
      this->max_error = 0.0f;
      this->max_smooth = 0.0f;
      this->max_curv = 0.0f;
      this->possible_points = 0l;
      this->exit_segment = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _segment_type_type =
    int32_t;
  _segment_type_type segment_type;
  using _length_type =
    float;
  _length_type length;
  using _start_speed_type =
    float;
  _start_speed_type start_speed;
  using _end_speed_type =
    float;
  _end_speed_type end_speed;
  using _startx_type =
    float;
  _startx_type startx;
  using _starty_type =
    float;
  _starty_type starty;
  using _endx_type =
    float;
  _endx_type endx;
  using _endy_type =
    float;
  _endy_type endy;
  using _theta0_type =
    float;
  _theta0_type theta0;
  using _a1_type =
    float;
  _a1_type a1;
  using _a2_type =
    float;
  _a2_type a2;
  using _k0_type =
    float;
  _k0_type k0;
  using _c1_type =
    float;
  _c1_type c1;
  using _c2_type =
    float;
  _c2_type c2;
  using _behavior_type =
    int32_t;
  _behavior_type behavior;
  using _creep_type =
    int32_t;
  _creep_type creep;
  using _acc_type =
    int32_t;
  _acc_type acc;
  using _reverse_type =
    int32_t;
  _reverse_type reverse;
  using _vehicle_track_type =
    int32_t;
  _vehicle_track_type vehicle_track;
  using _transmitted_type =
    bool;
  _transmitted_type transmitted;
  using _aux_transmitted_type =
    bool;
  _aux_transmitted_type aux_transmitted;
  using _theta_end_type =
    float;
  _theta_end_type theta_end;
  using _k_end_type =
    float;
  _k_end_type k_end;
  using _seg_len_type =
    int32_t;
  _seg_len_type seg_len;
  using _speed_limit_type =
    float;
  _speed_limit_type speed_limit;
  using _max_error_type =
    float;
  _max_error_type max_error;
  using _max_smooth_type =
    float;
  _max_smooth_type max_smooth;
  using _max_curv_type =
    float;
  _max_curv_type max_curv;
  using _possible_points_type =
    int32_t;
  _possible_points_type possible_points;
  using _exit_segment_type =
    bool;
  _exit_segment_type exit_segment;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__segment_type(
    const int32_t & _arg)
  {
    this->segment_type = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__start_speed(
    const float & _arg)
  {
    this->start_speed = _arg;
    return *this;
  }
  Type & set__end_speed(
    const float & _arg)
  {
    this->end_speed = _arg;
    return *this;
  }
  Type & set__startx(
    const float & _arg)
  {
    this->startx = _arg;
    return *this;
  }
  Type & set__starty(
    const float & _arg)
  {
    this->starty = _arg;
    return *this;
  }
  Type & set__endx(
    const float & _arg)
  {
    this->endx = _arg;
    return *this;
  }
  Type & set__endy(
    const float & _arg)
  {
    this->endy = _arg;
    return *this;
  }
  Type & set__theta0(
    const float & _arg)
  {
    this->theta0 = _arg;
    return *this;
  }
  Type & set__a1(
    const float & _arg)
  {
    this->a1 = _arg;
    return *this;
  }
  Type & set__a2(
    const float & _arg)
  {
    this->a2 = _arg;
    return *this;
  }
  Type & set__k0(
    const float & _arg)
  {
    this->k0 = _arg;
    return *this;
  }
  Type & set__c1(
    const float & _arg)
  {
    this->c1 = _arg;
    return *this;
  }
  Type & set__c2(
    const float & _arg)
  {
    this->c2 = _arg;
    return *this;
  }
  Type & set__behavior(
    const int32_t & _arg)
  {
    this->behavior = _arg;
    return *this;
  }
  Type & set__creep(
    const int32_t & _arg)
  {
    this->creep = _arg;
    return *this;
  }
  Type & set__acc(
    const int32_t & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__reverse(
    const int32_t & _arg)
  {
    this->reverse = _arg;
    return *this;
  }
  Type & set__vehicle_track(
    const int32_t & _arg)
  {
    this->vehicle_track = _arg;
    return *this;
  }
  Type & set__transmitted(
    const bool & _arg)
  {
    this->transmitted = _arg;
    return *this;
  }
  Type & set__aux_transmitted(
    const bool & _arg)
  {
    this->aux_transmitted = _arg;
    return *this;
  }
  Type & set__theta_end(
    const float & _arg)
  {
    this->theta_end = _arg;
    return *this;
  }
  Type & set__k_end(
    const float & _arg)
  {
    this->k_end = _arg;
    return *this;
  }
  Type & set__seg_len(
    const int32_t & _arg)
  {
    this->seg_len = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const float & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }
  Type & set__max_error(
    const float & _arg)
  {
    this->max_error = _arg;
    return *this;
  }
  Type & set__max_smooth(
    const float & _arg)
  {
    this->max_smooth = _arg;
    return *this;
  }
  Type & set__max_curv(
    const float & _arg)
  {
    this->max_curv = _arg;
    return *this;
  }
  Type & set__possible_points(
    const int32_t & _arg)
  {
    this->possible_points = _arg;
    return *this;
  }
  Type & set__exit_segment(
    const bool & _arg)
  {
    this->exit_segment = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_nav_msgs::msg::PathPlanning_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_nav_msgs::msg::PathPlanning_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::PathPlanning_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_nav_msgs::msg::PathPlanning_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::PathPlanning_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::PathPlanning_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_nav_msgs::msg::PathPlanning_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_nav_msgs::msg::PathPlanning_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::PathPlanning_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_nav_msgs::msg::PathPlanning_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_nav_msgs__msg__PathPlanning
    std::shared_ptr<marti_nav_msgs::msg::PathPlanning_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_nav_msgs__msg__PathPlanning
    std::shared_ptr<marti_nav_msgs::msg::PathPlanning_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPlanning_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->segment_type != other.segment_type) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->start_speed != other.start_speed) {
      return false;
    }
    if (this->end_speed != other.end_speed) {
      return false;
    }
    if (this->startx != other.startx) {
      return false;
    }
    if (this->starty != other.starty) {
      return false;
    }
    if (this->endx != other.endx) {
      return false;
    }
    if (this->endy != other.endy) {
      return false;
    }
    if (this->theta0 != other.theta0) {
      return false;
    }
    if (this->a1 != other.a1) {
      return false;
    }
    if (this->a2 != other.a2) {
      return false;
    }
    if (this->k0 != other.k0) {
      return false;
    }
    if (this->c1 != other.c1) {
      return false;
    }
    if (this->c2 != other.c2) {
      return false;
    }
    if (this->behavior != other.behavior) {
      return false;
    }
    if (this->creep != other.creep) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->reverse != other.reverse) {
      return false;
    }
    if (this->vehicle_track != other.vehicle_track) {
      return false;
    }
    if (this->transmitted != other.transmitted) {
      return false;
    }
    if (this->aux_transmitted != other.aux_transmitted) {
      return false;
    }
    if (this->theta_end != other.theta_end) {
      return false;
    }
    if (this->k_end != other.k_end) {
      return false;
    }
    if (this->seg_len != other.seg_len) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    if (this->max_error != other.max_error) {
      return false;
    }
    if (this->max_smooth != other.max_smooth) {
      return false;
    }
    if (this->max_curv != other.max_curv) {
      return false;
    }
    if (this->possible_points != other.possible_points) {
      return false;
    }
    if (this->exit_segment != other.exit_segment) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPlanning_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPlanning_

// alias to use template instance with default allocator
using PathPlanning =
  marti_nav_msgs::msg::PathPlanning_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__STRUCT_HPP_
