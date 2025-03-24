// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:msg/Fans.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__msg__Fans __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__msg__Fans __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Fans_
{
  using Type = Fans_<ContainerAllocator>;

  explicit Fans_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Fans_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _fans_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _fans_type fans;

  // setters for named parameter idiom
  Type & set__fans(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->fans = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t R100_EQUIPMENT_BAY_INTAKE =
    0u;
  static constexpr uint8_t R100_EQUIPMENT_BAY_EXHAUST =
    1u;
  static constexpr uint8_t R100_CHARGER_BAY_INTAKE =
    2u;
  static constexpr uint8_t R100_CHARGER_BAY_EXHAUST =
    3u;
  static constexpr uint8_t R100_USER_BAY_INTAKE =
    4u;
  static constexpr uint8_t R100_USER_BAY_EXHAUST =
    5u;
  static constexpr uint8_t FAN_OFF =
    0u;
  static constexpr uint8_t FAN_ON_HIGH =
    1u;
  static constexpr uint8_t FAN_ON_LOW =
    2u;

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::msg::Fans_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::msg::Fans_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::Fans_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::Fans_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::Fans_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::Fans_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::Fans_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::Fans_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::Fans_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::Fans_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__msg__Fans
    std::shared_ptr<clearpath_platform_msgs::msg::Fans_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__msg__Fans
    std::shared_ptr<clearpath_platform_msgs::msg::Fans_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fans_ & other) const
  {
    if (this->fans != other.fans) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fans_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fans_

// alias to use template instance with default allocator
using Fans =
  clearpath_platform_msgs::msg::Fans_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::R100_EQUIPMENT_BAY_INTAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::R100_EQUIPMENT_BAY_EXHAUST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::R100_CHARGER_BAY_INTAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::R100_CHARGER_BAY_EXHAUST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::R100_USER_BAY_INTAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::R100_USER_BAY_EXHAUST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::FAN_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::FAN_ON_HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Fans_<ContainerAllocator>::FAN_ON_LOW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__STRUCT_HPP_
