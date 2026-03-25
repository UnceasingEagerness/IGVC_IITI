// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_perception_msgs:msg/PedestrianImageID.idl
// generated code does not contain a copyright notice

#ifndef MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__BUILDER_HPP_
#define MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_perception_msgs/msg/detail/pedestrian_image_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PedestrianImageID_image_height
{
public:
  explicit Init_PedestrianImageID_image_height(::marti_perception_msgs::msg::PedestrianImageID & msg)
  : msg_(msg)
  {}
  ::marti_perception_msgs::msg::PedestrianImageID image_height(::marti_perception_msgs::msg::PedestrianImageID::_image_height_type arg)
  {
    msg_.image_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_perception_msgs::msg::PedestrianImageID msg_;
};

class Init_PedestrianImageID_image_width
{
public:
  explicit Init_PedestrianImageID_image_width(::marti_perception_msgs::msg::PedestrianImageID & msg)
  : msg_(msg)
  {}
  Init_PedestrianImageID_image_height image_width(::marti_perception_msgs::msg::PedestrianImageID::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_PedestrianImageID_image_height(msg_);
  }

private:
  ::marti_perception_msgs::msg::PedestrianImageID msg_;
};

class Init_PedestrianImageID_pixel_y
{
public:
  explicit Init_PedestrianImageID_pixel_y(::marti_perception_msgs::msg::PedestrianImageID & msg)
  : msg_(msg)
  {}
  Init_PedestrianImageID_image_width pixel_y(::marti_perception_msgs::msg::PedestrianImageID::_pixel_y_type arg)
  {
    msg_.pixel_y = std::move(arg);
    return Init_PedestrianImageID_image_width(msg_);
  }

private:
  ::marti_perception_msgs::msg::PedestrianImageID msg_;
};

class Init_PedestrianImageID_pixel_x
{
public:
  explicit Init_PedestrianImageID_pixel_x(::marti_perception_msgs::msg::PedestrianImageID & msg)
  : msg_(msg)
  {}
  Init_PedestrianImageID_pixel_y pixel_x(::marti_perception_msgs::msg::PedestrianImageID::_pixel_x_type arg)
  {
    msg_.pixel_x = std::move(arg);
    return Init_PedestrianImageID_pixel_y(msg_);
  }

private:
  ::marti_perception_msgs::msg::PedestrianImageID msg_;
};

class Init_PedestrianImageID_header
{
public:
  Init_PedestrianImageID_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PedestrianImageID_pixel_x header(::marti_perception_msgs::msg::PedestrianImageID::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PedestrianImageID_pixel_x(msg_);
  }

private:
  ::marti_perception_msgs::msg::PedestrianImageID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_perception_msgs::msg::PedestrianImageID>()
{
  return marti_perception_msgs::msg::builder::Init_PedestrianImageID_header();
}

}  // namespace marti_perception_msgs

#endif  // MARTI_PERCEPTION_MSGS__MSG__DETAIL__PEDESTRIAN_IMAGE_ID__BUILDER_HPP_
