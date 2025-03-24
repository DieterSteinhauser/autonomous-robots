// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:msg/Lights.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lights'
#include "clearpath_platform_msgs/msg/detail/rgb__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__msg__Lights __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__msg__Lights __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lights_
{
  using Type = Lights_<ContainerAllocator>;

  explicit Lights_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Lights_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _lights_type =
    std::vector<clearpath_platform_msgs::msg::RGB_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<clearpath_platform_msgs::msg::RGB_<ContainerAllocator>>>;
  _lights_type lights;

  // setters for named parameter idiom
  Type & set__lights(
    const std::vector<clearpath_platform_msgs::msg::RGB_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<clearpath_platform_msgs::msg::RGB_<ContainerAllocator>>> & _arg)
  {
    this->lights = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t D100_LIGHTS_REAR_LEFT =
    0u;
  static constexpr uint8_t D100_LIGHTS_FRONT_LEFT =
    1u;
  static constexpr uint8_t D100_LIGHTS_FRONT_RIGHT =
    2u;
  static constexpr uint8_t D100_LIGHTS_REAR_RIGHT =
    3u;
  static constexpr uint8_t D150_LIGHTS_REAR_LEFT =
    0u;
  static constexpr uint8_t D150_LIGHTS_FRONT_LEFT =
    1u;
  static constexpr uint8_t D150_LIGHTS_FRONT_RIGHT =
    2u;
  static constexpr uint8_t D150_LIGHTS_REAR_RIGHT =
    3u;
  static constexpr uint8_t R100_LIGHTS_FRONT_PORT_UPPER =
    0u;
  static constexpr uint8_t R100_LIGHTS_FRONT_PORT_LOWER =
    1u;
  static constexpr uint8_t R100_LIGHTS_FRONT_STARBOARD_UPPER =
    2u;
  static constexpr uint8_t R100_LIGHTS_FRONT_STARBOARD_LOWER =
    3u;
  static constexpr uint8_t R100_LIGHTS_REAR_PORT_UPPER =
    4u;
  static constexpr uint8_t R100_LIGHTS_REAR_PORT_LOWER =
    5u;
  static constexpr uint8_t R100_LIGHTS_REAR_STARBOARD_UPPER =
    6u;
  static constexpr uint8_t R100_LIGHTS_REAR_STARBOARD_LOWER =
    7u;
  static constexpr uint8_t W200_LIGHTS_FRONT_LEFT =
    0u;
  static constexpr uint8_t W200_LIGHTS_FRONT_RIGHT =
    1u;
  static constexpr uint8_t W200_LIGHTS_REAR_LEFT =
    2u;
  static constexpr uint8_t W200_LIGHTS_REAR_RIGHT =
    3u;

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::msg::Lights_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::msg::Lights_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::Lights_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::Lights_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::Lights_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::Lights_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::Lights_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::Lights_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::Lights_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::Lights_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__msg__Lights
    std::shared_ptr<clearpath_platform_msgs::msg::Lights_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__msg__Lights
    std::shared_ptr<clearpath_platform_msgs::msg::Lights_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lights_ & other) const
  {
    if (this->lights != other.lights) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lights_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lights_

// alias to use template instance with default allocator
using Lights =
  clearpath_platform_msgs::msg::Lights_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::D100_LIGHTS_REAR_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::D100_LIGHTS_FRONT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::D100_LIGHTS_FRONT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::D100_LIGHTS_REAR_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::D150_LIGHTS_REAR_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::D150_LIGHTS_FRONT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::D150_LIGHTS_FRONT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::D150_LIGHTS_REAR_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::R100_LIGHTS_FRONT_PORT_UPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::R100_LIGHTS_FRONT_PORT_LOWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::R100_LIGHTS_FRONT_STARBOARD_UPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::R100_LIGHTS_FRONT_STARBOARD_LOWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::R100_LIGHTS_REAR_PORT_UPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::R100_LIGHTS_REAR_PORT_LOWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::R100_LIGHTS_REAR_STARBOARD_UPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::R100_LIGHTS_REAR_STARBOARD_LOWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::W200_LIGHTS_FRONT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::W200_LIGHTS_FRONT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::W200_LIGHTS_REAR_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lights_<ContainerAllocator>::W200_LIGHTS_REAR_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__STRUCT_HPP_
