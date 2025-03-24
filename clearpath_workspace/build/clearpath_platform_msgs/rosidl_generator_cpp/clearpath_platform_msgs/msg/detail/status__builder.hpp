// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_mcu_temperature
{
public:
  explicit Init_Status_mcu_temperature(::clearpath_platform_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::Status mcu_temperature(::clearpath_platform_msgs::msg::Status::_mcu_temperature_type arg)
  {
    msg_.mcu_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Status msg_;
};

class Init_Status_pcb_temperature
{
public:
  explicit Init_Status_pcb_temperature(::clearpath_platform_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_mcu_temperature pcb_temperature(::clearpath_platform_msgs::msg::Status::_pcb_temperature_type arg)
  {
    msg_.pcb_temperature = std::move(arg);
    return Init_Status_mcu_temperature(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Status msg_;
};

class Init_Status_connection_uptime
{
public:
  explicit Init_Status_connection_uptime(::clearpath_platform_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_pcb_temperature connection_uptime(::clearpath_platform_msgs::msg::Status::_connection_uptime_type arg)
  {
    msg_.connection_uptime = std::move(arg);
    return Init_Status_pcb_temperature(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Status msg_;
};

class Init_Status_mcu_uptime
{
public:
  explicit Init_Status_mcu_uptime(::clearpath_platform_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_connection_uptime mcu_uptime(::clearpath_platform_msgs::msg::Status::_mcu_uptime_type arg)
  {
    msg_.mcu_uptime = std::move(arg);
    return Init_Status_connection_uptime(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Status msg_;
};

class Init_Status_firmware_version
{
public:
  explicit Init_Status_firmware_version(::clearpath_platform_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_mcu_uptime firmware_version(::clearpath_platform_msgs::msg::Status::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_Status_mcu_uptime(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Status msg_;
};

class Init_Status_hardware_id
{
public:
  explicit Init_Status_hardware_id(::clearpath_platform_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_firmware_version hardware_id(::clearpath_platform_msgs::msg::Status::_hardware_id_type arg)
  {
    msg_.hardware_id = std::move(arg);
    return Init_Status_firmware_version(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Status msg_;
};

class Init_Status_header
{
public:
  Init_Status_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_hardware_id header(::clearpath_platform_msgs::msg::Status::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Status_hardware_id(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::Status>()
{
  return clearpath_platform_msgs::msg::builder::Init_Status_header();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
