// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:msg/RGB.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__msg__RGB __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__msg__RGB __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RGB_
{
  using Type = RGB_<ContainerAllocator>;

  explicit RGB_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0;
      this->green = 0;
      this->blue = 0;
    }
  }

  explicit RGB_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0;
      this->green = 0;
      this->blue = 0;
    }
  }

  // field types and members
  using _red_type =
    uint8_t;
  _red_type red;
  using _green_type =
    uint8_t;
  _green_type green;
  using _blue_type =
    uint8_t;
  _blue_type blue;

  // setters for named parameter idiom
  Type & set__red(
    const uint8_t & _arg)
  {
    this->red = _arg;
    return *this;
  }
  Type & set__green(
    const uint8_t & _arg)
  {
    this->green = _arg;
    return *this;
  }
  Type & set__blue(
    const uint8_t & _arg)
  {
    this->blue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::msg::RGB_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::msg::RGB_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::RGB_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::RGB_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::RGB_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::RGB_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::RGB_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::RGB_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::RGB_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::RGB_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__msg__RGB
    std::shared_ptr<clearpath_platform_msgs::msg::RGB_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__msg__RGB
    std::shared_ptr<clearpath_platform_msgs::msg::RGB_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RGB_ & other) const
  {
    if (this->red != other.red) {
      return false;
    }
    if (this->green != other.green) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    return true;
  }
  bool operator!=(const RGB_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RGB_

// alias to use template instance with default allocator
using RGB =
  clearpath_platform_msgs::msg::RGB_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__STRUCT_HPP_
