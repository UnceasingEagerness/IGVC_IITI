// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_sensor_msgs:msg/DioRealTimeData.idl
// generated code does not contain a copyright notice
#include "marti_sensor_msgs/msg/detail/dio_real_time_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sample_states`
// Member `sample_times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
marti_sensor_msgs__msg__DioRealTimeData__init(marti_sensor_msgs__msg__DioRealTimeData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_sensor_msgs__msg__DioRealTimeData__fini(msg);
    return false;
  }
  // sample_frequency
  // latest_sample_time
  // sample_states
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->sample_states, 0)) {
    marti_sensor_msgs__msg__DioRealTimeData__fini(msg);
    return false;
  }
  // sample_times
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->sample_times, 0)) {
    marti_sensor_msgs__msg__DioRealTimeData__fini(msg);
    return false;
  }
  return true;
}

void
marti_sensor_msgs__msg__DioRealTimeData__fini(marti_sensor_msgs__msg__DioRealTimeData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sample_frequency
  // latest_sample_time
  // sample_states
  rosidl_runtime_c__uint16__Sequence__fini(&msg->sample_states);
  // sample_times
  rosidl_runtime_c__uint32__Sequence__fini(&msg->sample_times);
}

bool
marti_sensor_msgs__msg__DioRealTimeData__are_equal(const marti_sensor_msgs__msg__DioRealTimeData * lhs, const marti_sensor_msgs__msg__DioRealTimeData * rhs)
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
  // sample_frequency
  if (lhs->sample_frequency != rhs->sample_frequency) {
    return false;
  }
  // latest_sample_time
  if (lhs->latest_sample_time != rhs->latest_sample_time) {
    return false;
  }
  // sample_states
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->sample_states), &(rhs->sample_states)))
  {
    return false;
  }
  // sample_times
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->sample_times), &(rhs->sample_times)))
  {
    return false;
  }
  return true;
}

bool
marti_sensor_msgs__msg__DioRealTimeData__copy(
  const marti_sensor_msgs__msg__DioRealTimeData * input,
  marti_sensor_msgs__msg__DioRealTimeData * output)
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
  // sample_frequency
  output->sample_frequency = input->sample_frequency;
  // latest_sample_time
  output->latest_sample_time = input->latest_sample_time;
  // sample_states
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->sample_states), &(output->sample_states)))
  {
    return false;
  }
  // sample_times
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->sample_times), &(output->sample_times)))
  {
    return false;
  }
  return true;
}

marti_sensor_msgs__msg__DioRealTimeData *
marti_sensor_msgs__msg__DioRealTimeData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__DioRealTimeData * msg = (marti_sensor_msgs__msg__DioRealTimeData *)allocator.allocate(sizeof(marti_sensor_msgs__msg__DioRealTimeData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_sensor_msgs__msg__DioRealTimeData));
  bool success = marti_sensor_msgs__msg__DioRealTimeData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_sensor_msgs__msg__DioRealTimeData__destroy(marti_sensor_msgs__msg__DioRealTimeData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_sensor_msgs__msg__DioRealTimeData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_sensor_msgs__msg__DioRealTimeData__Sequence__init(marti_sensor_msgs__msg__DioRealTimeData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__DioRealTimeData * data = NULL;

  if (size) {
    data = (marti_sensor_msgs__msg__DioRealTimeData *)allocator.zero_allocate(size, sizeof(marti_sensor_msgs__msg__DioRealTimeData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_sensor_msgs__msg__DioRealTimeData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_sensor_msgs__msg__DioRealTimeData__fini(&data[i - 1]);
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
marti_sensor_msgs__msg__DioRealTimeData__Sequence__fini(marti_sensor_msgs__msg__DioRealTimeData__Sequence * array)
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
      marti_sensor_msgs__msg__DioRealTimeData__fini(&array->data[i]);
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

marti_sensor_msgs__msg__DioRealTimeData__Sequence *
marti_sensor_msgs__msg__DioRealTimeData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__DioRealTimeData__Sequence * array = (marti_sensor_msgs__msg__DioRealTimeData__Sequence *)allocator.allocate(sizeof(marti_sensor_msgs__msg__DioRealTimeData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_sensor_msgs__msg__DioRealTimeData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_sensor_msgs__msg__DioRealTimeData__Sequence__destroy(marti_sensor_msgs__msg__DioRealTimeData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_sensor_msgs__msg__DioRealTimeData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_sensor_msgs__msg__DioRealTimeData__Sequence__are_equal(const marti_sensor_msgs__msg__DioRealTimeData__Sequence * lhs, const marti_sensor_msgs__msg__DioRealTimeData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_sensor_msgs__msg__DioRealTimeData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_sensor_msgs__msg__DioRealTimeData__Sequence__copy(
  const marti_sensor_msgs__msg__DioRealTimeData__Sequence * input,
  marti_sensor_msgs__msg__DioRealTimeData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_sensor_msgs__msg__DioRealTimeData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_sensor_msgs__msg__DioRealTimeData * data =
      (marti_sensor_msgs__msg__DioRealTimeData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_sensor_msgs__msg__DioRealTimeData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_sensor_msgs__msg__DioRealTimeData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_sensor_msgs__msg__DioRealTimeData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
