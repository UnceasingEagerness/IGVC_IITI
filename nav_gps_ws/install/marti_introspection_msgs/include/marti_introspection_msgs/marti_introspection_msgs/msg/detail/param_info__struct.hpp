// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marti_introspection_msgs:msg/ParamInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__STRUCT_HPP_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marti_introspection_msgs__msg__ParamInfo __attribute__((deprecated))
#else
# define DEPRECATED__marti_introspection_msgs__msg__ParamInfo __declspec(deprecated)
#endif

namespace marti_introspection_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParamInfo_
{
  using Type = ParamInfo_<ContainerAllocator>;

  explicit ParamInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->resolved_name = "";
      this->description = "";
      this->group = "";
      this->type = 0;
      this->dynamic = false;
      this->default_int = 0l;
      this->default_float = 0.0f;
      this->default_double = 0.0;
      this->default_string = "";
      this->default_bool = false;
      this->max_value = 0.0;
      this->min_value = 0.0;
    }
  }

  explicit ParamInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    resolved_name(_alloc),
    description(_alloc),
    group(_alloc),
    default_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->resolved_name = "";
      this->description = "";
      this->group = "";
      this->type = 0;
      this->dynamic = false;
      this->default_int = 0l;
      this->default_float = 0.0f;
      this->default_double = 0.0;
      this->default_string = "";
      this->default_bool = false;
      this->max_value = 0.0;
      this->min_value = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _resolved_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _resolved_name_type resolved_name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_type group;
  using _type_type =
    uint8_t;
  _type_type type;
  using _dynamic_type =
    bool;
  _dynamic_type dynamic;
  using _default_int_type =
    int32_t;
  _default_int_type default_int;
  using _default_float_type =
    float;
  _default_float_type default_float;
  using _default_double_type =
    double;
  _default_double_type default_double;
  using _default_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _default_string_type default_string;
  using _default_bool_type =
    bool;
  _default_bool_type default_bool;
  using _max_value_type =
    double;
  _max_value_type max_value;
  using _min_value_type =
    double;
  _min_value_type min_value;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__resolved_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->resolved_name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__dynamic(
    const bool & _arg)
  {
    this->dynamic = _arg;
    return *this;
  }
  Type & set__default_int(
    const int32_t & _arg)
  {
    this->default_int = _arg;
    return *this;
  }
  Type & set__default_float(
    const float & _arg)
  {
    this->default_float = _arg;
    return *this;
  }
  Type & set__default_double(
    const double & _arg)
  {
    this->default_double = _arg;
    return *this;
  }
  Type & set__default_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->default_string = _arg;
    return *this;
  }
  Type & set__default_bool(
    const bool & _arg)
  {
    this->default_bool = _arg;
    return *this;
  }
  Type & set__max_value(
    const double & _arg)
  {
    this->max_value = _arg;
    return *this;
  }
  Type & set__min_value(
    const double & _arg)
  {
    this->min_value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_XMLRPC =
    0u;
  static constexpr uint8_t TYPE_DOUBLE =
    1u;
  static constexpr uint8_t TYPE_STRING =
    2u;
  static constexpr uint8_t TYPE_INT =
    3u;
  static constexpr uint8_t TYPE_FLOAT =
    4u;
  static constexpr uint8_t TYPE_BOOL =
    5u;

  // pointer types
  using RawPtr =
    marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marti_introspection_msgs__msg__ParamInfo
    std::shared_ptr<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marti_introspection_msgs__msg__ParamInfo
    std::shared_ptr<marti_introspection_msgs::msg::ParamInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParamInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->resolved_name != other.resolved_name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->group != other.group) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->dynamic != other.dynamic) {
      return false;
    }
    if (this->default_int != other.default_int) {
      return false;
    }
    if (this->default_float != other.default_float) {
      return false;
    }
    if (this->default_double != other.default_double) {
      return false;
    }
    if (this->default_string != other.default_string) {
      return false;
    }
    if (this->default_bool != other.default_bool) {
      return false;
    }
    if (this->max_value != other.max_value) {
      return false;
    }
    if (this->min_value != other.min_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParamInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParamInfo_

// alias to use template instance with default allocator
using ParamInfo =
  marti_introspection_msgs::msg::ParamInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParamInfo_<ContainerAllocator>::TYPE_XMLRPC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParamInfo_<ContainerAllocator>::TYPE_DOUBLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParamInfo_<ContainerAllocator>::TYPE_STRING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParamInfo_<ContainerAllocator>::TYPE_INT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParamInfo_<ContainerAllocator>::TYPE_FLOAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParamInfo_<ContainerAllocator>::TYPE_BOOL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace marti_introspection_msgs

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__STRUCT_HPP_
