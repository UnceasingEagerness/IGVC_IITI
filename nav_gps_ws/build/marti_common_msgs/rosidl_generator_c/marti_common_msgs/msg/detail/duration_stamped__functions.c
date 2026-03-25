// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_common_msgs:msg/DurationStamped.idl
// generated code does not contain a copyright notice
#include "marti_common_msgs/msg/detail/duration_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `value`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
marti_common_msgs__msg__DurationStamped__init(marti_common_msgs__msg__DurationStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_common_msgs__msg__DurationStamped__fini(msg);
    return false;
  }
  // value
  if (!builtin_interfaces__msg__Duration__init(&msg->value)) {
    marti_common_msgs__msg__DurationStamped__fini(msg);
    return false;
  }
  return true;
}

void
marti_common_msgs__msg__DurationStamped__fini(marti_common_msgs__msg__DurationStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // value
  builtin_interfaces__msg__Duration__fini(&msg->value);
}

bool
marti_common_msgs__msg__DurationStamped__are_equal(const marti_common_msgs__msg__DurationStamped * lhs, const marti_common_msgs__msg__DurationStamped * rhs)
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
  // value
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
marti_common_msgs__msg__DurationStamped__copy(
  const marti_common_msgs__msg__DurationStamped * input,
  marti_common_msgs__msg__DurationStamped * output)
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
  // value
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

marti_common_msgs__msg__DurationStamped *
marti_common_msgs__msg__DurationStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__DurationStamped * msg = (marti_common_msgs__msg__DurationStamped *)allocator.allocate(sizeof(marti_common_msgs__msg__DurationStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_common_msgs__msg__DurationStamped));
  bool success = marti_common_msgs__msg__DurationStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_common_msgs__msg__DurationStamped__destroy(marti_common_msgs__msg__DurationStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_common_msgs__msg__DurationStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_common_msgs__msg__DurationStamped__Sequence__init(marti_common_msgs__msg__DurationStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__DurationStamped * data = NULL;

  if (size) {
    data = (marti_common_msgs__msg__DurationStamped *)allocator.zero_allocate(size, sizeof(marti_common_msgs__msg__DurationStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_common_msgs__msg__DurationStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_common_msgs__msg__DurationStamped__fini(&data[i - 1]);
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
marti_common_msgs__msg__DurationStamped__Sequence__fini(marti_common_msgs__msg__DurationStamped__Sequence * array)
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
      marti_common_msgs__msg__DurationStamped__fini(&array->data[i]);
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

marti_common_msgs__msg__DurationStamped__Sequence *
marti_common_msgs__msg__DurationStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__DurationStamped__Sequence * array = (marti_common_msgs__msg__DurationStamped__Sequence *)allocator.allocate(sizeof(marti_common_msgs__msg__DurationStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_common_msgs__msg__DurationStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_common_msgs__msg__DurationStamped__Sequence__destroy(marti_common_msgs__msg__DurationStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_common_msgs__msg__DurationStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_common_msgs__msg__DurationStamped__Sequence__are_equal(const marti_common_msgs__msg__DurationStamped__Sequence * lhs, const marti_common_msgs__msg__DurationStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_common_msgs__msg__DurationStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_common_msgs__msg__DurationStamped__Sequence__copy(
  const marti_common_msgs__msg__DurationStamped__Sequence * input,
  marti_common_msgs__msg__DurationStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_common_msgs__msg__DurationStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_common_msgs__msg__DurationStamped * data =
      (marti_common_msgs__msg__DurationStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_common_msgs__msg__DurationStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_common_msgs__msg__DurationStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_common_msgs__msg__DurationStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
