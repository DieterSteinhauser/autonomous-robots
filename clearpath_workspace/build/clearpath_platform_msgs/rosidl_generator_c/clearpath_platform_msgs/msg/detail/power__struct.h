// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__POWER__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__POWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_APPLICABLE'.
/**
  * AC Power
 */
enum
{
  clearpath_platform_msgs__msg__Power__NOT_APPLICABLE = -1
};

/// Constant 'J100_MEASURED_BATTERY'.
/**
  * Voltage rails, in volts
  * Averaged over the message period
  * Jackal (J100)
 */
enum
{
  clearpath_platform_msgs__msg__Power__J100_MEASURED_BATTERY = 0
};

/// Constant 'J100_MEASURED_5V'.
enum
{
  clearpath_platform_msgs__msg__Power__J100_MEASURED_5V = 1
};

/// Constant 'J100_MEASURED_12V'.
enum
{
  clearpath_platform_msgs__msg__Power__J100_MEASURED_12V = 2
};

/// Constant 'D100_MEASURED_BATTERY'.
/**
  * Dingo 1.0 (D100)
 */
enum
{
  clearpath_platform_msgs__msg__Power__D100_MEASURED_BATTERY = 0
};

/// Constant 'D100_MEASURED_5V'.
enum
{
  clearpath_platform_msgs__msg__Power__D100_MEASURED_5V = 1
};

/// Constant 'D100_MEASURED_12V'.
enum
{
  clearpath_platform_msgs__msg__Power__D100_MEASURED_12V = 2
};

/// Constant 'D150_MEASURED_BATTERY'.
/**
  * Dingo 1.5 (D150)
 */
enum
{
  clearpath_platform_msgs__msg__Power__D150_MEASURED_BATTERY = 0
};

/// Constant 'D150_MEASURED_5V'.
enum
{
  clearpath_platform_msgs__msg__Power__D150_MEASURED_5V = 1
};

/// Constant 'D150_MEASURED_12V'.
enum
{
  clearpath_platform_msgs__msg__Power__D150_MEASURED_12V = 2
};

/// Constant 'W200_MEASURED_BATTERY'.
/**
  * Warthog (W200)
 */
enum
{
  clearpath_platform_msgs__msg__Power__W200_MEASURED_BATTERY = 0
};

/// Constant 'W200_MEASURED_12V'.
enum
{
  clearpath_platform_msgs__msg__Power__W200_MEASURED_12V = 1
};

/// Constant 'W200_MEASURED_24V'.
enum
{
  clearpath_platform_msgs__msg__Power__W200_MEASURED_24V = 2
};

/// Constant 'W200_MEASURED_48V'.
enum
{
  clearpath_platform_msgs__msg__Power__W200_MEASURED_48V = 3
};

/// Constant 'R100_MEASURED_BATTERY'.
/**
  * Ridgeback (R100)
 */
enum
{
  clearpath_platform_msgs__msg__Power__R100_MEASURED_BATTERY = 0
};

/// Constant 'R100_MEASURED_5V'.
enum
{
  clearpath_platform_msgs__msg__Power__R100_MEASURED_5V = 1
};

/// Constant 'R100_MEASURED_12V'.
enum
{
  clearpath_platform_msgs__msg__Power__R100_MEASURED_12V = 2
};

/// Constant 'R100_MEASURED_INVERTER'.
enum
{
  clearpath_platform_msgs__msg__Power__R100_MEASURED_INVERTER = 3
};

/// Constant 'R100_MEASURED_FRONT_AXLE'.
enum
{
  clearpath_platform_msgs__msg__Power__R100_MEASURED_FRONT_AXLE = 4
};

/// Constant 'R100_MEASURED_REAR_AXLE'.
enum
{
  clearpath_platform_msgs__msg__Power__R100_MEASURED_REAR_AXLE = 5
};

/// Constant 'R100_MEASURED_LIGHT'.
enum
{
  clearpath_platform_msgs__msg__Power__R100_MEASURED_LIGHT = 6
};

/// Constant 'A200_BATTERY_VOLTAGE'.
/**
  * Husky (A200)
 */
enum
{
  clearpath_platform_msgs__msg__Power__A200_BATTERY_VOLTAGE = 0
};

/// Constant 'A200_LEFT_DRIVER_VOLTAGE'.
enum
{
  clearpath_platform_msgs__msg__Power__A200_LEFT_DRIVER_VOLTAGE = 1
};

/// Constant 'A200_RIGHT_DRIVER_VOLTAGE'.
enum
{
  clearpath_platform_msgs__msg__Power__A200_RIGHT_DRIVER_VOLTAGE = 2
};

/// Constant 'A200_VOLTAGES_SIZE'.
enum
{
  clearpath_platform_msgs__msg__Power__A200_VOLTAGES_SIZE = 3
};

/// Constant 'J100_TOTAL_CURRENT'.
/**
  * Current senses available on platform, in amps.
  * Averaged over the message period
  * Jackal (J100)
 */
enum
{
  clearpath_platform_msgs__msg__Power__J100_TOTAL_CURRENT = 0
};

/// Constant 'J100_COMPUTER_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__J100_COMPUTER_CURRENT = 1
};

/// Constant 'J100_DRIVE_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__J100_DRIVE_CURRENT = 2
};

/// Constant 'J100_USER_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__J100_USER_CURRENT = 3
};

/// Constant 'D100_TOTAL_CURRENT'.
/**
  * Dingo 1.0 (D100)
 */
enum
{
  clearpath_platform_msgs__msg__Power__D100_TOTAL_CURRENT = 0
};

/// Constant 'D100_COMPUTER_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__D100_COMPUTER_CURRENT = 1
};

/// Constant 'D150_TOTAL_CURRENT'.
/**
  * Dingo 1.5 (D150)
 */
enum
{
  clearpath_platform_msgs__msg__Power__D150_TOTAL_CURRENT = 0
};

/// Constant 'D150_COMPUTER_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__D150_COMPUTER_CURRENT = 1
};

/// Constant 'W200_TOTAL_CURRENT'.
/**
  * Warthog (W200)
 */
enum
{
  clearpath_platform_msgs__msg__Power__W200_TOTAL_CURRENT = 0
};

/// Constant 'W200_COMPUTER_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__W200_COMPUTER_CURRENT = 1
};

/// Constant 'W200_12V_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__W200_12V_CURRENT = 2
};

/// Constant 'W200_24V_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__W200_24V_CURRENT = 3
};

/// Constant 'R100_TOTAL_CURRENT'.
/**
  * Ridgeback (R100)
 */
enum
{
  clearpath_platform_msgs__msg__Power__R100_TOTAL_CURRENT = 0
};

/// Constant 'A200_MCU_AND_USER_PORT_CURRENT'.
/**
  * Husky (A200)
 */
enum
{
  clearpath_platform_msgs__msg__Power__A200_MCU_AND_USER_PORT_CURRENT = 0
};

/// Constant 'A200_LEFT_DRIVER_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__A200_LEFT_DRIVER_CURRENT = 1
};

/// Constant 'A200_RIGHT_DRIVER_CURRENT'.
enum
{
  clearpath_platform_msgs__msg__Power__A200_RIGHT_DRIVER_CURRENT = 2
};

/// Constant 'A200_CURRENTS_SIZE'.
enum
{
  clearpath_platform_msgs__msg__Power__A200_CURRENTS_SIZE = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'measured_voltages'
// Member 'measured_currents'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Power in the package clearpath_platform_msgs.
/**
  * Robot Power readings
 */
typedef struct clearpath_platform_msgs__msg__Power
{
  std_msgs__msg__Header header;
  /// Indicates if AC power is connected.
  int8_t shore_power_connected;
  /// Indicates if battery is connected.
  int8_t battery_connected;
  /// Indicates if the 12V user power is good.
  int8_t power_12v_user_nominal;
  /// Indicates if a charger is connected.
  int8_t charger_connected;
  /// Indicates if charging is complete.
  int8_t charging_complete;
  rosidl_runtime_c__float__Sequence measured_voltages;
  rosidl_runtime_c__float__Sequence measured_currents;
} clearpath_platform_msgs__msg__Power;

// Struct for a sequence of clearpath_platform_msgs__msg__Power.
typedef struct clearpath_platform_msgs__msg__Power__Sequence
{
  clearpath_platform_msgs__msg__Power * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__Power__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__POWER__STRUCT_H_
