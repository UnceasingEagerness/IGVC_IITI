// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swri_roscpp:msg/TestTopicServiceResponse.idl
// generated code does not contain a copyright notice

#ifndef SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__STRUCT_HPP_
#define SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'srv_header'
#include "marti_common_msgs/msg/detail/service_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swri_roscpp__msg__TestTopicServiceResponse __attribute__((deprecated))
#else
# define DEPRECATED__swri_roscpp__msg__TestTopicServiceResponse __declspec(deprecated)
#endif

namespace swri_roscpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestTopicServiceResponse_
{
  using Type = TestTopicServiceResponse_<ContainerAllocator>;

  explicit TestTopicServiceResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : srv_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_value = 0l;
    }
  }

  explicit TestTopicServiceResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : srv_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_value = 0l;
    }
  }

  // field types and members
  using _srv_header_type =
    marti_common_msgs::msg::ServiceHeader_<ContainerAllocator>;
  _srv_header_type srv_header;
  using _response_value_type =
    int32_t;
  _response_value_type response_value;

  // setters for named parameter idiom
  Type & set__srv_header(
    const marti_common_msgs::msg::ServiceHeader_<ContainerAllocator> & _arg)
  {
    this->srv_header = _arg;
    return *this;
  }
  Type & set__response_value(
    const int32_t & _arg)
  {
    this->response_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swri_roscpp__msg__TestTopicServiceResponse
    std::shared_ptr<swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swri_roscpp__msg__TestTopicServiceResponse
    std::shared_ptr<swri_roscpp::msg::TestTopicServiceResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestTopicServiceResponse_ & other) const
  {
    if (this->srv_header != other.srv_header) {
      return false;
    }
    if (this->response_value != other.response_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestTopicServiceResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestTopicServiceResponse_

// alias to use template instance with default allocator
using TestTopicServiceResponse =
  swri_roscpp::msg::TestTopicServiceResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swri_roscpp

#endif  // SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__STRUCT_HPP_
