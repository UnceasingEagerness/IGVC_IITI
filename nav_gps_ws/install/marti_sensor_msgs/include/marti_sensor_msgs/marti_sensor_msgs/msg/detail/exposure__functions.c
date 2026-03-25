// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_sensor_msgs:msg/Exposure.idl
// generated code does not contain a copyright notice
#include "marti_sensor_msgs/msg/detail/exposure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_sensor_msgs__msg__Exposure__init(marti_sensor_msgs__msg__Exposure * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_sensor_msgs__msg__Exposure__fini(msg);
    return false;
  }
  // value
  return true;
}

void
marti_sensor_msgs__msg__Exposure__fini(marti_sensor_msgs__msg__Exposure * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // value
}

bool
marti_sensor_msgs__msg__Exposure__are_equal(const marti_sensor_msgs__msg__Exposure * lhs, const marti_sensor_msgs__msg__Exposure * rhs)
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
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
marti_sensor_msgs__msg__Exposure__copy(
  const marti_sensor_msgs__msg__Exposure * input,
  marti_sensor_msgs__msg__Exposure * output)
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
  output->value = input->value;
  return true;
}

marti_sensor_msgs__msg__Exposure *
marti_sensor_msgs__msg__Exposure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__Exposure * msg = (marti_sensor_msgs__msg__Exposure *)allocator.allocate(sizeof(marti_sensor_msgs__msg__Exposure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_sensor_msgs__msg__Exposure));
  bool success = marti_sensor_msgs__msg__Exposure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_sensor_msgs__msg__Exposure__destroy(marti_sensor_msgs__msg__Exposure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_sensor_msgs__msg__Exposure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_sensor_msgs__msg__Exposure__Sequence__init(marti_sensor_msgs__msg__Exposure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__Exposure * data = NULL;

  if (size) {
    data = (marti_sensor_msgs__msg__Exposure *)allocator.zero_allocate(size, sizeof(marti_sensor_msgs__msg__Exposure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_sensor_msgs__msg__Exposure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_sensor_msgs__msg__Exposure__fini(&data[i - 1]);
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
marti_sensor_msgs__msg__Exposure__Sequence__fini(marti_sensor_msgs__msg__Exposure__Sequence * array)
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
      marti_sensor_msgs__msg__Exposure__fini(&array->data[i]);
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

marti_sensor_msgs__msg__Exposure__Sequence *
marti_sensor_msgs__msg__Exposure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__Exposure__Sequence * array = (marti_sensor_msgs__msg__Exposure__Sequence *)allocator.allocate(sizeof(marti_sensor_msgs__msg__Exposure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_sensor_msgs__msg__Exposure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_sensor_msgs__msg__Exposure__Sequence__destroy(marti_sensor_msgs__msg__Exposure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_sensor_msgs__msg__Exposure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_sensor_msgs__msg__Exposure__Sequence__are_equal(const marti_sensor_msgs__msg__Exposure__Sequence * lhs, const marti_sensor_msgs__msg__Exposure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_sensor_msgs__msg__Exposure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_sensor_msgs__msg__Exposure__Sequence__copy(
  const marti_sensor_msgs__msg__Exposure__Sequence * input,
  marti_sensor_msgs__msg__Exposure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_sensor_msgs__msg__Exposure);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_sensor_msgs__msg__Exposure * data =
      (marti_sensor_msgs__msg__Exposure *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_sensor_msgs__msg__Exposure__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_sensor_msgs__msg__Exposure__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_sensor_msgs__msg__Exposure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
