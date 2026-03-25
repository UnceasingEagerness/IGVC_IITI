// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_introspection_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_introspection_msgs/msg/detail/node_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_introspection_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeInfo_services
{
public:
  explicit Init_NodeInfo_services(::marti_introspection_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  ::marti_introspection_msgs::msg::NodeInfo services(::marti_introspection_msgs::msg::NodeInfo::_services_type arg)
  {
    msg_.services = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_introspection_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_parameters
{
public:
  explicit Init_NodeInfo_parameters(::marti_introspection_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  Init_NodeInfo_services parameters(::marti_introspection_msgs::msg::NodeInfo::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_NodeInfo_services(msg_);
  }

private:
  ::marti_introspection_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_topics
{
public:
  explicit Init_NodeInfo_topics(::marti_introspection_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  Init_NodeInfo_parameters topics(::marti_introspection_msgs::msg::NodeInfo::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return Init_NodeInfo_parameters(msg_);
  }

private:
  ::marti_introspection_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_description
{
public:
  explicit Init_NodeInfo_description(::marti_introspection_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  Init_NodeInfo_topics description(::marti_introspection_msgs::msg::NodeInfo::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_NodeInfo_topics(msg_);
  }

private:
  ::marti_introspection_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_nodelet_manager
{
public:
  explicit Init_NodeInfo_nodelet_manager(::marti_introspection_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  Init_NodeInfo_description nodelet_manager(::marti_introspection_msgs::msg::NodeInfo::_nodelet_manager_type arg)
  {
    msg_.nodelet_manager = std::move(arg);
    return Init_NodeInfo_description(msg_);
  }

private:
  ::marti_introspection_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_location
{
public:
  explicit Init_NodeInfo_location(::marti_introspection_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  Init_NodeInfo_nodelet_manager location(::marti_introspection_msgs::msg::NodeInfo::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_NodeInfo_nodelet_manager(msg_);
  }

private:
  ::marti_introspection_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_name
{
public:
  Init_NodeInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeInfo_location name(::marti_introspection_msgs::msg::NodeInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_NodeInfo_location(msg_);
  }

private:
  ::marti_introspection_msgs::msg::NodeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_introspection_msgs::msg::NodeInfo>()
{
  return marti_introspection_msgs::msg::builder::Init_NodeInfo_name();
}

}  // namespace marti_introspection_msgs

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_
