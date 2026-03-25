// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from swri_roscpp:msg/TestTopicServiceResponse.idl
// generated code does not contain a copyright notice

#ifndef SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__FUNCTIONS_H_
#define SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "swri_roscpp/msg/rosidl_generator_c__visibility_control.h"

#include "swri_roscpp/msg/detail/test_topic_service_response__struct.h"

/// Initialize msg/TestTopicServiceResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * swri_roscpp__msg__TestTopicServiceResponse
 * )) before or use
 * swri_roscpp__msg__TestTopicServiceResponse__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceResponse__init(swri_roscpp__msg__TestTopicServiceResponse * msg);

/// Finalize msg/TestTopicServiceResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
void
swri_roscpp__msg__TestTopicServiceResponse__fini(swri_roscpp__msg__TestTopicServiceResponse * msg);

/// Create msg/TestTopicServiceResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * swri_roscpp__msg__TestTopicServiceResponse__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
swri_roscpp__msg__TestTopicServiceResponse *
swri_roscpp__msg__TestTopicServiceResponse__create();

/// Destroy msg/TestTopicServiceResponse message.
/**
 * It calls
 * swri_roscpp__msg__TestTopicServiceResponse__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
void
swri_roscpp__msg__TestTopicServiceResponse__destroy(swri_roscpp__msg__TestTopicServiceResponse * msg);

/// Check for msg/TestTopicServiceResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceResponse__are_equal(const swri_roscpp__msg__TestTopicServiceResponse * lhs, const swri_roscpp__msg__TestTopicServiceResponse * rhs);

/// Copy a msg/TestTopicServiceResponse message.
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
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceResponse__copy(
  const swri_roscpp__msg__TestTopicServiceResponse * input,
  swri_roscpp__msg__TestTopicServiceResponse * output);

/// Initialize array of msg/TestTopicServiceResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * swri_roscpp__msg__TestTopicServiceResponse__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceResponse__Sequence__init(swri_roscpp__msg__TestTopicServiceResponse__Sequence * array, size_t size);

/// Finalize array of msg/TestTopicServiceResponse messages.
/**
 * It calls
 * swri_roscpp__msg__TestTopicServiceResponse__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
void
swri_roscpp__msg__TestTopicServiceResponse__Sequence__fini(swri_roscpp__msg__TestTopicServiceResponse__Sequence * array);

/// Create array of msg/TestTopicServiceResponse messages.
/**
 * It allocates the memory for the array and calls
 * swri_roscpp__msg__TestTopicServiceResponse__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
swri_roscpp__msg__TestTopicServiceResponse__Sequence *
swri_roscpp__msg__TestTopicServiceResponse__Sequence__create(size_t size);

/// Destroy array of msg/TestTopicServiceResponse messages.
/**
 * It calls
 * swri_roscpp__msg__TestTopicServiceResponse__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
void
swri_roscpp__msg__TestTopicServiceResponse__Sequence__destroy(swri_roscpp__msg__TestTopicServiceResponse__Sequence * array);

/// Check for msg/TestTopicServiceResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceResponse__Sequence__are_equal(const swri_roscpp__msg__TestTopicServiceResponse__Sequence * lhs, const swri_roscpp__msg__TestTopicServiceResponse__Sequence * rhs);

/// Copy an array of msg/TestTopicServiceResponse messages.
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
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceResponse__Sequence__copy(
  const swri_roscpp__msg__TestTopicServiceResponse__Sequence * input,
  swri_roscpp__msg__TestTopicServiceResponse__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_RESPONSE__FUNCTIONS_H_
