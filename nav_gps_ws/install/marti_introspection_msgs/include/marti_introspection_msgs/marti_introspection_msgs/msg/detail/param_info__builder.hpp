// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_introspection_msgs:msg/ParamInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__BUILDER_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_introspection_msgs/msg/detail/param_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_introspection_msgs
{

namespace msg
{

namespace builder
{

class Init_ParamInfo_min_value
{
public:
  explicit Init_ParamInfo_min_value(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  ::marti_introspection_msgs::msg::ParamInfo min_value(::marti_introspection_msgs::msg::ParamInfo::_min_value_type arg)
  {
    msg_.min_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_max_value
{
public:
  explicit Init_ParamInfo_max_value(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_min_value max_value(::marti_introspection_msgs::msg::ParamInfo::_max_value_type arg)
  {
    msg_.max_value = std::move(arg);
    return Init_ParamInfo_min_value(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_default_bool
{
public:
  explicit Init_ParamInfo_default_bool(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_max_value default_bool(::marti_introspection_msgs::msg::ParamInfo::_default_bool_type arg)
  {
    msg_.default_bool = std::move(arg);
    return Init_ParamInfo_max_value(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_default_string
{
public:
  explicit Init_ParamInfo_default_string(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_default_bool default_string(::marti_introspection_msgs::msg::ParamInfo::_default_string_type arg)
  {
    msg_.default_string = std::move(arg);
    return Init_ParamInfo_default_bool(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_default_double
{
public:
  explicit Init_ParamInfo_default_double(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_default_string default_double(::marti_introspection_msgs::msg::ParamInfo::_default_double_type arg)
  {
    msg_.default_double = std::move(arg);
    return Init_ParamInfo_default_string(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_default_float
{
public:
  explicit Init_ParamInfo_default_float(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_default_double default_float(::marti_introspection_msgs::msg::ParamInfo::_default_float_type arg)
  {
    msg_.default_float = std::move(arg);
    return Init_ParamInfo_default_double(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_default_int
{
public:
  explicit Init_ParamInfo_default_int(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_default_float default_int(::marti_introspection_msgs::msg::ParamInfo::_default_int_type arg)
  {
    msg_.default_int = std::move(arg);
    return Init_ParamInfo_default_float(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_dynamic
{
public:
  explicit Init_ParamInfo_dynamic(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_default_int dynamic(::marti_introspection_msgs::msg::ParamInfo::_dynamic_type arg)
  {
    msg_.dynamic = std::move(arg);
    return Init_ParamInfo_default_int(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_type
{
public:
  explicit Init_ParamInfo_type(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_dynamic type(::marti_introspection_msgs::msg::ParamInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ParamInfo_dynamic(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_group
{
public:
  explicit Init_ParamInfo_group(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_type group(::marti_introspection_msgs::msg::ParamInfo::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_ParamInfo_type(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_description
{
public:
  explicit Init_ParamInfo_description(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_group description(::marti_introspection_msgs::msg::ParamInfo::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_ParamInfo_group(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_resolved_name
{
public:
  explicit Init_ParamInfo_resolved_name(::marti_introspection_msgs::msg::ParamInfo & msg)
  : msg_(msg)
  {}
  Init_ParamInfo_description resolved_name(::marti_introspection_msgs::msg::ParamInfo::_resolved_name_type arg)
  {
    msg_.resolved_name = std::move(arg);
    return Init_ParamInfo_description(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

class Init_ParamInfo_name
{
public:
  Init_ParamInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParamInfo_resolved_name name(::marti_introspection_msgs::msg::ParamInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ParamInfo_resolved_name(msg_);
  }

private:
  ::marti_introspection_msgs::msg::ParamInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_introspection_msgs::msg::ParamInfo>()
{
  return marti_introspection_msgs::msg::builder::Init_ParamInfo_name();
}

}  // namespace marti_introspection_msgs

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__BUILDER_HPP_
