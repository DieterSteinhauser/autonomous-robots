// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_platform_msgs:msg/Lights.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/msg/detail/lights__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lights`
#include "clearpath_platform_msgs/msg/detail/rgb__functions.h"

bool
clearpath_platform_msgs__msg__Lights__init(clearpath_platform_msgs__msg__Lights * msg)
{
  if (!msg) {
    return false;
  }
  // lights
  if (!clearpath_platform_msgs__msg__RGB__Sequence__init(&msg->lights, 0)) {
    clearpath_platform_msgs__msg__Lights__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_platform_msgs__msg__Lights__fini(clearpath_platform_msgs__msg__Lights * msg)
{
  if (!msg) {
    return;
  }
  // lights
  clearpath_platform_msgs__msg__RGB__Sequence__fini(&msg->lights);
}

bool
clearpath_platform_msgs__msg__Lights__are_equal(const clearpath_platform_msgs__msg__Lights * lhs, const clearpath_platform_msgs__msg__Lights * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lights
  if (!clearpath_platform_msgs__msg__RGB__Sequence__are_equal(
      &(lhs->lights), &(rhs->lights)))
  {
    return false;
  }
  return true;
}

bool
clearpath_platform_msgs__msg__Lights__copy(
  const clearpath_platform_msgs__msg__Lights * input,
  clearpath_platform_msgs__msg__Lights * output)
{
  if (!input || !output) {
    return false;
  }
  // lights
  if (!clearpath_platform_msgs__msg__RGB__Sequence__copy(
      &(input->lights), &(output->lights)))
  {
    return false;
  }
  return true;
}

clearpath_platform_msgs__msg__Lights *
clearpath_platform_msgs__msg__Lights__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__Lights * msg = (clearpath_platform_msgs__msg__Lights *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__Lights), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_platform_msgs__msg__Lights));
  bool success = clearpath_platform_msgs__msg__Lights__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_platform_msgs__msg__Lights__destroy(clearpath_platform_msgs__msg__Lights * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_platform_msgs__msg__Lights__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_platform_msgs__msg__Lights__Sequence__init(clearpath_platform_msgs__msg__Lights__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__Lights * data = NULL;

  if (size) {
    data = (clearpath_platform_msgs__msg__Lights *)allocator.zero_allocate(size, sizeof(clearpath_platform_msgs__msg__Lights), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_platform_msgs__msg__Lights__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_platform_msgs__msg__Lights__fini(&data[i - 1]);
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
clearpath_platform_msgs__msg__Lights__Sequence__fini(clearpath_platform_msgs__msg__Lights__Sequence * array)
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
      clearpath_platform_msgs__msg__Lights__fini(&array->data[i]);
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

clearpath_platform_msgs__msg__Lights__Sequence *
clearpath_platform_msgs__msg__Lights__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__Lights__Sequence * array = (clearpath_platform_msgs__msg__Lights__Sequence *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__Lights__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_platform_msgs__msg__Lights__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_platform_msgs__msg__Lights__Sequence__destroy(clearpath_platform_msgs__msg__Lights__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_platform_msgs__msg__Lights__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_platform_msgs__msg__Lights__Sequence__are_equal(const clearpath_platform_msgs__msg__Lights__Sequence * lhs, const clearpath_platform_msgs__msg__Lights__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_platform_msgs__msg__Lights__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_platform_msgs__msg__Lights__Sequence__copy(
  const clearpath_platform_msgs__msg__Lights__Sequence * input,
  clearpath_platform_msgs__msg__Lights__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_platform_msgs__msg__Lights);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_platform_msgs__msg__Lights * data =
      (clearpath_platform_msgs__msg__Lights *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_platform_msgs__msg__Lights__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_platform_msgs__msg__Lights__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_platform_msgs__msg__Lights__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
