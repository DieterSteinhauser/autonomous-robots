// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_platform_msgs:msg/DriveFeedback.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/msg/detail/drive_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
clearpath_platform_msgs__msg__DriveFeedback__init(clearpath_platform_msgs__msg__DriveFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // current
  // duty_cycle
  // bridge_temperature
  // motor_temperature
  // measured_velocity
  // measured_travel
  // driver_fault
  return true;
}

void
clearpath_platform_msgs__msg__DriveFeedback__fini(clearpath_platform_msgs__msg__DriveFeedback * msg)
{
  if (!msg) {
    return;
  }
  // current
  // duty_cycle
  // bridge_temperature
  // motor_temperature
  // measured_velocity
  // measured_travel
  // driver_fault
}

bool
clearpath_platform_msgs__msg__DriveFeedback__are_equal(const clearpath_platform_msgs__msg__DriveFeedback * lhs, const clearpath_platform_msgs__msg__DriveFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // duty_cycle
  if (lhs->duty_cycle != rhs->duty_cycle) {
    return false;
  }
  // bridge_temperature
  if (lhs->bridge_temperature != rhs->bridge_temperature) {
    return false;
  }
  // motor_temperature
  if (lhs->motor_temperature != rhs->motor_temperature) {
    return false;
  }
  // measured_velocity
  if (lhs->measured_velocity != rhs->measured_velocity) {
    return false;
  }
  // measured_travel
  if (lhs->measured_travel != rhs->measured_travel) {
    return false;
  }
  // driver_fault
  if (lhs->driver_fault != rhs->driver_fault) {
    return false;
  }
  return true;
}

bool
clearpath_platform_msgs__msg__DriveFeedback__copy(
  const clearpath_platform_msgs__msg__DriveFeedback * input,
  clearpath_platform_msgs__msg__DriveFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current
  output->current = input->current;
  // duty_cycle
  output->duty_cycle = input->duty_cycle;
  // bridge_temperature
  output->bridge_temperature = input->bridge_temperature;
  // motor_temperature
  output->motor_temperature = input->motor_temperature;
  // measured_velocity
  output->measured_velocity = input->measured_velocity;
  // measured_travel
  output->measured_travel = input->measured_travel;
  // driver_fault
  output->driver_fault = input->driver_fault;
  return true;
}

clearpath_platform_msgs__msg__DriveFeedback *
clearpath_platform_msgs__msg__DriveFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__DriveFeedback * msg = (clearpath_platform_msgs__msg__DriveFeedback *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__DriveFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_platform_msgs__msg__DriveFeedback));
  bool success = clearpath_platform_msgs__msg__DriveFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_platform_msgs__msg__DriveFeedback__destroy(clearpath_platform_msgs__msg__DriveFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_platform_msgs__msg__DriveFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_platform_msgs__msg__DriveFeedback__Sequence__init(clearpath_platform_msgs__msg__DriveFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__DriveFeedback * data = NULL;

  if (size) {
    data = (clearpath_platform_msgs__msg__DriveFeedback *)allocator.zero_allocate(size, sizeof(clearpath_platform_msgs__msg__DriveFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_platform_msgs__msg__DriveFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_platform_msgs__msg__DriveFeedback__fini(&data[i - 1]);
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
clearpath_platform_msgs__msg__DriveFeedback__Sequence__fini(clearpath_platform_msgs__msg__DriveFeedback__Sequence * array)
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
      clearpath_platform_msgs__msg__DriveFeedback__fini(&array->data[i]);
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

clearpath_platform_msgs__msg__DriveFeedback__Sequence *
clearpath_platform_msgs__msg__DriveFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__DriveFeedback__Sequence * array = (clearpath_platform_msgs__msg__DriveFeedback__Sequence *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__DriveFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_platform_msgs__msg__DriveFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_platform_msgs__msg__DriveFeedback__Sequence__destroy(clearpath_platform_msgs__msg__DriveFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_platform_msgs__msg__DriveFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_platform_msgs__msg__DriveFeedback__Sequence__are_equal(const clearpath_platform_msgs__msg__DriveFeedback__Sequence * lhs, const clearpath_platform_msgs__msg__DriveFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_platform_msgs__msg__DriveFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_platform_msgs__msg__DriveFeedback__Sequence__copy(
  const clearpath_platform_msgs__msg__DriveFeedback__Sequence * input,
  clearpath_platform_msgs__msg__DriveFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_platform_msgs__msg__DriveFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_platform_msgs__msg__DriveFeedback * data =
      (clearpath_platform_msgs__msg__DriveFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_platform_msgs__msg__DriveFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_platform_msgs__msg__DriveFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_platform_msgs__msg__DriveFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
