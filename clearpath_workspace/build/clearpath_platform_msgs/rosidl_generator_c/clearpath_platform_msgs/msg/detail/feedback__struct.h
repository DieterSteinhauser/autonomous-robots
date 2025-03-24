// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_

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
// Member 'drivers'
#include "clearpath_platform_msgs/msg/detail/drive_feedback__struct.h"

/// Struct defined in msg/Feedback in the package clearpath_platform_msgs.
/**
  * This message represents high-frequency feedback from the MCU,
  * as necessary to support closed-loop control and thermal monitoring.
  * Default publish frequency is 50Hz.
 */
typedef struct clearpath_platform_msgs__msg__Feedback
{
  std_msgs__msg__Header header;
  clearpath_platform_msgs__msg__DriveFeedback drivers[2];
  /// Commanded control mode, use the TYPE_ constants from jackal_msgs/Drive.
  int8_t commanded_mode;
  /// Actual control mode. This may differ from the commanded in cases where
  /// the motor enable is off, the motors are in over-current, etc.
  int8_t actual_mode;
} clearpath_platform_msgs__msg__Feedback;

// Struct for a sequence of clearpath_platform_msgs__msg__Feedback.
typedef struct clearpath_platform_msgs__msg__Feedback__Sequence
{
  clearpath_platform_msgs__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
