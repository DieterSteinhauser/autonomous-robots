// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/RGB.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/rgb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_RGB_blue
{
public:
  explicit Init_RGB_blue(::clearpath_platform_msgs::msg::RGB & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::RGB blue(::clearpath_platform_msgs::msg::RGB::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::RGB msg_;
};

class Init_RGB_green
{
public:
  explicit Init_RGB_green(::clearpath_platform_msgs::msg::RGB & msg)
  : msg_(msg)
  {}
  Init_RGB_blue green(::clearpath_platform_msgs::msg::RGB::_green_type arg)
  {
    msg_.green = std::move(arg);
    return Init_RGB_blue(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::RGB msg_;
};

class Init_RGB_red
{
public:
  Init_RGB_red()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGB_green red(::clearpath_platform_msgs::msg::RGB::_red_type arg)
  {
    msg_.red = std::move(arg);
    return Init_RGB_green(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::RGB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::RGB>()
{
  return clearpath_platform_msgs::msg::builder::Init_RGB_red();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__BUILDER_HPP_
