// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'hardware_id'
// Member 'firmware_version'
#include "rosidl_runtime_c/string.h"
// Member 'mcu_uptime'
// Member 'connection_uptime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/Status in the package clearpath_platform_msgs.
/**
  * This message represents lower-frequency status updates
  * Default publish frequency is 1Hz.
 */
typedef struct clearpath_platform_msgs__msg__Status
{
  std_msgs__msg__Header header;
  /// Robot Hardware ID
  rosidl_runtime_c__String hardware_id;
  /// Firmware version
  rosidl_runtime_c__String firmware_version;
  /// Times since MCU power-on.
  builtin_interfaces__msg__Duration mcu_uptime;
  builtin_interfaces__msg__Duration connection_uptime;
  /// Temperature of MCU's PCB in Celsius.
  float pcb_temperature;
  float mcu_temperature;
} clearpath_platform_msgs__msg__Status;

// Struct for a sequence of clearpath_platform_msgs__msg__Status.
typedef struct clearpath_platform_msgs__msg__Status__Sequence
{
  clearpath_platform_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
