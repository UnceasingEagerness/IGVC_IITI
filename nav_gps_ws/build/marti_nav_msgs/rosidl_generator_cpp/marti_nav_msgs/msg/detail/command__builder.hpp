// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Command_startstop
{
public:
  explicit Init_Command_startstop(::marti_nav_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::Command startstop(::marti_nav_msgs::msg::Command::_startstop_type arg)
  {
    msg_.startstop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::Command msg_;
};

class Init_Command_header
{
public:
  Init_Command_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_startstop header(::marti_nav_msgs::msg::Command::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Command_startstop(msg_);
  }

private:
  ::marti_nav_msgs::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::Command>()
{
  return marti_nav_msgs::msg::builder::Init_Command_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
