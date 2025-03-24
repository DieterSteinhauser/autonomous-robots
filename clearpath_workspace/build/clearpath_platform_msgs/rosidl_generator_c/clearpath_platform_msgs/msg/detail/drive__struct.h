// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/Drive.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_VELOCITY'.
/**
  * Command units dependent on the value of this field
  * velocity command (rad/s of wheels)
 */
enum
{
  clearpath_platform_msgs__msg__Drive__MODE_VELOCITY = 0
};

/// Constant 'MODE_PWM'.
/**
  * proportion of full voltage command
 */
enum
{
  clearpath_platform_msgs__msg__Drive__MODE_PWM = 1
};

/// Constant 'MODE_NONE'.
/**
  * no control, commanded values ignored.
 */
enum
{
  clearpath_platform_msgs__msg__Drive__MODE_NONE = -1
};

/// Constant 'LEFT'.
/**
  * Units as above, +ve direction propels chassis forward.
 */
enum
{
  clearpath_platform_msgs__msg__Drive__LEFT = 0
};

/// Constant 'RIGHT'.
enum
{
  clearpath_platform_msgs__msg__Drive__RIGHT = 1
};

/// Struct defined in msg/Drive in the package clearpath_platform_msgs.
/**
  * This message represents a low-level motor command to Jackal.
 */
typedef struct clearpath_platform_msgs__msg__Drive
{
  int8_t mode;
  float drivers[2];
} clearpath_platform_msgs__msg__Drive;

// Struct for a sequence of clearpath_platform_msgs__msg__Drive.
typedef struct clearpath_platform_msgs__msg__Drive__Sequence
{
  clearpath_platform_msgs__msg__Drive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__Drive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE__STRUCT_H_
