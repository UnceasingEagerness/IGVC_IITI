// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__BUILDER_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/srv/detail/plan_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanRoute_Request_plan_from_vehicle
{
public:
  explicit Init_PlanRoute_Request_plan_from_vehicle(::marti_nav_msgs::srv::PlanRoute_Request & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::PlanRoute_Request plan_from_vehicle(::marti_nav_msgs::srv::PlanRoute_Request::_plan_from_vehicle_type arg)
  {
    msg_.plan_from_vehicle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::PlanRoute_Request msg_;
};

class Init_PlanRoute_Request_waypoints
{
public:
  explicit Init_PlanRoute_Request_waypoints(::marti_nav_msgs::srv::PlanRoute_Request & msg)
  : msg_(msg)
  {}
  Init_PlanRoute_Request_plan_from_vehicle waypoints(::marti_nav_msgs::srv::PlanRoute_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_PlanRoute_Request_plan_from_vehicle(msg_);
  }

private:
  ::marti_nav_msgs::srv::PlanRoute_Request msg_;
};

class Init_PlanRoute_Request_header
{
public:
  Init_PlanRoute_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanRoute_Request_waypoints header(::marti_nav_msgs::srv::PlanRoute_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanRoute_Request_waypoints(msg_);
  }

private:
  ::marti_nav_msgs::srv::PlanRoute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::PlanRoute_Request>()
{
  return marti_nav_msgs::srv::builder::Init_PlanRoute_Request_header();
}

}  // namespace marti_nav_msgs


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanRoute_Response_cost
{
public:
  explicit Init_PlanRoute_Response_cost(::marti_nav_msgs::srv::PlanRoute_Response & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::PlanRoute_Response cost(::marti_nav_msgs::srv::PlanRoute_Response::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::PlanRoute_Response msg_;
};

class Init_PlanRoute_Response_message
{
public:
  explicit Init_PlanRoute_Response_message(::marti_nav_msgs::srv::PlanRoute_Response & msg)
  : msg_(msg)
  {}
  Init_PlanRoute_Response_cost message(::marti_nav_msgs::srv::PlanRoute_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_PlanRoute_Response_cost(msg_);
  }

private:
  ::marti_nav_msgs::srv::PlanRoute_Response msg_;
};

class Init_PlanRoute_Response_success
{
public:
  explicit Init_PlanRoute_Response_success(::marti_nav_msgs::srv::PlanRoute_Response & msg)
  : msg_(msg)
  {}
  Init_PlanRoute_Response_message success(::marti_nav_msgs::srv::PlanRoute_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlanRoute_Response_message(msg_);
  }

private:
  ::marti_nav_msgs::srv::PlanRoute_Response msg_;
};

class Init_PlanRoute_Response_route
{
public:
  Init_PlanRoute_Response_route()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanRoute_Response_success route(::marti_nav_msgs::srv::PlanRoute_Response::_route_type arg)
  {
    msg_.route = std::move(arg);
    return Init_PlanRoute_Response_success(msg_);
  }

private:
  ::marti_nav_msgs::srv::PlanRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::PlanRoute_Response>()
{
  return marti_nav_msgs::srv::builder::Init_PlanRoute_Response_route();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__PLAN_ROUTE__BUILDER_HPP_
