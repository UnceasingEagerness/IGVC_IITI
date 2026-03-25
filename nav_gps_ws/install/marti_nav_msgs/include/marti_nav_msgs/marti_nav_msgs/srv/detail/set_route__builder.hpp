// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__SET_ROUTE__BUILDER_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__SET_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/srv/detail/set_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRoute_Request_repeat
{
public:
  explicit Init_SetRoute_Request_repeat(::marti_nav_msgs::srv::SetRoute_Request & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::SetRoute_Request repeat(::marti_nav_msgs::srv::SetRoute_Request::_repeat_type arg)
  {
    msg_.repeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::SetRoute_Request msg_;
};

class Init_SetRoute_Request_guid
{
public:
  Init_SetRoute_Request_guid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRoute_Request_repeat guid(::marti_nav_msgs::srv::SetRoute_Request::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_SetRoute_Request_repeat(msg_);
  }

private:
  ::marti_nav_msgs::srv::SetRoute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::SetRoute_Request>()
{
  return marti_nav_msgs::srv::builder::Init_SetRoute_Request_guid();
}

}  // namespace marti_nav_msgs


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRoute_Response_message
{
public:
  explicit Init_SetRoute_Response_message(::marti_nav_msgs::srv::SetRoute_Response & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::SetRoute_Response message(::marti_nav_msgs::srv::SetRoute_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::SetRoute_Response msg_;
};

class Init_SetRoute_Response_success
{
public:
  Init_SetRoute_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRoute_Response_message success(::marti_nav_msgs::srv::SetRoute_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetRoute_Response_message(msg_);
  }

private:
  ::marti_nav_msgs::srv::SetRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::SetRoute_Response>()
{
  return marti_nav_msgs::srv::builder::Init_SetRoute_Response_success();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__SET_ROUTE__BUILDER_HPP_
