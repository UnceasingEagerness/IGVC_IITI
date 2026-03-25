// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_can_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

#ifndef MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_
#define MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_can_msgs/msg/detail/can_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_can_msgs
{

namespace msg
{

namespace builder
{

class Init_CanFrame_data
{
public:
  explicit Init_CanFrame_data(::marti_can_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  ::marti_can_msgs::msg::CanFrame data(::marti_can_msgs::msg::CanFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_can_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_data_length
{
public:
  explicit Init_CanFrame_data_length(::marti_can_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_data data_length(::marti_can_msgs::msg::CanFrame::_data_length_type arg)
  {
    msg_.data_length = std::move(arg);
    return Init_CanFrame_data(msg_);
  }

private:
  ::marti_can_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_msg_type
{
public:
  explicit Init_CanFrame_msg_type(::marti_can_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_data_length msg_type(::marti_can_msgs::msg::CanFrame::_msg_type_type arg)
  {
    msg_.msg_type = std::move(arg);
    return Init_CanFrame_data_length(msg_);
  }

private:
  ::marti_can_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_id
{
public:
  explicit Init_CanFrame_id(::marti_can_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_msg_type id(::marti_can_msgs::msg::CanFrame::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CanFrame_msg_type(msg_);
  }

private:
  ::marti_can_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_header
{
public:
  Init_CanFrame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanFrame_id header(::marti_can_msgs::msg::CanFrame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CanFrame_id(msg_);
  }

private:
  ::marti_can_msgs::msg::CanFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_can_msgs::msg::CanFrame>()
{
  return marti_can_msgs::msg::builder::Init_CanFrame_header();
}

}  // namespace marti_can_msgs

#endif  // MARTI_CAN_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_
