// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_sensor_msgs:msg/WheelEncoderSet.idl
// generated code does not contain a copyright notice
#include "marti_sensor_msgs/msg/detail/wheel_encoder_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `encoders`
#include "marti_sensor_msgs/msg/detail/wheel_encoder__functions.h"

bool
marti_sensor_msgs__msg__WheelEncoderSet__init(marti_sensor_msgs__msg__WheelEncoderSet * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_sensor_msgs__msg__WheelEncoderSet__fini(msg);
    return false;
  }
  // encoders
  if (!marti_sensor_msgs__msg__WheelEncoder__Sequence__init(&msg->encoders, 0)) {
    marti_sensor_msgs__msg__WheelEncoderSet__fini(msg);
    return false;
  }
  return true;
}

void
marti_sensor_msgs__msg__WheelEncoderSet__fini(marti_sensor_msgs__msg__WheelEncoderSet * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // encoders
  marti_sensor_msgs__msg__WheelEncoder__Sequence__fini(&msg->encoders);
}

bool
marti_sensor_msgs__msg__WheelEncoderSet__are_equal(const marti_sensor_msgs__msg__WheelEncoderSet * lhs, const marti_sensor_msgs__msg__WheelEncoderSet * rhs)
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
  // encoders
  if (!marti_sensor_msgs__msg__WheelEncoder__Sequence__are_equal(
      &(lhs->encoders), &(rhs->encoders)))
  {
    return false;
  }
  return true;
}

bool
marti_sensor_msgs__msg__WheelEncoderSet__copy(
  const marti_sensor_msgs__msg__WheelEncoderSet * input,
  marti_sensor_msgs__msg__WheelEncoderSet * output)
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
  // encoders
  if (!marti_sensor_msgs__msg__WheelEncoder__Sequence__copy(
      &(input->encoders), &(output->encoders)))
  {
    return false;
  }
  return true;
}

marti_sensor_msgs__msg__WheelEncoderSet *
marti_sensor_msgs__msg__WheelEncoderSet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__WheelEncoderSet * msg = (marti_sensor_msgs__msg__WheelEncoderSet *)allocator.allocate(sizeof(marti_sensor_msgs__msg__WheelEncoderSet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_sensor_msgs__msg__WheelEncoderSet));
  bool success = marti_sensor_msgs__msg__WheelEncoderSet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_sensor_msgs__msg__WheelEncoderSet__destroy(marti_sensor_msgs__msg__WheelEncoderSet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_sensor_msgs__msg__WheelEncoderSet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_sensor_msgs__msg__WheelEncoderSet__Sequence__init(marti_sensor_msgs__msg__WheelEncoderSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__WheelEncoderSet * data = NULL;

  if (size) {
    data = (marti_sensor_msgs__msg__WheelEncoderSet *)allocator.zero_allocate(size, sizeof(marti_sensor_msgs__msg__WheelEncoderSet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_sensor_msgs__msg__WheelEncoderSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_sensor_msgs__msg__WheelEncoderSet__fini(&data[i - 1]);
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
marti_sensor_msgs__msg__WheelEncoderSet__Sequence__fini(marti_sensor_msgs__msg__WheelEncoderSet__Sequence * array)
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
      marti_sensor_msgs__msg__WheelEncoderSet__fini(&array->data[i]);
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

marti_sensor_msgs__msg__WheelEncoderSet__Sequence *
marti_sensor_msgs__msg__WheelEncoderSet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__WheelEncoderSet__Sequence * array = (marti_sensor_msgs__msg__WheelEncoderSet__Sequence *)allocator.allocate(sizeof(marti_sensor_msgs__msg__WheelEncoderSet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_sensor_msgs__msg__WheelEncoderSet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_sensor_msgs__msg__WheelEncoderSet__Sequence__destroy(marti_sensor_msgs__msg__WheelEncoderSet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_sensor_msgs__msg__WheelEncoderSet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_sensor_msgs__msg__WheelEncoderSet__Sequence__are_equal(const marti_sensor_msgs__msg__WheelEncoderSet__Sequence * lhs, const marti_sensor_msgs__msg__WheelEncoderSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_sensor_msgs__msg__WheelEncoderSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_sensor_msgs__msg__WheelEncoderSet__Sequence__copy(
  const marti_sensor_msgs__msg__WheelEncoderSet__Sequence * input,
  marti_sensor_msgs__msg__WheelEncoderSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_sensor_msgs__msg__WheelEncoderSet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_sensor_msgs__msg__WheelEncoderSet * data =
      (marti_sensor_msgs__msg__WheelEncoderSet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_sensor_msgs__msg__WheelEncoderSet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_sensor_msgs__msg__WheelEncoderSet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_sensor_msgs__msg__WheelEncoderSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
