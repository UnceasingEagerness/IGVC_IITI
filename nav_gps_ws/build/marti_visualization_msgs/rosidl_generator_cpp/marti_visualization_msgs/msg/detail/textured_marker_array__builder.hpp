// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__BUILDER_HPP_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marti_visualization_msgs/msg/detail/textured_marker_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marti_visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_TexturedMarkerArray_markers
{
public:
  Init_TexturedMarkerArray_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::marti_visualization_msgs::msg::TexturedMarkerArray markers(::marti_visualization_msgs::msg::TexturedMarkerArray::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marti_visualization_msgs::msg::TexturedMarkerArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marti_visualization_msgs::msg::TexturedMarkerArray>()
{
  return marti_visualization_msgs::msg::builder::Init_TexturedMarkerArray_markers();
}

}  // namespace marti_visualization_msgs

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__BUILDER_HPP_
