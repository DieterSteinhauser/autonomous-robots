// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/Fans.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'R100_EQUIPMENT_BAY_INTAKE'.
/**
  * Ridgeback (R100)
 */
enum
{
  clearpath_platform_msgs__msg__Fans__R100_EQUIPMENT_BAY_INTAKE = 0
};

/// Constant 'R100_EQUIPMENT_BAY_EXHAUST'.
enum
{
  clearpath_platform_msgs__msg__Fans__R100_EQUIPMENT_BAY_EXHAUST = 1
};

/// Constant 'R100_CHARGER_BAY_INTAKE'.
enum
{
  clearpath_platform_msgs__msg__Fans__R100_CHARGER_BAY_INTAKE = 2
};

/// Constant 'R100_CHARGER_BAY_EXHAUST'.
enum
{
  clearpath_platform_msgs__msg__Fans__R100_CHARGER_BAY_EXHAUST = 3
};

/// Constant 'R100_USER_BAY_INTAKE'.
enum
{
  clearpath_platform_msgs__msg__Fans__R100_USER_BAY_INTAKE = 4
};

/// Constant 'R100_USER_BAY_EXHAUST'.
enum
{
  clearpath_platform_msgs__msg__Fans__R100_USER_BAY_EXHAUST = 5
};

/// Constant 'FAN_OFF'.
/**
  * Possible fan states
 */
enum
{
  clearpath_platform_msgs__msg__Fans__FAN_OFF = 0
};

/// Constant 'FAN_ON_HIGH'.
enum
{
  clearpath_platform_msgs__msg__Fans__FAN_ON_HIGH = 1
};

/// Constant 'FAN_ON_LOW'.
enum
{
  clearpath_platform_msgs__msg__Fans__FAN_ON_LOW = 2
};

// Include directives for member types
// Member 'fans'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Fans in the package clearpath_platform_msgs.
/**
  * Location of fans.
 */
typedef struct clearpath_platform_msgs__msg__Fans
{
  /// Control for the fans
  rosidl_runtime_c__uint8__Sequence fans;
} clearpath_platform_msgs__msg__Fans;

// Struct for a sequence of clearpath_platform_msgs__msg__Fans.
typedef struct clearpath_platform_msgs__msg__Fans__Sequence
{
  clearpath_platform_msgs__msg__Fans * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__Fans__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FANS__STRUCT_H_
