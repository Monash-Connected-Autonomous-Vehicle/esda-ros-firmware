// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice
#include "esda_ros_interface/msg/detail/esda_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
esda_ros_interface__msg__EsdaMessage__init(esda_ros_interface__msg__EsdaMessage * msg)
{
  if (!msg) {
    return false;
  }
  // current_vel_right
  // current_vel_left
  // steering_angle
  // auto_mode
  // estop
  return true;
}

void
esda_ros_interface__msg__EsdaMessage__fini(esda_ros_interface__msg__EsdaMessage * msg)
{
  if (!msg) {
    return;
  }
  // current_vel_right
  // current_vel_left
  // steering_angle
  // auto_mode
  // estop
}

bool
esda_ros_interface__msg__EsdaMessage__are_equal(const esda_ros_interface__msg__EsdaMessage * lhs, const esda_ros_interface__msg__EsdaMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_vel_right
  if (lhs->current_vel_right != rhs->current_vel_right) {
    return false;
  }
  // current_vel_left
  if (lhs->current_vel_left != rhs->current_vel_left) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  // auto_mode
  if (lhs->auto_mode != rhs->auto_mode) {
    return false;
  }
  // estop
  if (lhs->estop != rhs->estop) {
    return false;
  }
  return true;
}

bool
esda_ros_interface__msg__EsdaMessage__copy(
  const esda_ros_interface__msg__EsdaMessage * input,
  esda_ros_interface__msg__EsdaMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // current_vel_right
  output->current_vel_right = input->current_vel_right;
  // current_vel_left
  output->current_vel_left = input->current_vel_left;
  // steering_angle
  output->steering_angle = input->steering_angle;
  // auto_mode
  output->auto_mode = input->auto_mode;
  // estop
  output->estop = input->estop;
  return true;
}

esda_ros_interface__msg__EsdaMessage *
esda_ros_interface__msg__EsdaMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  esda_ros_interface__msg__EsdaMessage * msg = (esda_ros_interface__msg__EsdaMessage *)allocator.allocate(sizeof(esda_ros_interface__msg__EsdaMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(esda_ros_interface__msg__EsdaMessage));
  bool success = esda_ros_interface__msg__EsdaMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
esda_ros_interface__msg__EsdaMessage__destroy(esda_ros_interface__msg__EsdaMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    esda_ros_interface__msg__EsdaMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
esda_ros_interface__msg__EsdaMessage__Sequence__init(esda_ros_interface__msg__EsdaMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  esda_ros_interface__msg__EsdaMessage * data = NULL;

  if (size) {
    data = (esda_ros_interface__msg__EsdaMessage *)allocator.zero_allocate(size, sizeof(esda_ros_interface__msg__EsdaMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = esda_ros_interface__msg__EsdaMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        esda_ros_interface__msg__EsdaMessage__fini(&data[i - 1]);
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
esda_ros_interface__msg__EsdaMessage__Sequence__fini(esda_ros_interface__msg__EsdaMessage__Sequence * array)
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
      esda_ros_interface__msg__EsdaMessage__fini(&array->data[i]);
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

esda_ros_interface__msg__EsdaMessage__Sequence *
esda_ros_interface__msg__EsdaMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  esda_ros_interface__msg__EsdaMessage__Sequence * array = (esda_ros_interface__msg__EsdaMessage__Sequence *)allocator.allocate(sizeof(esda_ros_interface__msg__EsdaMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = esda_ros_interface__msg__EsdaMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
esda_ros_interface__msg__EsdaMessage__Sequence__destroy(esda_ros_interface__msg__EsdaMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    esda_ros_interface__msg__EsdaMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
esda_ros_interface__msg__EsdaMessage__Sequence__are_equal(const esda_ros_interface__msg__EsdaMessage__Sequence * lhs, const esda_ros_interface__msg__EsdaMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!esda_ros_interface__msg__EsdaMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
esda_ros_interface__msg__EsdaMessage__Sequence__copy(
  const esda_ros_interface__msg__EsdaMessage__Sequence * input,
  esda_ros_interface__msg__EsdaMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(esda_ros_interface__msg__EsdaMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    esda_ros_interface__msg__EsdaMessage * data =
      (esda_ros_interface__msg__EsdaMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!esda_ros_interface__msg__EsdaMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          esda_ros_interface__msg__EsdaMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!esda_ros_interface__msg__EsdaMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
