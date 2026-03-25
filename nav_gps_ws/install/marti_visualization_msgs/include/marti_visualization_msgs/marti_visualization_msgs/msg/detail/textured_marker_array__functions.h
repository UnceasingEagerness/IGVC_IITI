// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__FUNCTIONS_H_
#define MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "marti_visualization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marti_visualization_msgs/msg/detail/textured_marker_array__struct.h"

/// Initialize msg/TexturedMarkerArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marti_visualization_msgs__msg__TexturedMarkerArray
 * )) before or use
 * marti_visualization_msgs__msg__TexturedMarkerArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
bool
marti_visualization_msgs__msg__TexturedMarkerArray__init(marti_visualization_msgs__msg__TexturedMarkerArray * msg);

/// Finalize msg/TexturedMarkerArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
void
marti_visualization_msgs__msg__TexturedMarkerArray__fini(marti_visualization_msgs__msg__TexturedMarkerArray * msg);

/// Create msg/TexturedMarkerArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marti_visualization_msgs__msg__TexturedMarkerArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
marti_visualization_msgs__msg__TexturedMarkerArray *
marti_visualization_msgs__msg__TexturedMarkerArray__create();

/// Destroy msg/TexturedMarkerArray message.
/**
 * It calls
 * marti_visualization_msgs__msg__TexturedMarkerArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
void
marti_visualization_msgs__msg__TexturedMarkerArray__destroy(marti_visualization_msgs__msg__TexturedMarkerArray * msg);

/// Check for msg/TexturedMarkerArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
bool
marti_visualization_msgs__msg__TexturedMarkerArray__are_equal(const marti_visualization_msgs__msg__TexturedMarkerArray * lhs, const marti_visualization_msgs__msg__TexturedMarkerArray * rhs);

/// Copy a msg/TexturedMarkerArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
bool
marti_visualization_msgs__msg__TexturedMarkerArray__copy(
  const marti_visualization_msgs__msg__TexturedMarkerArray * input,
  marti_visualization_msgs__msg__TexturedMarkerArray * output);

/// Initialize array of msg/TexturedMarkerArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * marti_visualization_msgs__msg__TexturedMarkerArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
bool
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__init(marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * array, size_t size);

/// Finalize array of msg/TexturedMarkerArray messages.
/**
 * It calls
 * marti_visualization_msgs__msg__TexturedMarkerArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
void
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__fini(marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * array);

/// Create array of msg/TexturedMarkerArray messages.
/**
 * It allocates the memory for the array and calls
 * marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence *
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__create(size_t size);

/// Destroy array of msg/TexturedMarkerArray messages.
/**
 * It calls
 * marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
void
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__destroy(marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * array);

/// Check for msg/TexturedMarkerArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
bool
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__are_equal(const marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * lhs, const marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * rhs);

/// Copy an array of msg/TexturedMarkerArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marti_visualization_msgs
bool
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__copy(
  const marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * input,
  marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARTI_VISUALIZATION_MSGS__MSG__DETAIL__TEXTURED_MARKER_ARRAY__FUNCTIONS_H_
