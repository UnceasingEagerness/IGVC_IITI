// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_nav_msgs:msg/RouteArray.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/route_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `routes`
#include "marti_nav_msgs/msg/detail/route__functions.h"
// Member `properties`
#include "marti_common_msgs/msg/detail/key_value__functions.h"

bool
marti_nav_msgs__msg__RouteArray__init(marti_nav_msgs__msg__RouteArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_nav_msgs__msg__RouteArray__fini(msg);
    return false;
  }
  // routes
  if (!marti_nav_msgs__msg__Route__Sequence__init(&msg->routes, 0)) {
    marti_nav_msgs__msg__RouteArray__fini(msg);
    return false;
  }
  // properties
  if (!marti_common_msgs__msg__KeyValue__Sequence__init(&msg->properties, 0)) {
    marti_nav_msgs__msg__RouteArray__fini(msg);
    return false;
  }
  return true;
}

void
marti_nav_msgs__msg__RouteArray__fini(marti_nav_msgs__msg__RouteArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // routes
  marti_nav_msgs__msg__Route__Sequence__fini(&msg->routes);
  // properties
  marti_common_msgs__msg__KeyValue__Sequence__fini(&msg->properties);
}

bool
marti_nav_msgs__msg__RouteArray__are_equal(const marti_nav_msgs__msg__RouteArray * lhs, const marti_nav_msgs__msg__RouteArray * rhs)
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
  // routes
  if (!marti_nav_msgs__msg__Route__Sequence__are_equal(
      &(lhs->routes), &(rhs->routes)))
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
marti_nav_msgs__msg__RouteArray__copy(
  const marti_nav_msgs__msg__RouteArray * input,
  marti_nav_msgs__msg__RouteArray * output)
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
  // routes
  if (!marti_nav_msgs__msg__Route__Sequence__copy(
      &(input->routes), &(output->routes)))
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

marti_nav_msgs__msg__RouteArray *
marti_nav_msgs__msg__RouteArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__RouteArray * msg = (marti_nav_msgs__msg__RouteArray *)allocator.allocate(sizeof(marti_nav_msgs__msg__RouteArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__msg__RouteArray));
  bool success = marti_nav_msgs__msg__RouteArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__msg__RouteArray__destroy(marti_nav_msgs__msg__RouteArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__msg__RouteArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__msg__RouteArray__Sequence__init(marti_nav_msgs__msg__RouteArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__RouteArray * data = NULL;

  if (size) {
    data = (marti_nav_msgs__msg__RouteArray *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__msg__RouteArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__msg__RouteArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__msg__RouteArray__fini(&data[i - 1]);
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
marti_nav_msgs__msg__RouteArray__Sequence__fini(marti_nav_msgs__msg__RouteArray__Sequence * array)
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
      marti_nav_msgs__msg__RouteArray__fini(&array->data[i]);
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

marti_nav_msgs__msg__RouteArray__Sequence *
marti_nav_msgs__msg__RouteArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__RouteArray__Sequence * array = (marti_nav_msgs__msg__RouteArray__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__msg__RouteArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__msg__RouteArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__msg__RouteArray__Sequence__destroy(marti_nav_msgs__msg__RouteArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__msg__RouteArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__msg__RouteArray__Sequence__are_equal(const marti_nav_msgs__msg__RouteArray__Sequence * lhs, const marti_nav_msgs__msg__RouteArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__msg__RouteArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__msg__RouteArray__Sequence__copy(
  const marti_nav_msgs__msg__RouteArray__Sequence * input,
  marti_nav_msgs__msg__RouteArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__msg__RouteArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__msg__RouteArray * data =
      (marti_nav_msgs__msg__RouteArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__msg__RouteArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__msg__RouteArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__msg__RouteArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
