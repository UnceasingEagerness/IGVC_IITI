// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:srv/SaveRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__BUILDER_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/srv/detail/save_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveRoute_Request_thumbnail
{
public:
  explicit Init_SaveRoute_Request_thumbnail(::marti_nav_msgs::srv::SaveRoute_Request & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::SaveRoute_Request thumbnail(::marti_nav_msgs::srv::SaveRoute_Request::_thumbnail_type arg)
  {
    msg_.thumbnail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::SaveRoute_Request msg_;
};

class Init_SaveRoute_Request_route
{
public:
  explicit Init_SaveRoute_Request_route(::marti_nav_msgs::srv::SaveRoute_Request & msg)
  : msg_(msg)
  {}
  Init_SaveRoute_Request_thumbnail route(::marti_nav_msgs::srv::SaveRoute_Request::_route_type arg)
  {
    msg_.route = std::move(arg);
    return Init_SaveRoute_Request_thumbnail(msg_);
  }

private:
  ::marti_nav_msgs::srv::SaveRoute_Request msg_;
};

class Init_SaveRoute_Request_guid
{
public:
  explicit Init_SaveRoute_Request_guid(::marti_nav_msgs::srv::SaveRoute_Request & msg)
  : msg_(msg)
  {}
  Init_SaveRoute_Request_route guid(::marti_nav_msgs::srv::SaveRoute_Request::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_SaveRoute_Request_route(msg_);
  }

private:
  ::marti_nav_msgs::srv::SaveRoute_Request msg_;
};

class Init_SaveRoute_Request_name
{
public:
  Init_SaveRoute_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveRoute_Request_guid name(::marti_nav_msgs::srv::SaveRoute_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SaveRoute_Request_guid(msg_);
  }

private:
  ::marti_nav_msgs::srv::SaveRoute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::SaveRoute_Request>()
{
  return marti_nav_msgs::srv::builder::Init_SaveRoute_Request_name();
}

}  // namespace marti_nav_msgs


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveRoute_Response_message
{
public:
  explicit Init_SaveRoute_Response_message(::marti_nav_msgs::srv::SaveRoute_Response & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::SaveRoute_Response message(::marti_nav_msgs::srv::SaveRoute_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::SaveRoute_Response msg_;
};

class Init_SaveRoute_Response_success
{
public:
  Init_SaveRoute_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveRoute_Response_message success(::marti_nav_msgs::srv::SaveRoute_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SaveRoute_Response_message(msg_);
  }

private:
  ::marti_nav_msgs::srv::SaveRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::SaveRoute_Response>()
{
  return marti_nav_msgs::srv::builder::Init_SaveRoute_Response_success();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__SAVE_ROUTE__BUILDER_HPP_
