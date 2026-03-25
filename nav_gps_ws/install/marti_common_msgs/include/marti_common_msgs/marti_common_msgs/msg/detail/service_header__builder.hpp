// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_common_msgs:msg/ServiceHeader.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__BUILDER_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_common_msgs/msg/detail/service_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_common_msgs
{

namespace msg
{

namespace builder
{

class Init_ServiceHeader_result
{
public:
  explicit Init_ServiceHeader_result(::marti_common_msgs::msg::ServiceHeader & msg)
  : msg_(msg)
  {}
  ::marti_common_msgs::msg::ServiceHeader result(::marti_common_msgs::msg::ServiceHeader::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_common_msgs::msg::ServiceHeader msg_;
};

class Init_ServiceHeader_sender
{
public:
  explicit Init_ServiceHeader_sender(::marti_common_msgs::msg::ServiceHeader & msg)
  : msg_(msg)
  {}
  Init_ServiceHeader_result sender(::marti_common_msgs::msg::ServiceHeader::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return Init_ServiceHeader_result(msg_);
  }

private:
  ::marti_common_msgs::msg::ServiceHeader msg_;
};

class Init_ServiceHeader_sequence
{
public:
  explicit Init_ServiceHeader_sequence(::marti_common_msgs::msg::ServiceHeader & msg)
  : msg_(msg)
  {}
  Init_ServiceHeader_sender sequence(::marti_common_msgs::msg::ServiceHeader::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_ServiceHeader_sender(msg_);
  }

private:
  ::marti_common_msgs::msg::ServiceHeader msg_;
};

class Init_ServiceHeader_stamp
{
public:
  Init_ServiceHeader_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceHeader_sequence stamp(::marti_common_msgs::msg::ServiceHeader::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ServiceHeader_sequence(msg_);
  }

private:
  ::marti_common_msgs::msg::ServiceHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_common_msgs::msg::ServiceHeader>()
{
  return marti_common_msgs::msg::builder::Init_ServiceHeader_stamp();
}

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__SERVICE_HEADER__BUILDER_HPP_
