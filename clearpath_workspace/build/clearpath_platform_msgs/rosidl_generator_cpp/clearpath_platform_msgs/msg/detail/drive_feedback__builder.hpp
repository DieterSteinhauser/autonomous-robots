// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/DriveFeedback.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/drive_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_DriveFeedback_driver_fault
{
public:
  explicit Init_DriveFeedback_driver_fault(::clearpath_platform_msgs::msg::DriveFeedback & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::DriveFeedback driver_fault(::clearpath_platform_msgs::msg::DriveFeedback::_driver_fault_type arg)
  {
    msg_.driver_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DriveFeedback msg_;
};

class Init_DriveFeedback_measured_travel
{
public:
  explicit Init_DriveFeedback_measured_travel(::clearpath_platform_msgs::msg::DriveFeedback & msg)
  : msg_(msg)
  {}
  Init_DriveFeedback_driver_fault measured_travel(::clearpath_platform_msgs::msg::DriveFeedback::_measured_travel_type arg)
  {
    msg_.measured_travel = std::move(arg);
    return Init_DriveFeedback_driver_fault(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DriveFeedback msg_;
};

class Init_DriveFeedback_measured_velocity
{
public:
  explicit Init_DriveFeedback_measured_velocity(::clearpath_platform_msgs::msg::DriveFeedback & msg)
  : msg_(msg)
  {}
  Init_DriveFeedback_measured_travel measured_velocity(::clearpath_platform_msgs::msg::DriveFeedback::_measured_velocity_type arg)
  {
    msg_.measured_velocity = std::move(arg);
    return Init_DriveFeedback_measured_travel(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DriveFeedback msg_;
};

class Init_DriveFeedback_motor_temperature
{
public:
  explicit Init_DriveFeedback_motor_temperature(::clearpath_platform_msgs::msg::DriveFeedback & msg)
  : msg_(msg)
  {}
  Init_DriveFeedback_measured_velocity motor_temperature(::clearpath_platform_msgs::msg::DriveFeedback::_motor_temperature_type arg)
  {
    msg_.motor_temperature = std::move(arg);
    return Init_DriveFeedback_measured_velocity(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DriveFeedback msg_;
};

class Init_DriveFeedback_bridge_temperature
{
public:
  explicit Init_DriveFeedback_bridge_temperature(::clearpath_platform_msgs::msg::DriveFeedback & msg)
  : msg_(msg)
  {}
  Init_DriveFeedback_motor_temperature bridge_temperature(::clearpath_platform_msgs::msg::DriveFeedback::_bridge_temperature_type arg)
  {
    msg_.bridge_temperature = std::move(arg);
    return Init_DriveFeedback_motor_temperature(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DriveFeedback msg_;
};

class Init_DriveFeedback_duty_cycle
{
public:
  explicit Init_DriveFeedback_duty_cycle(::clearpath_platform_msgs::msg::DriveFeedback & msg)
  : msg_(msg)
  {}
  Init_DriveFeedback_bridge_temperature duty_cycle(::clearpath_platform_msgs::msg::DriveFeedback::_duty_cycle_type arg)
  {
    msg_.duty_cycle = std::move(arg);
    return Init_DriveFeedback_bridge_temperature(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DriveFeedback msg_;
};

class Init_DriveFeedback_current
{
public:
  Init_DriveFeedback_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveFeedback_duty_cycle current(::clearpath_platform_msgs::msg::DriveFeedback::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_DriveFeedback_duty_cycle(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DriveFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::DriveFeedback>()
{
  return clearpath_platform_msgs::msg::builder::Init_DriveFeedback_current();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__BUILDER_HPP_
