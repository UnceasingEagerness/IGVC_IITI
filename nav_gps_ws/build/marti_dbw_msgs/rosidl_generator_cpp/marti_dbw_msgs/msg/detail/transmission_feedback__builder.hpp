// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_dbw_msgs:msg/TransmissionFeedback.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__BUILDER_HPP_
#define MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_dbw_msgs/msg/detail/transmission_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_TransmissionFeedback_forward
{
public:
  explicit Init_TransmissionFeedback_forward(::marti_dbw_msgs::msg::TransmissionFeedback & msg)
  : msg_(msg)
  {}
  ::marti_dbw_msgs::msg::TransmissionFeedback forward(::marti_dbw_msgs::msg::TransmissionFeedback::_forward_type arg)
  {
    msg_.forward = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_dbw_msgs::msg::TransmissionFeedback msg_;
};

class Init_TransmissionFeedback_reverse
{
public:
  explicit Init_TransmissionFeedback_reverse(::marti_dbw_msgs::msg::TransmissionFeedback & msg)
  : msg_(msg)
  {}
  Init_TransmissionFeedback_forward reverse(::marti_dbw_msgs::msg::TransmissionFeedback::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_TransmissionFeedback_forward(msg_);
  }

private:
  ::marti_dbw_msgs::msg::TransmissionFeedback msg_;
};

class Init_TransmissionFeedback_stable
{
public:
  explicit Init_TransmissionFeedback_stable(::marti_dbw_msgs::msg::TransmissionFeedback & msg)
  : msg_(msg)
  {}
  Init_TransmissionFeedback_reverse stable(::marti_dbw_msgs::msg::TransmissionFeedback::_stable_type arg)
  {
    msg_.stable = std::move(arg);
    return Init_TransmissionFeedback_reverse(msg_);
  }

private:
  ::marti_dbw_msgs::msg::TransmissionFeedback msg_;
};

class Init_TransmissionFeedback_current_range
{
public:
  explicit Init_TransmissionFeedback_current_range(::marti_dbw_msgs::msg::TransmissionFeedback & msg)
  : msg_(msg)
  {}
  Init_TransmissionFeedback_stable current_range(::marti_dbw_msgs::msg::TransmissionFeedback::_current_range_type arg)
  {
    msg_.current_range = std::move(arg);
    return Init_TransmissionFeedback_stable(msg_);
  }

private:
  ::marti_dbw_msgs::msg::TransmissionFeedback msg_;
};

class Init_TransmissionFeedback_header
{
public:
  Init_TransmissionFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransmissionFeedback_current_range header(::marti_dbw_msgs::msg::TransmissionFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TransmissionFeedback_current_range(msg_);
  }

private:
  ::marti_dbw_msgs::msg::TransmissionFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_dbw_msgs::msg::TransmissionFeedback>()
{
  return marti_dbw_msgs::msg::builder::Init_TransmissionFeedback_header();
}

}  // namespace marti_dbw_msgs

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__TRANSMISSION_FEEDBACK__BUILDER_HPP_
