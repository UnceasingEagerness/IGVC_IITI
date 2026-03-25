// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_introspection_msgs:msg/ServiceInfo.idl
// generated code does not contain a copyright notice
#include "marti_introspection_msgs/msg/detail/service_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `resolved_name`
// Member `description`
// Member `group`
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"

bool
marti_introspection_msgs__msg__ServiceInfo__init(marti_introspection_msgs__msg__ServiceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    marti_introspection_msgs__msg__ServiceInfo__fini(msg);
    return false;
  }
  // resolved_name
  if (!rosidl_runtime_c__String__init(&msg->resolved_name)) {
    marti_introspection_msgs__msg__ServiceInfo__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    marti_introspection_msgs__msg__ServiceInfo__fini(msg);
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__init(&msg->group)) {
    marti_introspection_msgs__msg__ServiceInfo__fini(msg);
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    marti_introspection_msgs__msg__ServiceInfo__fini(msg);
    return false;
  }
  // server
  // topic_service
  return true;
}

void
marti_introspection_msgs__msg__ServiceInfo__fini(marti_introspection_msgs__msg__ServiceInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // resolved_name
  rosidl_runtime_c__String__fini(&msg->resolved_name);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // group
  rosidl_runtime_c__String__fini(&msg->group);
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // server
  // topic_service
}

bool
marti_introspection_msgs__msg__ServiceInfo__are_equal(const marti_introspection_msgs__msg__ServiceInfo * lhs, const marti_introspection_msgs__msg__ServiceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // resolved_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->resolved_name), &(rhs->resolved_name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group), &(rhs->group)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
  {
    return false;
  }
  // server
  if (lhs->server != rhs->server) {
    return false;
  }
  // topic_service
  if (lhs->topic_service != rhs->topic_service) {
    return false;
  }
  return true;
}

bool
marti_introspection_msgs__msg__ServiceInfo__copy(
  const marti_introspection_msgs__msg__ServiceInfo * input,
  marti_introspection_msgs__msg__ServiceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // resolved_name
  if (!rosidl_runtime_c__String__copy(
      &(input->resolved_name), &(output->resolved_name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__copy(
      &(input->group), &(output->group)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // server
  output->server = input->server;
  // topic_service
  output->topic_service = input->topic_service;
  return true;
}

marti_introspection_msgs__msg__ServiceInfo *
marti_introspection_msgs__msg__ServiceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__ServiceInfo * msg = (marti_introspection_msgs__msg__ServiceInfo *)allocator.allocate(sizeof(marti_introspection_msgs__msg__ServiceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_introspection_msgs__msg__ServiceInfo));
  bool success = marti_introspection_msgs__msg__ServiceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_introspection_msgs__msg__ServiceInfo__destroy(marti_introspection_msgs__msg__ServiceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_introspection_msgs__msg__ServiceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_introspection_msgs__msg__ServiceInfo__Sequence__init(marti_introspection_msgs__msg__ServiceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__ServiceInfo * data = NULL;

  if (size) {
    data = (marti_introspection_msgs__msg__ServiceInfo *)allocator.zero_allocate(size, sizeof(marti_introspection_msgs__msg__ServiceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_introspection_msgs__msg__ServiceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_introspection_msgs__msg__ServiceInfo__fini(&data[i - 1]);
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
marti_introspection_msgs__msg__ServiceInfo__Sequence__fini(marti_introspection_msgs__msg__ServiceInfo__Sequence * array)
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
      marti_introspection_msgs__msg__ServiceInfo__fini(&array->data[i]);
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

marti_introspection_msgs__msg__ServiceInfo__Sequence *
marti_introspection_msgs__msg__ServiceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__ServiceInfo__Sequence * array = (marti_introspection_msgs__msg__ServiceInfo__Sequence *)allocator.allocate(sizeof(marti_introspection_msgs__msg__ServiceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_introspection_msgs__msg__ServiceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_introspection_msgs__msg__ServiceInfo__Sequence__destroy(marti_introspection_msgs__msg__ServiceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_introspection_msgs__msg__ServiceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_introspection_msgs__msg__ServiceInfo__Sequence__are_equal(const marti_introspection_msgs__msg__ServiceInfo__Sequence * lhs, const marti_introspection_msgs__msg__ServiceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_introspection_msgs__msg__ServiceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_introspection_msgs__msg__ServiceInfo__Sequence__copy(
  const marti_introspection_msgs__msg__ServiceInfo__Sequence * input,
  marti_introspection_msgs__msg__ServiceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_introspection_msgs__msg__ServiceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_introspection_msgs__msg__ServiceInfo * data =
      (marti_introspection_msgs__msg__ServiceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_introspection_msgs__msg__ServiceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_introspection_msgs__msg__ServiceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_introspection_msgs__msg__ServiceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
