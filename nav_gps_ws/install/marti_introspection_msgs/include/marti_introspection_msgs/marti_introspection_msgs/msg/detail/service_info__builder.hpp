// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_introspection_msgs:msg/ServiceInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__BUILDER_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_introspection_msgs/msg/detail/service_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_introspection_msgs
{

namespace msg
{

namespace builder
{

class Init_ServiceInfo_topic_service
{
public:
  explicit Init_ServiceInfo_topic_service(::marti_introspection_msgs::msg::ServiceInfo & msg)
  : msg_(msg)
  {}
  ::marti_introspection_msgs::msg::ServiceInfo topic_service(::marti_introspection_msgs::msg::ServiceInfo::_topic_service_type arg)
  {
    msg_.topic_service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ServiceInfo msg_;
};

class Init_ServiceInfo_server
{
public:
  explicit Init_ServiceInfo_server(::marti_introspection_msgs::msg::ServiceInfo & msg)
  : msg_(msg)
  {}
  Init_ServiceInfo_topic_service server(::marti_introspection_msgs::msg::ServiceInfo::_server_type arg)
  {
    msg_.server = std::move(arg);
    return Init_ServiceInfo_topic_service(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ServiceInfo msg_;
};

class Init_ServiceInfo_message_type
{
public:
  explicit Init_ServiceInfo_message_type(::marti_introspection_msgs::msg::ServiceInfo & msg)
  : msg_(msg)
  {}
  Init_ServiceInfo_server message_type(::marti_introspection_msgs::msg::ServiceInfo::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_ServiceInfo_server(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ServiceInfo msg_;
};

class Init_ServiceInfo_group
{
public:
  explicit Init_ServiceInfo_group(::marti_introspection_msgs::msg::ServiceInfo & msg)
  : msg_(msg)
  {}
  Init_ServiceInfo_message_type group(::marti_introspection_msgs::msg::ServiceInfo::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_ServiceInfo_message_type(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ServiceInfo msg_;
};

class Init_ServiceInfo_description
{
public:
  explicit Init_ServiceInfo_description(::marti_introspection_msgs::msg::ServiceInfo & msg)
  : msg_(msg)
  {}
  Init_ServiceInfo_group description(::marti_introspection_msgs::msg::ServiceInfo::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_ServiceInfo_group(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ServiceInfo msg_;
};

class Init_ServiceInfo_resolved_name
{
public:
  explicit Init_ServiceInfo_resolved_name(::marti_introspection_msgs::msg::ServiceInfo & msg)
  : msg_(msg)
  {}
  Init_ServiceInfo_description resolved_name(::marti_introspection_msgs::msg::ServiceInfo::_resolved_name_type arg)
  {
    msg_.resolved_name = std::move(arg);
    return Init_ServiceInfo_description(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ServiceInfo msg_;
};

class Init_ServiceInfo_name
{
public:
  Init_ServiceInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceInfo_resolved_name name(::marti_introspection_msgs::msg::ServiceInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ServiceInfo_resolved_name(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ServiceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_introspection_msgs::msg::ServiceInfo>()
{
  return marti_introspection_msgs::msg::builder::Init_ServiceInfo_name();
}

}  // namespace marti_introspection_msgs

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__BUILDER_HPP_
