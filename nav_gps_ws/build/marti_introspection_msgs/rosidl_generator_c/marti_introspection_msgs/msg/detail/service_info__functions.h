// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marti_introspection_msgs:msg/ServiceInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__FUNCTIONS_H_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "marti_introspection_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marti_introspection_msgs/msg/detail/service_info__struct.h"

/// Initialize msg/ServiceInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marti_introspection_msgs__msg__ServiceInfo
 * )) before or use
 * marti_introspection_msgs__msg__ServiceInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ServiceInfo__init(marti_introspection_msgs__msg__ServiceInfo * msg);

/// Finalize msg/ServiceInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
void
marti_introspection_msgs__msg__ServiceInfo__fini(marti_introspection_msgs__msg__ServiceInfo * msg);

/// Create msg/ServiceInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marti_introspection_msgs__msg__ServiceInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
marti_introspection_msgs__msg__ServiceInfo *
marti_introspection_msgs__msg__ServiceInfo__create();

/// Destroy msg/ServiceInfo message.
/**
 * It calls
 * marti_introspection_msgs__msg__ServiceInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
void
marti_introspection_msgs__msg__ServiceInfo__destroy(marti_introspection_msgs__msg__ServiceInfo * msg);

/// Check for msg/ServiceInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ServiceInfo__are_equal(const marti_introspection_msgs__msg__ServiceInfo * lhs, const marti_introspection_msgs__msg__ServiceInfo * rhs);

/// Copy a msg/ServiceInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ServiceInfo__copy(
  const marti_introspection_msgs__msg__ServiceInfo * input,
  marti_introspection_msgs__msg__ServiceInfo * output);

/// Initialize array of msg/ServiceInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * marti_introspection_msgs__msg__ServiceInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ServiceInfo__Sequence__init(marti_introspection_msgs__msg__ServiceInfo__Sequence * array, size_t size);

/// Finalize array of msg/ServiceInfo messages.
/**
 * It calls
 * marti_introspection_msgs__msg__ServiceInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
void
marti_introspection_msgs__msg__ServiceInfo__Sequence__fini(marti_introspection_msgs__msg__ServiceInfo__Sequence * array);

/// Create array of msg/ServiceInfo messages.
/**
 * It allocates the memory for the array and calls
 * marti_introspection_msgs__msg__ServiceInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
marti_introspection_msgs__msg__ServiceInfo__Sequence *
marti_introspection_msgs__msg__ServiceInfo__Sequence__create(size_t size);

/// Destroy array of msg/ServiceInfo messages.
/**
 * It calls
 * marti_introspection_msgs__msg__ServiceInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
void
marti_introspection_msgs__msg__ServiceInfo__Sequence__destroy(marti_introspection_msgs__msg__ServiceInfo__Sequence * array);

/// Check for msg/ServiceInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ServiceInfo__Sequence__are_equal(const marti_introspection_msgs__msg__ServiceInfo__Sequence * lhs, const marti_introspection_msgs__msg__ServiceInfo__Sequence * rhs);

/// Copy an array of msg/ServiceInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ServiceInfo__Sequence__copy(
  const marti_introspection_msgs__msg__ServiceInfo__Sequence * input,
  marti_introspection_msgs__msg__ServiceInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__SERVICE_INFO__FUNCTIONS_H_
