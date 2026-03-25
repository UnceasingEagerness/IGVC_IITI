// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_nav_msgs:msg/LeadVehicle.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/lead_vehicle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_nav_msgs__msg__LeadVehicle__init(marti_nav_msgs__msg__LeadVehicle * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_nav_msgs__msg__LeadVehicle__fini(msg);
    return false;
  }
  // headway_distance
  // speed
  // heading
  // x_pos
  // y_pos
  // classification
  // type
  return true;
}

void
marti_nav_msgs__msg__LeadVehicle__fini(marti_nav_msgs__msg__LeadVehicle * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // headway_distance
  // speed
  // heading
  // x_pos
  // y_pos
  // classification
  // type
}

bool
marti_nav_msgs__msg__LeadVehicle__are_equal(const marti_nav_msgs__msg__LeadVehicle * lhs, const marti_nav_msgs__msg__LeadVehicle * rhs)
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
  // headway_distance
  if (lhs->headway_distance != rhs->headway_distance) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // x_pos
  if (lhs->x_pos != rhs->x_pos) {
    return false;
  }
  // y_pos
  if (lhs->y_pos != rhs->y_pos) {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
marti_nav_msgs__msg__LeadVehicle__copy(
  const marti_nav_msgs__msg__LeadVehicle * input,
  marti_nav_msgs__msg__LeadVehicle * output)
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
  // headway_distance
  output->headway_distance = input->headway_distance;
  // speed
  output->speed = input->speed;
  // heading
  output->heading = input->heading;
  // x_pos
  output->x_pos = input->x_pos;
  // y_pos
  output->y_pos = input->y_pos;
  // classification
  output->classification = input->classification;
  // type
  output->type = input->type;
  return true;
}

marti_nav_msgs__msg__LeadVehicle *
marti_nav_msgs__msg__LeadVehicle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__LeadVehicle * msg = (marti_nav_msgs__msg__LeadVehicle *)allocator.allocate(sizeof(marti_nav_msgs__msg__LeadVehicle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__msg__LeadVehicle));
  bool success = marti_nav_msgs__msg__LeadVehicle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__msg__LeadVehicle__destroy(marti_nav_msgs__msg__LeadVehicle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__msg__LeadVehicle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__msg__LeadVehicle__Sequence__init(marti_nav_msgs__msg__LeadVehicle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__LeadVehicle * data = NULL;

  if (size) {
    data = (marti_nav_msgs__msg__LeadVehicle *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__msg__LeadVehicle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__msg__LeadVehicle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__msg__LeadVehicle__fini(&data[i - 1]);
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
marti_nav_msgs__msg__LeadVehicle__Sequence__fini(marti_nav_msgs__msg__LeadVehicle__Sequence * array)
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
      marti_nav_msgs__msg__LeadVehicle__fini(&array->data[i]);
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

marti_nav_msgs__msg__LeadVehicle__Sequence *
marti_nav_msgs__msg__LeadVehicle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__LeadVehicle__Sequence * array = (marti_nav_msgs__msg__LeadVehicle__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__msg__LeadVehicle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__msg__LeadVehicle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__msg__LeadVehicle__Sequence__destroy(marti_nav_msgs__msg__LeadVehicle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__msg__LeadVehicle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__msg__LeadVehicle__Sequence__are_equal(const marti_nav_msgs__msg__LeadVehicle__Sequence * lhs, const marti_nav_msgs__msg__LeadVehicle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__msg__LeadVehicle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__msg__LeadVehicle__Sequence__copy(
  const marti_nav_msgs__msg__LeadVehicle__Sequence * input,
  marti_nav_msgs__msg__LeadVehicle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__msg__LeadVehicle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__msg__LeadVehicle * data =
      (marti_nav_msgs__msg__LeadVehicle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__msg__LeadVehicle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__msg__LeadVehicle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__msg__LeadVehicle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
