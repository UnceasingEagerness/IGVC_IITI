// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_nav_msgs:msg/GridMap.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/grid_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `top_left`
// Member `top_right`
// Member `bottom_right`
// Member `bottom_left`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `map_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `map_data`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
marti_nav_msgs__msg__GridMap__init(marti_nav_msgs__msg__GridMap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_nav_msgs__msg__GridMap__fini(msg);
    return false;
  }
  // top_left
  if (!geometry_msgs__msg__Point__init(&msg->top_left)) {
    marti_nav_msgs__msg__GridMap__fini(msg);
    return false;
  }
  // top_right
  if (!geometry_msgs__msg__Point__init(&msg->top_right)) {
    marti_nav_msgs__msg__GridMap__fini(msg);
    return false;
  }
  // bottom_right
  if (!geometry_msgs__msg__Point__init(&msg->bottom_right)) {
    marti_nav_msgs__msg__GridMap__fini(msg);
    return false;
  }
  // bottom_left
  if (!geometry_msgs__msg__Point__init(&msg->bottom_left)) {
    marti_nav_msgs__msg__GridMap__fini(msg);
    return false;
  }
  // map_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->map_names, 0)) {
    marti_nav_msgs__msg__GridMap__fini(msg);
    return false;
  }
  // map_data
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->map_data, 0)) {
    marti_nav_msgs__msg__GridMap__fini(msg);
    return false;
  }
  return true;
}

void
marti_nav_msgs__msg__GridMap__fini(marti_nav_msgs__msg__GridMap * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // top_left
  geometry_msgs__msg__Point__fini(&msg->top_left);
  // top_right
  geometry_msgs__msg__Point__fini(&msg->top_right);
  // bottom_right
  geometry_msgs__msg__Point__fini(&msg->bottom_right);
  // bottom_left
  geometry_msgs__msg__Point__fini(&msg->bottom_left);
  // map_names
  rosidl_runtime_c__String__Sequence__fini(&msg->map_names);
  // map_data
  sensor_msgs__msg__Image__Sequence__fini(&msg->map_data);
}

bool
marti_nav_msgs__msg__GridMap__are_equal(const marti_nav_msgs__msg__GridMap * lhs, const marti_nav_msgs__msg__GridMap * rhs)
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
  // top_left
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->top_left), &(rhs->top_left)))
  {
    return false;
  }
  // top_right
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->top_right), &(rhs->top_right)))
  {
    return false;
  }
  // bottom_right
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->bottom_right), &(rhs->bottom_right)))
  {
    return false;
  }
  // bottom_left
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->bottom_left), &(rhs->bottom_left)))
  {
    return false;
  }
  // map_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->map_names), &(rhs->map_names)))
  {
    return false;
  }
  // map_data
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->map_data), &(rhs->map_data)))
  {
    return false;
  }
  return true;
}

bool
marti_nav_msgs__msg__GridMap__copy(
  const marti_nav_msgs__msg__GridMap * input,
  marti_nav_msgs__msg__GridMap * output)
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
  // top_left
  if (!geometry_msgs__msg__Point__copy(
      &(input->top_left), &(output->top_left)))
  {
    return false;
  }
  // top_right
  if (!geometry_msgs__msg__Point__copy(
      &(input->top_right), &(output->top_right)))
  {
    return false;
  }
  // bottom_right
  if (!geometry_msgs__msg__Point__copy(
      &(input->bottom_right), &(output->bottom_right)))
  {
    return false;
  }
  // bottom_left
  if (!geometry_msgs__msg__Point__copy(
      &(input->bottom_left), &(output->bottom_left)))
  {
    return false;
  }
  // map_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->map_names), &(output->map_names)))
  {
    return false;
  }
  // map_data
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->map_data), &(output->map_data)))
  {
    return false;
  }
  return true;
}

marti_nav_msgs__msg__GridMap *
marti_nav_msgs__msg__GridMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__GridMap * msg = (marti_nav_msgs__msg__GridMap *)allocator.allocate(sizeof(marti_nav_msgs__msg__GridMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__msg__GridMap));
  bool success = marti_nav_msgs__msg__GridMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__msg__GridMap__destroy(marti_nav_msgs__msg__GridMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__msg__GridMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__msg__GridMap__Sequence__init(marti_nav_msgs__msg__GridMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__GridMap * data = NULL;

  if (size) {
    data = (marti_nav_msgs__msg__GridMap *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__msg__GridMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__msg__GridMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__msg__GridMap__fini(&data[i - 1]);
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
marti_nav_msgs__msg__GridMap__Sequence__fini(marti_nav_msgs__msg__GridMap__Sequence * array)
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
      marti_nav_msgs__msg__GridMap__fini(&array->data[i]);
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

marti_nav_msgs__msg__GridMap__Sequence *
marti_nav_msgs__msg__GridMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__GridMap__Sequence * array = (marti_nav_msgs__msg__GridMap__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__msg__GridMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__msg__GridMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__msg__GridMap__Sequence__destroy(marti_nav_msgs__msg__GridMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__msg__GridMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__msg__GridMap__Sequence__are_equal(const marti_nav_msgs__msg__GridMap__Sequence * lhs, const marti_nav_msgs__msg__GridMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__msg__GridMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__msg__GridMap__Sequence__copy(
  const marti_nav_msgs__msg__GridMap__Sequence * input,
  marti_nav_msgs__msg__GridMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__msg__GridMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__msg__GridMap * data =
      (marti_nav_msgs__msg__GridMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__msg__GridMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__msg__GridMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__msg__GridMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
