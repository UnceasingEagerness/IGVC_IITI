// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swri_roscpp:msg/TestTopicServiceRequest.idl
// generated code does not contain a copyright notice

#ifndef SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__BUILDER_HPP_
#define SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swri_roscpp/msg/detail/test_topic_service_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swri_roscpp
{

namespace msg
{

namespace builder
{

class Init_TestTopicServiceRequest_request_value
{
public:
  explicit Init_TestTopicServiceRequest_request_value(::swri_roscpp::msg::TestTopicServiceRequest & msg)
  : msg_(msg)
  {}
  ::swri_roscpp::msg::TestTopicServiceRequest request_value(::swri_roscpp::msg::TestTopicServiceRequest::_request_value_type arg)
  {
    msg_.request_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swri_roscpp::msg::TestTopicServiceRequest msg_;
};

class Init_TestTopicServiceRequest_srv_header
{
public:
  Init_TestTopicServiceRequest_srv_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestTopicServiceRequest_request_value srv_header(::swri_roscpp::msg::TestTopicServiceRequest::_srv_header_type arg)
  {
    msg_.srv_header = std::move(arg);
    return Init_TestTopicServiceRequest_request_value(msg_);
  }

private:
  ::swri_roscpp::msg::TestTopicServiceRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swri_roscpp::msg::TestTopicServiceRequest>()
{
  return swri_roscpp::msg::builder::Init_TestTopicServiceRequest_srv_header();
}

}  // namespace swri_roscpp

#endif  // SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__BUILDER_HPP_
