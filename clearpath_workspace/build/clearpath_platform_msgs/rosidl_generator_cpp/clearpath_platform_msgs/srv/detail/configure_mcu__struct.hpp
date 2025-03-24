// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:srv/ConfigureMcu.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__srv__ConfigureMcu_Request __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__srv__ConfigureMcu_Request __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureMcu_Request_
{
  using Type = ConfigureMcu_Request_<ContainerAllocator>;

  explicit ConfigureMcu_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->domain_id = 0;
      this->robot_namespace = "";
    }
  }

  explicit ConfigureMcu_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_namespace(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->domain_id = 0;
      this->robot_namespace = "";
    }
  }

  // field types and members
  using _domain_id_type =
    uint8_t;
  _domain_id_type domain_id;
  using _robot_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_namespace_type robot_namespace;

  // setters for named parameter idiom
  Type & set__domain_id(
    const uint8_t & _arg)
  {
    this->domain_id = _arg;
    return *this;
  }
  Type & set__robot_namespace(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_namespace = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__srv__ConfigureMcu_Request
    std::shared_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__srv__ConfigureMcu_Request
    std::shared_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureMcu_Request_ & other) const
  {
    if (this->domain_id != other.domain_id) {
      return false;
    }
    if (this->robot_namespace != other.robot_namespace) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureMcu_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureMcu_Request_

// alias to use template instance with default allocator
using ConfigureMcu_Request =
  clearpath_platform_msgs::srv::ConfigureMcu_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace clearpath_platform_msgs


#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__srv__ConfigureMcu_Response __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__srv__ConfigureMcu_Response __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureMcu_Response_
{
  using Type = ConfigureMcu_Response_<ContainerAllocator>;

  explicit ConfigureMcu_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ConfigureMcu_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__srv__ConfigureMcu_Response
    std::shared_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__srv__ConfigureMcu_Response
    std::shared_ptr<clearpath_platform_msgs::srv::ConfigureMcu_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureMcu_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureMcu_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureMcu_Response_

// alias to use template instance with default allocator
using ConfigureMcu_Response =
  clearpath_platform_msgs::srv::ConfigureMcu_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace clearpath_platform_msgs

namespace clearpath_platform_msgs
{

namespace srv
{

struct ConfigureMcu
{
  using Request = clearpath_platform_msgs::srv::ConfigureMcu_Request;
  using Response = clearpath_platform_msgs::srv::ConfigureMcu_Response;
};

}  // namespace srv

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__STRUCT_HPP_
