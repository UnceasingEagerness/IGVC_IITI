// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_common_msgs:msg/Matrix3x3Stamped.idl
// generated code does not contain a copyright notice
#include "marti_common_msgs/msg/detail/matrix3x3_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_common_msgs__msg__Matrix3x3Stamped__init(marti_common_msgs__msg__Matrix3x3Stamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_common_msgs__msg__Matrix3x3Stamped__fini(msg);
    return false;
  }
  // matrix
  return true;
}

void
marti_common_msgs__msg__Matrix3x3Stamped__fini(marti_common_msgs__msg__Matrix3x3Stamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // matrix
}

bool
marti_common_msgs__msg__Matrix3x3Stamped__are_equal(const marti_common_msgs__msg__Matrix3x3Stamped * lhs, const marti_common_msgs__msg__Matrix3x3Stamped * rhs)
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
  // matrix
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->matrix[i] != rhs->matrix[i]) {
      return false;
    }
  }
  return true;
}

bool
marti_common_msgs__msg__Matrix3x3Stamped__copy(
  const marti_common_msgs__msg__Matrix3x3Stamped * input,
  marti_common_msgs__msg__Matrix3x3Stamped * output)
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
  // matrix
  for (size_t i = 0; i < 9; ++i) {
    output->matrix[i] = input->matrix[i];
  }
  return true;
}

marti_common_msgs__msg__Matrix3x3Stamped *
marti_common_msgs__msg__Matrix3x3Stamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__Matrix3x3Stamped * msg = (marti_common_msgs__msg__Matrix3x3Stamped *)allocator.allocate(sizeof(marti_common_msgs__msg__Matrix3x3Stamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_common_msgs__msg__Matrix3x3Stamped));
  bool success = marti_common_msgs__msg__Matrix3x3Stamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_common_msgs__msg__Matrix3x3Stamped__destroy(marti_common_msgs__msg__Matrix3x3Stamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_common_msgs__msg__Matrix3x3Stamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_common_msgs__msg__Matrix3x3Stamped__Sequence__init(marti_common_msgs__msg__Matrix3x3Stamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__Matrix3x3Stamped * data = NULL;

  if (size) {
    data = (marti_common_msgs__msg__Matrix3x3Stamped *)allocator.zero_allocate(size, sizeof(marti_common_msgs__msg__Matrix3x3Stamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_common_msgs__msg__Matrix3x3Stamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_common_msgs__msg__Matrix3x3Stamped__fini(&data[i - 1]);
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
marti_common_msgs__msg__Matrix3x3Stamped__Sequence__fini(marti_common_msgs__msg__Matrix3x3Stamped__Sequence * array)
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
      marti_common_msgs__msg__Matrix3x3Stamped__fini(&array->data[i]);
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

marti_common_msgs__msg__Matrix3x3Stamped__Sequence *
marti_common_msgs__msg__Matrix3x3Stamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__Matrix3x3Stamped__Sequence * array = (marti_common_msgs__msg__Matrix3x3Stamped__Sequence *)allocator.allocate(sizeof(marti_common_msgs__msg__Matrix3x3Stamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_common_msgs__msg__Matrix3x3Stamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_common_msgs__msg__Matrix3x3Stamped__Sequence__destroy(marti_common_msgs__msg__Matrix3x3Stamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_common_msgs__msg__Matrix3x3Stamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_common_msgs__msg__Matrix3x3Stamped__Sequence__are_equal(const marti_common_msgs__msg__Matrix3x3Stamped__Sequence * lhs, const marti_common_msgs__msg__Matrix3x3Stamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_common_msgs__msg__Matrix3x3Stamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_common_msgs__msg__Matrix3x3Stamped__Sequence__copy(
  const marti_common_msgs__msg__Matrix3x3Stamped__Sequence * input,
  marti_common_msgs__msg__Matrix3x3Stamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_common_msgs__msg__Matrix3x3Stamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_common_msgs__msg__Matrix3x3Stamped * data =
      (marti_common_msgs__msg__Matrix3x3Stamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_common_msgs__msg__Matrix3x3Stamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_common_msgs__msg__Matrix3x3Stamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_common_msgs__msg__Matrix3x3Stamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
