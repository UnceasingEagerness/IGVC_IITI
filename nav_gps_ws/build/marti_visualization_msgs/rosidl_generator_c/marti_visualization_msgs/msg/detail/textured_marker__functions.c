// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_visualization_msgs:msg/TexturedMarker.idl
// generated code does not contain a copyright notice
#include "marti_visualization_msgs/msg/detail/textured_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ns`
#include "rosidl_runtime_c/string_functions.h"
// Member `lifetime`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
marti_visualization_msgs__msg__TexturedMarker__init(marti_visualization_msgs__msg__TexturedMarker * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_visualization_msgs__msg__TexturedMarker__fini(msg);
    return false;
  }
  // ns
  if (!rosidl_runtime_c__String__init(&msg->ns)) {
    marti_visualization_msgs__msg__TexturedMarker__fini(msg);
    return false;
  }
  // id
  // action
  // lifetime
  if (!builtin_interfaces__msg__Duration__init(&msg->lifetime)) {
    marti_visualization_msgs__msg__TexturedMarker__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    marti_visualization_msgs__msg__TexturedMarker__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    marti_visualization_msgs__msg__TexturedMarker__fini(msg);
    return false;
  }
  // resolution
  // alpha
  return true;
}

void
marti_visualization_msgs__msg__TexturedMarker__fini(marti_visualization_msgs__msg__TexturedMarker * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ns
  rosidl_runtime_c__String__fini(&msg->ns);
  // id
  // action
  // lifetime
  builtin_interfaces__msg__Duration__fini(&msg->lifetime);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // resolution
  // alpha
}

bool
marti_visualization_msgs__msg__TexturedMarker__are_equal(const marti_visualization_msgs__msg__TexturedMarker * lhs, const marti_visualization_msgs__msg__TexturedMarker * rhs)
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
  // ns
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ns), &(rhs->ns)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->lifetime), &(rhs->lifetime)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // alpha
  if (lhs->alpha != rhs->alpha) {
    return false;
  }
  return true;
}

bool
marti_visualization_msgs__msg__TexturedMarker__copy(
  const marti_visualization_msgs__msg__TexturedMarker * input,
  marti_visualization_msgs__msg__TexturedMarker * output)
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
  // ns
  if (!rosidl_runtime_c__String__copy(
      &(input->ns), &(output->ns)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // action
  output->action = input->action;
  // lifetime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->lifetime), &(output->lifetime)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  // alpha
  output->alpha = input->alpha;
  return true;
}

marti_visualization_msgs__msg__TexturedMarker *
marti_visualization_msgs__msg__TexturedMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_visualization_msgs__msg__TexturedMarker * msg = (marti_visualization_msgs__msg__TexturedMarker *)allocator.allocate(sizeof(marti_visualization_msgs__msg__TexturedMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_visualization_msgs__msg__TexturedMarker));
  bool success = marti_visualization_msgs__msg__TexturedMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_visualization_msgs__msg__TexturedMarker__destroy(marti_visualization_msgs__msg__TexturedMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_visualization_msgs__msg__TexturedMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_visualization_msgs__msg__TexturedMarker__Sequence__init(marti_visualization_msgs__msg__TexturedMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_visualization_msgs__msg__TexturedMarker * data = NULL;

  if (size) {
    data = (marti_visualization_msgs__msg__TexturedMarker *)allocator.zero_allocate(size, sizeof(marti_visualization_msgs__msg__TexturedMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_visualization_msgs__msg__TexturedMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_visualization_msgs__msg__TexturedMarker__fini(&data[i - 1]);
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
marti_visualization_msgs__msg__TexturedMarker__Sequence__fini(marti_visualization_msgs__msg__TexturedMarker__Sequence * array)
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
      marti_visualization_msgs__msg__TexturedMarker__fini(&array->data[i]);
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

marti_visualization_msgs__msg__TexturedMarker__Sequence *
marti_visualization_msgs__msg__TexturedMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_visualization_msgs__msg__TexturedMarker__Sequence * array = (marti_visualization_msgs__msg__TexturedMarker__Sequence *)allocator.allocate(sizeof(marti_visualization_msgs__msg__TexturedMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_visualization_msgs__msg__TexturedMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_visualization_msgs__msg__TexturedMarker__Sequence__destroy(marti_visualization_msgs__msg__TexturedMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_visualization_msgs__msg__TexturedMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_visualization_msgs__msg__TexturedMarker__Sequence__are_equal(const marti_visualization_msgs__msg__TexturedMarker__Sequence * lhs, const marti_visualization_msgs__msg__TexturedMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_visualization_msgs__msg__TexturedMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_visualization_msgs__msg__TexturedMarker__Sequence__copy(
  const marti_visualization_msgs__msg__TexturedMarker__Sequence * input,
  marti_visualization_msgs__msg__TexturedMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_visualization_msgs__msg__TexturedMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_visualization_msgs__msg__TexturedMarker * data =
      (marti_visualization_msgs__msg__TexturedMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_visualization_msgs__msg__TexturedMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_visualization_msgs__msg__TexturedMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_visualization_msgs__msg__TexturedMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
