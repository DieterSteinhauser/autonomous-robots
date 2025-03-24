// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_platform_msgs:msg/DriveFeedback.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__TRAITS_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_platform_msgs/msg/detail/drive_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clearpath_platform_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DriveFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: duty_cycle
  {
    out << "duty_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.duty_cycle, out);
    out << ", ";
  }

  // member: bridge_temperature
  {
    out << "bridge_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.bridge_temperature, out);
    out << ", ";
  }

  // member: motor_temperature
  {
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << ", ";
  }

  // member: measured_velocity
  {
    out << "measured_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.measured_velocity, out);
    out << ", ";
  }

  // member: measured_travel
  {
    out << "measured_travel: ";
    rosidl_generator_traits::value_to_yaml(msg.measured_travel, out);
    out << ", ";
  }

  // member: driver_fault
  {
    out << "driver_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: duty_cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duty_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.duty_cycle, out);
    out << "\n";
  }

  // member: bridge_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bridge_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.bridge_temperature, out);
    out << "\n";
  }

  // member: motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << "\n";
  }

  // member: measured_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.measured_velocity, out);
    out << "\n";
  }

  // member: measured_travel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_travel: ";
    rosidl_generator_traits::value_to_yaml(msg.measured_travel, out);
    out << "\n";
  }

  // member: driver_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveFeedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace clearpath_platform_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clearpath_platform_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clearpath_platform_msgs::msg::DriveFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::msg::DriveFeedback & msg)
{
  return clearpath_platform_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::msg::DriveFeedback>()
{
  return "clearpath_platform_msgs::msg::DriveFeedback";
}

template<>
inline const char * name<clearpath_platform_msgs::msg::DriveFeedback>()
{
  return "clearpath_platform_msgs/msg/DriveFeedback";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::msg::DriveFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::msg::DriveFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<clearpath_platform_msgs::msg::DriveFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__TRAITS_HPP_
