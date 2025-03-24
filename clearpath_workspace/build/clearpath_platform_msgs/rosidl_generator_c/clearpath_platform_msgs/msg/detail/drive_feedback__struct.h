// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/DriveFeedback.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DriveFeedback in the package clearpath_platform_msgs.
/**
  * This message represents feedback data from a single drive unit (driver + motor).
 */
typedef struct clearpath_platform_msgs__msg__DriveFeedback
{
  /// Current flowing from battery into the MOSFET bridge.
  float current;
  /// Instantaneous duty cycle of MOSFET bridge.
  float duty_cycle;
  /// Temperatures measured in the MOSFET bridge and on the motor casing, in deg C.
  float bridge_temperature;
  float motor_temperature;
  /// Encoder data
  /// rad/s
  float measured_velocity;
  /// rad
  float measured_travel;
  /// True if the underlying driver chip reports a fault condition.
  bool driver_fault;
} clearpath_platform_msgs__msg__DriveFeedback;

// Struct for a sequence of clearpath_platform_msgs__msg__DriveFeedback.
typedef struct clearpath_platform_msgs__msg__DriveFeedback__Sequence
{
  clearpath_platform_msgs__msg__DriveFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__DriveFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__STRUCT_H_
