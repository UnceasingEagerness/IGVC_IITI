// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/TeleopState.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__TELEOP_STATE__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__TELEOP_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/teleop_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_TeleopState_teleop_signals
{
public:
  explicit Init_TeleopState_teleop_signals(::marti_nav_msgs::msg::TeleopState & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::TeleopState teleop_signals(::marti_nav_msgs::msg::TeleopState::_teleop_signals_type arg)
  {
    msg_.teleop_signals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::TeleopState msg_;
};

class Init_TeleopState_header
{
public:
  Init_TeleopState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleopState_teleop_signals header(::marti_nav_msgs::msg::TeleopState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TeleopState_teleop_signals(msg_);
  }

private:
  ::marti_nav_msgs::msg::TeleopState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::TeleopState>()
{
  return marti_nav_msgs::msg::builder::Init_TeleopState_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__TELEOP_STATE__BUILDER_HPP_
