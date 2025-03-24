// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clearpath_platform_msgs:msg/Drive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clearpath_platform_msgs/msg/detail/drive__rosidl_typesupport_introspection_c.h"
#include "clearpath_platform_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clearpath_platform_msgs/msg/detail/drive__functions.h"
#include "clearpath_platform_msgs/msg/detail/drive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clearpath_platform_msgs__msg__Drive__init(message_memory);
}

void clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_fini_function(void * message_memory)
{
  clearpath_platform_msgs__msg__Drive__fini(message_memory);
}

size_t clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__size_function__Drive__drivers(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__get_const_function__Drive__drivers(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__get_function__Drive__drivers(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__fetch_function__Drive__drivers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__get_const_function__Drive__drivers(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__assign_function__Drive__drivers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__get_function__Drive__drivers(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_message_member_array[2] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__Drive, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drivers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__Drive, drivers),  // bytes offset in struct
    NULL,  // default value
    clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__size_function__Drive__drivers,  // size() function pointer
    clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__get_const_function__Drive__drivers,  // get_const(index) function pointer
    clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__get_function__Drive__drivers,  // get(index) function pointer
    clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__fetch_function__Drive__drivers,  // fetch(index, &value) function pointer
    clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__assign_function__Drive__drivers,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_message_members = {
  "clearpath_platform_msgs__msg",  // message namespace
  "Drive",  // message name
  2,  // number of fields
  sizeof(clearpath_platform_msgs__msg__Drive),
  clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_message_member_array,  // message members
  clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_init_function,  // function to initialize message memory (memory has to be allocated)
  clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_message_type_support_handle = {
  0,
  &clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clearpath_platform_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_platform_msgs, msg, Drive)() {
  if (!clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_message_type_support_handle.typesupport_identifier) {
    clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clearpath_platform_msgs__msg__Drive__rosidl_typesupport_introspection_c__Drive_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
