// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/DifferentialMeasurement.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/differential_measurement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_DifferentialMeasurement_position_covariance
{
public:
  explicit Init_DifferentialMeasurement_position_covariance(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::DifferentialMeasurement position_covariance(::marti_sensor_msgs::msg::DifferentialMeasurement::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_position
{
public:
  explicit Init_DifferentialMeasurement_position(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_position_covariance position(::marti_sensor_msgs::msg::DifferentialMeasurement::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_DifferentialMeasurement_position_covariance(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_roll_variance
{
public:
  explicit Init_DifferentialMeasurement_roll_variance(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_position roll_variance(::marti_sensor_msgs::msg::DifferentialMeasurement::_roll_variance_type arg)
  {
    msg_.roll_variance = std::move(arg);
    return Init_DifferentialMeasurement_position(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_roll
{
public:
  explicit Init_DifferentialMeasurement_roll(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_roll_variance roll(::marti_sensor_msgs::msg::DifferentialMeasurement::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_DifferentialMeasurement_roll_variance(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_pitch_variance
{
public:
  explicit Init_DifferentialMeasurement_pitch_variance(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_roll pitch_variance(::marti_sensor_msgs::msg::DifferentialMeasurement::_pitch_variance_type arg)
  {
    msg_.pitch_variance = std::move(arg);
    return Init_DifferentialMeasurement_roll(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_pitch
{
public:
  explicit Init_DifferentialMeasurement_pitch(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_pitch_variance pitch(::marti_sensor_msgs::msg::DifferentialMeasurement::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_DifferentialMeasurement_pitch_variance(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_heading_variance
{
public:
  explicit Init_DifferentialMeasurement_heading_variance(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_pitch heading_variance(::marti_sensor_msgs::msg::DifferentialMeasurement::_heading_variance_type arg)
  {
    msg_.heading_variance = std::move(arg);
    return Init_DifferentialMeasurement_pitch(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_heading
{
public:
  explicit Init_DifferentialMeasurement_heading(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_heading_variance heading(::marti_sensor_msgs::msg::DifferentialMeasurement::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_DifferentialMeasurement_heading_variance(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_baseline_length_variance
{
public:
  explicit Init_DifferentialMeasurement_baseline_length_variance(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_heading baseline_length_variance(::marti_sensor_msgs::msg::DifferentialMeasurement::_baseline_length_variance_type arg)
  {
    msg_.baseline_length_variance = std::move(arg);
    return Init_DifferentialMeasurement_heading(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_baseline_length
{
public:
  explicit Init_DifferentialMeasurement_baseline_length(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_baseline_length_variance baseline_length(::marti_sensor_msgs::msg::DifferentialMeasurement::_baseline_length_type arg)
  {
    msg_.baseline_length = std::move(arg);
    return Init_DifferentialMeasurement_baseline_length_variance(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_base_frame_id
{
public:
  explicit Init_DifferentialMeasurement_base_frame_id(::marti_sensor_msgs::msg::DifferentialMeasurement & msg)
  : msg_(msg)
  {}
  Init_DifferentialMeasurement_baseline_length base_frame_id(::marti_sensor_msgs::msg::DifferentialMeasurement::_base_frame_id_type arg)
  {
    msg_.base_frame_id = std::move(arg);
    return Init_DifferentialMeasurement_baseline_length(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

class Init_DifferentialMeasurement_header
{
public:
  Init_DifferentialMeasurement_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DifferentialMeasurement_base_frame_id header(::marti_sensor_msgs::msg::DifferentialMeasurement::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DifferentialMeasurement_base_frame_id(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DifferentialMeasurement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::DifferentialMeasurement>()
{
  return marti_sensor_msgs::msg::builder::Init_DifferentialMeasurement_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIFFERENTIAL_MEASUREMENT__BUILDER_HPP_
