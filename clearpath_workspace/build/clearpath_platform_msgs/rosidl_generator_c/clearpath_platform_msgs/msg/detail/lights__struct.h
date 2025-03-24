// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/Lights.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'D100_LIGHTS_REAR_LEFT'.
/**
  * Dingo 1.0 (D100)
 */
enum
{
  clearpath_platform_msgs__msg__Lights__D100_LIGHTS_REAR_LEFT = 0
};

/// Constant 'D100_LIGHTS_FRONT_LEFT'.
enum
{
  clearpath_platform_msgs__msg__Lights__D100_LIGHTS_FRONT_LEFT = 1
};

/// Constant 'D100_LIGHTS_FRONT_RIGHT'.
enum
{
  clearpath_platform_msgs__msg__Lights__D100_LIGHTS_FRONT_RIGHT = 2
};

/// Constant 'D100_LIGHTS_REAR_RIGHT'.
enum
{
  clearpath_platform_msgs__msg__Lights__D100_LIGHTS_REAR_RIGHT = 3
};

/// Constant 'D150_LIGHTS_REAR_LEFT'.
/**
  * Dingo 1.5 (D150)
 */
enum
{
  clearpath_platform_msgs__msg__Lights__D150_LIGHTS_REAR_LEFT = 0
};

/// Constant 'D150_LIGHTS_FRONT_LEFT'.
enum
{
  clearpath_platform_msgs__msg__Lights__D150_LIGHTS_FRONT_LEFT = 1
};

/// Constant 'D150_LIGHTS_FRONT_RIGHT'.
enum
{
  clearpath_platform_msgs__msg__Lights__D150_LIGHTS_FRONT_RIGHT = 2
};

/// Constant 'D150_LIGHTS_REAR_RIGHT'.
enum
{
  clearpath_platform_msgs__msg__Lights__D150_LIGHTS_REAR_RIGHT = 3
};

/// Constant 'R100_LIGHTS_FRONT_PORT_UPPER'.
/**
  * Ridgeback (R100)
 */
enum
{
  clearpath_platform_msgs__msg__Lights__R100_LIGHTS_FRONT_PORT_UPPER = 0
};

/// Constant 'R100_LIGHTS_FRONT_PORT_LOWER'.
enum
{
  clearpath_platform_msgs__msg__Lights__R100_LIGHTS_FRONT_PORT_LOWER = 1
};

/// Constant 'R100_LIGHTS_FRONT_STARBOARD_UPPER'.
enum
{
  clearpath_platform_msgs__msg__Lights__R100_LIGHTS_FRONT_STARBOARD_UPPER = 2
};

/// Constant 'R100_LIGHTS_FRONT_STARBOARD_LOWER'.
enum
{
  clearpath_platform_msgs__msg__Lights__R100_LIGHTS_FRONT_STARBOARD_LOWER = 3
};

/// Constant 'R100_LIGHTS_REAR_PORT_UPPER'.
enum
{
  clearpath_platform_msgs__msg__Lights__R100_LIGHTS_REAR_PORT_UPPER = 4
};

/// Constant 'R100_LIGHTS_REAR_PORT_LOWER'.
enum
{
  clearpath_platform_msgs__msg__Lights__R100_LIGHTS_REAR_PORT_LOWER = 5
};

/// Constant 'R100_LIGHTS_REAR_STARBOARD_UPPER'.
enum
{
  clearpath_platform_msgs__msg__Lights__R100_LIGHTS_REAR_STARBOARD_UPPER = 6
};

/// Constant 'R100_LIGHTS_REAR_STARBOARD_LOWER'.
enum
{
  clearpath_platform_msgs__msg__Lights__R100_LIGHTS_REAR_STARBOARD_LOWER = 7
};

/// Constant 'W200_LIGHTS_FRONT_LEFT'.
/**
  * Warthog (W200)
 */
enum
{
  clearpath_platform_msgs__msg__Lights__W200_LIGHTS_FRONT_LEFT = 0
};

/// Constant 'W200_LIGHTS_FRONT_RIGHT'.
enum
{
  clearpath_platform_msgs__msg__Lights__W200_LIGHTS_FRONT_RIGHT = 1
};

/// Constant 'W200_LIGHTS_REAR_LEFT'.
enum
{
  clearpath_platform_msgs__msg__Lights__W200_LIGHTS_REAR_LEFT = 2
};

/// Constant 'W200_LIGHTS_REAR_RIGHT'.
enum
{
  clearpath_platform_msgs__msg__Lights__W200_LIGHTS_REAR_RIGHT = 3
};

// Include directives for member types
// Member 'lights'
#include "clearpath_platform_msgs/msg/detail/rgb__struct.h"

/// Struct defined in msg/Lights in the package clearpath_platform_msgs.
/**
  * Represents a command for the pairs of RGB body lights on a CPR robot.
 */
typedef struct clearpath_platform_msgs__msg__Lights
{
  clearpath_platform_msgs__msg__RGB__Sequence lights;
} clearpath_platform_msgs__msg__Lights;

// Struct for a sequence of clearpath_platform_msgs__msg__Lights.
typedef struct clearpath_platform_msgs__msg__Lights__Sequence
{
  clearpath_platform_msgs__msg__Lights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__Lights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__LIGHTS__STRUCT_H_
