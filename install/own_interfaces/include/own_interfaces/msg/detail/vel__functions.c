// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from own_interfaces:msg/Vel.idl
// generated code does not contain a copyright notice
#include "own_interfaces/msg/detail/vel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
own_interfaces__msg__Vel__init(own_interfaces__msg__Vel * msg)
{
  if (!msg) {
    return false;
  }
  // vel
  return true;
}

void
own_interfaces__msg__Vel__fini(own_interfaces__msg__Vel * msg)
{
  if (!msg) {
    return;
  }
  // vel
}

own_interfaces__msg__Vel *
own_interfaces__msg__Vel__create()
{
  own_interfaces__msg__Vel * msg = (own_interfaces__msg__Vel *)malloc(sizeof(own_interfaces__msg__Vel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(own_interfaces__msg__Vel));
  bool success = own_interfaces__msg__Vel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
own_interfaces__msg__Vel__destroy(own_interfaces__msg__Vel * msg)
{
  if (msg) {
    own_interfaces__msg__Vel__fini(msg);
  }
  free(msg);
}


bool
own_interfaces__msg__Vel__Sequence__init(own_interfaces__msg__Vel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  own_interfaces__msg__Vel * data = NULL;
  if (size) {
    data = (own_interfaces__msg__Vel *)calloc(size, sizeof(own_interfaces__msg__Vel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = own_interfaces__msg__Vel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        own_interfaces__msg__Vel__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
own_interfaces__msg__Vel__Sequence__fini(own_interfaces__msg__Vel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      own_interfaces__msg__Vel__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

own_interfaces__msg__Vel__Sequence *
own_interfaces__msg__Vel__Sequence__create(size_t size)
{
  own_interfaces__msg__Vel__Sequence * array = (own_interfaces__msg__Vel__Sequence *)malloc(sizeof(own_interfaces__msg__Vel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = own_interfaces__msg__Vel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
own_interfaces__msg__Vel__Sequence__destroy(own_interfaces__msg__Vel__Sequence * array)
{
  if (array) {
    own_interfaces__msg__Vel__Sequence__fini(array);
  }
  free(array);
}
