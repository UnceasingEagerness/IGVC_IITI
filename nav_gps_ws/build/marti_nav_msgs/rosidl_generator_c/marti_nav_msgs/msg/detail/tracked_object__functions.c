// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_nav_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/tracked_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `age_duration`
// Member `prediction_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
marti_nav_msgs__msg__TrackedObject__init(marti_nav_msgs__msg__TrackedObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_nav_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    marti_nav_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->velocity)) {
    marti_nav_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    marti_nav_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // linear_acceleration_covariance
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->polygon, 0)) {
    marti_nav_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // length
  // length_quality
  // width
  // width_quality
  // classification
  // classification_quality
  // existence_probability
  // age_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->age_duration)) {
    marti_nav_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // prediction_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->prediction_duration)) {
    marti_nav_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // active
  return true;
}

void
marti_nav_msgs__msg__TrackedObject__fini(marti_nav_msgs__msg__TrackedObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // velocity
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->velocity);
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
  // linear_acceleration_covariance
  // polygon
  geometry_msgs__msg__Point__Sequence__fini(&msg->polygon);
  // length
  // length_quality
  // width
  // width_quality
  // classification
  // classification_quality
  // existence_probability
  // age_duration
  builtin_interfaces__msg__Duration__fini(&msg->age_duration);
  // prediction_duration
  builtin_interfaces__msg__Duration__fini(&msg->prediction_duration);
  // active
}

bool
marti_nav_msgs__msg__TrackedObject__are_equal(const marti_nav_msgs__msg__TrackedObject * lhs, const marti_nav_msgs__msg__TrackedObject * rhs)
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
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // linear_acceleration_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->linear_acceleration_covariance[i] != rhs->linear_acceleration_covariance[i]) {
      return false;
    }
  }
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // length_quality
  if (lhs->length_quality != rhs->length_quality) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // width_quality
  if (lhs->width_quality != rhs->width_quality) {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // classification_quality
  if (lhs->classification_quality != rhs->classification_quality) {
    return false;
  }
  // existence_probability
  if (lhs->existence_probability != rhs->existence_probability) {
    return false;
  }
  // age_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->age_duration), &(rhs->age_duration)))
  {
    return false;
  }
  // prediction_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->prediction_duration), &(rhs->prediction_duration)))
  {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  return true;
}

bool
marti_nav_msgs__msg__TrackedObject__copy(
  const marti_nav_msgs__msg__TrackedObject * input,
  marti_nav_msgs__msg__TrackedObject * output)
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
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // linear_acceleration_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->linear_acceleration_covariance[i] = input->linear_acceleration_covariance[i];
  }
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  // length
  output->length = input->length;
  // length_quality
  output->length_quality = input->length_quality;
  // width
  output->width = input->width;
  // width_quality
  output->width_quality = input->width_quality;
  // classification
  output->classification = input->classification;
  // classification_quality
  output->classification_quality = input->classification_quality;
  // existence_probability
  output->existence_probability = input->existence_probability;
  // age_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->age_duration), &(output->age_duration)))
  {
    return false;
  }
  // prediction_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->prediction_duration), &(output->prediction_duration)))
  {
    return false;
  }
  // active
  output->active = input->active;
  return true;
}

marti_nav_msgs__msg__TrackedObject *
marti_nav_msgs__msg__TrackedObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__TrackedObject * msg = (marti_nav_msgs__msg__TrackedObject *)allocator.allocate(sizeof(marti_nav_msgs__msg__TrackedObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__msg__TrackedObject));
  bool success = marti_nav_msgs__msg__TrackedObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__msg__TrackedObject__destroy(marti_nav_msgs__msg__TrackedObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__msg__TrackedObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__msg__TrackedObject__Sequence__init(marti_nav_msgs__msg__TrackedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__TrackedObject * data = NULL;

  if (size) {
    data = (marti_nav_msgs__msg__TrackedObject *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__msg__TrackedObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__msg__TrackedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__msg__TrackedObject__fini(&data[i - 1]);
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
marti_nav_msgs__msg__TrackedObject__Sequence__fini(marti_nav_msgs__msg__TrackedObject__Sequence * array)
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
      marti_nav_msgs__msg__TrackedObject__fini(&array->data[i]);
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

marti_nav_msgs__msg__TrackedObject__Sequence *
marti_nav_msgs__msg__TrackedObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__TrackedObject__Sequence * array = (marti_nav_msgs__msg__TrackedObject__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__msg__TrackedObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__msg__TrackedObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__msg__TrackedObject__Sequence__destroy(marti_nav_msgs__msg__TrackedObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__msg__TrackedObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__msg__TrackedObject__Sequence__are_equal(const marti_nav_msgs__msg__TrackedObject__Sequence * lhs, const marti_nav_msgs__msg__TrackedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__msg__TrackedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__msg__TrackedObject__Sequence__copy(
  const marti_nav_msgs__msg__TrackedObject__Sequence * input,
  marti_nav_msgs__msg__TrackedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__msg__TrackedObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__msg__TrackedObject * data =
      (marti_nav_msgs__msg__TrackedObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__msg__TrackedObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__msg__TrackedObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__msg__TrackedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
