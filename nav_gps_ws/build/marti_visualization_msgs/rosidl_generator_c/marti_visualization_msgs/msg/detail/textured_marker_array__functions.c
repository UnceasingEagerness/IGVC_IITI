// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_visualization_msgs:msg/TexturedMarkerArray.idl
// generated code does not contain a copyright notice
#include "marti_visualization_msgs/msg/detail/textured_marker_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `markers`
#include "marti_visualization_msgs/msg/detail/textured_marker__functions.h"

bool
marti_visualization_msgs__msg__TexturedMarkerArray__init(marti_visualization_msgs__msg__TexturedMarkerArray * msg)
{
  if (!msg) {
    return false;
  }
  // markers
  if (!marti_visualization_msgs__msg__TexturedMarker__Sequence__init(&msg->markers, 0)) {
    marti_visualization_msgs__msg__TexturedMarkerArray__fini(msg);
    return false;
  }
  return true;
}

void
marti_visualization_msgs__msg__TexturedMarkerArray__fini(marti_visualization_msgs__msg__TexturedMarkerArray * msg)
{
  if (!msg) {
    return;
  }
  // markers
  marti_visualization_msgs__msg__TexturedMarker__Sequence__fini(&msg->markers);
}

bool
marti_visualization_msgs__msg__TexturedMarkerArray__are_equal(const marti_visualization_msgs__msg__TexturedMarkerArray * lhs, const marti_visualization_msgs__msg__TexturedMarkerArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // markers
  if (!marti_visualization_msgs__msg__TexturedMarker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  return true;
}

bool
marti_visualization_msgs__msg__TexturedMarkerArray__copy(
  const marti_visualization_msgs__msg__TexturedMarkerArray * input,
  marti_visualization_msgs__msg__TexturedMarkerArray * output)
{
  if (!input || !output) {
    return false;
  }
  // markers
  if (!marti_visualization_msgs__msg__TexturedMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  return true;
}

marti_visualization_msgs__msg__TexturedMarkerArray *
marti_visualization_msgs__msg__TexturedMarkerArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_visualization_msgs__msg__TexturedMarkerArray * msg = (marti_visualization_msgs__msg__TexturedMarkerArray *)allocator.allocate(sizeof(marti_visualization_msgs__msg__TexturedMarkerArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_visualization_msgs__msg__TexturedMarkerArray));
  bool success = marti_visualization_msgs__msg__TexturedMarkerArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_visualization_msgs__msg__TexturedMarkerArray__destroy(marti_visualization_msgs__msg__TexturedMarkerArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_visualization_msgs__msg__TexturedMarkerArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__init(marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_visualization_msgs__msg__TexturedMarkerArray * data = NULL;

  if (size) {
    data = (marti_visualization_msgs__msg__TexturedMarkerArray *)allocator.zero_allocate(size, sizeof(marti_visualization_msgs__msg__TexturedMarkerArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_visualization_msgs__msg__TexturedMarkerArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_visualization_msgs__msg__TexturedMarkerArray__fini(&data[i - 1]);
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
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__fini(marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * array)
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
      marti_visualization_msgs__msg__TexturedMarkerArray__fini(&array->data[i]);
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

marti_visualization_msgs__msg__TexturedMarkerArray__Sequence *
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * array = (marti_visualization_msgs__msg__TexturedMarkerArray__Sequence *)allocator.allocate(sizeof(marti_visualization_msgs__msg__TexturedMarkerArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__destroy(marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__are_equal(const marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * lhs, const marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_visualization_msgs__msg__TexturedMarkerArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_visualization_msgs__msg__TexturedMarkerArray__Sequence__copy(
  const marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * input,
  marti_visualization_msgs__msg__TexturedMarkerArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_visualization_msgs__msg__TexturedMarkerArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_visualization_msgs__msg__TexturedMarkerArray * data =
      (marti_visualization_msgs__msg__TexturedMarkerArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_visualization_msgs__msg__TexturedMarkerArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_visualization_msgs__msg__TexturedMarkerArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_visualization_msgs__msg__TexturedMarkerArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
