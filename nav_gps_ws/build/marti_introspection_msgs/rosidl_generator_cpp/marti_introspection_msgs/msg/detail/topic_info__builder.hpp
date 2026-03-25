// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_introspection_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__BUILDER_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_introspection_msgs/msg/detail/topic_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_introspection_msgs
{

namespace msg
{

namespace builder
{

class Init_TopicInfo_advertised
{
public:
  explicit Init_TopicInfo_advertised(::marti_introspection_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  ::marti_introspection_msgs::msg::TopicInfo advertised(::marti_introspection_msgs::msg::TopicInfo::_advertised_type arg)
  {
    msg_.advertised = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_introspection_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_message_type
{
public:
  explicit Init_TopicInfo_message_type(::marti_introspection_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_advertised message_type(::marti_introspection_msgs::msg::TopicInfo::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_TopicInfo_advertised(msg_);
  }

private:
  ::marti_introspection_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_group
{
public:
  explicit Init_TopicInfo_group(::marti_introspection_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_message_type group(::marti_introspection_msgs::msg::TopicInfo::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_TopicInfo_message_type(msg_);
  }

private:
  ::marti_introspection_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_description
{
public:
  explicit Init_TopicInfo_description(::marti_introspection_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_group description(::marti_introspection_msgs::msg::TopicInfo::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_TopicInfo_group(msg_);
  }

private:
  ::marti_introspection_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_resolved_name
{
public:
  explicit Init_TopicInfo_resolved_name(::marti_introspection_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_description resolved_name(::marti_introspection_msgs::msg::TopicInfo::_resolved_name_type arg)
  {
    msg_.resolved_name = std::move(arg);
    return Init_TopicInfo_description(msg_);
  }

private:
  ::marti_introspection_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_name
{
public:
  Init_TopicInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TopicInfo_resolved_name name(::marti_introspection_msgs::msg::TopicInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TopicInfo_resolved_name(msg_);
  }

private:
  ::marti_introspection_msgs::msg::TopicInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_introspection_msgs::msg::TopicInfo>()
{
  return marti_introspection_msgs::msg::builder::Init_TopicInfo_name();
}

}  // namespace marti_introspection_msgs

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__TOPIC_INFO__BUILDER_HPP_
