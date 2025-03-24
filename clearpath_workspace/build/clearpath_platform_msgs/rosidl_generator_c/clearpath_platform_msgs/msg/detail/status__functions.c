// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_platform_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `hardware_id`
// Member `firmware_version`
#include "rosidl_runtime_c/string_functions.h"
// Member `mcu_uptime`
// Member `connection_uptime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
clearpath_platform_msgs__msg__Status__init(clearpath_platform_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    clearpath_platform_msgs__msg__Status__fini(msg);
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__init(&msg->hardware_id)) {
    clearpath_platform_msgs__msg__Status__fini(msg);
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    clearpath_platform_msgs__msg__Status__fini(msg);
    return false;
  }
  // mcu_uptime
  if (!builtin_interfaces__msg__Duration__init(&msg->mcu_uptime)) {
    clearpath_platform_msgs__msg__Status__fini(msg);
    return false;
  }
  // connection_uptime
  if (!builtin_interfaces__msg__Duration__init(&msg->connection_uptime)) {
    clearpath_platform_msgs__msg__Status__fini(msg);
    return false;
  }
  // pcb_temperature
  // mcu_temperature
  return true;
}

void
clearpath_platform_msgs__msg__Status__fini(clearpath_platform_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hardware_id
  rosidl_runtime_c__String__fini(&msg->hardware_id);
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // mcu_uptime
  builtin_interfaces__msg__Duration__fini(&msg->mcu_uptime);
  // connection_uptime
  builtin_interfaces__msg__Duration__fini(&msg->connection_uptime);
  // pcb_temperature
  // mcu_temperature
}

bool
clearpath_platform_msgs__msg__Status__are_equal(const clearpath_platform_msgs__msg__Status * lhs, const clearpath_platform_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_id), &(rhs->hardware_id)))
  {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  // mcu_uptime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->mcu_uptime), &(rhs->mcu_uptime)))
  {
    return false;
  }
  // connection_uptime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->connection_uptime), &(rhs->connection_uptime)))
  {
    return false;
  }
  // pcb_temperature
  if (lhs->pcb_temperature != rhs->pcb_temperature) {
    return false;
  }
  // mcu_temperature
  if (lhs->mcu_temperature != rhs->mcu_temperature) {
    return false;
  }
  return true;
}

bool
clearpath_platform_msgs__msg__Status__copy(
  const clearpath_platform_msgs__msg__Status * input,
  clearpath_platform_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_id), &(output->hardware_id)))
  {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  // mcu_uptime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->mcu_uptime), &(output->mcu_uptime)))
  {
    return false;
  }
  // connection_uptime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->connection_uptime), &(output->connection_uptime)))
  {
    return false;
  }
  // pcb_temperature
  output->pcb_temperature = input->pcb_temperature;
  // mcu_temperature
  output->mcu_temperature = input->mcu_temperature;
  return true;
}

clearpath_platform_msgs__msg__Status *
clearpath_platform_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__Status * msg = (clearpath_platform_msgs__msg__Status *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_platform_msgs__msg__Status));
  bool success = clearpath_platform_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_platform_msgs__msg__Status__destroy(clearpath_platform_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_platform_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_platform_msgs__msg__Status__Sequence__init(clearpath_platform_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__Status * data = NULL;

  if (size) {
    data = (clearpath_platform_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(clearpath_platform_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_platform_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_platform_msgs__msg__Status__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
clearpath_platform_msgs__msg__Status__Sequence__fini(clearpath_platform_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      clearpath_platform_msgs__msg__Status__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

clearpath_platform_msgs__msg__Status__Sequence *
clearpath_platform_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__Status__Sequence * array = (clearpath_platform_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_platform_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_platform_msgs__msg__Status__Sequence__destroy(clearpath_platform_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_platform_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_platform_msgs__msg__Status__Sequence__are_equal(const clearpath_platform_msgs__msg__Status__Sequence * lhs, const clearpath_platform_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_platform_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_platform_msgs__msg__Status__Sequence__copy(
  const clearpath_platform_msgs__msg__Status__Sequence * input,
  clearpath_platform_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_platform_msgs__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_platform_msgs__msg__Status * data =
      (clearpath_platform_msgs__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_platform_msgs__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_platform_msgs__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_platform_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
