// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_perception_msgs:msg/PedestrianImageID.idl
// generated code does not contain a copyright notice
#include "marti_perception_msgs/msg/detail/pedestrian_image_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_perception_msgs__msg__PedestrianImageID__init(marti_perception_msgs__msg__PedestrianImageID * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_perception_msgs__msg__PedestrianImageID__fini(msg);
    return false;
  }
  // pixel_x
  // pixel_y
  // image_width
  // image_height
  return true;
}

void
marti_perception_msgs__msg__PedestrianImageID__fini(marti_perception_msgs__msg__PedestrianImageID * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pixel_x
  // pixel_y
  // image_width
  // image_height
}

bool
marti_perception_msgs__msg__PedestrianImageID__are_equal(const marti_perception_msgs__msg__PedestrianImageID * lhs, const marti_perception_msgs__msg__PedestrianImageID * rhs)
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
  // pixel_x
  if (lhs->pixel_x != rhs->pixel_x) {
    return false;
  }
  // pixel_y
  if (lhs->pixel_y != rhs->pixel_y) {
    return false;
  }
  // image_width
  if (lhs->image_width != rhs->image_width) {
    return false;
  }
  // image_height
  if (lhs->image_height != rhs->image_height) {
    return false;
  }
  return true;
}

bool
marti_perception_msgs__msg__PedestrianImageID__copy(
  const marti_perception_msgs__msg__PedestrianImageID * input,
  marti_perception_msgs__msg__PedestrianImageID * output)
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
  // pixel_x
  output->pixel_x = input->pixel_x;
  // pixel_y
  output->pixel_y = input->pixel_y;
  // image_width
  output->image_width = input->image_width;
  // image_height
  output->image_height = input->image_height;
  return true;
}

marti_perception_msgs__msg__PedestrianImageID *
marti_perception_msgs__msg__PedestrianImageID__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_perception_msgs__msg__PedestrianImageID * msg = (marti_perception_msgs__msg__PedestrianImageID *)allocator.allocate(sizeof(marti_perception_msgs__msg__PedestrianImageID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_perception_msgs__msg__PedestrianImageID));
  bool success = marti_perception_msgs__msg__PedestrianImageID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_perception_msgs__msg__PedestrianImageID__destroy(marti_perception_msgs__msg__PedestrianImageID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_perception_msgs__msg__PedestrianImageID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_perception_msgs__msg__PedestrianImageID__Sequence__init(marti_perception_msgs__msg__PedestrianImageID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_perception_msgs__msg__PedestrianImageID * data = NULL;

  if (size) {
    data = (marti_perception_msgs__msg__PedestrianImageID *)allocator.zero_allocate(size, sizeof(marti_perception_msgs__msg__PedestrianImageID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_perception_msgs__msg__PedestrianImageID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_perception_msgs__msg__PedestrianImageID__fini(&data[i - 1]);
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
marti_perception_msgs__msg__PedestrianImageID__Sequence__fini(marti_perception_msgs__msg__PedestrianImageID__Sequence * array)
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
      marti_perception_msgs__msg__PedestrianImageID__fini(&array->data[i]);
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

marti_perception_msgs__msg__PedestrianImageID__Sequence *
marti_perception_msgs__msg__PedestrianImageID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_perception_msgs__msg__PedestrianImageID__Sequence * array = (marti_perception_msgs__msg__PedestrianImageID__Sequence *)allocator.allocate(sizeof(marti_perception_msgs__msg__PedestrianImageID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_perception_msgs__msg__PedestrianImageID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_perception_msgs__msg__PedestrianImageID__Sequence__destroy(marti_perception_msgs__msg__PedestrianImageID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_perception_msgs__msg__PedestrianImageID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_perception_msgs__msg__PedestrianImageID__Sequence__are_equal(const marti_perception_msgs__msg__PedestrianImageID__Sequence * lhs, const marti_perception_msgs__msg__PedestrianImageID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_perception_msgs__msg__PedestrianImageID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_perception_msgs__msg__PedestrianImageID__Sequence__copy(
  const marti_perception_msgs__msg__PedestrianImageID__Sequence * input,
  marti_perception_msgs__msg__PedestrianImageID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_perception_msgs__msg__PedestrianImageID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_perception_msgs__msg__PedestrianImageID * data =
      (marti_perception_msgs__msg__PedestrianImageID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_perception_msgs__msg__PedestrianImageID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_perception_msgs__msg__PedestrianImageID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_perception_msgs__msg__PedestrianImageID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
