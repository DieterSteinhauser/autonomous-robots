// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_platform_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_platform_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'mcu_uptime'
// Member 'connection_uptime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace clearpath_platform_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hardware_id
  {
    out << "hardware_id: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_id, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: mcu_uptime
  {
    out << "mcu_uptime: ";
    to_flow_style_yaml(msg.mcu_uptime, out);
    out << ", ";
  }

  // member: connection_uptime
  {
    out << "connection_uptime: ";
    to_flow_style_yaml(msg.connection_uptime, out);
    out << ", ";
  }

  // member: pcb_temperature
  {
    out << "pcb_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.pcb_temperature, out);
    out << ", ";
  }

  // member: mcu_temperature
  {
    out << "mcu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mcu_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: hardware_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_id: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_id, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: mcu_uptime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcu_uptime:\n";
    to_block_style_yaml(msg.mcu_uptime, out, indentation + 2);
  }

  // member: connection_uptime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_uptime:\n";
    to_block_style_yaml(msg.connection_uptime, out, indentation + 2);
  }

  // member: pcb_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcb_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.pcb_temperature, out);
    out << "\n";
  }

  // member: mcu_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mcu_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
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
  const clearpath_platform_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::msg::Status & msg)
{
  return clearpath_platform_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::msg::Status>()
{
  return "clearpath_platform_msgs::msg::Status";
}

template<>
inline const char * name<clearpath_platform_msgs::msg::Status>()
{
  return "clearpath_platform_msgs/msg/Status";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_platform_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
