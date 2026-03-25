// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_common_msgs:msg/ByteArrayStamped.idl
// generated code does not contain a copyright notice
#include "marti_common_msgs/msg/detail/byte_array_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
marti_common_msgs__msg__ByteArrayStamped__init(marti_common_msgs__msg__ByteArrayStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_common_msgs__msg__ByteArrayStamped__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->value, 0)) {
    marti_common_msgs__msg__ByteArrayStamped__fini(msg);
    return false;
  }
  return true;
}

void
marti_common_msgs__msg__ByteArrayStamped__fini(marti_common_msgs__msg__ByteArrayStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // value
  rosidl_runtime_c__octet__Sequence__fini(&msg->value);
}

bool
marti_common_msgs__msg__ByteArrayStamped__are_equal(const marti_common_msgs__msg__ByteArrayStamped * lhs, const marti_common_msgs__msg__ByteArrayStamped * rhs)
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
  if (!rosidl_runtime_c__octet__Sequence__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
marti_common_msgs__msg__ByteArrayStamped__copy(
  const marti_common_msgs__msg__ByteArrayStamped * input,
  marti_common_msgs__msg__ByteArrayStamped * output)
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
  if (!rosidl_runtime_c__octet__Sequence__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

marti_common_msgs__msg__ByteArrayStamped *
marti_common_msgs__msg__ByteArrayStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__ByteArrayStamped * msg = (marti_common_msgs__msg__ByteArrayStamped *)allocator.allocate(sizeof(marti_common_msgs__msg__ByteArrayStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_common_msgs__msg__ByteArrayStamped));
  bool success = marti_common_msgs__msg__ByteArrayStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_common_msgs__msg__ByteArrayStamped__destroy(marti_common_msgs__msg__ByteArrayStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_common_msgs__msg__ByteArrayStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_common_msgs__msg__ByteArrayStamped__Sequence__init(marti_common_msgs__msg__ByteArrayStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__ByteArrayStamped * data = NULL;

  if (size) {
    data = (marti_common_msgs__msg__ByteArrayStamped *)allocator.zero_allocate(size, sizeof(marti_common_msgs__msg__ByteArrayStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_common_msgs__msg__ByteArrayStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_common_msgs__msg__ByteArrayStamped__fini(&data[i - 1]);
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
marti_common_msgs__msg__ByteArrayStamped__Sequence__fini(marti_common_msgs__msg__ByteArrayStamped__Sequence * array)
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
      marti_common_msgs__msg__ByteArrayStamped__fini(&array->data[i]);
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

marti_common_msgs__msg__ByteArrayStamped__Sequence *
marti_common_msgs__msg__ByteArrayStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_common_msgs__msg__ByteArrayStamped__Sequence * array = (marti_common_msgs__msg__ByteArrayStamped__Sequence *)allocator.allocate(sizeof(marti_common_msgs__msg__ByteArrayStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_common_msgs__msg__ByteArrayStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_common_msgs__msg__ByteArrayStamped__Sequence__destroy(marti_common_msgs__msg__ByteArrayStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_common_msgs__msg__ByteArrayStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_common_msgs__msg__ByteArrayStamped__Sequence__are_equal(const marti_common_msgs__msg__ByteArrayStamped__Sequence * lhs, const marti_common_msgs__msg__ByteArrayStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_common_msgs__msg__ByteArrayStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_common_msgs__msg__ByteArrayStamped__Sequence__copy(
  const marti_common_msgs__msg__ByteArrayStamped__Sequence * input,
  marti_common_msgs__msg__ByteArrayStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_common_msgs__msg__ByteArrayStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_common_msgs__msg__ByteArrayStamped * data =
      (marti_common_msgs__msg__ByteArrayStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_common_msgs__msg__ByteArrayStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_common_msgs__msg__ByteArrayStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_common_msgs__msg__ByteArrayStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
