// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_platform_msgs:msg/Lights.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__TRAITS_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_platform_msgs/msg/detail/lights__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lights'
#include "clearpath_platform_msgs/msg/detail/rgb__traits.hpp"

namespace clearpath_platform_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lights & msg,
  std::ostream & out)
{
  out << "{";
  // member: lights
  {
    if (msg.lights.size() == 0) {
      out << "lights: []";
    } else {
      out << "lights: [";
      size_t pending_items = msg.lights.size();
      for (auto item : msg.lights) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lights & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lights.size() == 0) {
      out << "lights: []\n";
    } else {
      out << "lights:\n";
      for (auto item : msg.lights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lights & msg, bool use_flow_style = false)
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
  const clearpath_platform_msgs::msg::Lights & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::msg::Lights & msg)
{
  return clearpath_platform_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::msg::Lights>()
{
  return "clearpath_platform_msgs::msg::Lights";
}

template<>
inline const char * name<clearpath_platform_msgs::msg::Lights>()
{
  return "clearpath_platform_msgs/msg/Lights";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::msg::Lights>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::msg::Lights>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_platform_msgs::msg::Lights>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__TRAITS_HPP_
