// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swri_roscpp:msg/TestTopicServiceResponse.idl
// generated code does not contain a copyright notice

#ifndef SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__BUILDER_HPP_
#define SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swri_roscpp/msg/detail/test_topic_service_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swri_roscpp
{

namespace msg
{

namespace builder
{

class Init_TestTopicServiceResponse_response_value
{
public:
  explicit Init_TestTopicServiceResponse_response_value(::swri_roscpp::msg::TestTopicServiceResponse & msg)
  : msg_(msg)
  {}
  ::swri_roscpp::msg::TestTopicServiceResponse response_value(::swri_roscpp::msg::TestTopicServiceResponse::_response_value_type arg)
  {
    msg_.response_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swri_roscpp::msg::TestTopicServiceResponse msg_;
};

class Init_TestTopicServiceResponse_srv_header
{
public:
  Init_TestTopicServiceResponse_srv_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestTopicServiceResponse_response_value srv_header(::swri_roscpp::msg::TestTopicServiceResponse::_srv_header_type arg)
  {
    msg_.srv_header = std::move(arg);
    return Init_TestTopicServiceResponse_response_value(msg_);
  }

private:
  ::swri_roscpp::msg::TestTopicServiceResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swri_roscpp::msg::TestTopicServiceResponse>()
{
  return swri_roscpp::msg::builder::Init_TestTopicServiceResponse_srv_header();
}

}  // namespace swri_roscpp

#endif  // SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__BUILDER_HPP_
