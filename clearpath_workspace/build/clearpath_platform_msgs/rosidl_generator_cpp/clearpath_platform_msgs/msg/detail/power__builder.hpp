// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_Power_measured_currents
{
public:
  explicit Init_Power_measured_currents(::clearpath_platform_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::Power measured_currents(::clearpath_platform_msgs::msg::Power::_measured_currents_type arg)
  {
    msg_.measured_currents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Power msg_;
};

class Init_Power_measured_voltages
{
public:
  explicit Init_Power_measured_voltages(::clearpath_platform_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_measured_currents measured_voltages(::clearpath_platform_msgs::msg::Power::_measured_voltages_type arg)
  {
    msg_.measured_voltages = std::move(arg);
    return Init_Power_measured_currents(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Power msg_;
};

class Init_Power_charging_complete
{
public:
  explicit Init_Power_charging_complete(::clearpath_platform_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_measured_voltages charging_complete(::clearpath_platform_msgs::msg::Power::_charging_complete_type arg)
  {
    msg_.charging_complete = std::move(arg);
    return Init_Power_measured_voltages(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Power msg_;
};

class Init_Power_charger_connected
{
public:
  explicit Init_Power_charger_connected(::clearpath_platform_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_charging_complete charger_connected(::clearpath_platform_msgs::msg::Power::_charger_connected_type arg)
  {
    msg_.charger_connected = std::move(arg);
    return Init_Power_charging_complete(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Power msg_;
};

class Init_Power_power_12v_user_nominal
{
public:
  explicit Init_Power_power_12v_user_nominal(::clearpath_platform_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_charger_connected power_12v_user_nominal(::clearpath_platform_msgs::msg::Power::_power_12v_user_nominal_type arg)
  {
    msg_.power_12v_user_nominal = std::move(arg);
    return Init_Power_charger_connected(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Power msg_;
};

class Init_Power_battery_connected
{
public:
  explicit Init_Power_battery_connected(::clearpath_platform_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_power_12v_user_nominal battery_connected(::clearpath_platform_msgs::msg::Power::_battery_connected_type arg)
  {
    msg_.battery_connected = std::move(arg);
    return Init_Power_power_12v_user_nominal(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Power msg_;
};

class Init_Power_shore_power_connected
{
public:
  explicit Init_Power_shore_power_connected(::clearpath_platform_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_battery_connected shore_power_connected(::clearpath_platform_msgs::msg::Power::_shore_power_connected_type arg)
  {
    msg_.shore_power_connected = std::move(arg);
    return Init_Power_battery_connected(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Power msg_;
};

class Init_Power_header
{
public:
  Init_Power_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Power_shore_power_connected header(::clearpath_platform_msgs::msg::Power::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Power_shore_power_connected(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Power msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::Power>()
{
  return clearpath_platform_msgs::msg::builder::Init_Power_header();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_
