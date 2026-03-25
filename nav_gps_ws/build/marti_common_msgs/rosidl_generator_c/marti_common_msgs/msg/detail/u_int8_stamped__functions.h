// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marti_common_msgs:msg/UInt8Stamped.idl
// generated code does not contain a copyright notice

#ifndef MARTI_COMMON_MSGS__MSG__DETAIL__U_INT8_STAMPED__FUNCTIONS_H_
#define MARTI_COMMON_MSGS__MSG__DETAIL__U_INT8_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "marti_common_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marti_common_msgs/msg/detail/u_int8_stamped__struct.h"

/// Initialize msg/UInt8Stamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marti_common_msgs__msg__UInt8Stamped
 * )) before or use
 * marti_common_msgs__msg__UInt8Stamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
bool
marti_common_msgs__msg__UInt8Stamped__init(marti_common_msgs__msg__UInt8Stamped * msg);

/// Finalize msg/UInt8Stamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
void
marti_common_msgs__msg__UInt8Stamped__fini(marti_common_msgs__msg__UInt8Stamped * msg);

/// Create msg/UInt8Stamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marti_common_msgs__msg__UInt8Stamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
marti_common_msgs__msg__UInt8Stamped *
marti_common_msgs__msg__UInt8Stamped__create();

/// Destroy msg/UInt8Stamped message.
/**
 * It calls
 * marti_common_msgs__msg__UInt8Stamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
void
marti_common_msgs__msg__UInt8Stamped__destroy(marti_common_msgs__msg__UInt8Stamped * msg);

/// Check for msg/UInt8Stamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
bool
marti_common_msgs__msg__UInt8Stamped__are_equal(const marti_common_msgs__msg__UInt8Stamped * lhs, const marti_common_msgs__msg__UInt8Stamped * rhs);

/// Copy a msg/UInt8Stamped message.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
bool
marti_common_msgs__msg__UInt8Stamped__copy(
  const marti_common_msgs__msg__UInt8Stamped * input,
  marti_common_msgs__msg__UInt8Stamped * output);

/// Initialize array of msg/UInt8Stamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * marti_common_msgs__msg__UInt8Stamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
bool
marti_common_msgs__msg__UInt8Stamped__Sequence__init(marti_common_msgs__msg__UInt8Stamped__Sequence * array, size_t size);

/// Finalize array of msg/UInt8Stamped messages.
/**
 * It calls
 * marti_common_msgs__msg__UInt8Stamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
void
marti_common_msgs__msg__UInt8Stamped__Sequence__fini(marti_common_msgs__msg__UInt8Stamped__Sequence * array);

/// Create array of msg/UInt8Stamped messages.
/**
 * It allocates the memory for the array and calls
 * marti_common_msgs__msg__UInt8Stamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
marti_common_msgs__msg__UInt8Stamped__Sequence *
marti_common_msgs__msg__UInt8Stamped__Sequence__create(size_t size);

/// Destroy array of msg/UInt8Stamped messages.
/**
 * It calls
 * marti_common_msgs__msg__UInt8Stamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
void
marti_common_msgs__msg__UInt8Stamped__Sequence__destroy(marti_common_msgs__msg__UInt8Stamped__Sequence * array);

/// Check for msg/UInt8Stamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
bool
marti_common_msgs__msg__UInt8Stamped__Sequence__are_equal(const marti_common_msgs__msg__UInt8Stamped__Sequence * lhs, const marti_common_msgs__msg__UInt8Stamped__Sequence * rhs);

/// Copy an array of msg/UInt8Stamped messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_common_msgs
bool
marti_common_msgs__msg__UInt8Stamped__Sequence__copy(
  const marti_common_msgs__msg__UInt8Stamped__Sequence * input,
  marti_common_msgs__msg__UInt8Stamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARTI_COMMON_MSGS__MSG__DETAIL__U_INT8_STAMPED__FUNCTIONS_H_
