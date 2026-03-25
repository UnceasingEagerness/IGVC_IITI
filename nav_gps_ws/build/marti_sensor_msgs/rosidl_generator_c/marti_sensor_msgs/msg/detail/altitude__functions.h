// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marti_sensor_msgs:msg/Altitude.idl
// generated code does not contain a copyright notice

#ifndef MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__FUNCTIONS_H_
#define MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "marti_sensor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marti_sensor_msgs/msg/detail/altitude__struct.h"

/// Initialize msg/Altitude message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marti_sensor_msgs__msg__Altitude
 * )) before or use
 * marti_sensor_msgs__msg__Altitude__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
bool
marti_sensor_msgs__msg__Altitude__init(marti_sensor_msgs__msg__Altitude * msg);

/// Finalize msg/Altitude message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
void
marti_sensor_msgs__msg__Altitude__fini(marti_sensor_msgs__msg__Altitude * msg);

/// Create msg/Altitude message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marti_sensor_msgs__msg__Altitude__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
marti_sensor_msgs__msg__Altitude *
marti_sensor_msgs__msg__Altitude__create();

/// Destroy msg/Altitude message.
/**
 * It calls
 * marti_sensor_msgs__msg__Altitude__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
void
marti_sensor_msgs__msg__Altitude__destroy(marti_sensor_msgs__msg__Altitude * msg);

/// Check for msg/Altitude message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
bool
marti_sensor_msgs__msg__Altitude__are_equal(const marti_sensor_msgs__msg__Altitude * lhs, const marti_sensor_msgs__msg__Altitude * rhs);

/// Copy a msg/Altitude message.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
bool
marti_sensor_msgs__msg__Altitude__copy(
  const marti_sensor_msgs__msg__Altitude * input,
  marti_sensor_msgs__msg__Altitude * output);

/// Initialize array of msg/Altitude messages.
/**
 * It allocates the memory for the number of elements and calls
 * marti_sensor_msgs__msg__Altitude__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
bool
marti_sensor_msgs__msg__Altitude__Sequence__init(marti_sensor_msgs__msg__Altitude__Sequence * array, size_t size);

/// Finalize array of msg/Altitude messages.
/**
 * It calls
 * marti_sensor_msgs__msg__Altitude__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
void
marti_sensor_msgs__msg__Altitude__Sequence__fini(marti_sensor_msgs__msg__Altitude__Sequence * array);

/// Create array of msg/Altitude messages.
/**
 * It allocates the memory for the array and calls
 * marti_sensor_msgs__msg__Altitude__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
marti_sensor_msgs__msg__Altitude__Sequence *
marti_sensor_msgs__msg__Altitude__Sequence__create(size_t size);

/// Destroy array of msg/Altitude messages.
/**
 * It calls
 * marti_sensor_msgs__msg__Altitude__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
void
marti_sensor_msgs__msg__Altitude__Sequence__destroy(marti_sensor_msgs__msg__Altitude__Sequence * array);

/// Check for msg/Altitude message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
bool
marti_sensor_msgs__msg__Altitude__Sequence__are_equal(const marti_sensor_msgs__msg__Altitude__Sequence * lhs, const marti_sensor_msgs__msg__Altitude__Sequence * rhs);

/// Copy an array of msg/Altitude messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_sensor_msgs
bool
marti_sensor_msgs__msg__Altitude__Sequence__copy(
  const marti_sensor_msgs__msg__Altitude__Sequence * input,
  marti_sensor_msgs__msg__Altitude__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARTI_SENSOR_MSGS__MSG__DETAIL__ALTITUDE__FUNCTIONS_H_
