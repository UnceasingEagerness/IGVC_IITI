// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:srv/GetRouteList.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE_LIST__BUILDER_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/srv/detail/get_route_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::GetRouteList_Request>()
{
  return ::marti_nav_msgs::srv::GetRouteList_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace marti_nav_msgs


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRouteList_Response_message
{
public:
  explicit Init_GetRouteList_Response_message(::marti_nav_msgs::srv::GetRouteList_Response & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::GetRouteList_Response message(::marti_nav_msgs::srv::GetRouteList_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::GetRouteList_Response msg_;
};

class Init_GetRouteList_Response_success
{
public:
  explicit Init_GetRouteList_Response_success(::marti_nav_msgs::srv::GetRouteList_Response & msg)
  : msg_(msg)
  {}
  Init_GetRouteList_Response_message success(::marti_nav_msgs::srv::GetRouteList_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetRouteList_Response_message(msg_);
  }

private:
  ::marti_nav_msgs::srv::GetRouteList_Response msg_;
};

class Init_GetRouteList_Response_routes
{
public:
  Init_GetRouteList_Response_routes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRouteList_Response_success routes(::marti_nav_msgs::srv::GetRouteList_Response::_routes_type arg)
  {
    msg_.routes = std::move(arg);
    return Init_GetRouteList_Response_success(msg_);
  }

private:
  ::marti_nav_msgs::srv::GetRouteList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::GetRouteList_Response>()
{
  return marti_nav_msgs::srv::builder::Init_GetRouteList_Response_routes();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__GET_ROUTE_LIST__BUILDER_HPP_
