// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2cli_test_interfaces:msg/ShortVariedNested.idl
// generated code does not contain a copyright notice
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `short_varied`
#include "ros2cli_test_interfaces/msg/detail/short_varied__functions.h"

bool
ros2cli_test_interfaces__msg__ShortVariedNested__init(ros2cli_test_interfaces__msg__ShortVariedNested * msg)
{
  if (!msg) {
    return false;
  }
  // short_varied
  if (!ros2cli_test_interfaces__msg__ShortVaried__init(&msg->short_varied)) {
    ros2cli_test_interfaces__msg__ShortVariedNested__fini(msg);
    return false;
  }
  return true;
}

void
ros2cli_test_interfaces__msg__ShortVariedNested__fini(ros2cli_test_interfaces__msg__ShortVariedNested * msg)
{
  if (!msg) {
    return;
  }
  // short_varied
  ros2cli_test_interfaces__msg__ShortVaried__fini(&msg->short_varied);
}

bool
ros2cli_test_interfaces__msg__ShortVariedNested__are_equal(const ros2cli_test_interfaces__msg__ShortVariedNested * lhs, const ros2cli_test_interfaces__msg__ShortVariedNested * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // short_varied
  if (!ros2cli_test_interfaces__msg__ShortVaried__are_equal(
      &(lhs->short_varied), &(rhs->short_varied)))
  {
    return false;
  }
  return true;
}

bool
ros2cli_test_interfaces__msg__ShortVariedNested__copy(
  const ros2cli_test_interfaces__msg__ShortVariedNested * input,
  ros2cli_test_interfaces__msg__ShortVariedNested * output)
{
  if (!input || !output) {
    return false;
  }
  // short_varied
  if (!ros2cli_test_interfaces__msg__ShortVaried__copy(
      &(input->short_varied), &(output->short_varied)))
  {
    return false;
  }
  return true;
}

ros2cli_test_interfaces__msg__ShortVariedNested *
ros2cli_test_interfaces__msg__ShortVariedNested__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2cli_test_interfaces__msg__ShortVariedNested * msg = (ros2cli_test_interfaces__msg__ShortVariedNested *)allocator.allocate(sizeof(ros2cli_test_interfaces__msg__ShortVariedNested), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2cli_test_interfaces__msg__ShortVariedNested));
  bool success = ros2cli_test_interfaces__msg__ShortVariedNested__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2cli_test_interfaces__msg__ShortVariedNested__destroy(ros2cli_test_interfaces__msg__ShortVariedNested * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2cli_test_interfaces__msg__ShortVariedNested__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__init(ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2cli_test_interfaces__msg__ShortVariedNested * data = NULL;

  if (size) {
    data = (ros2cli_test_interfaces__msg__ShortVariedNested *)allocator.zero_allocate(size, sizeof(ros2cli_test_interfaces__msg__ShortVariedNested), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2cli_test_interfaces__msg__ShortVariedNested__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2cli_test_interfaces__msg__ShortVariedNested__fini(&data[i - 1]);
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
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__fini(ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * array)
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
      ros2cli_test_interfaces__msg__ShortVariedNested__fini(&array->data[i]);
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

ros2cli_test_interfaces__msg__ShortVariedNested__Sequence *
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * array = (ros2cli_test_interfaces__msg__ShortVariedNested__Sequence *)allocator.allocate(sizeof(ros2cli_test_interfaces__msg__ShortVariedNested__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__destroy(ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__are_equal(const ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * lhs, const ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2cli_test_interfaces__msg__ShortVariedNested__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2cli_test_interfaces__msg__ShortVariedNested__Sequence__copy(
  const ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * input,
  ros2cli_test_interfaces__msg__ShortVariedNested__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2cli_test_interfaces__msg__ShortVariedNested);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2cli_test_interfaces__msg__ShortVariedNested * data =
      (ros2cli_test_interfaces__msg__ShortVariedNested *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2cli_test_interfaces__msg__ShortVariedNested__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2cli_test_interfaces__msg__ShortVariedNested__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2cli_test_interfaces__msg__ShortVariedNested__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
