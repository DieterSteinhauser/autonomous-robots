// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_platform_msgs:srv/ConfigureMcu.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/srv/detail/configure_mcu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_namespace`
#include "rosidl_runtime_c/string_functions.h"

bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__init(clearpath_platform_msgs__srv__ConfigureMcu_Request * msg)
{
  if (!msg) {
    return false;
  }
  // domain_id
  // robot_namespace
  if (!rosidl_runtime_c__String__init(&msg->robot_namespace)) {
    clearpath_platform_msgs__srv__ConfigureMcu_Request__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_platform_msgs__srv__ConfigureMcu_Request__fini(clearpath_platform_msgs__srv__ConfigureMcu_Request * msg)
{
  if (!msg) {
    return;
  }
  // domain_id
  // robot_namespace
  rosidl_runtime_c__String__fini(&msg->robot_namespace);
}

bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__are_equal(const clearpath_platform_msgs__srv__ConfigureMcu_Request * lhs, const clearpath_platform_msgs__srv__ConfigureMcu_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // domain_id
  if (lhs->domain_id != rhs->domain_id) {
    return false;
  }
  // robot_namespace
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_namespace), &(rhs->robot_namespace)))
  {
    return false;
  }
  return true;
}

bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__copy(
  const clearpath_platform_msgs__srv__ConfigureMcu_Request * input,
  clearpath_platform_msgs__srv__ConfigureMcu_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // domain_id
  output->domain_id = input->domain_id;
  // robot_namespace
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_namespace), &(output->robot_namespace)))
  {
    return false;
  }
  return true;
}

clearpath_platform_msgs__srv__ConfigureMcu_Request *
clearpath_platform_msgs__srv__ConfigureMcu_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__srv__ConfigureMcu_Request * msg = (clearpath_platform_msgs__srv__ConfigureMcu_Request *)allocator.allocate(sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Request));
  bool success = clearpath_platform_msgs__srv__ConfigureMcu_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_platform_msgs__srv__ConfigureMcu_Request__destroy(clearpath_platform_msgs__srv__ConfigureMcu_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_platform_msgs__srv__ConfigureMcu_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__init(clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__srv__ConfigureMcu_Request * data = NULL;

  if (size) {
    data = (clearpath_platform_msgs__srv__ConfigureMcu_Request *)allocator.zero_allocate(size, sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_platform_msgs__srv__ConfigureMcu_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_platform_msgs__srv__ConfigureMcu_Request__fini(&data[i - 1]);
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
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__fini(clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * array)
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
      clearpath_platform_msgs__srv__ConfigureMcu_Request__fini(&array->data[i]);
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

clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence *
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * array = (clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence *)allocator.allocate(sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__destroy(clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__are_equal(const clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * lhs, const clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_platform_msgs__srv__ConfigureMcu_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__copy(
  const clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * input,
  clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_platform_msgs__srv__ConfigureMcu_Request * data =
      (clearpath_platform_msgs__srv__ConfigureMcu_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_platform_msgs__srv__ConfigureMcu_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_platform_msgs__srv__ConfigureMcu_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_platform_msgs__srv__ConfigureMcu_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__init(clearpath_platform_msgs__srv__ConfigureMcu_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    clearpath_platform_msgs__srv__ConfigureMcu_Response__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_platform_msgs__srv__ConfigureMcu_Response__fini(clearpath_platform_msgs__srv__ConfigureMcu_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__are_equal(const clearpath_platform_msgs__srv__ConfigureMcu_Response * lhs, const clearpath_platform_msgs__srv__ConfigureMcu_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__copy(
  const clearpath_platform_msgs__srv__ConfigureMcu_Response * input,
  clearpath_platform_msgs__srv__ConfigureMcu_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

clearpath_platform_msgs__srv__ConfigureMcu_Response *
clearpath_platform_msgs__srv__ConfigureMcu_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__srv__ConfigureMcu_Response * msg = (clearpath_platform_msgs__srv__ConfigureMcu_Response *)allocator.allocate(sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Response));
  bool success = clearpath_platform_msgs__srv__ConfigureMcu_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_platform_msgs__srv__ConfigureMcu_Response__destroy(clearpath_platform_msgs__srv__ConfigureMcu_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_platform_msgs__srv__ConfigureMcu_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__init(clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__srv__ConfigureMcu_Response * data = NULL;

  if (size) {
    data = (clearpath_platform_msgs__srv__ConfigureMcu_Response *)allocator.zero_allocate(size, sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_platform_msgs__srv__ConfigureMcu_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_platform_msgs__srv__ConfigureMcu_Response__fini(&data[i - 1]);
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
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__fini(clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * array)
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
      clearpath_platform_msgs__srv__ConfigureMcu_Response__fini(&array->data[i]);
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

clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence *
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * array = (clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence *)allocator.allocate(sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__destroy(clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__are_equal(const clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * lhs, const clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_platform_msgs__srv__ConfigureMcu_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__copy(
  const clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * input,
  clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_platform_msgs__srv__ConfigureMcu_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_platform_msgs__srv__ConfigureMcu_Response * data =
      (clearpath_platform_msgs__srv__ConfigureMcu_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_platform_msgs__srv__ConfigureMcu_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_platform_msgs__srv__ConfigureMcu_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_platform_msgs__srv__ConfigureMcu_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
