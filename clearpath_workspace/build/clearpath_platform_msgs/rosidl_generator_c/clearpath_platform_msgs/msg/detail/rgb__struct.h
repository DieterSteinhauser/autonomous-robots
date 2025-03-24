// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/RGB.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RGB in the package clearpath_platform_msgs.
/**
  * Represents the intensity of a single RGB LED, either reported or commanded.
  * Each channel is limited to a range of [0, 255]
 */
typedef struct clearpath_platform_msgs__msg__RGB
{
  uint8_t red;
  uint8_t green;
  uint8_t blue;
} clearpath_platform_msgs__msg__RGB;

// Struct for a sequence of clearpath_platform_msgs__msg__RGB.
typedef struct clearpath_platform_msgs__msg__RGB__Sequence
{
  clearpath_platform_msgs__msg__RGB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__RGB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__RGB__STRUCT_H_
