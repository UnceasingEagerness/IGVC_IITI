// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_visualization_msgs:msg/TexturedMarker.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__BUILDER_HPP_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_visualization_msgs/msg/detail/textured_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_TexturedMarker_alpha
{
public:
  explicit Init_TexturedMarker_alpha(::marti_visualization_msgs::msg::TexturedMarker & msg)
  : msg_(msg)
  {}
  ::marti_visualization_msgs::msg::TexturedMarker alpha(::marti_visualization_msgs::msg::TexturedMarker::_alpha_type arg)
  {
    msg_.alpha = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

class Init_TexturedMarker_resolution
{
public:
  explicit Init_TexturedMarker_resolution(::marti_visualization_msgs::msg::TexturedMarker & msg)
  : msg_(msg)
  {}
  Init_TexturedMarker_alpha resolution(::marti_visualization_msgs::msg::TexturedMarker::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_TexturedMarker_alpha(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

class Init_TexturedMarker_pose
{
public:
  explicit Init_TexturedMarker_pose(::marti_visualization_msgs::msg::TexturedMarker & msg)
  : msg_(msg)
  {}
  Init_TexturedMarker_resolution pose(::marti_visualization_msgs::msg::TexturedMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TexturedMarker_resolution(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

class Init_TexturedMarker_image
{
public:
  explicit Init_TexturedMarker_image(::marti_visualization_msgs::msg::TexturedMarker & msg)
  : msg_(msg)
  {}
  Init_TexturedMarker_pose image(::marti_visualization_msgs::msg::TexturedMarker::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_TexturedMarker_pose(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

class Init_TexturedMarker_lifetime
{
public:
  explicit Init_TexturedMarker_lifetime(::marti_visualization_msgs::msg::TexturedMarker & msg)
  : msg_(msg)
  {}
  Init_TexturedMarker_image lifetime(::marti_visualization_msgs::msg::TexturedMarker::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_TexturedMarker_image(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

class Init_TexturedMarker_action
{
public:
  explicit Init_TexturedMarker_action(::marti_visualization_msgs::msg::TexturedMarker & msg)
  : msg_(msg)
  {}
  Init_TexturedMarker_lifetime action(::marti_visualization_msgs::msg::TexturedMarker::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_TexturedMarker_lifetime(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

class Init_TexturedMarker_id
{
public:
  explicit Init_TexturedMarker_id(::marti_visualization_msgs::msg::TexturedMarker & msg)
  : msg_(msg)
  {}
  Init_TexturedMarker_action id(::marti_visualization_msgs::msg::TexturedMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TexturedMarker_action(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

class Init_TexturedMarker_ns
{
public:
  explicit Init_TexturedMarker_ns(::marti_visualization_msgs::msg::TexturedMarker & msg)
  : msg_(msg)
  {}
  Init_TexturedMarker_id ns(::marti_visualization_msgs::msg::TexturedMarker::_ns_type arg)
  {
    msg_.ns = std::move(arg);
    return Init_TexturedMarker_id(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

class Init_TexturedMarker_header
{
public:
  Init_TexturedMarker_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TexturedMarker_ns header(::marti_visualization_msgs::msg::TexturedMarker::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TexturedMarker_ns(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_visualization_msgs::msg::TexturedMarker>()
{
  return marti_visualization_msgs::msg::builder::Init_TexturedMarker_header();
}

}  // namespace marti_visualization_msgs

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__BUILDER_HPP_
