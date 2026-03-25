// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marti_dbw_msgs:msg/PrimaryControl.idl
// generated code does not contain a copyright notice

#ifndef MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__FUNCTIONS_H_
#define MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "marti_dbw_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marti_dbw_msgs/msg/detail/primary_control__struct.h"

/// Initialize msg/PrimaryControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marti_dbw_msgs__msg__PrimaryControl
 * )) before or use
 * marti_dbw_msgs__msg__PrimaryControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
bool
marti_dbw_msgs__msg__PrimaryControl__init(marti_dbw_msgs__msg__PrimaryControl * msg);

/// Finalize msg/PrimaryControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
void
marti_dbw_msgs__msg__PrimaryControl__fini(marti_dbw_msgs__msg__PrimaryControl * msg);

/// Create msg/PrimaryControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marti_dbw_msgs__msg__PrimaryControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
marti_dbw_msgs__msg__PrimaryControl *
marti_dbw_msgs__msg__PrimaryControl__create();

/// Destroy msg/PrimaryControl message.
/**
 * It calls
 * marti_dbw_msgs__msg__PrimaryControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
void
marti_dbw_msgs__msg__PrimaryControl__destroy(marti_dbw_msgs__msg__PrimaryControl * msg);

/// Check for msg/PrimaryControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
bool
marti_dbw_msgs__msg__PrimaryControl__are_equal(const marti_dbw_msgs__msg__PrimaryControl * lhs, const marti_dbw_msgs__msg__PrimaryControl * rhs);

/// Copy a msg/PrimaryControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
bool
marti_dbw_msgs__msg__PrimaryControl__copy(
  const marti_dbw_msgs__msg__PrimaryControl * input,
  marti_dbw_msgs__msg__PrimaryControl * output);

/// Initialize array of msg/PrimaryControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * marti_dbw_msgs__msg__PrimaryControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
bool
marti_dbw_msgs__msg__PrimaryControl__Sequence__init(marti_dbw_msgs__msg__PrimaryControl__Sequence * array, size_t size);

/// Finalize array of msg/PrimaryControl messages.
/**
 * It calls
 * marti_dbw_msgs__msg__PrimaryControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
void
marti_dbw_msgs__msg__PrimaryControl__Sequence__fini(marti_dbw_msgs__msg__PrimaryControl__Sequence * array);

/// Create array of msg/PrimaryControl messages.
/**
 * It allocates the memory for the array and calls
 * marti_dbw_msgs__msg__PrimaryControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
marti_dbw_msgs__msg__PrimaryControl__Sequence *
marti_dbw_msgs__msg__PrimaryControl__Sequence__create(size_t size);

/// Destroy array of msg/PrimaryControl messages.
/**
 * It calls
 * marti_dbw_msgs__msg__PrimaryControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
void
marti_dbw_msgs__msg__PrimaryControl__Sequence__destroy(marti_dbw_msgs__msg__PrimaryControl__Sequence * array);

/// Check for msg/PrimaryControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
bool
marti_dbw_msgs__msg__PrimaryControl__Sequence__are_equal(const marti_dbw_msgs__msg__PrimaryControl__Sequence * lhs, const marti_dbw_msgs__msg__PrimaryControl__Sequence * rhs);

/// Copy an array of msg/PrimaryControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_dbw_msgs
bool
marti_dbw_msgs__msg__PrimaryControl__Sequence__copy(
  const marti_dbw_msgs__msg__PrimaryControl__Sequence * input,
  marti_dbw_msgs__msg__PrimaryControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARTI_DBW_MSGS__MSG__DETAIL__PRIMARY_CONTROL__FUNCTIONS_H_
