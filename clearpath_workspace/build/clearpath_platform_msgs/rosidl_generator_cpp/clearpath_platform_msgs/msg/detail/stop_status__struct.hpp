// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:msg/StopStatus.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STOP_STATUS__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STOP_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__msg__StopStatus __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__msg__StopStatus __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopStatus_
{
  using Type = StopStatus_<ContainerAllocator>;

  explicit StopStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_power_status = false;
      this->external_stop_present = false;
      this->needs_reset = false;
    }
  }

  explicit StopStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_power_status = false;
      this->external_stop_present = false;
      this->needs_reset = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stop_power_status_type =
    bool;
  _stop_power_status_type stop_power_status;
  using _external_stop_present_type =
    bool;
  _external_stop_present_type external_stop_present;
  using _needs_reset_type =
    bool;
  _needs_reset_type needs_reset;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stop_power_status(
    const bool & _arg)
  {
    this->stop_power_status = _arg;
    return *this;
  }
  Type & set__external_stop_present(
    const bool & _arg)
  {
    this->external_stop_present = _arg;
    return *this;
  }
  Type & set__needs_reset(
    const bool & _arg)
  {
    this->needs_reset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__msg__StopStatus
    std::shared_ptr<clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__msg__StopStatus
    std::shared_ptr<clearpath_platform_msgs::msg::StopStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stop_power_status != other.stop_power_status) {
      return false;
    }
    if (this->external_stop_present != other.external_stop_present) {
      return false;
    }
    if (this->needs_reset != other.needs_reset) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopStatus_

// alias to use template instance with default allocator
using StopStatus =
  clearpath_platform_msgs::msg::StopStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STOP_STATUS__STRUCT_HPP_
