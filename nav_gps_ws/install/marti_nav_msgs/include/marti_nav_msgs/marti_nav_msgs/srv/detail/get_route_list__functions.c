// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_nav_msgs:srv/GetRouteList.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/srv/detail/get_route_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
marti_nav_msgs__srv__GetRouteList_Request__init(marti_nav_msgs__srv__GetRouteList_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
marti_nav_msgs__srv__GetRouteList_Request__fini(marti_nav_msgs__srv__GetRouteList_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
marti_nav_msgs__srv__GetRouteList_Request__are_equal(const marti_nav_msgs__srv__GetRouteList_Request * lhs, const marti_nav_msgs__srv__GetRouteList_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
marti_nav_msgs__srv__GetRouteList_Request__copy(
  const marti_nav_msgs__srv__GetRouteList_Request * input,
  marti_nav_msgs__srv__GetRouteList_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

marti_nav_msgs__srv__GetRouteList_Request *
marti_nav_msgs__srv__GetRouteList_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__srv__GetRouteList_Request * msg = (marti_nav_msgs__srv__GetRouteList_Request *)allocator.allocate(sizeof(marti_nav_msgs__srv__GetRouteList_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__srv__GetRouteList_Request));
  bool success = marti_nav_msgs__srv__GetRouteList_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__srv__GetRouteList_Request__destroy(marti_nav_msgs__srv__GetRouteList_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__srv__GetRouteList_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__srv__GetRouteList_Request__Sequence__init(marti_nav_msgs__srv__GetRouteList_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__srv__GetRouteList_Request * data = NULL;

  if (size) {
    data = (marti_nav_msgs__srv__GetRouteList_Request *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__srv__GetRouteList_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__srv__GetRouteList_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__srv__GetRouteList_Request__fini(&data[i - 1]);
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
marti_nav_msgs__srv__GetRouteList_Request__Sequence__fini(marti_nav_msgs__srv__GetRouteList_Request__Sequence * array)
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
      marti_nav_msgs__srv__GetRouteList_Request__fini(&array->data[i]);
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

marti_nav_msgs__srv__GetRouteList_Request__Sequence *
marti_nav_msgs__srv__GetRouteList_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__srv__GetRouteList_Request__Sequence * array = (marti_nav_msgs__srv__GetRouteList_Request__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__srv__GetRouteList_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__srv__GetRouteList_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__srv__GetRouteList_Request__Sequence__destroy(marti_nav_msgs__srv__GetRouteList_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__srv__GetRouteList_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__srv__GetRouteList_Request__Sequence__are_equal(const marti_nav_msgs__srv__GetRouteList_Request__Sequence * lhs, const marti_nav_msgs__srv__GetRouteList_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__srv__GetRouteList_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__srv__GetRouteList_Request__Sequence__copy(
  const marti_nav_msgs__srv__GetRouteList_Request__Sequence * input,
  marti_nav_msgs__srv__GetRouteList_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__srv__GetRouteList_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__srv__GetRouteList_Request * data =
      (marti_nav_msgs__srv__GetRouteList_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__srv__GetRouteList_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__srv__GetRouteList_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__srv__GetRouteList_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `routes`
#include "marti_nav_msgs/msg/detail/route__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
marti_nav_msgs__srv__GetRouteList_Response__init(marti_nav_msgs__srv__GetRouteList_Response * msg)
{
  if (!msg) {
    return false;
  }
  // routes
  if (!marti_nav_msgs__msg__Route__Sequence__init(&msg->routes, 0)) {
    marti_nav_msgs__srv__GetRouteList_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    marti_nav_msgs__srv__GetRouteList_Response__fini(msg);
    return false;
  }
  return true;
}

void
marti_nav_msgs__srv__GetRouteList_Response__fini(marti_nav_msgs__srv__GetRouteList_Response * msg)
{
  if (!msg) {
    return;
  }
  // routes
  marti_nav_msgs__msg__Route__Sequence__fini(&msg->routes);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
marti_nav_msgs__srv__GetRouteList_Response__are_equal(const marti_nav_msgs__srv__GetRouteList_Response * lhs, const marti_nav_msgs__srv__GetRouteList_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // routes
  if (!marti_nav_msgs__msg__Route__Sequence__are_equal(
      &(lhs->routes), &(rhs->routes)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
marti_nav_msgs__srv__GetRouteList_Response__copy(
  const marti_nav_msgs__srv__GetRouteList_Response * input,
  marti_nav_msgs__srv__GetRouteList_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // routes
  if (!marti_nav_msgs__msg__Route__Sequence__copy(
      &(input->routes), &(output->routes)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

marti_nav_msgs__srv__GetRouteList_Response *
marti_nav_msgs__srv__GetRouteList_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__srv__GetRouteList_Response * msg = (marti_nav_msgs__srv__GetRouteList_Response *)allocator.allocate(sizeof(marti_nav_msgs__srv__GetRouteList_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__srv__GetRouteList_Response));
  bool success = marti_nav_msgs__srv__GetRouteList_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__srv__GetRouteList_Response__destroy(marti_nav_msgs__srv__GetRouteList_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__srv__GetRouteList_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__srv__GetRouteList_Response__Sequence__init(marti_nav_msgs__srv__GetRouteList_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__srv__GetRouteList_Response * data = NULL;

  if (size) {
    data = (marti_nav_msgs__srv__GetRouteList_Response *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__srv__GetRouteList_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__srv__GetRouteList_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__srv__GetRouteList_Response__fini(&data[i - 1]);
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
marti_nav_msgs__srv__GetRouteList_Response__Sequence__fini(marti_nav_msgs__srv__GetRouteList_Response__Sequence * array)
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
      marti_nav_msgs__srv__GetRouteList_Response__fini(&array->data[i]);
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

marti_nav_msgs__srv__GetRouteList_Response__Sequence *
marti_nav_msgs__srv__GetRouteList_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__srv__GetRouteList_Response__Sequence * array = (marti_nav_msgs__srv__GetRouteList_Response__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__srv__GetRouteList_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__srv__GetRouteList_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__srv__GetRouteList_Response__Sequence__destroy(marti_nav_msgs__srv__GetRouteList_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__srv__GetRouteList_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__srv__GetRouteList_Response__Sequence__are_equal(const marti_nav_msgs__srv__GetRouteList_Response__Sequence * lhs, const marti_nav_msgs__srv__GetRouteList_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__srv__GetRouteList_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__srv__GetRouteList_Response__Sequence__copy(
  const marti_nav_msgs__srv__GetRouteList_Response__Sequence * input,
  marti_nav_msgs__srv__GetRouteList_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__srv__GetRouteList_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__srv__GetRouteList_Response * data =
      (marti_nav_msgs__srv__GetRouteList_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__srv__GetRouteList_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__srv__GetRouteList_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__srv__GetRouteList_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
