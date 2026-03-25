// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_sensor_msgs:msg/DifferentialMeasurement.idl
// generated code does not contain a copyright notice
#include "marti_sensor_msgs/msg/detail/differential_measurement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `base_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
marti_sensor_msgs__msg__DifferentialMeasurement__init(marti_sensor_msgs__msg__DifferentialMeasurement * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_sensor_msgs__msg__DifferentialMeasurement__fini(msg);
    return false;
  }
  // base_frame_id
  if (!rosidl_runtime_c__String__init(&msg->base_frame_id)) {
    marti_sensor_msgs__msg__DifferentialMeasurement__fini(msg);
    return false;
  }
  // baseline_length
  // baseline_length_variance
  // heading
  // heading_variance
  // pitch
  // pitch_variance
  // roll
  // roll_variance
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    marti_sensor_msgs__msg__DifferentialMeasurement__fini(msg);
    return false;
  }
  // position_covariance
  return true;
}

void
marti_sensor_msgs__msg__DifferentialMeasurement__fini(marti_sensor_msgs__msg__DifferentialMeasurement * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // base_frame_id
  rosidl_runtime_c__String__fini(&msg->base_frame_id);
  // baseline_length
  // baseline_length_variance
  // heading
  // heading_variance
  // pitch
  // pitch_variance
  // roll
  // roll_variance
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // position_covariance
}

bool
marti_sensor_msgs__msg__DifferentialMeasurement__are_equal(const marti_sensor_msgs__msg__DifferentialMeasurement * lhs, const marti_sensor_msgs__msg__DifferentialMeasurement * rhs)
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
  // base_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->base_frame_id), &(rhs->base_frame_id)))
  {
    return false;
  }
  // baseline_length
  if (lhs->baseline_length != rhs->baseline_length) {
    return false;
  }
  // baseline_length_variance
  if (lhs->baseline_length_variance != rhs->baseline_length_variance) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // heading_variance
  if (lhs->heading_variance != rhs->heading_variance) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // pitch_variance
  if (lhs->pitch_variance != rhs->pitch_variance) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // roll_variance
  if (lhs->roll_variance != rhs->roll_variance) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->position_covariance[i] != rhs->position_covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
marti_sensor_msgs__msg__DifferentialMeasurement__copy(
  const marti_sensor_msgs__msg__DifferentialMeasurement * input,
  marti_sensor_msgs__msg__DifferentialMeasurement * output)
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
  // base_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->base_frame_id), &(output->base_frame_id)))
  {
    return false;
  }
  // baseline_length
  output->baseline_length = input->baseline_length;
  // baseline_length_variance
  output->baseline_length_variance = input->baseline_length_variance;
  // heading
  output->heading = input->heading;
  // heading_variance
  output->heading_variance = input->heading_variance;
  // pitch
  output->pitch = input->pitch;
  // pitch_variance
  output->pitch_variance = input->pitch_variance;
  // roll
  output->roll = input->roll;
  // roll_variance
  output->roll_variance = input->roll_variance;
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->position_covariance[i] = input->position_covariance[i];
  }
  return true;
}

marti_sensor_msgs__msg__DifferentialMeasurement *
marti_sensor_msgs__msg__DifferentialMeasurement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__DifferentialMeasurement * msg = (marti_sensor_msgs__msg__DifferentialMeasurement *)allocator.allocate(sizeof(marti_sensor_msgs__msg__DifferentialMeasurement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_sensor_msgs__msg__DifferentialMeasurement));
  bool success = marti_sensor_msgs__msg__DifferentialMeasurement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_sensor_msgs__msg__DifferentialMeasurement__destroy(marti_sensor_msgs__msg__DifferentialMeasurement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_sensor_msgs__msg__DifferentialMeasurement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_sensor_msgs__msg__DifferentialMeasurement__Sequence__init(marti_sensor_msgs__msg__DifferentialMeasurement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__DifferentialMeasurement * data = NULL;

  if (size) {
    data = (marti_sensor_msgs__msg__DifferentialMeasurement *)allocator.zero_allocate(size, sizeof(marti_sensor_msgs__msg__DifferentialMeasurement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_sensor_msgs__msg__DifferentialMeasurement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_sensor_msgs__msg__DifferentialMeasurement__fini(&data[i - 1]);
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
marti_sensor_msgs__msg__DifferentialMeasurement__Sequence__fini(marti_sensor_msgs__msg__DifferentialMeasurement__Sequence * array)
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
      marti_sensor_msgs__msg__DifferentialMeasurement__fini(&array->data[i]);
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

marti_sensor_msgs__msg__DifferentialMeasurement__Sequence *
marti_sensor_msgs__msg__DifferentialMeasurement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_sensor_msgs__msg__DifferentialMeasurement__Sequence * array = (marti_sensor_msgs__msg__DifferentialMeasurement__Sequence *)allocator.allocate(sizeof(marti_sensor_msgs__msg__DifferentialMeasurement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_sensor_msgs__msg__DifferentialMeasurement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_sensor_msgs__msg__DifferentialMeasurement__Sequence__destroy(marti_sensor_msgs__msg__DifferentialMeasurement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_sensor_msgs__msg__DifferentialMeasurement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_sensor_msgs__msg__DifferentialMeasurement__Sequence__are_equal(const marti_sensor_msgs__msg__DifferentialMeasurement__Sequence * lhs, const marti_sensor_msgs__msg__DifferentialMeasurement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_sensor_msgs__msg__DifferentialMeasurement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_sensor_msgs__msg__DifferentialMeasurement__Sequence__copy(
  const marti_sensor_msgs__msg__DifferentialMeasurement__Sequence * input,
  marti_sensor_msgs__msg__DifferentialMeasurement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_sensor_msgs__msg__DifferentialMeasurement);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_sensor_msgs__msg__DifferentialMeasurement * data =
      (marti_sensor_msgs__msg__DifferentialMeasurement *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_sensor_msgs__msg__DifferentialMeasurement__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_sensor_msgs__msg__DifferentialMeasurement__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_sensor_msgs__msg__DifferentialMeasurement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
