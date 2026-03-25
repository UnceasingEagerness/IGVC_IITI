// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swri_roscpp:msg/TestTopicServiceResponse.idl
// generated code does not contain a copyright notice
#include "swri_roscpp/msg/detail/test_topic_service_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `srv_header`
#include "marti_common_msgs/msg/detail/service_header__functions.h"

bool
swri_roscpp__msg__TestTopicServiceResponse__init(swri_roscpp__msg__TestTopicServiceResponse * msg)
{
  if (!msg) {
    return false;
  }
  // srv_header
  if (!marti_common_msgs__msg__ServiceHeader__init(&msg->srv_header)) {
    swri_roscpp__msg__TestTopicServiceResponse__fini(msg);
    return false;
  }
  // response_value
  return true;
}

void
swri_roscpp__msg__TestTopicServiceResponse__fini(swri_roscpp__msg__TestTopicServiceResponse * msg)
{
  if (!msg) {
    return;
  }
  // srv_header
  marti_common_msgs__msg__ServiceHeader__fini(&msg->srv_header);
  // response_value
}

bool
swri_roscpp__msg__TestTopicServiceResponse__are_equal(const swri_roscpp__msg__TestTopicServiceResponse * lhs, const swri_roscpp__msg__TestTopicServiceResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // srv_header
  if (!marti_common_msgs__msg__ServiceHeader__are_equal(
      &(lhs->srv_header), &(rhs->srv_header)))
  {
    return false;
  }
  // response_value
  if (lhs->response_value != rhs->response_value) {
    return false;
  }
  return true;
}

bool
swri_roscpp__msg__TestTopicServiceResponse__copy(
  const swri_roscpp__msg__TestTopicServiceResponse * input,
  swri_roscpp__msg__TestTopicServiceResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // srv_header
  if (!marti_common_msgs__msg__ServiceHeader__copy(
      &(input->srv_header), &(output->srv_header)))
  {
    return false;
  }
  // response_value
  output->response_value = input->response_value;
  return true;
}

swri_roscpp__msg__TestTopicServiceResponse *
swri_roscpp__msg__TestTopicServiceResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swri_roscpp__msg__TestTopicServiceResponse * msg = (swri_roscpp__msg__TestTopicServiceResponse *)allocator.allocate(sizeof(swri_roscpp__msg__TestTopicServiceResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swri_roscpp__msg__TestTopicServiceResponse));
  bool success = swri_roscpp__msg__TestTopicServiceResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swri_roscpp__msg__TestTopicServiceResponse__destroy(swri_roscpp__msg__TestTopicServiceResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swri_roscpp__msg__TestTopicServiceResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swri_roscpp__msg__TestTopicServiceResponse__Sequence__init(swri_roscpp__msg__TestTopicServiceResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swri_roscpp__msg__TestTopicServiceResponse * data = NULL;

  if (size) {
    data = (swri_roscpp__msg__TestTopicServiceResponse *)allocator.zero_allocate(size, sizeof(swri_roscpp__msg__TestTopicServiceResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swri_roscpp__msg__TestTopicServiceResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swri_roscpp__msg__TestTopicServiceResponse__fini(&data[i - 1]);
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
swri_roscpp__msg__TestTopicServiceResponse__Sequence__fini(swri_roscpp__msg__TestTopicServiceResponse__Sequence * array)
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
      swri_roscpp__msg__TestTopicServiceResponse__fini(&array->data[i]);
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

swri_roscpp__msg__TestTopicServiceResponse__Sequence *
swri_roscpp__msg__TestTopicServiceResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swri_roscpp__msg__TestTopicServiceResponse__Sequence * array = (swri_roscpp__msg__TestTopicServiceResponse__Sequence *)allocator.allocate(sizeof(swri_roscpp__msg__TestTopicServiceResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swri_roscpp__msg__TestTopicServiceResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swri_roscpp__msg__TestTopicServiceResponse__Sequence__destroy(swri_roscpp__msg__TestTopicServiceResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swri_roscpp__msg__TestTopicServiceResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swri_roscpp__msg__TestTopicServiceResponse__Sequence__are_equal(const swri_roscpp__msg__TestTopicServiceResponse__Sequence * lhs, const swri_roscpp__msg__TestTopicServiceResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swri_roscpp__msg__TestTopicServiceResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swri_roscpp__msg__TestTopicServiceResponse__Sequence__copy(
  const swri_roscpp__msg__TestTopicServiceResponse__Sequence * input,
  swri_roscpp__msg__TestTopicServiceResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(swri_roscpp__msg__TestTopicServiceResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swri_roscpp__msg__TestTopicServiceResponse * data =
      (swri_roscpp__msg__TestTopicServiceResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swri_roscpp__msg__TestTopicServiceResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swri_roscpp__msg__TestTopicServiceResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swri_roscpp__msg__TestTopicServiceResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
