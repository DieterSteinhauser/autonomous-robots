// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clearpath_platform_msgs:msg/Lights.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clearpath_platform_msgs/msg/detail/lights__rosidl_typesupport_introspection_c.h"
#include "clearpath_platform_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clearpath_platform_msgs/msg/detail/lights__functions.h"
#include "clearpath_platform_msgs/msg/detail/lights__struct.h"


// Include directives for member types
// Member `lights`
#include "clearpath_platform_msgs/msg/rgb.h"
// Member `lights`
#include "clearpath_platform_msgs/msg/detail/rgb__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clearpath_platform_msgs__msg__Lights__init(message_memory);
}

void clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_fini_function(void * message_memory)
{
  clearpath_platform_msgs__msg__Lights__fini(message_memory);
}

size_t clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__size_function__Lights__lights(
  const void * untyped_member)
{
  const clearpath_platform_msgs__msg__RGB__Sequence * member =
    (const clearpath_platform_msgs__msg__RGB__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__get_const_function__Lights__lights(
  const void * untyped_member, size_t index)
{
  const clearpath_platform_msgs__msg__RGB__Sequence * member =
    (const clearpath_platform_msgs__msg__RGB__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__get_function__Lights__lights(
  void * untyped_member, size_t index)
{
  clearpath_platform_msgs__msg__RGB__Sequence * member =
    (clearpath_platform_msgs__msg__RGB__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__fetch_function__Lights__lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const clearpath_platform_msgs__msg__RGB * item =
    ((const clearpath_platform_msgs__msg__RGB *)
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__get_const_function__Lights__lights(untyped_member, index));
  clearpath_platform_msgs__msg__RGB * value =
    (clearpath_platform_msgs__msg__RGB *)(untyped_value);
  *value = *item;
}

void clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__assign_function__Lights__lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  clearpath_platform_msgs__msg__RGB * item =
    ((clearpath_platform_msgs__msg__RGB *)
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__get_function__Lights__lights(untyped_member, index));
  const clearpath_platform_msgs__msg__RGB * value =
    (const clearpath_platform_msgs__msg__RGB *)(untyped_value);
  *item = *value;
}

bool clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__resize_function__Lights__lights(
  void * untyped_member, size_t size)
{
  clearpath_platform_msgs__msg__RGB__Sequence * member =
    (clearpath_platform_msgs__msg__RGB__Sequence *)(untyped_member);
  clearpath_platform_msgs__msg__RGB__Sequence__fini(member);
  return clearpath_platform_msgs__msg__RGB__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_member_array[1] = {
  {
    "lights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__Lights, lights),  // bytes offset in struct
    NULL,  // default value
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__size_function__Lights__lights,  // size() function pointer
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__get_const_function__Lights__lights,  // get_const(index) function pointer
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__get_function__Lights__lights,  // get(index) function pointer
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__fetch_function__Lights__lights,  // fetch(index, &value) function pointer
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__assign_function__Lights__lights,  // assign(index, value) function pointer
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__resize_function__Lights__lights  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_members = {
  "clearpath_platform_msgs__msg",  // message namespace
  "Lights",  // message name
  1,  // number of fields
  sizeof(clearpath_platform_msgs__msg__Lights),
  clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_member_array,  // message members
  clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_init_function,  // function to initialize message memory (memory has to be allocated)
  clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_type_support_handle = {
  0,
  &clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clearpath_platform_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_platform_msgs, msg, Lights)() {
  clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_platform_msgs, msg, RGB)();
  if (!clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_type_support_handle.typesupport_identifier) {
    clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clearpath_platform_msgs__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
