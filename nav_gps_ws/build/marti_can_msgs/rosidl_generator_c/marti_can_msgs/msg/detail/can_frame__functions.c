// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_can_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice
#include "marti_can_msgs/msg/detail/can_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_can_msgs__msg__CanFrame__init(marti_can_msgs__msg__CanFrame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_can_msgs__msg__CanFrame__fini(msg);
    return false;
  }
  // id
  // msg_type
  // data_length
  // data
  return true;
}

void
marti_can_msgs__msg__CanFrame__fini(marti_can_msgs__msg__CanFrame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // msg_type
  // data_length
  // data
}

bool
marti_can_msgs__msg__CanFrame__are_equal(const marti_can_msgs__msg__CanFrame * lhs, const marti_can_msgs__msg__CanFrame * rhs)
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
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // msg_type
  if (lhs->msg_type != rhs->msg_type) {
    return false;
  }
  // data_length
  if (lhs->data_length != rhs->data_length) {
    return false;
  }
  // data
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
marti_can_msgs__msg__CanFrame__copy(
  const marti_can_msgs__msg__CanFrame * input,
  marti_can_msgs__msg__CanFrame * output)
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
  // id
  output->id = input->id;
  // msg_type
  output->msg_type = input->msg_type;
  // data_length
  output->data_length = input->data_length;
  // data
  for (size_t i = 0; i < 8; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

marti_can_msgs__msg__CanFrame *
marti_can_msgs__msg__CanFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_can_msgs__msg__CanFrame * msg = (marti_can_msgs__msg__CanFrame *)allocator.allocate(sizeof(marti_can_msgs__msg__CanFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_can_msgs__msg__CanFrame));
  bool success = marti_can_msgs__msg__CanFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_can_msgs__msg__CanFrame__destroy(marti_can_msgs__msg__CanFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_can_msgs__msg__CanFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_can_msgs__msg__CanFrame__Sequence__init(marti_can_msgs__msg__CanFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_can_msgs__msg__CanFrame * data = NULL;

  if (size) {
    data = (marti_can_msgs__msg__CanFrame *)allocator.zero_allocate(size, sizeof(marti_can_msgs__msg__CanFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_can_msgs__msg__CanFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_can_msgs__msg__CanFrame__fini(&data[i - 1]);
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
marti_can_msgs__msg__CanFrame__Sequence__fini(marti_can_msgs__msg__CanFrame__Sequence * array)
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
      marti_can_msgs__msg__CanFrame__fini(&array->data[i]);
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

marti_can_msgs__msg__CanFrame__Sequence *
marti_can_msgs__msg__CanFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_can_msgs__msg__CanFrame__Sequence * array = (marti_can_msgs__msg__CanFrame__Sequence *)allocator.allocate(sizeof(marti_can_msgs__msg__CanFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_can_msgs__msg__CanFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_can_msgs__msg__CanFrame__Sequence__destroy(marti_can_msgs__msg__CanFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_can_msgs__msg__CanFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_can_msgs__msg__CanFrame__Sequence__are_equal(const marti_can_msgs__msg__CanFrame__Sequence * lhs, const marti_can_msgs__msg__CanFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_can_msgs__msg__CanFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_can_msgs__msg__CanFrame__Sequence__copy(
  const marti_can_msgs__msg__CanFrame__Sequence * input,
  marti_can_msgs__msg__CanFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_can_msgs__msg__CanFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_can_msgs__msg__CanFrame * data =
      (marti_can_msgs__msg__CanFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_can_msgs__msg__CanFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_can_msgs__msg__CanFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_can_msgs__msg__CanFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
