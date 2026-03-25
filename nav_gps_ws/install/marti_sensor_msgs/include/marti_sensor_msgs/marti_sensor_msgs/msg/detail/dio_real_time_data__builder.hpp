// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_sensor_msgs:msg/DioRealTimeData.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__BUILDER_HPP_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_sensor_msgs/msg/detail/dio_real_time_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_DioRealTimeData_sample_times
{
public:
  explicit Init_DioRealTimeData_sample_times(::marti_sensor_msgs::msg::DioRealTimeData & msg)
  : msg_(msg)
  {}
  ::marti_sensor_msgs::msg::DioRealTimeData sample_times(::marti_sensor_msgs::msg::DioRealTimeData::_sample_times_type arg)
  {
    msg_.sample_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DioRealTimeData msg_;
};

class Init_DioRealTimeData_sample_states
{
public:
  explicit Init_DioRealTimeData_sample_states(::marti_sensor_msgs::msg::DioRealTimeData & msg)
  : msg_(msg)
  {}
  Init_DioRealTimeData_sample_times sample_states(::marti_sensor_msgs::msg::DioRealTimeData::_sample_states_type arg)
  {
    msg_.sample_states = std::move(arg);
    return Init_DioRealTimeData_sample_times(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DioRealTimeData msg_;
};

class Init_DioRealTimeData_latest_sample_time
{
public:
  explicit Init_DioRealTimeData_latest_sample_time(::marti_sensor_msgs::msg::DioRealTimeData & msg)
  : msg_(msg)
  {}
  Init_DioRealTimeData_sample_states latest_sample_time(::marti_sensor_msgs::msg::DioRealTimeData::_latest_sample_time_type arg)
  {
    msg_.latest_sample_time = std::move(arg);
    return Init_DioRealTimeData_sample_states(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DioRealTimeData msg_;
};

class Init_DioRealTimeData_sample_frequency
{
public:
  explicit Init_DioRealTimeData_sample_frequency(::marti_sensor_msgs::msg::DioRealTimeData & msg)
  : msg_(msg)
  {}
  Init_DioRealTimeData_latest_sample_time sample_frequency(::marti_sensor_msgs::msg::DioRealTimeData::_sample_frequency_type arg)
  {
    msg_.sample_frequency = std::move(arg);
    return Init_DioRealTimeData_latest_sample_time(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DioRealTimeData msg_;
};

class Init_DioRealTimeData_header
{
public:
  Init_DioRealTimeData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DioRealTimeData_sample_frequency header(::marti_sensor_msgs::msg::DioRealTimeData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DioRealTimeData_sample_frequency(msg_);
  }

private:
  ::marti_sensor_msgs::msg::DioRealTimeData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_sensor_msgs::msg::DioRealTimeData>()
{
  return marti_sensor_msgs::msg::builder::Init_DioRealTimeData_header();
}

}  // namespace marti_sensor_msgs

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__DIO_REAL_TIME_DATA__BUILDER_HPP_
