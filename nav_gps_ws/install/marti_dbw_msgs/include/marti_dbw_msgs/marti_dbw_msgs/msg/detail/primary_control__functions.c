// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_dbw_msgs:msg/PrimaryControl.idl
// generated code does not contain a copyright notice
#include "marti_dbw_msgs/msg/detail/primary_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_dbw_msgs__msg__PrimaryControl__init(marti_dbw_msgs__msg__PrimaryControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_dbw_msgs__msg__PrimaryControl__fini(msg);
    return false;
  }
  // active
  // estop
  // steering_command
  // throttle_command
  // brake_command
  return true;
}

void
marti_dbw_msgs__msg__PrimaryControl__fini(marti_dbw_msgs__msg__PrimaryControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // active
  // estop
  // steering_command
  // throttle_command
  // brake_command
}

bool
marti_dbw_msgs__msg__PrimaryControl__are_equal(const marti_dbw_msgs__msg__PrimaryControl * lhs, const marti_dbw_msgs__msg__PrimaryControl * rhs)
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
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // estop
  if (lhs->estop != rhs->estop) {
    return false;
  }
  // steering_command
  if (lhs->steering_command != rhs->steering_command) {
    return false;
  }
  // throttle_command
  if (lhs->throttle_command != rhs->throttle_command) {
    return false;
  }
  // brake_command
  if (lhs->brake_command != rhs->brake_command) {
    return false;
  }
  return true;
}

bool
marti_dbw_msgs__msg__PrimaryControl__copy(
  const marti_dbw_msgs__msg__PrimaryControl * input,
  marti_dbw_msgs__msg__PrimaryControl * output)
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
  // active
  output->active = input->active;
  // estop
  output->estop = input->estop;
  // steering_command
  output->steering_command = input->steering_command;
  // throttle_command
  output->throttle_command = input->throttle_command;
  // brake_command
  output->brake_command = input->brake_command;
  return true;
}

marti_dbw_msgs__msg__PrimaryControl *
marti_dbw_msgs__msg__PrimaryControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__PrimaryControl * msg = (marti_dbw_msgs__msg__PrimaryControl *)allocator.allocate(sizeof(marti_dbw_msgs__msg__PrimaryControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_dbw_msgs__msg__PrimaryControl));
  bool success = marti_dbw_msgs__msg__PrimaryControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_dbw_msgs__msg__PrimaryControl__destroy(marti_dbw_msgs__msg__PrimaryControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_dbw_msgs__msg__PrimaryControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_dbw_msgs__msg__PrimaryControl__Sequence__init(marti_dbw_msgs__msg__PrimaryControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__PrimaryControl * data = NULL;

  if (size) {
    data = (marti_dbw_msgs__msg__PrimaryControl *)allocator.zero_allocate(size, sizeof(marti_dbw_msgs__msg__PrimaryControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_dbw_msgs__msg__PrimaryControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_dbw_msgs__msg__PrimaryControl__fini(&data[i - 1]);
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
marti_dbw_msgs__msg__PrimaryControl__Sequence__fini(marti_dbw_msgs__msg__PrimaryControl__Sequence * array)
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
      marti_dbw_msgs__msg__PrimaryControl__fini(&array->data[i]);
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

marti_dbw_msgs__msg__PrimaryControl__Sequence *
marti_dbw_msgs__msg__PrimaryControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__PrimaryControl__Sequence * array = (marti_dbw_msgs__msg__PrimaryControl__Sequence *)allocator.allocate(sizeof(marti_dbw_msgs__msg__PrimaryControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_dbw_msgs__msg__PrimaryControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_dbw_msgs__msg__PrimaryControl__Sequence__destroy(marti_dbw_msgs__msg__PrimaryControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_dbw_msgs__msg__PrimaryControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_dbw_msgs__msg__PrimaryControl__Sequence__are_equal(const marti_dbw_msgs__msg__PrimaryControl__Sequence * lhs, const marti_dbw_msgs__msg__PrimaryControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_dbw_msgs__msg__PrimaryControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_dbw_msgs__msg__PrimaryControl__Sequence__copy(
  const marti_dbw_msgs__msg__PrimaryControl__Sequence * input,
  marti_dbw_msgs__msg__PrimaryControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_dbw_msgs__msg__PrimaryControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_dbw_msgs__msg__PrimaryControl * data =
      (marti_dbw_msgs__msg__PrimaryControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_dbw_msgs__msg__PrimaryControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_dbw_msgs__msg__PrimaryControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_dbw_msgs__msg__PrimaryControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
