// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_dbw_msgs:msg/TransmissionFeedback.idl
// generated code does not contain a copyright notice
#include "marti_dbw_msgs/msg/detail/transmission_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `current_range`
#include "rosidl_runtime_c/string_functions.h"

bool
marti_dbw_msgs__msg__TransmissionFeedback__init(marti_dbw_msgs__msg__TransmissionFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_dbw_msgs__msg__TransmissionFeedback__fini(msg);
    return false;
  }
  // current_range
  if (!rosidl_runtime_c__String__init(&msg->current_range)) {
    marti_dbw_msgs__msg__TransmissionFeedback__fini(msg);
    return false;
  }
  // stable
  // reverse
  // forward
  return true;
}

void
marti_dbw_msgs__msg__TransmissionFeedback__fini(marti_dbw_msgs__msg__TransmissionFeedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // current_range
  rosidl_runtime_c__String__fini(&msg->current_range);
  // stable
  // reverse
  // forward
}

bool
marti_dbw_msgs__msg__TransmissionFeedback__are_equal(const marti_dbw_msgs__msg__TransmissionFeedback * lhs, const marti_dbw_msgs__msg__TransmissionFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // current_range
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_range), &(rhs->current_range)))
  {
    return false;
  }
  // stable
  if (lhs->stable != rhs->stable) {
    return false;
  }
  // reverse
  if (lhs->reverse != rhs->reverse) {
    return false;
  }
  // forward
  if (lhs->forward != rhs->forward) {
    return false;
  }
  return true;
}

bool
marti_dbw_msgs__msg__TransmissionFeedback__copy(
  const marti_dbw_msgs__msg__TransmissionFeedback * input,
  marti_dbw_msgs__msg__TransmissionFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // current_range
  if (!rosidl_runtime_c__String__copy(
      &(input->current_range), &(output->current_range)))
  {
    return false;
  }
  // stable
  output->stable = input->stable;
  // reverse
  output->reverse = input->reverse;
  // forward
  output->forward = input->forward;
  return true;
}

marti_dbw_msgs__msg__TransmissionFeedback *
marti_dbw_msgs__msg__TransmissionFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__TransmissionFeedback * msg = (marti_dbw_msgs__msg__TransmissionFeedback *)allocator.allocate(sizeof(marti_dbw_msgs__msg__TransmissionFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_dbw_msgs__msg__TransmissionFeedback));
  bool success = marti_dbw_msgs__msg__TransmissionFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_dbw_msgs__msg__TransmissionFeedback__destroy(marti_dbw_msgs__msg__TransmissionFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_dbw_msgs__msg__TransmissionFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_dbw_msgs__msg__TransmissionFeedback__Sequence__init(marti_dbw_msgs__msg__TransmissionFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__TransmissionFeedback * data = NULL;

  if (size) {
    data = (marti_dbw_msgs__msg__TransmissionFeedback *)allocator.zero_allocate(size, sizeof(marti_dbw_msgs__msg__TransmissionFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_dbw_msgs__msg__TransmissionFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_dbw_msgs__msg__TransmissionFeedback__fini(&data[i - 1]);
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
marti_dbw_msgs__msg__TransmissionFeedback__Sequence__fini(marti_dbw_msgs__msg__TransmissionFeedback__Sequence * array)
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
      marti_dbw_msgs__msg__TransmissionFeedback__fini(&array->data[i]);
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

marti_dbw_msgs__msg__TransmissionFeedback__Sequence *
marti_dbw_msgs__msg__TransmissionFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__TransmissionFeedback__Sequence * array = (marti_dbw_msgs__msg__TransmissionFeedback__Sequence *)allocator.allocate(sizeof(marti_dbw_msgs__msg__TransmissionFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_dbw_msgs__msg__TransmissionFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_dbw_msgs__msg__TransmissionFeedback__Sequence__destroy(marti_dbw_msgs__msg__TransmissionFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_dbw_msgs__msg__TransmissionFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_dbw_msgs__msg__TransmissionFeedback__Sequence__are_equal(const marti_dbw_msgs__msg__TransmissionFeedback__Sequence * lhs, const marti_dbw_msgs__msg__TransmissionFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_dbw_msgs__msg__TransmissionFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_dbw_msgs__msg__TransmissionFeedback__Sequence__copy(
  const marti_dbw_msgs__msg__TransmissionFeedback__Sequence * input,
  marti_dbw_msgs__msg__TransmissionFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_dbw_msgs__msg__TransmissionFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_dbw_msgs__msg__TransmissionFeedback * data =
      (marti_dbw_msgs__msg__TransmissionFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_dbw_msgs__msg__TransmissionFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_dbw_msgs__msg__TransmissionFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_dbw_msgs__msg__TransmissionFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
