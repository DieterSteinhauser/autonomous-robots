// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:srv/ConfigureMcu.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/srv/detail/configure_mcu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace srv
{

namespace builder
{

class Init_ConfigureMcu_Request_robot_namespace
{
public:
  explicit Init_ConfigureMcu_Request_robot_namespace(::clearpath_platform_msgs::srv::ConfigureMcu_Request & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::srv::ConfigureMcu_Request robot_namespace(::clearpath_platform_msgs::srv::ConfigureMcu_Request::_robot_namespace_type arg)
  {
    msg_.robot_namespace = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::ConfigureMcu_Request msg_;
};

class Init_ConfigureMcu_Request_domain_id
{
public:
  Init_ConfigureMcu_Request_domain_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureMcu_Request_robot_namespace domain_id(::clearpath_platform_msgs::srv::ConfigureMcu_Request::_domain_id_type arg)
  {
    msg_.domain_id = std::move(arg);
    return Init_ConfigureMcu_Request_robot_namespace(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::ConfigureMcu_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::srv::ConfigureMcu_Request>()
{
  return clearpath_platform_msgs::srv::builder::Init_ConfigureMcu_Request_domain_id();
}

}  // namespace clearpath_platform_msgs


namespace clearpath_platform_msgs
{

namespace srv
{

namespace builder
{

class Init_ConfigureMcu_Response_message
{
public:
  explicit Init_ConfigureMcu_Response_message(::clearpath_platform_msgs::srv::ConfigureMcu_Response & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::srv::ConfigureMcu_Response message(::clearpath_platform_msgs::srv::ConfigureMcu_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::ConfigureMcu_Response msg_;
};

class Init_ConfigureMcu_Response_success
{
public:
  Init_ConfigureMcu_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureMcu_Response_message success(::clearpath_platform_msgs::srv::ConfigureMcu_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ConfigureMcu_Response_message(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::ConfigureMcu_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::srv::ConfigureMcu_Response>()
{
  return clearpath_platform_msgs::srv::builder::Init_ConfigureMcu_Response_success();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__BUILDER_HPP_
