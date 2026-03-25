// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__STRUCT_HPP_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'markers'
#include "marti_visualization_msgs/msg/detail/textured_marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marti_visualization_msgs__msg__TexturedMarkerArray __attribute__((deprecated))
#else
# define DEPRECATED__marti_visualization_msgs__msg__TexturedMarkerArray __declspec(deprecated)
#endif

namespace marti_visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TexturedMarkerArray_
{
  using Type = TexturedMarkerArray_<ContainerAllocator>;

  explicit TexturedMarkerArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TexturedMarkerArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _markers_type =
    std::vector<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>>>;
  _markers_type markers;

  // setters for named parameter idiom
  Type & set__markers(
    const std::vector<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_visualization_msgs::msg::TexturedMarker_<ContainerAllocator>>> & _arg)
  {
    this->markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_visualization_msgs__msg__TexturedMarkerArray
    std::shared_ptr<marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_visualization_msgs__msg__TexturedMarkerArray
    std::shared_ptr<marti_visualization_msgs::msg::TexturedMarkerArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TexturedMarkerArray_ & other) const
  {
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const TexturedMarkerArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TexturedMarkerArray_

// alias to use template instance with default allocator
using TexturedMarkerArray =
  marti_visualization_msgs::msg::TexturedMarkerArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marti_visualization_msgs

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__STRUCT_HPP_
