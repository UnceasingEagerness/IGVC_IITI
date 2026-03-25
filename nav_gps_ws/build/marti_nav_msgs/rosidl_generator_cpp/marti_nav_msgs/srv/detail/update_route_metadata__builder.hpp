// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:srv/UpdateRouteMetadata.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__BUILDER_HPP_
#define MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/srv/detail/update_route_metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateRouteMetadata_Request_metadata_points
{
public:
  explicit Init_UpdateRouteMetadata_Request_metadata_points(::marti_nav_msgs::srv::UpdateRouteMetadata_Request & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::UpdateRouteMetadata_Request metadata_points(::marti_nav_msgs::srv::UpdateRouteMetadata_Request::_metadata_points_type arg)
  {
    msg_.metadata_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::UpdateRouteMetadata_Request msg_;
};

class Init_UpdateRouteMetadata_Request_route_guid
{
public:
  Init_UpdateRouteMetadata_Request_route_guid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateRouteMetadata_Request_metadata_points route_guid(::marti_nav_msgs::srv::UpdateRouteMetadata_Request::_route_guid_type arg)
  {
    msg_.route_guid = std::move(arg);
    return Init_UpdateRouteMetadata_Request_metadata_points(msg_);
  }

private:
  ::marti_nav_msgs::srv::UpdateRouteMetadata_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::UpdateRouteMetadata_Request>()
{
  return marti_nav_msgs::srv::builder::Init_UpdateRouteMetadata_Request_route_guid();
}

}  // namespace marti_nav_msgs


namespace marti_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateRouteMetadata_Response_message
{
public:
  explicit Init_UpdateRouteMetadata_Response_message(::marti_nav_msgs::srv::UpdateRouteMetadata_Response & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::srv::UpdateRouteMetadata_Response message(::marti_nav_msgs::srv::UpdateRouteMetadata_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::srv::UpdateRouteMetadata_Response msg_;
};

class Init_UpdateRouteMetadata_Response_success
{
public:
  Init_UpdateRouteMetadata_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateRouteMetadata_Response_message success(::marti_nav_msgs::srv::UpdateRouteMetadata_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_UpdateRouteMetadata_Response_message(msg_);
  }

private:
  ::marti_nav_msgs::srv::UpdateRouteMetadata_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::srv::UpdateRouteMetadata_Response>()
{
  return marti_nav_msgs::srv::builder::Init_UpdateRouteMetadata_Response_success();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__SRV__DETAIL__UPDATE_ROUTE_METADATA__BUILDER_HPP_
