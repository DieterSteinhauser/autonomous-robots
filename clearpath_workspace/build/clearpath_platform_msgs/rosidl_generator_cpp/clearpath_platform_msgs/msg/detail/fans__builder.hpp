// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/Fans.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/fans__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_Fans_fans
{
public:
  Init_Fans_fans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clearpath_platform_msgs::msg::Fans fans(::clearpath_platform_msgs::msg::Fans::_fans_type arg)
  {
    msg_.fans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Fans msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::Fans>()
{
  return clearpath_platform_msgs::msg::builder::Init_Fans_fans();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__BUILDER_HPP_
