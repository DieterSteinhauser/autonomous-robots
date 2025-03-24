// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_platform_msgs:srv/ConfigureMcu.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__TRAITS_HPP_
#define CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_platform_msgs/srv/detail/configure_mcu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clearpath_platform_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureMcu_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: domain_id
  {
    out << "domain_id: ";
    rosidl_generator_traits::value_to_yaml(msg.domain_id, out);
    out << ", ";
  }

  // member: robot_namespace
  {
    out << "robot_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_namespace, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigureMcu_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: domain_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "domain_id: ";
    rosidl_generator_traits::value_to_yaml(msg.domain_id, out);
    out << "\n";
  }

  // member: robot_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_namespace, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureMcu_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace clearpath_platform_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clearpath_platform_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clearpath_platform_msgs::srv::ConfigureMcu_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::srv::ConfigureMcu_Request & msg)
{
  return clearpath_platform_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::srv::ConfigureMcu_Request>()
{
  return "clearpath_platform_msgs::srv::ConfigureMcu_Request";
}

template<>
inline const char * name<clearpath_platform_msgs::srv::ConfigureMcu_Request>()
{
  return "clearpath_platform_msgs/srv/ConfigureMcu_Request";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::srv::ConfigureMcu_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::srv::ConfigureMcu_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_platform_msgs::srv::ConfigureMcu_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace clearpath_platform_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureMcu_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigureMcu_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureMcu_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace clearpath_platform_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clearpath_platform_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clearpath_platform_msgs::srv::ConfigureMcu_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::srv::ConfigureMcu_Response & msg)
{
  return clearpath_platform_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::srv::ConfigureMcu_Response>()
{
  return "clearpath_platform_msgs::srv::ConfigureMcu_Response";
}

template<>
inline const char * name<clearpath_platform_msgs::srv::ConfigureMcu_Response>()
{
  return "clearpath_platform_msgs/srv/ConfigureMcu_Response";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::srv::ConfigureMcu_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::srv::ConfigureMcu_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_platform_msgs::srv::ConfigureMcu_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<clearpath_platform_msgs::srv::ConfigureMcu>()
{
  return "clearpath_platform_msgs::srv::ConfigureMcu";
}

template<>
inline const char * name<clearpath_platform_msgs::srv::ConfigureMcu>()
{
  return "clearpath_platform_msgs/srv/ConfigureMcu";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::srv::ConfigureMcu>
  : std::integral_constant<
    bool,
    has_fixed_size<clearpath_platform_msgs::srv::ConfigureMcu_Request>::value &&
    has_fixed_size<clearpath_platform_msgs::srv::ConfigureMcu_Response>::value
  >
{
};

template<>
struct has_bounded_size<clearpath_platform_msgs::srv::ConfigureMcu>
  : std::integral_constant<
    bool,
    has_bounded_size<clearpath_platform_msgs::srv::ConfigureMcu_Request>::value &&
    has_bounded_size<clearpath_platform_msgs::srv::ConfigureMcu_Response>::value
  >
{
};

template<>
struct is_service<clearpath_platform_msgs::srv::ConfigureMcu>
  : std::true_type
{
};

template<>
struct is_service_request<clearpath_platform_msgs::srv::ConfigureMcu_Request>
  : std::true_type
{
};

template<>
struct is_service_response<clearpath_platform_msgs::srv::ConfigureMcu_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__TRAITS_HPP_
