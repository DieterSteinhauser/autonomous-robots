// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/StopStatus.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STOP_STATUS__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STOP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/stop_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_StopStatus_needs_reset
{
public:
  explicit Init_StopStatus_needs_reset(::clearpath_platform_msgs::msg::StopStatus & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::StopStatus needs_reset(::clearpath_platform_msgs::msg::StopStatus::_needs_reset_type arg)
  {
    msg_.needs_reset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::StopStatus msg_;
};

class Init_StopStatus_external_stop_present
{
public:
  explicit Init_StopStatus_external_stop_present(::clearpath_platform_msgs::msg::StopStatus & msg)
  : msg_(msg)
  {}
  Init_StopStatus_needs_reset external_stop_present(::clearpath_platform_msgs::msg::StopStatus::_external_stop_present_type arg)
  {
    msg_.external_stop_present = std::move(arg);
    return Init_StopStatus_needs_reset(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::StopStatus msg_;
};

class Init_StopStatus_stop_power_status
{
public:
  explicit Init_StopStatus_stop_power_status(::clearpath_platform_msgs::msg::StopStatus & msg)
  : msg_(msg)
  {}
  Init_StopStatus_external_stop_present stop_power_status(::clearpath_platform_msgs::msg::StopStatus::_stop_power_status_type arg)
  {
    msg_.stop_power_status = std::move(arg);
    return Init_StopStatus_external_stop_present(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::StopStatus msg_;
};

class Init_StopStatus_header
{
public:
  Init_StopStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopStatus_stop_power_status header(::clearpath_platform_msgs::msg::StopStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StopStatus_stop_power_status(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::StopStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::StopStatus>()
{
  return clearpath_platform_msgs::msg::builder::Init_StopStatus_header();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STOP_STATUS__BUILDER_HPP_
