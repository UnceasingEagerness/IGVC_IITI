// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice
#include "marti_visualization_msgs/msg/detail/textured_marker_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "marti_visualization_msgs/msg/detail/textured_marker_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace marti_visualization_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const marti_visualization_msgs::msg::TexturedMarker &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  marti_visualization_msgs::msg::TexturedMarker &);
size_t get_serialized_size(
  const marti_visualization_msgs::msg::TexturedMarker &,
  size_t current_alignment);
size_t
max_serialized_size_TexturedMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace marti_visualization_msgs


namespace marti_visualization_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_visualization_msgs
cdr_serialize(
  const marti_visualization_msgs::msg::TexturedMarkerArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: markers
  {
    size_t size = ros_message.markers.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      marti_visualization_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.markers[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_visualization_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  marti_visualization_msgs::msg::TexturedMarkerArray & ros_message)
{
  // Member: markers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.markers.resize(size);
    for (size_t i = 0; i < size; i++) {
      marti_visualization_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.markers[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_visualization_msgs
get_serialized_size(
  const marti_visualization_msgs::msg::TexturedMarkerArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: markers
  {
    size_t array_size = ros_message.markers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        marti_visualization_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.markers[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marti_visualization_msgs
max_serialized_size_TexturedMarkerArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: markers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        marti_visualization_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TexturedMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marti_visualization_msgs::msg::TexturedMarkerArray;
    is_plain =
      (
      offsetof(DataType, markers) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TexturedMarkerArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const marti_visualization_msgs::msg::TexturedMarkerArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TexturedMarkerArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<marti_visualization_msgs::msg::TexturedMarkerArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TexturedMarkerArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const marti_visualization_msgs::msg::TexturedMarkerArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TexturedMarkerArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TexturedMarkerArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TexturedMarkerArray__callbacks = {
  "marti_visualization_msgs::msg",
  "TexturedMarkerArray",
  _TexturedMarkerArray__cdr_serialize,
  _TexturedMarkerArray__cdr_deserialize,
  _TexturedMarkerArray__get_serialized_size,
  _TexturedMarkerArray__max_serialized_size
};

static rosidl_message_type_support_t _TexturedMarkerArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TexturedMarkerArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace marti_visualization_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_marti_visualization_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<marti_visualization_msgs::msg::TexturedMarkerArray>()
{
  return &marti_visualization_msgs::msg::typesupport_fastrtps_cpp::_TexturedMarkerArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marti_visualization_msgs, msg, TexturedMarkerArray)() {
  return &marti_visualization_msgs::msg::typesupport_fastrtps_cpp::_TexturedMarkerArray__handle;
}

#ifdef __cplusplus
}
#endif
