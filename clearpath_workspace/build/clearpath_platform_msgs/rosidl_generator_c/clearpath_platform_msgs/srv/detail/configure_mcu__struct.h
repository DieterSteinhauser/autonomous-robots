// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:srv/ConfigureMcu.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_namespace'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ConfigureMcu in the package clearpath_platform_msgs.
typedef struct clearpath_platform_msgs__srv__ConfigureMcu_Request
{
  /// ROS_DOMAIN_ID
  uint8_t domain_id;
  /// Robot namespace
  rosidl_runtime_c__String robot_namespace;
} clearpath_platform_msgs__srv__ConfigureMcu_Request;

// Struct for a sequence of clearpath_platform_msgs__srv__ConfigureMcu_Request.
typedef struct clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence
{
  clearpath_platform_msgs__srv__ConfigureMcu_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ConfigureMcu in the package clearpath_platform_msgs.
typedef struct clearpath_platform_msgs__srv__ConfigureMcu_Response
{
  /// Indicate successful update
  bool success;
  /// Error/Success message
  rosidl_runtime_c__String message;
} clearpath_platform_msgs__srv__ConfigureMcu_Response;

// Struct for a sequence of clearpath_platform_msgs__srv__ConfigureMcu_Response.
typedef struct clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence
{
  clearpath_platform_msgs__srv__ConfigureMcu_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__STRUCT_H_
