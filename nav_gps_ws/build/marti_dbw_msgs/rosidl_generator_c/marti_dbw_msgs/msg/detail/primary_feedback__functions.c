// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
// generated code does not contain a copyright notice
#include "marti_dbw_msgs/msg/detail/primary_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_dbw_msgs__msg__PrimaryFeedback__init(marti_dbw_msgs__msg__PrimaryFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_dbw_msgs__msg__PrimaryFeedback__fini(msg);
    return false;
  }
  // present
  // robotic_mode
  // steering_command
  // steering_measure
  // throttle_command
  // throttle_measure
  // brake_command
  // brake_measure
  // estop_command
  // estop_measure
  // error_steering
  // error_throttle
  // error_brake
  // error_other
  return true;
}

void
marti_dbw_msgs__msg__PrimaryFeedback__fini(marti_dbw_msgs__msg__PrimaryFeedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // present
  // robotic_mode
  // steering_command
  // steering_measure
  // throttle_command
  // throttle_measure
  // brake_command
  // brake_measure
  // estop_command
  // estop_measure
  // error_steering
  // error_throttle
  // error_brake
  // error_other
}

bool
marti_dbw_msgs__msg__PrimaryFeedback__are_equal(const marti_dbw_msgs__msg__PrimaryFeedback * lhs, const marti_dbw_msgs__msg__PrimaryFeedback * rhs)
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
  // present
  if (lhs->present != rhs->present) {
    return false;
  }
  // robotic_mode
  if (lhs->robotic_mode != rhs->robotic_mode) {
    return false;
  }
  // steering_command
  if (lhs->steering_command != rhs->steering_command) {
    return false;
  }
  // steering_measure
  if (lhs->steering_measure != rhs->steering_measure) {
    return false;
  }
  // throttle_command
  if (lhs->throttle_command != rhs->throttle_command) {
    return false;
  }
  // throttle_measure
  if (lhs->throttle_measure != rhs->throttle_measure) {
    return false;
  }
  // brake_command
  if (lhs->brake_command != rhs->brake_command) {
    return false;
  }
  // brake_measure
  if (lhs->brake_measure != rhs->brake_measure) {
    return false;
  }
  // estop_command
  if (lhs->estop_command != rhs->estop_command) {
    return false;
  }
  // estop_measure
  if (lhs->estop_measure != rhs->estop_measure) {
    return false;
  }
  // error_steering
  if (lhs->error_steering != rhs->error_steering) {
    return false;
  }
  // error_throttle
  if (lhs->error_throttle != rhs->error_throttle) {
    return false;
  }
  // error_brake
  if (lhs->error_brake != rhs->error_brake) {
    return false;
  }
  // error_other
  if (lhs->error_other != rhs->error_other) {
    return false;
  }
  return true;
}

bool
marti_dbw_msgs__msg__PrimaryFeedback__copy(
  const marti_dbw_msgs__msg__PrimaryFeedback * input,
  marti_dbw_msgs__msg__PrimaryFeedback * output)
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
  // present
  output->present = input->present;
  // robotic_mode
  output->robotic_mode = input->robotic_mode;
  // steering_command
  output->steering_command = input->steering_command;
  // steering_measure
  output->steering_measure = input->steering_measure;
  // throttle_command
  output->throttle_command = input->throttle_command;
  // throttle_measure
  output->throttle_measure = input->throttle_measure;
  // brake_command
  output->brake_command = input->brake_command;
  // brake_measure
  output->brake_measure = input->brake_measure;
  // estop_command
  output->estop_command = input->estop_command;
  // estop_measure
  output->estop_measure = input->estop_measure;
  // error_steering
  output->error_steering = input->error_steering;
  // error_throttle
  output->error_throttle = input->error_throttle;
  // error_brake
  output->error_brake = input->error_brake;
  // error_other
  output->error_other = input->error_other;
  return true;
}

marti_dbw_msgs__msg__PrimaryFeedback *
marti_dbw_msgs__msg__PrimaryFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__PrimaryFeedback * msg = (marti_dbw_msgs__msg__PrimaryFeedback *)allocator.allocate(sizeof(marti_dbw_msgs__msg__PrimaryFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_dbw_msgs__msg__PrimaryFeedback));
  bool success = marti_dbw_msgs__msg__PrimaryFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_dbw_msgs__msg__PrimaryFeedback__destroy(marti_dbw_msgs__msg__PrimaryFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_dbw_msgs__msg__PrimaryFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_dbw_msgs__msg__PrimaryFeedback__Sequence__init(marti_dbw_msgs__msg__PrimaryFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__PrimaryFeedback * data = NULL;

  if (size) {
    data = (marti_dbw_msgs__msg__PrimaryFeedback *)allocator.zero_allocate(size, sizeof(marti_dbw_msgs__msg__PrimaryFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_dbw_msgs__msg__PrimaryFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_dbw_msgs__msg__PrimaryFeedback__fini(&data[i - 1]);
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
marti_dbw_msgs__msg__PrimaryFeedback__Sequence__fini(marti_dbw_msgs__msg__PrimaryFeedback__Sequence * array)
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
      marti_dbw_msgs__msg__PrimaryFeedback__fini(&array->data[i]);
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

marti_dbw_msgs__msg__PrimaryFeedback__Sequence *
marti_dbw_msgs__msg__PrimaryFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_dbw_msgs__msg__PrimaryFeedback__Sequence * array = (marti_dbw_msgs__msg__PrimaryFeedback__Sequence *)allocator.allocate(sizeof(marti_dbw_msgs__msg__PrimaryFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_dbw_msgs__msg__PrimaryFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_dbw_msgs__msg__PrimaryFeedback__Sequence__destroy(marti_dbw_msgs__msg__PrimaryFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_dbw_msgs__msg__PrimaryFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_dbw_msgs__msg__PrimaryFeedback__Sequence__are_equal(const marti_dbw_msgs__msg__PrimaryFeedback__Sequence * lhs, const marti_dbw_msgs__msg__PrimaryFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_dbw_msgs__msg__PrimaryFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_dbw_msgs__msg__PrimaryFeedback__Sequence__copy(
  const marti_dbw_msgs__msg__PrimaryFeedback__Sequence * input,
  marti_dbw_msgs__msg__PrimaryFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_dbw_msgs__msg__PrimaryFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_dbw_msgs__msg__PrimaryFeedback * data =
      (marti_dbw_msgs__msg__PrimaryFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_dbw_msgs__msg__PrimaryFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_dbw_msgs__msg__PrimaryFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_dbw_msgs__msg__PrimaryFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
