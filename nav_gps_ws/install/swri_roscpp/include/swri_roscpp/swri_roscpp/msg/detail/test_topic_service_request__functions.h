// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from swri_roscpp:msg/TestTopicServiceRequest.idl
// generated code does not contain a copyright notice

#ifndef SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__FUNCTIONS_H_
#define SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "swri_roscpp/msg/rosidl_generator_c__visibility_control.h"

#include "swri_roscpp/msg/detail/test_topic_service_request__struct.h"

/// Initialize msg/TestTopicServiceRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * swri_roscpp__msg__TestTopicServiceRequest
 * )) before or use
 * swri_roscpp__msg__TestTopicServiceRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceRequest__init(swri_roscpp__msg__TestTopicServiceRequest * msg);

/// Finalize msg/TestTopicServiceRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
void
swri_roscpp__msg__TestTopicServiceRequest__fini(swri_roscpp__msg__TestTopicServiceRequest * msg);

/// Create msg/TestTopicServiceRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * swri_roscpp__msg__TestTopicServiceRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
swri_roscpp__msg__TestTopicServiceRequest *
swri_roscpp__msg__TestTopicServiceRequest__create();

/// Destroy msg/TestTopicServiceRequest message.
/**
 * It calls
 * swri_roscpp__msg__TestTopicServiceRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
void
swri_roscpp__msg__TestTopicServiceRequest__destroy(swri_roscpp__msg__TestTopicServiceRequest * msg);

/// Check for msg/TestTopicServiceRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceRequest__are_equal(const swri_roscpp__msg__TestTopicServiceRequest * lhs, const swri_roscpp__msg__TestTopicServiceRequest * rhs);

/// Copy a msg/TestTopicServiceRequest message.
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
swri_roscpp__msg__TestTopicServiceRequest__copy(
  const swri_roscpp__msg__TestTopicServiceRequest * input,
  swri_roscpp__msg__TestTopicServiceRequest * output);

/// Initialize array of msg/TestTopicServiceRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * swri_roscpp__msg__TestTopicServiceRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceRequest__Sequence__init(swri_roscpp__msg__TestTopicServiceRequest__Sequence * array, size_t size);

/// Finalize array of msg/TestTopicServiceRequest messages.
/**
 * It calls
 * swri_roscpp__msg__TestTopicServiceRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
void
swri_roscpp__msg__TestTopicServiceRequest__Sequence__fini(swri_roscpp__msg__TestTopicServiceRequest__Sequence * array);

/// Create array of msg/TestTopicServiceRequest messages.
/**
 * It allocates the memory for the array and calls
 * swri_roscpp__msg__TestTopicServiceRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
swri_roscpp__msg__TestTopicServiceRequest__Sequence *
swri_roscpp__msg__TestTopicServiceRequest__Sequence__create(size_t size);

/// Destroy array of msg/TestTopicServiceRequest messages.
/**
 * It calls
 * swri_roscpp__msg__TestTopicServiceRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
void
swri_roscpp__msg__TestTopicServiceRequest__Sequence__destroy(swri_roscpp__msg__TestTopicServiceRequest__Sequence * array);

/// Check for msg/TestTopicServiceRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_swri_roscpp
bool
swri_roscpp__msg__TestTopicServiceRequest__Sequence__are_equal(const swri_roscpp__msg__TestTopicServiceRequest__Sequence * lhs, const swri_roscpp__msg__TestTopicServiceRequest__Sequence * rhs);

/// Copy an array of msg/TestTopicServiceRequest messages.
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
swri_roscpp__msg__TestTopicServiceRequest__Sequence__copy(
  const swri_roscpp__msg__TestTopicServiceRequest__Sequence * input,
  swri_roscpp__msg__TestTopicServiceRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SWRI_ROSCPP__MSG__DETAIL__TEST_TOPIC_SERVICE_REQUEST__FUNCTIONS_H_
