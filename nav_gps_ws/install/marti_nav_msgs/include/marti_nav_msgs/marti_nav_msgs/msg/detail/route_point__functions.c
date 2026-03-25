// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_nav_msgs:msg/RoutePoint.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/route_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `properties`
#include "marti_common_msgs/msg/detail/key_value__functions.h"

bool
marti_nav_msgs__msg__RoutePoint__init(marti_nav_msgs__msg__RoutePoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    marti_nav_msgs__msg__RoutePoint__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    marti_nav_msgs__msg__RoutePoint__fini(msg);
    return false;
  }
  // properties
  if (!marti_common_msgs__msg__KeyValue__Sequence__init(&msg->properties, 0)) {
    marti_nav_msgs__msg__RoutePoint__fini(msg);
    return false;
  }
  return true;
}

void
marti_nav_msgs__msg__RoutePoint__fini(marti_nav_msgs__msg__RoutePoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // properties
  marti_common_msgs__msg__KeyValue__Sequence__fini(&msg->properties);
}

bool
marti_nav_msgs__msg__RoutePoint__are_equal(const marti_nav_msgs__msg__RoutePoint * lhs, const marti_nav_msgs__msg__RoutePoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // properties
  if (!marti_common_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->properties), &(rhs->properties)))
  {
    return false;
  }
  return true;
}

bool
marti_nav_msgs__msg__RoutePoint__copy(
  const marti_nav_msgs__msg__RoutePoint * input,
  marti_nav_msgs__msg__RoutePoint * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // properties
  if (!marti_common_msgs__msg__KeyValue__Sequence__copy(
      &(input->properties), &(output->properties)))
  {
    return false;
  }
  return true;
}

marti_nav_msgs__msg__RoutePoint *
marti_nav_msgs__msg__RoutePoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__RoutePoint * msg = (marti_nav_msgs__msg__RoutePoint *)allocator.allocate(sizeof(marti_nav_msgs__msg__RoutePoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__msg__RoutePoint));
  bool success = marti_nav_msgs__msg__RoutePoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__msg__RoutePoint__destroy(marti_nav_msgs__msg__RoutePoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__msg__RoutePoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__msg__RoutePoint__Sequence__init(marti_nav_msgs__msg__RoutePoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__RoutePoint * data = NULL;

  if (size) {
    data = (marti_nav_msgs__msg__RoutePoint *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__msg__RoutePoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__msg__RoutePoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__msg__RoutePoint__fini(&data[i - 1]);
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
marti_nav_msgs__msg__RoutePoint__Sequence__fini(marti_nav_msgs__msg__RoutePoint__Sequence * array)
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
      marti_nav_msgs__msg__RoutePoint__fini(&array->data[i]);
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

marti_nav_msgs__msg__RoutePoint__Sequence *
marti_nav_msgs__msg__RoutePoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__RoutePoint__Sequence * array = (marti_nav_msgs__msg__RoutePoint__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__msg__RoutePoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__msg__RoutePoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__msg__RoutePoint__Sequence__destroy(marti_nav_msgs__msg__RoutePoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__msg__RoutePoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__msg__RoutePoint__Sequence__are_equal(const marti_nav_msgs__msg__RoutePoint__Sequence * lhs, const marti_nav_msgs__msg__RoutePoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__msg__RoutePoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__msg__RoutePoint__Sequence__copy(
  const marti_nav_msgs__msg__RoutePoint__Sequence * input,
  marti_nav_msgs__msg__RoutePoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__msg__RoutePoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__msg__RoutePoint * data =
      (marti_nav_msgs__msg__RoutePoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__msg__RoutePoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__msg__RoutePoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__msg__RoutePoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
