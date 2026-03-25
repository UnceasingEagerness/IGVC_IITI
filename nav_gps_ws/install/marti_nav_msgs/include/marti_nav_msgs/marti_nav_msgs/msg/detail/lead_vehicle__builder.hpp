// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/LeadVehicle.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/lead_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_LeadVehicle_type
{
public:
  explicit Init_LeadVehicle_type(::marti_nav_msgs::msg::LeadVehicle & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::LeadVehicle type(::marti_nav_msgs::msg::LeadVehicle::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::LeadVehicle msg_;
};

class Init_LeadVehicle_classification
{
public:
  explicit Init_LeadVehicle_classification(::marti_nav_msgs::msg::LeadVehicle & msg)
  : msg_(msg)
  {}
  Init_LeadVehicle_type classification(::marti_nav_msgs::msg::LeadVehicle::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_LeadVehicle_type(msg_);
  }

private:
  ::marti_nav_msgs::msg::LeadVehicle msg_;
};

class Init_LeadVehicle_y_pos
{
public:
  explicit Init_LeadVehicle_y_pos(::marti_nav_msgs::msg::LeadVehicle & msg)
  : msg_(msg)
  {}
  Init_LeadVehicle_classification y_pos(::marti_nav_msgs::msg::LeadVehicle::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return Init_LeadVehicle_classification(msg_);
  }

private:
  ::marti_nav_msgs::msg::LeadVehicle msg_;
};

class Init_LeadVehicle_x_pos
{
public:
  explicit Init_LeadVehicle_x_pos(::marti_nav_msgs::msg::LeadVehicle & msg)
  : msg_(msg)
  {}
  Init_LeadVehicle_y_pos x_pos(::marti_nav_msgs::msg::LeadVehicle::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_LeadVehicle_y_pos(msg_);
  }

private:
  ::marti_nav_msgs::msg::LeadVehicle msg_;
};

class Init_LeadVehicle_heading
{
public:
  explicit Init_LeadVehicle_heading(::marti_nav_msgs::msg::LeadVehicle & msg)
  : msg_(msg)
  {}
  Init_LeadVehicle_x_pos heading(::marti_nav_msgs::msg::LeadVehicle::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_LeadVehicle_x_pos(msg_);
  }

private:
  ::marti_nav_msgs::msg::LeadVehicle msg_;
};

class Init_LeadVehicle_speed
{
public:
  explicit Init_LeadVehicle_speed(::marti_nav_msgs::msg::LeadVehicle & msg)
  : msg_(msg)
  {}
  Init_LeadVehicle_heading speed(::marti_nav_msgs::msg::LeadVehicle::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_LeadVehicle_heading(msg_);
  }

private:
  ::marti_nav_msgs::msg::LeadVehicle msg_;
};

class Init_LeadVehicle_headway_distance
{
public:
  explicit Init_LeadVehicle_headway_distance(::marti_nav_msgs::msg::LeadVehicle & msg)
  : msg_(msg)
  {}
  Init_LeadVehicle_speed headway_distance(::marti_nav_msgs::msg::LeadVehicle::_headway_distance_type arg)
  {
    msg_.headway_distance = std::move(arg);
    return Init_LeadVehicle_speed(msg_);
  }

private:
  ::marti_nav_msgs::msg::LeadVehicle msg_;
};

class Init_LeadVehicle_header
{
public:
  Init_LeadVehicle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LeadVehicle_headway_distance header(::marti_nav_msgs::msg::LeadVehicle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LeadVehicle_headway_distance(msg_);
  }

private:
  ::marti_nav_msgs::msg::LeadVehicle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::LeadVehicle>()
{
  return marti_nav_msgs::msg::builder::Init_LeadVehicle_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__LEAD_VEHICLE__BUILDER_HPP_
