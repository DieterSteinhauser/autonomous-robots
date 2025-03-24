// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/Lights.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/lights__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_Lights_lights
{
public:
  Init_Lights_lights()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clearpath_platform_msgs::msg::Lights lights(::clearpath_platform_msgs::msg::Lights::_lights_type arg)
  {
    msg_.lights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Lights msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::Lights>()
{
  return clearpath_platform_msgs::msg::builder::Init_Lights_lights();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__BUILDER_HPP_
