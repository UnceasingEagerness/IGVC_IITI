// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marti_nav_msgs:msg/PathPlanning.idl
// generated code does not contain a copyright notice
#include "marti_nav_msgs/msg/detail/path_planning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marti_nav_msgs__msg__PathPlanning__init(marti_nav_msgs__msg__PathPlanning * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marti_nav_msgs__msg__PathPlanning__fini(msg);
    return false;
  }
  // segment_type
  // length
  // start_speed
  // end_speed
  // startx
  // starty
  // endx
  // endy
  // theta0
  // a1
  // a2
  // k0
  // c1
  // c2
  // behavior
  // creep
  // acc
  // reverse
  // vehicle_track
  // transmitted
  // aux_transmitted
  // theta_end
  // k_end
  // seg_len
  // speed_limit
  // max_error
  // max_smooth
  // max_curv
  // possible_points
  // exit_segment
  return true;
}

void
marti_nav_msgs__msg__PathPlanning__fini(marti_nav_msgs__msg__PathPlanning * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // segment_type
  // length
  // start_speed
  // end_speed
  // startx
  // starty
  // endx
  // endy
  // theta0
  // a1
  // a2
  // k0
  // c1
  // c2
  // behavior
  // creep
  // acc
  // reverse
  // vehicle_track
  // transmitted
  // aux_transmitted
  // theta_end
  // k_end
  // seg_len
  // speed_limit
  // max_error
  // max_smooth
  // max_curv
  // possible_points
  // exit_segment
}

bool
marti_nav_msgs__msg__PathPlanning__are_equal(const marti_nav_msgs__msg__PathPlanning * lhs, const marti_nav_msgs__msg__PathPlanning * rhs)
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
  // segment_type
  if (lhs->segment_type != rhs->segment_type) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // start_speed
  if (lhs->start_speed != rhs->start_speed) {
    return false;
  }
  // end_speed
  if (lhs->end_speed != rhs->end_speed) {
    return false;
  }
  // startx
  if (lhs->startx != rhs->startx) {
    return false;
  }
  // starty
  if (lhs->starty != rhs->starty) {
    return false;
  }
  // endx
  if (lhs->endx != rhs->endx) {
    return false;
  }
  // endy
  if (lhs->endy != rhs->endy) {
    return false;
  }
  // theta0
  if (lhs->theta0 != rhs->theta0) {
    return false;
  }
  // a1
  if (lhs->a1 != rhs->a1) {
    return false;
  }
  // a2
  if (lhs->a2 != rhs->a2) {
    return false;
  }
  // k0
  if (lhs->k0 != rhs->k0) {
    return false;
  }
  // c1
  if (lhs->c1 != rhs->c1) {
    return false;
  }
  // c2
  if (lhs->c2 != rhs->c2) {
    return false;
  }
  // behavior
  if (lhs->behavior != rhs->behavior) {
    return false;
  }
  // creep
  if (lhs->creep != rhs->creep) {
    return false;
  }
  // acc
  if (lhs->acc != rhs->acc) {
    return false;
  }
  // reverse
  if (lhs->reverse != rhs->reverse) {
    return false;
  }
  // vehicle_track
  if (lhs->vehicle_track != rhs->vehicle_track) {
    return false;
  }
  // transmitted
  if (lhs->transmitted != rhs->transmitted) {
    return false;
  }
  // aux_transmitted
  if (lhs->aux_transmitted != rhs->aux_transmitted) {
    return false;
  }
  // theta_end
  if (lhs->theta_end != rhs->theta_end) {
    return false;
  }
  // k_end
  if (lhs->k_end != rhs->k_end) {
    return false;
  }
  // seg_len
  if (lhs->seg_len != rhs->seg_len) {
    return false;
  }
  // speed_limit
  if (lhs->speed_limit != rhs->speed_limit) {
    return false;
  }
  // max_error
  if (lhs->max_error != rhs->max_error) {
    return false;
  }
  // max_smooth
  if (lhs->max_smooth != rhs->max_smooth) {
    return false;
  }
  // max_curv
  if (lhs->max_curv != rhs->max_curv) {
    return false;
  }
  // possible_points
  if (lhs->possible_points != rhs->possible_points) {
    return false;
  }
  // exit_segment
  if (lhs->exit_segment != rhs->exit_segment) {
    return false;
  }
  return true;
}

bool
marti_nav_msgs__msg__PathPlanning__copy(
  const marti_nav_msgs__msg__PathPlanning * input,
  marti_nav_msgs__msg__PathPlanning * output)
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
  // segment_type
  output->segment_type = input->segment_type;
  // length
  output->length = input->length;
  // start_speed
  output->start_speed = input->start_speed;
  // end_speed
  output->end_speed = input->end_speed;
  // startx
  output->startx = input->startx;
  // starty
  output->starty = input->starty;
  // endx
  output->endx = input->endx;
  // endy
  output->endy = input->endy;
  // theta0
  output->theta0 = input->theta0;
  // a1
  output->a1 = input->a1;
  // a2
  output->a2 = input->a2;
  // k0
  output->k0 = input->k0;
  // c1
  output->c1 = input->c1;
  // c2
  output->c2 = input->c2;
  // behavior
  output->behavior = input->behavior;
  // creep
  output->creep = input->creep;
  // acc
  output->acc = input->acc;
  // reverse
  output->reverse = input->reverse;
  // vehicle_track
  output->vehicle_track = input->vehicle_track;
  // transmitted
  output->transmitted = input->transmitted;
  // aux_transmitted
  output->aux_transmitted = input->aux_transmitted;
  // theta_end
  output->theta_end = input->theta_end;
  // k_end
  output->k_end = input->k_end;
  // seg_len
  output->seg_len = input->seg_len;
  // speed_limit
  output->speed_limit = input->speed_limit;
  // max_error
  output->max_error = input->max_error;
  // max_smooth
  output->max_smooth = input->max_smooth;
  // max_curv
  output->max_curv = input->max_curv;
  // possible_points
  output->possible_points = input->possible_points;
  // exit_segment
  output->exit_segment = input->exit_segment;
  return true;
}

marti_nav_msgs__msg__PathPlanning *
marti_nav_msgs__msg__PathPlanning__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__PathPlanning * msg = (marti_nav_msgs__msg__PathPlanning *)allocator.allocate(sizeof(marti_nav_msgs__msg__PathPlanning), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marti_nav_msgs__msg__PathPlanning));
  bool success = marti_nav_msgs__msg__PathPlanning__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marti_nav_msgs__msg__PathPlanning__destroy(marti_nav_msgs__msg__PathPlanning * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marti_nav_msgs__msg__PathPlanning__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marti_nav_msgs__msg__PathPlanning__Sequence__init(marti_nav_msgs__msg__PathPlanning__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__PathPlanning * data = NULL;

  if (size) {
    data = (marti_nav_msgs__msg__PathPlanning *)allocator.zero_allocate(size, sizeof(marti_nav_msgs__msg__PathPlanning), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marti_nav_msgs__msg__PathPlanning__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marti_nav_msgs__msg__PathPlanning__fini(&data[i - 1]);
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
marti_nav_msgs__msg__PathPlanning__Sequence__fini(marti_nav_msgs__msg__PathPlanning__Sequence * array)
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
      marti_nav_msgs__msg__PathPlanning__fini(&array->data[i]);
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

marti_nav_msgs__msg__PathPlanning__Sequence *
marti_nav_msgs__msg__PathPlanning__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marti_nav_msgs__msg__PathPlanning__Sequence * array = (marti_nav_msgs__msg__PathPlanning__Sequence *)allocator.allocate(sizeof(marti_nav_msgs__msg__PathPlanning__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marti_nav_msgs__msg__PathPlanning__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marti_nav_msgs__msg__PathPlanning__Sequence__destroy(marti_nav_msgs__msg__PathPlanning__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marti_nav_msgs__msg__PathPlanning__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marti_nav_msgs__msg__PathPlanning__Sequence__are_equal(const marti_nav_msgs__msg__PathPlanning__Sequence * lhs, const marti_nav_msgs__msg__PathPlanning__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marti_nav_msgs__msg__PathPlanning__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marti_nav_msgs__msg__PathPlanning__Sequence__copy(
  const marti_nav_msgs__msg__PathPlanning__Sequence * input,
  marti_nav_msgs__msg__PathPlanning__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marti_nav_msgs__msg__PathPlanning);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marti_nav_msgs__msg__PathPlanning * data =
      (marti_nav_msgs__msg__PathPlanning *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marti_nav_msgs__msg__PathPlanning__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marti_nav_msgs__msg__PathPlanning__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marti_nav_msgs__msg__PathPlanning__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
