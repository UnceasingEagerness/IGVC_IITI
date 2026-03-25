// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_nav_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_
#define MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_nav_msgs/msg/detail/tracked_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObject_active
{
public:
  explicit Init_TrackedObject_active(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  ::marti_nav_msgs::msg::TrackedObject active(::marti_nav_msgs::msg::TrackedObject::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_prediction_duration
{
public:
  explicit Init_TrackedObject_prediction_duration(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_active prediction_duration(::marti_nav_msgs::msg::TrackedObject::_prediction_duration_type arg)
  {
    msg_.prediction_duration = std::move(arg);
    return Init_TrackedObject_active(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_age_duration
{
public:
  explicit Init_TrackedObject_age_duration(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_prediction_duration age_duration(::marti_nav_msgs::msg::TrackedObject::_age_duration_type arg)
  {
    msg_.age_duration = std::move(arg);
    return Init_TrackedObject_prediction_duration(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_existence_probability
{
public:
  explicit Init_TrackedObject_existence_probability(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_age_duration existence_probability(::marti_nav_msgs::msg::TrackedObject::_existence_probability_type arg)
  {
    msg_.existence_probability = std::move(arg);
    return Init_TrackedObject_age_duration(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_classification_quality
{
public:
  explicit Init_TrackedObject_classification_quality(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_existence_probability classification_quality(::marti_nav_msgs::msg::TrackedObject::_classification_quality_type arg)
  {
    msg_.classification_quality = std::move(arg);
    return Init_TrackedObject_existence_probability(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_classification
{
public:
  explicit Init_TrackedObject_classification(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_classification_quality classification(::marti_nav_msgs::msg::TrackedObject::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_TrackedObject_classification_quality(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_width_quality
{
public:
  explicit Init_TrackedObject_width_quality(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_classification width_quality(::marti_nav_msgs::msg::TrackedObject::_width_quality_type arg)
  {
    msg_.width_quality = std::move(arg);
    return Init_TrackedObject_classification(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_width
{
public:
  explicit Init_TrackedObject_width(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_width_quality width(::marti_nav_msgs::msg::TrackedObject::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_TrackedObject_width_quality(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_length_quality
{
public:
  explicit Init_TrackedObject_length_quality(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_width length_quality(::marti_nav_msgs::msg::TrackedObject::_length_quality_type arg)
  {
    msg_.length_quality = std::move(arg);
    return Init_TrackedObject_width(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_length
{
public:
  explicit Init_TrackedObject_length(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_length_quality length(::marti_nav_msgs::msg::TrackedObject::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_TrackedObject_length_quality(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_polygon
{
public:
  explicit Init_TrackedObject_polygon(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_length polygon(::marti_nav_msgs::msg::TrackedObject::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return Init_TrackedObject_length(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_linear_acceleration_covariance
{
public:
  explicit Init_TrackedObject_linear_acceleration_covariance(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_polygon linear_acceleration_covariance(::marti_nav_msgs::msg::TrackedObject::_linear_acceleration_covariance_type arg)
  {
    msg_.linear_acceleration_covariance = std::move(arg);
    return Init_TrackedObject_polygon(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_linear_acceleration
{
public:
  explicit Init_TrackedObject_linear_acceleration(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_linear_acceleration_covariance linear_acceleration(::marti_nav_msgs::msg::TrackedObject::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_TrackedObject_linear_acceleration_covariance(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_velocity
{
public:
  explicit Init_TrackedObject_velocity(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_linear_acceleration velocity(::marti_nav_msgs::msg::TrackedObject::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrackedObject_linear_acceleration(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_pose
{
public:
  explicit Init_TrackedObject_pose(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_velocity pose(::marti_nav_msgs::msg::TrackedObject::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrackedObject_velocity(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_id
{
public:
  explicit Init_TrackedObject_id(::marti_nav_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_pose id(::marti_nav_msgs::msg::TrackedObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrackedObject_pose(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_header
{
public:
  Init_TrackedObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObject_id header(::marti_nav_msgs::msg::TrackedObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedObject_id(msg_);
  }

private:
  ::marti_nav_msgs::msg::TrackedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_nav_msgs::msg::TrackedObject>()
{
  return marti_nav_msgs::msg::builder::Init_TrackedObject_header();
}

}  // namespace marti_nav_msgs

#endif  // MARTI_NAV_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_
