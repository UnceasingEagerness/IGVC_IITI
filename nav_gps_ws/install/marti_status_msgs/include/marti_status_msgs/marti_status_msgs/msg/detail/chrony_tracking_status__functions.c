// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_status_msgs:msg/ChronyTrackingStatus.idl
// generated code does not contain a copyright notice
#include "marti_status_msgs/msg/detail/chrony_tracking_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `reference`
// Member `leap_status`
#include "rosidl_runtime_c/string_functions.h"

bool
marti_status_msgs__msg__ChronyTrackingStatus__init(marti_status_msgs__msg__ChronyTrackingStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_status_msgs__msg__ChronyTrackingStatus__fini(msg);
    return false;
  }
  // reference
  if (!rosidl_runtime_c__String__init(&msg->reference)) {
    marti_status_msgs__msg__ChronyTrackingStatus__fini(msg);
    return false;
  }
  // stratum
  // system_time_offset
  // last_offset
  // rms_offset
  // frequency_offset
  // residual_frequency
  // skew
  // root_delay
  // root_dispersion
  // update_interval
  // leap_status
  if (!rosidl_runtime_c__String__init(&msg->leap_status)) {
    marti_status_msgs__msg__ChronyTrackingStatus__fini(msg);
    return false;
  }
  return true;
}

void
marti_status_msgs__msg__ChronyTrackingStatus__fini(marti_status_msgs__msg__ChronyTrackingStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // reference
  rosidl_runtime_c__String__fini(&msg->reference);
  // stratum
  // system_time_offset
  // last_offset
  // rms_offset
  // frequency_offset
  // residual_frequency
  // skew
  // root_delay
  // root_dispersion
  // update_interval
  // leap_status
  rosidl_runtime_c__String__fini(&msg->leap_status);
}

bool
marti_status_msgs__msg__ChronyTrackingStatus__are_equal(const marti_status_msgs__msg__ChronyTrackingStatus * lhs, const marti_status_msgs__msg__ChronyTrackingStatus * rhs)
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
  // reference
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reference), &(rhs->reference)))
  {
    return false;
  }
  // stratum
  if (lhs->stratum != rhs->stratum) {
    return false;
  }
  // system_time_offset
  if (lhs->system_time_offset != rhs->system_time_offset) {
    return false;
  }
  // last_offset
  if (lhs->last_offset != rhs->last_offset) {
    return false;
  }
  // rms_offset
  if (lhs->rms_offset != rhs->rms_offset) {
    return false;
  }
  // frequency_offset
  if (lhs->frequency_offset != rhs->frequency_offset) {
    return false;
  }
  // residual_frequency
  if (lhs->residual_frequency != rhs->residual_frequency) {
    return false;
  }
  // skew
  if (lhs->skew != rhs->skew) {
    return false;
  }
  // root_delay
  if (lhs->root_delay != rhs->root_delay) {
    return false;
  }
  // root_dispersion
  if (lhs->root_dispersion != rhs->root_dispersion) {
    return false;
  }
  // update_interval
  if (lhs->update_interval != rhs->update_interval) {
    return false;
  }
  // leap_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->leap_status), &(rhs->leap_status)))
  {
    return false;
  }
  return true;
}

bool
marti_status_msgs__msg__ChronyTrackingStatus__copy(
  const marti_status_msgs__msg__ChronyTrackingStatus * input,
  marti_status_msgs__msg__ChronyTrackingStatus * output)
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
  // reference
  if (!rosidl_runtime_c__String__copy(
      &(input->reference), &(output->reference)))
  {
    return false;
  }
  // stratum
  output->stratum = input->stratum;
  // system_time_offset
  output->system_time_offset = input->system_time_offset;
  // last_offset
  output->last_offset = input->last_offset;
  // rms_offset
  output->rms_offset = input->rms_offset;
  // frequency_offset
  output->frequency_offset = input->frequency_offset;
  // residual_frequency
  output->residual_frequency = input->residual_frequency;
  // skew
  output->skew = input->skew;
  // root_delay
  output->root_delay = input->root_delay;
  // root_dispersion
  output->root_dispersion = input->root_dispersion;
  // update_interval
  output->update_interval = input->update_interval;
  // leap_status
  if (!rosidl_runtime_c__String__copy(
      &(input->leap_status), &(output->leap_status)))
  {
    return false;
  }
  return true;
}

marti_status_msgs__msg__ChronyTrackingStatus *
marti_status_msgs__msg__ChronyTrackingStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_status_msgs__msg__ChronyTrackingStatus * msg = (marti_status_msgs__msg__ChronyTrackingStatus *)allocator.allocate(sizeof(marti_status_msgs__msg__ChronyTrackingStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_status_msgs__msg__ChronyTrackingStatus));
  bool success = marti_status_msgs__msg__ChronyTrackingStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_status_msgs__msg__ChronyTrackingStatus__destroy(marti_status_msgs__msg__ChronyTrackingStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_status_msgs__msg__ChronyTrackingStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_status_msgs__msg__ChronyTrackingStatus__Sequence__init(marti_status_msgs__msg__ChronyTrackingStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_status_msgs__msg__ChronyTrackingStatus * data = NULL;

  if (size) {
    data = (marti_status_msgs__msg__ChronyTrackingStatus *)allocator.zero_allocate(size, sizeof(marti_status_msgs__msg__ChronyTrackingStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_status_msgs__msg__ChronyTrackingStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_status_msgs__msg__ChronyTrackingStatus__fini(&data[i - 1]);
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
marti_status_msgs__msg__ChronyTrackingStatus__Sequence__fini(marti_status_msgs__msg__ChronyTrackingStatus__Sequence * array)
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
      marti_status_msgs__msg__ChronyTrackingStatus__fini(&array->data[i]);
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

marti_status_msgs__msg__ChronyTrackingStatus__Sequence *
marti_status_msgs__msg__ChronyTrackingStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_status_msgs__msg__ChronyTrackingStatus__Sequence * array = (marti_status_msgs__msg__ChronyTrackingStatus__Sequence *)allocator.allocate(sizeof(marti_status_msgs__msg__ChronyTrackingStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_status_msgs__msg__ChronyTrackingStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_status_msgs__msg__ChronyTrackingStatus__Sequence__destroy(marti_status_msgs__msg__ChronyTrackingStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_status_msgs__msg__ChronyTrackingStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_status_msgs__msg__ChronyTrackingStatus__Sequence__are_equal(const marti_status_msgs__msg__ChronyTrackingStatus__Sequence * lhs, const marti_status_msgs__msg__ChronyTrackingStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_status_msgs__msg__ChronyTrackingStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_status_msgs__msg__ChronyTrackingStatus__Sequence__copy(
  const marti_status_msgs__msg__ChronyTrackingStatus__Sequence * input,
  marti_status_msgs__msg__ChronyTrackingStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_status_msgs__msg__ChronyTrackingStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_status_msgs__msg__ChronyTrackingStatus * data =
      (marti_status_msgs__msg__ChronyTrackingStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_status_msgs__msg__ChronyTrackingStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_status_msgs__msg__ChronyTrackingStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_status_msgs__msg__ChronyTrackingStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
