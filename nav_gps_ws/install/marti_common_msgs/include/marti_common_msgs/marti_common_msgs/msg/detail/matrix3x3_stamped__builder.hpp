// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_common_msgs:msg/Matrix3x3Stamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__BUILDER_HPP_
#define MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_common_msgs/msg/detail/matrix3x3_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Matrix3x3Stamped_matrix
{
public:
  explicit Init_Matrix3x3Stamped_matrix(::marti_common_msgs::msg::Matrix3x3Stamped & msg)
  : msg_(msg)
  {}
  ::marti_common_msgs::msg::Matrix3x3Stamped matrix(::marti_common_msgs::msg::Matrix3x3Stamped::_matrix_type arg)
  {
    msg_.matrix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_common_msgs::msg::Matrix3x3Stamped msg_;
};

class Init_Matrix3x3Stamped_header
{
public:
  Init_Matrix3x3Stamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Matrix3x3Stamped_matrix header(::marti_common_msgs::msg::Matrix3x3Stamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Matrix3x3Stamped_matrix(msg_);
  }

private:
  ::marti_common_msgs::msg::Matrix3x3Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_common_msgs::msg::Matrix3x3Stamped>()
{
  return marti_common_msgs::msg::builder::Init_Matrix3x3Stamped_header();
}

}  // namespace marti_common_msgs

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__MATRIX3X3_STAMPED__BUILDER_HPP_
