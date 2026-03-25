// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_nav_msgs:msg/VehicleControl.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/vehicle_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_nav_msgs__msg__VehicleControl__init(marti_nav_msgs__msg__VehicleControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_nav_msgs__msg__VehicleControl__fini(msg);
    return false;
  }
  // engine
  // gear
  // steering
  // throttle
  // brake
  // steering_position
  // gb_position
  return true;
}

void
marti_nav_msgs__msg__VehicleControl__fini(marti_nav_msgs__msg__VehicleControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // engine
  // gear
  // steering
  // throttle
  // brake
  // steering_position
  // gb_position
}

bool
marti_nav_msgs__msg__VehicleControl__are_equal(const marti_nav_msgs__msg__VehicleControl * lhs, const marti_nav_msgs__msg__VehicleControl * rhs)
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
  // engine
  if (lhs->engine != rhs->engine) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // steering_position
  if (lhs->steering_position != rhs->steering_position) {
    return false;
  }
  // gb_position
  if (lhs->gb_position != rhs->gb_position) {
    return false;
  }
  return true;
}

bool
marti_nav_msgs__msg__VehicleControl__copy(
  const marti_nav_msgs__msg__VehicleControl * input,
  marti_nav_msgs__msg__VehicleControl * output)
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
  // engine
  output->engine = input->engine;
  // gear
  output->gear = input->gear;
  // steering
  output->steering = input->steering;
  // throttle
  output->throttle = input->throttle;
  // brake
  output->brake = input->brake;
  // steering_position
  output->steering_position = input->steering_position;
  // gb_position
  output->gb_position = input->gb_position;
  return true;
}

marti_nav_msgs__msg__VehicleControl *
marti_nav_msgs__msg__VehicleControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__VehicleControl * msg = (marti_nav_msgs__msg__VehicleControl *)allocator.allocate(sizeof(marti_nav_msgs__msg__VehicleControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__msg__VehicleControl));
  bool success = marti_nav_msgs__msg__VehicleControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__msg__VehicleControl__destroy(marti_nav_msgs__msg__VehicleControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__msg__VehicleControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__msg__VehicleControl__Sequence__init(marti_nav_msgs__msg__VehicleControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__VehicleControl * data = NULL;

  if (size) {
    data = (marti_nav_msgs__msg__VehicleControl *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__msg__VehicleControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__msg__VehicleControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__msg__VehicleControl__fini(&data[i - 1]);
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
marti_nav_msgs__msg__VehicleControl__Sequence__fini(marti_nav_msgs__msg__VehicleControl__Sequence * array)
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
      marti_nav_msgs__msg__VehicleControl__fini(&array->data[i]);
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

marti_nav_msgs__msg__VehicleControl__Sequence *
marti_nav_msgs__msg__VehicleControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__VehicleControl__Sequence * array = (marti_nav_msgs__msg__VehicleControl__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__msg__VehicleControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__msg__VehicleControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__msg__VehicleControl__Sequence__destroy(marti_nav_msgs__msg__VehicleControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__msg__VehicleControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__msg__VehicleControl__Sequence__are_equal(const marti_nav_msgs__msg__VehicleControl__Sequence * lhs, const marti_nav_msgs__msg__VehicleControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__msg__VehicleControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__msg__VehicleControl__Sequence__copy(
  const marti_nav_msgs__msg__VehicleControl__Sequence * input,
  marti_nav_msgs__msg__VehicleControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__msg__VehicleControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__msg__VehicleControl * data =
      (marti_nav_msgs__msg__VehicleControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__msg__VehicleControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__msg__VehicleControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__msg__VehicleControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
