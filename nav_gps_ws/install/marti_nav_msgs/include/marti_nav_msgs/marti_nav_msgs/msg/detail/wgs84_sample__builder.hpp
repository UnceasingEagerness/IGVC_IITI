// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/Wgs84Sample.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/wgs84_sample__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Wgs84Sample_wgs84_covariance
{
public:
  explicit Init_Wgs84Sample_wgs84_covariance(::marti_nav_msgs::msg::Wgs84Sample & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::Wgs84Sample wgs84_covariance(::marti_nav_msgs::msg::Wgs84Sample::_wgs84_covariance_type arg)
  {
    msg_.wgs84_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::Wgs84Sample msg_;
};

class Init_Wgs84Sample_wgs84
{
public:
  explicit Init_Wgs84Sample_wgs84(::marti_nav_msgs::msg::Wgs84Sample & msg)
  : msg_(msg)
  {}
  Init_Wgs84Sample_wgs84_covariance wgs84(::marti_nav_msgs::msg::Wgs84Sample::_wgs84_type arg)
  {
    msg_.wgs84 = std::move(arg);
    return Init_Wgs84Sample_wgs84_covariance(msg_);
  }

private:
  ::marti_nav_msgs::msg::Wgs84Sample msg_;
};

class Init_Wgs84Sample_odom
{
public:
  explicit Init_Wgs84Sample_odom(::marti_nav_msgs::msg::Wgs84Sample & msg)
  : msg_(msg)
  {}
  Init_Wgs84Sample_wgs84 odom(::marti_nav_msgs::msg::Wgs84Sample::_odom_type arg)
  {
    msg_.odom = std::move(arg);
    return Init_Wgs84Sample_wgs84(msg_);
  }

private:
  ::marti_nav_msgs::msg::Wgs84Sample msg_;
};

class Init_Wgs84Sample_header
{
public:
  Init_Wgs84Sample_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wgs84Sample_odom header(::marti_nav_msgs::msg::Wgs84Sample::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Wgs84Sample_odom(msg_);
  }

private:
  ::marti_nav_msgs::msg::Wgs84Sample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::Wgs84Sample>()
{
  return marti_nav_msgs::msg::builder::Init_Wgs84Sample_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__WGS84_SAMPLE__BUILDER_HPP_
