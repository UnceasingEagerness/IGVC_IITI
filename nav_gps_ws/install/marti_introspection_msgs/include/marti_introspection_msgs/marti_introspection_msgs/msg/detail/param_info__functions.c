// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_introspection_msgs:msg/ParamInfo.idl
// generated code does not contain a copyright notice
#include "marti_introspection_msgs/msg/detail/param_info__functions.h"

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
// Member `default_string`
#include "rosidl_runtime_c/string_functions.h"

bool
marti_introspection_msgs__msg__ParamInfo__init(marti_introspection_msgs__msg__ParamInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    marti_introspection_msgs__msg__ParamInfo__fini(msg);
    return false;
  }
  // resolved_name
  if (!rosidl_runtime_c__String__init(&msg->resolved_name)) {
    marti_introspection_msgs__msg__ParamInfo__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    marti_introspection_msgs__msg__ParamInfo__fini(msg);
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__init(&msg->group)) {
    marti_introspection_msgs__msg__ParamInfo__fini(msg);
    return false;
  }
  // type
  // dynamic
  // default_int
  // default_float
  // default_double
  // default_string
  if (!rosidl_runtime_c__String__init(&msg->default_string)) {
    marti_introspection_msgs__msg__ParamInfo__fini(msg);
    return false;
  }
  // default_bool
  // max_value
  // min_value
  return true;
}

void
marti_introspection_msgs__msg__ParamInfo__fini(marti_introspection_msgs__msg__ParamInfo * msg)
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
  // type
  // dynamic
  // default_int
  // default_float
  // default_double
  // default_string
  rosidl_runtime_c__String__fini(&msg->default_string);
  // default_bool
  // max_value
  // min_value
}

bool
marti_introspection_msgs__msg__ParamInfo__are_equal(const marti_introspection_msgs__msg__ParamInfo * lhs, const marti_introspection_msgs__msg__ParamInfo * rhs)
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
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // dynamic
  if (lhs->dynamic != rhs->dynamic) {
    return false;
  }
  // default_int
  if (lhs->default_int != rhs->default_int) {
    return false;
  }
  // default_float
  if (lhs->default_float != rhs->default_float) {
    return false;
  }
  // default_double
  if (lhs->default_double != rhs->default_double) {
    return false;
  }
  // default_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->default_string), &(rhs->default_string)))
  {
    return false;
  }
  // default_bool
  if (lhs->default_bool != rhs->default_bool) {
    return false;
  }
  // max_value
  if (lhs->max_value != rhs->max_value) {
    return false;
  }
  // min_value
  if (lhs->min_value != rhs->min_value) {
    return false;
  }
  return true;
}

bool
marti_introspection_msgs__msg__ParamInfo__copy(
  const marti_introspection_msgs__msg__ParamInfo * input,
  marti_introspection_msgs__msg__ParamInfo * output)
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
  // type
  output->type = input->type;
  // dynamic
  output->dynamic = input->dynamic;
  // default_int
  output->default_int = input->default_int;
  // default_float
  output->default_float = input->default_float;
  // default_double
  output->default_double = input->default_double;
  // default_string
  if (!rosidl_runtime_c__String__copy(
      &(input->default_string), &(output->default_string)))
  {
    return false;
  }
  // default_bool
  output->default_bool = input->default_bool;
  // max_value
  output->max_value = input->max_value;
  // min_value
  output->min_value = input->min_value;
  return true;
}

marti_introspection_msgs__msg__ParamInfo *
marti_introspection_msgs__msg__ParamInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__ParamInfo * msg = (marti_introspection_msgs__msg__ParamInfo *)allocator.allocate(sizeof(marti_introspection_msgs__msg__ParamInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_introspection_msgs__msg__ParamInfo));
  bool success = marti_introspection_msgs__msg__ParamInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_introspection_msgs__msg__ParamInfo__destroy(marti_introspection_msgs__msg__ParamInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_introspection_msgs__msg__ParamInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_introspection_msgs__msg__ParamInfo__Sequence__init(marti_introspection_msgs__msg__ParamInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__ParamInfo * data = NULL;

  if (size) {
    data = (marti_introspection_msgs__msg__ParamInfo *)allocator.zero_allocate(size, sizeof(marti_introspection_msgs__msg__ParamInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_introspection_msgs__msg__ParamInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_introspection_msgs__msg__ParamInfo__fini(&data[i - 1]);
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
marti_introspection_msgs__msg__ParamInfo__Sequence__fini(marti_introspection_msgs__msg__ParamInfo__Sequence * array)
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
      marti_introspection_msgs__msg__ParamInfo__fini(&array->data[i]);
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

marti_introspection_msgs__msg__ParamInfo__Sequence *
marti_introspection_msgs__msg__ParamInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_introspection_msgs__msg__ParamInfo__Sequence * array = (marti_introspection_msgs__msg__ParamInfo__Sequence *)allocator.allocate(sizeof(marti_introspection_msgs__msg__ParamInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_introspection_msgs__msg__ParamInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_introspection_msgs__msg__ParamInfo__Sequence__destroy(marti_introspection_msgs__msg__ParamInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_introspection_msgs__msg__ParamInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_introspection_msgs__msg__ParamInfo__Sequence__are_equal(const marti_introspection_msgs__msg__ParamInfo__Sequence * lhs, const marti_introspection_msgs__msg__ParamInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_introspection_msgs__msg__ParamInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_introspection_msgs__msg__ParamInfo__Sequence__copy(
  const marti_introspection_msgs__msg__ParamInfo__Sequence * input,
  marti_introspection_msgs__msg__ParamInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_introspection_msgs__msg__ParamInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_introspection_msgs__msg__ParamInfo * data =
      (marti_introspection_msgs__msg__ParamInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_introspection_msgs__msg__ParamInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_introspection_msgs__msg__ParamInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_introspection_msgs__msg__ParamInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
