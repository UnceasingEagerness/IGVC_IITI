// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/VehicleControl.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/vehicle_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleControl_gb_position
{
public:
  explicit Init_VehicleControl_gb_position(::marti_nav_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::VehicleControl gb_position(::marti_nav_msgs::msg::VehicleControl::_gb_position_type arg)
  {
    msg_.gb_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_steering_position
{
public:
  explicit Init_VehicleControl_steering_position(::marti_nav_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_gb_position steering_position(::marti_nav_msgs::msg::VehicleControl::_steering_position_type arg)
  {
    msg_.steering_position = std::move(arg);
    return Init_VehicleControl_gb_position(msg_);
  }

private:
  ::marti_nav_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_brake
{
public:
  explicit Init_VehicleControl_brake(::marti_nav_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_steering_position brake(::marti_nav_msgs::msg::VehicleControl::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_VehicleControl_steering_position(msg_);
  }

private:
  ::marti_nav_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_throttle
{
public:
  explicit Init_VehicleControl_throttle(::marti_nav_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_brake throttle(::marti_nav_msgs::msg::VehicleControl::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_VehicleControl_brake(msg_);
  }

private:
  ::marti_nav_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_steering
{
public:
  explicit Init_VehicleControl_steering(::marti_nav_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_throttle steering(::marti_nav_msgs::msg::VehicleControl::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_VehicleControl_throttle(msg_);
  }

private:
  ::marti_nav_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_gear
{
public:
  explicit Init_VehicleControl_gear(::marti_nav_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_steering gear(::marti_nav_msgs::msg::VehicleControl::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_VehicleControl_steering(msg_);
  }

private:
  ::marti_nav_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_engine
{
public:
  explicit Init_VehicleControl_engine(::marti_nav_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_gear engine(::marti_nav_msgs::msg::VehicleControl::_engine_type arg)
  {
    msg_.engine = std::move(arg);
    return Init_VehicleControl_gear(msg_);
  }

private:
  ::marti_nav_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_header
{
public:
  Init_VehicleControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleControl_engine header(::marti_nav_msgs::msg::VehicleControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleControl_engine(msg_);
  }

private:
  ::marti_nav_msgs::msg::VehicleControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::VehicleControl>()
{
  return marti_nav_msgs::msg::builder::Init_VehicleControl_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__VEHICLE_CONTROL__BUILDER_HPP_
