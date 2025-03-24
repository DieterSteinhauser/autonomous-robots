// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from clearpath_platform_msgs:srv/ConfigureMcu.idl
// generated code does not contain a copyright notice

#ifndef CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__FUNCTIONS_H_
#define CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "clearpath_platform_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "clearpath_platform_msgs/srv/detail/configure_mcu__struct.h"

/// Initialize srv/ConfigureMcu message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clearpath_platform_msgs__srv__ConfigureMcu_Request
 * )) before or use
 * clearpath_platform_msgs__srv__ConfigureMcu_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__init(clearpath_platform_msgs__srv__ConfigureMcu_Request * msg);

/// Finalize srv/ConfigureMcu message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
void
clearpath_platform_msgs__srv__ConfigureMcu_Request__fini(clearpath_platform_msgs__srv__ConfigureMcu_Request * msg);

/// Create srv/ConfigureMcu message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
clearpath_platform_msgs__srv__ConfigureMcu_Request *
clearpath_platform_msgs__srv__ConfigureMcu_Request__create();

/// Destroy srv/ConfigureMcu message.
/**
 * It calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
void
clearpath_platform_msgs__srv__ConfigureMcu_Request__destroy(clearpath_platform_msgs__srv__ConfigureMcu_Request * msg);

/// Check for srv/ConfigureMcu message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__are_equal(const clearpath_platform_msgs__srv__ConfigureMcu_Request * lhs, const clearpath_platform_msgs__srv__ConfigureMcu_Request * rhs);

/// Copy a srv/ConfigureMcu message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__copy(
  const clearpath_platform_msgs__srv__ConfigureMcu_Request * input,
  clearpath_platform_msgs__srv__ConfigureMcu_Request * output);

/// Initialize array of srv/ConfigureMcu messages.
/**
 * It allocates the memory for the number of elements and calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__init(clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * array, size_t size);

/// Finalize array of srv/ConfigureMcu messages.
/**
 * It calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
void
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__fini(clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * array);

/// Create array of srv/ConfigureMcu messages.
/**
 * It allocates the memory for the array and calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence *
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__create(size_t size);

/// Destroy array of srv/ConfigureMcu messages.
/**
 * It calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
void
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__destroy(clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * array);

/// Check for srv/ConfigureMcu message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__are_equal(const clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * lhs, const clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * rhs);

/// Copy an array of srv/ConfigureMcu messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence__copy(
  const clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * input,
  clearpath_platform_msgs__srv__ConfigureMcu_Request__Sequence * output);

/// Initialize srv/ConfigureMcu message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clearpath_platform_msgs__srv__ConfigureMcu_Response
 * )) before or use
 * clearpath_platform_msgs__srv__ConfigureMcu_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__init(clearpath_platform_msgs__srv__ConfigureMcu_Response * msg);

/// Finalize srv/ConfigureMcu message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
void
clearpath_platform_msgs__srv__ConfigureMcu_Response__fini(clearpath_platform_msgs__srv__ConfigureMcu_Response * msg);

/// Create srv/ConfigureMcu message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
clearpath_platform_msgs__srv__ConfigureMcu_Response *
clearpath_platform_msgs__srv__ConfigureMcu_Response__create();

/// Destroy srv/ConfigureMcu message.
/**
 * It calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
void
clearpath_platform_msgs__srv__ConfigureMcu_Response__destroy(clearpath_platform_msgs__srv__ConfigureMcu_Response * msg);

/// Check for srv/ConfigureMcu message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__are_equal(const clearpath_platform_msgs__srv__ConfigureMcu_Response * lhs, const clearpath_platform_msgs__srv__ConfigureMcu_Response * rhs);

/// Copy a srv/ConfigureMcu message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__copy(
  const clearpath_platform_msgs__srv__ConfigureMcu_Response * input,
  clearpath_platform_msgs__srv__ConfigureMcu_Response * output);

/// Initialize array of srv/ConfigureMcu messages.
/**
 * It allocates the memory for the number of elements and calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__init(clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * array, size_t size);

/// Finalize array of srv/ConfigureMcu messages.
/**
 * It calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
void
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__fini(clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * array);

/// Create array of srv/ConfigureMcu messages.
/**
 * It allocates the memory for the array and calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence *
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__create(size_t size);

/// Destroy array of srv/ConfigureMcu messages.
/**
 * It calls
 * clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
void
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__destroy(clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * array);

/// Check for srv/ConfigureMcu message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__are_equal(const clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * lhs, const clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * rhs);

/// Copy an array of srv/ConfigureMcu messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
bool
clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence__copy(
  const clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * input,
  clearpath_platform_msgs__srv__ConfigureMcu_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__CONFIGURE_MCU__FUNCTIONS_H_
