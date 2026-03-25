// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marti_introspection_msgs:msg/ParamInfo.idl
// generated code does not contain a copyright notice

#ifndef MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__FUNCTIONS_H_
#define MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "marti_introspection_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marti_introspection_msgs/msg/detail/param_info__struct.h"

/// Initialize msg/ParamInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marti_introspection_msgs__msg__ParamInfo
 * )) before or use
 * marti_introspection_msgs__msg__ParamInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ParamInfo__init(marti_introspection_msgs__msg__ParamInfo * msg);

/// Finalize msg/ParamInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
void
marti_introspection_msgs__msg__ParamInfo__fini(marti_introspection_msgs__msg__ParamInfo * msg);

/// Create msg/ParamInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marti_introspection_msgs__msg__ParamInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
marti_introspection_msgs__msg__ParamInfo *
marti_introspection_msgs__msg__ParamInfo__create();

/// Destroy msg/ParamInfo message.
/**
 * It calls
 * marti_introspection_msgs__msg__ParamInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
void
marti_introspection_msgs__msg__ParamInfo__destroy(marti_introspection_msgs__msg__ParamInfo * msg);

/// Check for msg/ParamInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ParamInfo__are_equal(const marti_introspection_msgs__msg__ParamInfo * lhs, const marti_introspection_msgs__msg__ParamInfo * rhs);

/// Copy a msg/ParamInfo message.
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
marti_introspection_msgs__msg__ParamInfo__copy(
  const marti_introspection_msgs__msg__ParamInfo * input,
  marti_introspection_msgs__msg__ParamInfo * output);

/// Initialize array of msg/ParamInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * marti_introspection_msgs__msg__ParamInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ParamInfo__Sequence__init(marti_introspection_msgs__msg__ParamInfo__Sequence * array, size_t size);

/// Finalize array of msg/ParamInfo messages.
/**
 * It calls
 * marti_introspection_msgs__msg__ParamInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
void
marti_introspection_msgs__msg__ParamInfo__Sequence__fini(marti_introspection_msgs__msg__ParamInfo__Sequence * array);

/// Create array of msg/ParamInfo messages.
/**
 * It allocates the memory for the array and calls
 * marti_introspection_msgs__msg__ParamInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
marti_introspection_msgs__msg__ParamInfo__Sequence *
marti_introspection_msgs__msg__ParamInfo__Sequence__create(size_t size);

/// Destroy array of msg/ParamInfo messages.
/**
 * It calls
 * marti_introspection_msgs__msg__ParamInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
void
marti_introspection_msgs__msg__ParamInfo__Sequence__destroy(marti_introspection_msgs__msg__ParamInfo__Sequence * array);

/// Check for msg/ParamInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_introspection_msgs
bool
marti_introspection_msgs__msg__ParamInfo__Sequence__are_equal(const marti_introspection_msgs__msg__ParamInfo__Sequence * lhs, const marti_introspection_msgs__msg__ParamInfo__Sequence * rhs);

/// Copy an array of msg/ParamInfo messages.
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
marti_introspection_msgs__msg__ParamInfo__Sequence__copy(
  const marti_introspection_msgs__msg__ParamInfo__Sequence * input,
  marti_introspection_msgs__msg__ParamInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARTI_INTROSPECTION_MSGS__MSG__DETAIL__PARAM_INFO__FUNCTIONS_H_
