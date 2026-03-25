// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_introspection_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice
#include "marti_introspection_msgs/msg/detail/node_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `location`
// Member `nodelet_manager`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `topics`
#include "marti_introspection_msgs/msg/detail/topic_info__functions.h"
// Member `parameters`
#include "marti_introspection_msgs/msg/detail/param_info__functions.h"
// Member `services`
#include "marti_introspection_msgs/msg/detail/service_info__functions.h"

bool
marti_introspection_msgs__msg__NodeInfo__init(marti_introspection_msgs__msg__NodeInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    marti_introspection_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    marti_introspection_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  // nodelet_manager
  if (!rosidl_runtime_c__String__init(&msg->nodelet_manager)) {
    marti_introspection_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    marti_introspection_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  // topics
  if (!marti_introspection_msgs__msg__TopicInfo__Sequence__init(&msg->topics, 0)) {
    marti_introspection_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  // parameters
  if (!marti_introspection_msgs__msg__ParamInfo__Sequence__init(&msg->parameters, 0)) {
    marti_introspection_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  // services
  if (!marti_introspection_msgs__msg__ServiceInfo__Sequence__init(&msg->services, 0)) {
    marti_introspection_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  return true;
}

void
marti_introspection_msgs__msg__NodeInfo__fini(marti_introspection_msgs__msg__NodeInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // location
  rosidl_runtime_c__String__fini(&msg->location);
  // nodelet_manager
  rosidl_runtime_c__String__fini(&msg->nodelet_manager);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // topics
  marti_introspection_msgs__msg__TopicInfo__Sequence__fini(&msg->topics);
  // parameters
  marti_introspection_msgs__msg__ParamInfo__Sequence__fini(&msg->parameters);
  // services
  marti_introspection_msgs__msg__ServiceInfo__Sequence__fini(&msg->services);
}

bool
marti_introspection_msgs__msg__NodeInfo__are_equal(const marti_introspection_msgs__msg__NodeInfo * lhs, const marti_introspection_msgs__msg__NodeInfo * rhs)
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
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // nodelet_manager
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nodelet_manager), &(rhs->nodelet_manager)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // topics
  if (!marti_introspection_msgs__msg__TopicInfo__Sequence__are_equal(
      &(lhs->topics), &(rhs->topics)))
  {
    return false;
  }
  // parameters
  if (!marti_introspection_msgs__msg__ParamInfo__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  // services
  if (!marti_introspection_msgs__msg__ServiceInfo__Sequence__are_equal(
      &(lhs->services), &(rhs->services)))
  {
    return false;
  }
  return true;
}

bool
marti_introspection_msgs__msg__NodeInfo__copy(
  const marti_introspection_msgs__msg__NodeInfo * input,
  marti_introspection_msgs__msg__NodeInfo * output)
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
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // nodelet_manager
  if (!rosidl_runtime_c__String__copy(
      &(input->nodelet_manager), &(output->nodelet_manager)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // topics
  if (!marti_introspection_msgs__msg__TopicInfo__Sequence__copy(
      &(input->topics), &(output->topics)))
  {
    return false;
  }
  // parameters
  if (!marti_introspection_msgs__msg__ParamInfo__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  // services
  if (!marti_introspection_msgs__msg__ServiceInfo__Sequence__copy(
      &(input->services), &(output->services)))
  {
    return false;
  }
  return true;
}

marti_introspection_msgs__msg__NodeInfo *
marti_introspection_msgs__msg__NodeInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__NodeInfo * msg = (marti_introspection_msgs__msg__NodeInfo *)allocator.allocate(sizeof(marti_introspection_msgs__msg__NodeInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_introspection_msgs__msg__NodeInfo));
  bool success = marti_introspection_msgs__msg__NodeInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_introspection_msgs__msg__NodeInfo__destroy(marti_introspection_msgs__msg__NodeInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_introspection_msgs__msg__NodeInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_introspection_msgs__msg__NodeInfo__Sequence__init(marti_introspection_msgs__msg__NodeInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__NodeInfo * data = NULL;

  if (size) {
    data = (marti_introspection_msgs__msg__NodeInfo *)allocator.zero_allocate(size, sizeof(marti_introspection_msgs__msg__NodeInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_introspection_msgs__msg__NodeInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_introspection_msgs__msg__NodeInfo__fini(&data[i - 1]);
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
marti_introspection_msgs__msg__NodeInfo__Sequence__fini(marti_introspection_msgs__msg__NodeInfo__Sequence * array)
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
      marti_introspection_msgs__msg__NodeInfo__fini(&array->data[i]);
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

marti_introspection_msgs__msg__NodeInfo__Sequence *
marti_introspection_msgs__msg__NodeInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__NodeInfo__Sequence * array = (marti_introspection_msgs__msg__NodeInfo__Sequence *)allocator.allocate(sizeof(marti_introspection_msgs__msg__NodeInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_introspection_msgs__msg__NodeInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_introspection_msgs__msg__NodeInfo__Sequence__destroy(marti_introspection_msgs__msg__NodeInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_introspection_msgs__msg__NodeInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_introspection_msgs__msg__NodeInfo__Sequence__are_equal(const marti_introspection_msgs__msg__NodeInfo__Sequence * lhs, const marti_introspection_msgs__msg__NodeInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_introspection_msgs__msg__NodeInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_introspection_msgs__msg__NodeInfo__Sequence__copy(
  const marti_introspection_msgs__msg__NodeInfo__Sequence * input,
  marti_introspection_msgs__msg__NodeInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_introspection_msgs__msg__NodeInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_introspection_msgs__msg__NodeInfo * data =
      (marti_introspection_msgs__msg__NodeInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_introspection_msgs__msg__NodeInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_introspection_msgs__msg__NodeInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_introspection_msgs__msg__NodeInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
