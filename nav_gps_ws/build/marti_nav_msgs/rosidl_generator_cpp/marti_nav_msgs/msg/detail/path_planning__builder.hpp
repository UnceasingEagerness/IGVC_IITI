// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/PathPlanning.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/path_planning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_PathPlanning_exit_segment
{
public:
  explicit Init_PathPlanning_exit_segment(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::PathPlanning exit_segment(::marti_nav_msgs::msg::PathPlanning::_exit_segment_type arg)
  {
    msg_.exit_segment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_possible_points
{
public:
  explicit Init_PathPlanning_possible_points(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_exit_segment possible_points(::marti_nav_msgs::msg::PathPlanning::_possible_points_type arg)
  {
    msg_.possible_points = std::move(arg);
    return Init_PathPlanning_exit_segment(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_max_curv
{
public:
  explicit Init_PathPlanning_max_curv(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_possible_points max_curv(::marti_nav_msgs::msg::PathPlanning::_max_curv_type arg)
  {
    msg_.max_curv = std::move(arg);
    return Init_PathPlanning_possible_points(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_max_smooth
{
public:
  explicit Init_PathPlanning_max_smooth(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_max_curv max_smooth(::marti_nav_msgs::msg::PathPlanning::_max_smooth_type arg)
  {
    msg_.max_smooth = std::move(arg);
    return Init_PathPlanning_max_curv(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_max_error
{
public:
  explicit Init_PathPlanning_max_error(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_max_smooth max_error(::marti_nav_msgs::msg::PathPlanning::_max_error_type arg)
  {
    msg_.max_error = std::move(arg);
    return Init_PathPlanning_max_smooth(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_speed_limit
{
public:
  explicit Init_PathPlanning_speed_limit(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_max_error speed_limit(::marti_nav_msgs::msg::PathPlanning::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return Init_PathPlanning_max_error(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_seg_len
{
public:
  explicit Init_PathPlanning_seg_len(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_speed_limit seg_len(::marti_nav_msgs::msg::PathPlanning::_seg_len_type arg)
  {
    msg_.seg_len = std::move(arg);
    return Init_PathPlanning_speed_limit(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_k_end
{
public:
  explicit Init_PathPlanning_k_end(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_seg_len k_end(::marti_nav_msgs::msg::PathPlanning::_k_end_type arg)
  {
    msg_.k_end = std::move(arg);
    return Init_PathPlanning_seg_len(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_theta_end
{
public:
  explicit Init_PathPlanning_theta_end(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_k_end theta_end(::marti_nav_msgs::msg::PathPlanning::_theta_end_type arg)
  {
    msg_.theta_end = std::move(arg);
    return Init_PathPlanning_k_end(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_aux_transmitted
{
public:
  explicit Init_PathPlanning_aux_transmitted(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_theta_end aux_transmitted(::marti_nav_msgs::msg::PathPlanning::_aux_transmitted_type arg)
  {
    msg_.aux_transmitted = std::move(arg);
    return Init_PathPlanning_theta_end(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_transmitted
{
public:
  explicit Init_PathPlanning_transmitted(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_aux_transmitted transmitted(::marti_nav_msgs::msg::PathPlanning::_transmitted_type arg)
  {
    msg_.transmitted = std::move(arg);
    return Init_PathPlanning_aux_transmitted(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_vehicle_track
{
public:
  explicit Init_PathPlanning_vehicle_track(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_transmitted vehicle_track(::marti_nav_msgs::msg::PathPlanning::_vehicle_track_type arg)
  {
    msg_.vehicle_track = std::move(arg);
    return Init_PathPlanning_transmitted(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_reverse
{
public:
  explicit Init_PathPlanning_reverse(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_vehicle_track reverse(::marti_nav_msgs::msg::PathPlanning::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_PathPlanning_vehicle_track(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_acc
{
public:
  explicit Init_PathPlanning_acc(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_reverse acc(::marti_nav_msgs::msg::PathPlanning::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_PathPlanning_reverse(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_creep
{
public:
  explicit Init_PathPlanning_creep(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_acc creep(::marti_nav_msgs::msg::PathPlanning::_creep_type arg)
  {
    msg_.creep = std::move(arg);
    return Init_PathPlanning_acc(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_behavior
{
public:
  explicit Init_PathPlanning_behavior(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_creep behavior(::marti_nav_msgs::msg::PathPlanning::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return Init_PathPlanning_creep(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_c2
{
public:
  explicit Init_PathPlanning_c2(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_behavior c2(::marti_nav_msgs::msg::PathPlanning::_c2_type arg)
  {
    msg_.c2 = std::move(arg);
    return Init_PathPlanning_behavior(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_c1
{
public:
  explicit Init_PathPlanning_c1(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_c2 c1(::marti_nav_msgs::msg::PathPlanning::_c1_type arg)
  {
    msg_.c1 = std::move(arg);
    return Init_PathPlanning_c2(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_k0
{
public:
  explicit Init_PathPlanning_k0(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_c1 k0(::marti_nav_msgs::msg::PathPlanning::_k0_type arg)
  {
    msg_.k0 = std::move(arg);
    return Init_PathPlanning_c1(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_a2
{
public:
  explicit Init_PathPlanning_a2(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_k0 a2(::marti_nav_msgs::msg::PathPlanning::_a2_type arg)
  {
    msg_.a2 = std::move(arg);
    return Init_PathPlanning_k0(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_a1
{
public:
  explicit Init_PathPlanning_a1(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_a2 a1(::marti_nav_msgs::msg::PathPlanning::_a1_type arg)
  {
    msg_.a1 = std::move(arg);
    return Init_PathPlanning_a2(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_theta0
{
public:
  explicit Init_PathPlanning_theta0(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_a1 theta0(::marti_nav_msgs::msg::PathPlanning::_theta0_type arg)
  {
    msg_.theta0 = std::move(arg);
    return Init_PathPlanning_a1(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_endy
{
public:
  explicit Init_PathPlanning_endy(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_theta0 endy(::marti_nav_msgs::msg::PathPlanning::_endy_type arg)
  {
    msg_.endy = std::move(arg);
    return Init_PathPlanning_theta0(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_endx
{
public:
  explicit Init_PathPlanning_endx(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_endy endx(::marti_nav_msgs::msg::PathPlanning::_endx_type arg)
  {
    msg_.endx = std::move(arg);
    return Init_PathPlanning_endy(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_starty
{
public:
  explicit Init_PathPlanning_starty(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_endx starty(::marti_nav_msgs::msg::PathPlanning::_starty_type arg)
  {
    msg_.starty = std::move(arg);
    return Init_PathPlanning_endx(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_startx
{
public:
  explicit Init_PathPlanning_startx(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_starty startx(::marti_nav_msgs::msg::PathPlanning::_startx_type arg)
  {
    msg_.startx = std::move(arg);
    return Init_PathPlanning_starty(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_end_speed
{
public:
  explicit Init_PathPlanning_end_speed(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_startx end_speed(::marti_nav_msgs::msg::PathPlanning::_end_speed_type arg)
  {
    msg_.end_speed = std::move(arg);
    return Init_PathPlanning_startx(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_start_speed
{
public:
  explicit Init_PathPlanning_start_speed(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_end_speed start_speed(::marti_nav_msgs::msg::PathPlanning::_start_speed_type arg)
  {
    msg_.start_speed = std::move(arg);
    return Init_PathPlanning_end_speed(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_length
{
public:
  explicit Init_PathPlanning_length(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_start_speed length(::marti_nav_msgs::msg::PathPlanning::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_PathPlanning_start_speed(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_segment_type
{
public:
  explicit Init_PathPlanning_segment_type(::marti_nav_msgs::msg::PathPlanning & msg)
  : msg_(msg)
  {}
  Init_PathPlanning_length segment_type(::marti_nav_msgs::msg::PathPlanning::_segment_type_type arg)
  {
    msg_.segment_type = std::move(arg);
    return Init_PathPlanning_length(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

class Init_PathPlanning_header
{
public:
  Init_PathPlanning_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPlanning_segment_type header(::marti_nav_msgs::msg::PathPlanning::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathPlanning_segment_type(msg_);
  }

private:
  ::marti_nav_msgs::msg::PathPlanning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::PathPlanning>()
{
  return marti_nav_msgs::msg::builder::Init_PathPlanning_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__PATH_PLANNING__BUILDER_HPP_
