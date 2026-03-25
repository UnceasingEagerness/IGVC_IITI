// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_visualization_msgs:msg/TexturedMarker.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__STRUCT_HPP_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_visualization_msgs__msg__TexturedMarker __attribute__((deprecated))
#else
# define DEPRECATED__marti_visualization_msgs__msg__TexturedMarker __declspec(deprecated)
#endif

namespace marti_visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TexturedMarker_
{
  using Type = TexturedMarker_<ContainerAllocator>;

  explicit TexturedMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    lifetime(_init),
    image(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
      this->id = 0l;
      this->action = 0l;
      this->resolution = 0.0;
      this->alpha = 0.0f;
    }
  }

  explicit TexturedMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ns(_alloc),
    lifetime(_alloc, _init),
    image(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
      this->id = 0l;
      this->action = 0l;
      this->resolution = 0.0;
      this->alpha = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ns_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ns_type ns;
  using _id_type =
    int32_t;
  _id_type id;
  using _action_type =
    int32_t;
  _action_type action;
  using _lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _lifetime_type lifetime;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _resolution_type =
    double;
  _resolution_type resolution;
  using _alpha_type =
    float;
  _alpha_type alpha;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ns(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ns = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__action(
    const int32_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__resolution(
    const double & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__alpha(
    const float & _arg)
  {
    this->alpha = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ADD =
    0u;
  static constexpr uint8_t MODIFY =
    0u;
  // guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
  static constexpr uint8_t DELETE =
    2u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif

  // pointer types
  using RawPtr =
    marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_visualization_msgs__msg__TexturedMarker
    std::shared_ptr<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_visualization_msgs__msg__TexturedMarker
    std::shared_ptr<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TexturedMarker_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ns != other.ns) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->alpha != other.alpha) {
      return false;
    }
    return true;
  }
  bool operator!=(const TexturedMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TexturedMarker_

// alias to use template instance with default allocator
using TexturedMarker =
  marti_visualization_msgs::msg::TexturedMarker_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TexturedMarker_<ContainerAllocator>::ADD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TexturedMarker_<ContainerAllocator>::MODIFY;
#endif  // __cplusplus < 201703L
// guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TexturedMarker_<ContainerAllocator>::DELETE;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif

}  // namespace msg

}  // namespace marti_visualization_msgs

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER__STRUCT_HPP_
