// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/srv/detail/set_exposure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace srv
{

namespace builder
{

class Init_SetExposure_Request_time
{
public:
  explicit Init_SetExposure_Request_time(::marti_sensor_msgs::srv::SetExposure_Request & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::srv::SetExposure_Request time(::marti_sensor_msgs::srv::SetExposure_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::srv::SetExposure_Request msg_;
};

class Init_SetExposure_Request_auto_exposure
{
public:
  Init_SetExposure_Request_auto_exposure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetExposure_Request_time auto_exposure(::marti_sensor_msgs::srv::SetExposure_Request::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return Init_SetExposure_Request_time(msg_);
  }

private:
  ::marti_sensor_msgs::srv::SetExposure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::srv::SetExposure_Request>()
{
  return marti_sensor_msgs::srv::builder::Init_SetExposure_Request_auto_exposure();
}

}  // namespace marti_sensor_msgs


namespace marti_sensor_msgs
{

namespace srv
{

namespace builder
{

class Init_SetExposure_Response_time
{
public:
  explicit Init_SetExposure_Response_time(::marti_sensor_msgs::srv::SetExposure_Response & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::srv::SetExposure_Response time(::marti_sensor_msgs::srv::SetExposure_Response::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::srv::SetExposure_Response msg_;
};

class Init_SetExposure_Response_auto_exposure
{
public:
  Init_SetExposure_Response_auto_exposure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetExposure_Response_time auto_exposure(::marti_sensor_msgs::srv::SetExposure_Response::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return Init_SetExposure_Response_time(msg_);
  }

private:
  ::marti_sensor_msgs::srv::SetExposure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::srv::SetExposure_Response>()
{
  return marti_sensor_msgs::srv::builder::Init_SetExposure_Response_auto_exposure();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_
