// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_platform_msgs:msg/Fans.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__TRAITS_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_platform_msgs/msg/detail/fans__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clearpath_platform_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Fans & msg,
  std::ostream & out)
{
  out << "{";
  // member: fans
  {
    if (msg.fans.size() == 0) {
      out << "fans: []";
    } else {
      out << "fans: [";
      size_t pending_items = msg.fans.size();
      for (auto item : msg.fans) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Fans & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fans.size() == 0) {
      out << "fans: []\n";
    } else {
      out << "fans:\n";
      for (auto item : msg.fans) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Fans & msg, bool use_flow_style = false)
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
  const clearpath_platform_msgs::msg::Fans & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::msg::Fans & msg)
{
  return clearpath_platform_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::msg::Fans>()
{
  return "clearpath_platform_msgs::msg::Fans";
}

template<>
inline const char * name<clearpath_platform_msgs::msg::Fans>()
{
  return "clearpath_platform_msgs/msg/Fans";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::msg::Fans>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::msg::Fans>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_platform_msgs::msg::Fans>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__TRAITS_HPP_
