// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_status_msgs:msg/ChronyTrackingStatus.idl
// generated code does not contain a copyright notice

#ifndef MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__BUILDER_HPP_
#define MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_status_msgs/msg/detail/chrony_tracking_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_status_msgs
{

namespace msg
{

namespace builder
{

class Init_ChronyTrackingStatus_leap_status
{
public:
  explicit Init_ChronyTrackingStatus_leap_status(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  ::marti_status_msgs::msg::ChronyTrackingStatus leap_status(::marti_status_msgs::msg::ChronyTrackingStatus::_leap_status_type arg)
  {
    msg_.leap_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_update_interval
{
public:
  explicit Init_ChronyTrackingStatus_update_interval(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_leap_status update_interval(::marti_status_msgs::msg::ChronyTrackingStatus::_update_interval_type arg)
  {
    msg_.update_interval = std::move(arg);
    return Init_ChronyTrackingStatus_leap_status(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_root_dispersion
{
public:
  explicit Init_ChronyTrackingStatus_root_dispersion(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_update_interval root_dispersion(::marti_status_msgs::msg::ChronyTrackingStatus::_root_dispersion_type arg)
  {
    msg_.root_dispersion = std::move(arg);
    return Init_ChronyTrackingStatus_update_interval(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_root_delay
{
public:
  explicit Init_ChronyTrackingStatus_root_delay(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_root_dispersion root_delay(::marti_status_msgs::msg::ChronyTrackingStatus::_root_delay_type arg)
  {
    msg_.root_delay = std::move(arg);
    return Init_ChronyTrackingStatus_root_dispersion(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_skew
{
public:
  explicit Init_ChronyTrackingStatus_skew(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_root_delay skew(::marti_status_msgs::msg::ChronyTrackingStatus::_skew_type arg)
  {
    msg_.skew = std::move(arg);
    return Init_ChronyTrackingStatus_root_delay(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_residual_frequency
{
public:
  explicit Init_ChronyTrackingStatus_residual_frequency(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_skew residual_frequency(::marti_status_msgs::msg::ChronyTrackingStatus::_residual_frequency_type arg)
  {
    msg_.residual_frequency = std::move(arg);
    return Init_ChronyTrackingStatus_skew(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_frequency_offset
{
public:
  explicit Init_ChronyTrackingStatus_frequency_offset(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_residual_frequency frequency_offset(::marti_status_msgs::msg::ChronyTrackingStatus::_frequency_offset_type arg)
  {
    msg_.frequency_offset = std::move(arg);
    return Init_ChronyTrackingStatus_residual_frequency(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_rms_offset
{
public:
  explicit Init_ChronyTrackingStatus_rms_offset(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_frequency_offset rms_offset(::marti_status_msgs::msg::ChronyTrackingStatus::_rms_offset_type arg)
  {
    msg_.rms_offset = std::move(arg);
    return Init_ChronyTrackingStatus_frequency_offset(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_last_offset
{
public:
  explicit Init_ChronyTrackingStatus_last_offset(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_rms_offset last_offset(::marti_status_msgs::msg::ChronyTrackingStatus::_last_offset_type arg)
  {
    msg_.last_offset = std::move(arg);
    return Init_ChronyTrackingStatus_rms_offset(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_system_time_offset
{
public:
  explicit Init_ChronyTrackingStatus_system_time_offset(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_last_offset system_time_offset(::marti_status_msgs::msg::ChronyTrackingStatus::_system_time_offset_type arg)
  {
    msg_.system_time_offset = std::move(arg);
    return Init_ChronyTrackingStatus_last_offset(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_stratum
{
public:
  explicit Init_ChronyTrackingStatus_stratum(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_system_time_offset stratum(::marti_status_msgs::msg::ChronyTrackingStatus::_stratum_type arg)
  {
    msg_.stratum = std::move(arg);
    return Init_ChronyTrackingStatus_system_time_offset(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_reference
{
public:
  explicit Init_ChronyTrackingStatus_reference(::marti_status_msgs::msg::ChronyTrackingStatus & msg)
  : msg_(msg)
  {}
  Init_ChronyTrackingStatus_stratum reference(::marti_status_msgs::msg::ChronyTrackingStatus::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return Init_ChronyTrackingStatus_stratum(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

class Init_ChronyTrackingStatus_header
{
public:
  Init_ChronyTrackingStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChronyTrackingStatus_reference header(::marti_status_msgs::msg::ChronyTrackingStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChronyTrackingStatus_reference(msg_);
  }

private:
  ::marti_status_msgs::msg::ChronyTrackingStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_status_msgs::msg::ChronyTrackingStatus>()
{
  return marti_status_msgs::msg::builder::Init_ChronyTrackingStatus_header();
}

}  // namespace marti_status_msgs

#endif  // MARTI_STATUS_MSGS__MSG__DETAIL__CHRONY_TRACKING_STATUS__BUILDER_HPP_
