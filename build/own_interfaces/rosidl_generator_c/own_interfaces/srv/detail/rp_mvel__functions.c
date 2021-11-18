// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from own_interfaces:srv/RPMvel.idl
// generated code does not contain a copyright notice
#include "own_interfaces/srv/detail/rp_mvel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
own_interfaces__srv__RPMvel_Request__init(own_interfaces__srv__RPMvel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // rpm
  // r
  return true;
}

void
own_interfaces__srv__RPMvel_Request__fini(own_interfaces__srv__RPMvel_Request * msg)
{
  if (!msg) {
    return;
  }
  // rpm
  // r
}

own_interfaces__srv__RPMvel_Request *
own_interfaces__srv__RPMvel_Request__create()
{
  own_interfaces__srv__RPMvel_Request * msg = (own_interfaces__srv__RPMvel_Request *)malloc(sizeof(own_interfaces__srv__RPMvel_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(own_interfaces__srv__RPMvel_Request));
  bool success = own_interfaces__srv__RPMvel_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
own_interfaces__srv__RPMvel_Request__destroy(own_interfaces__srv__RPMvel_Request * msg)
{
  if (msg) {
    own_interfaces__srv__RPMvel_Request__fini(msg);
  }
  free(msg);
}


bool
own_interfaces__srv__RPMvel_Request__Sequence__init(own_interfaces__srv__RPMvel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  own_interfaces__srv__RPMvel_Request * data = NULL;
  if (size) {
    data = (own_interfaces__srv__RPMvel_Request *)calloc(size, sizeof(own_interfaces__srv__RPMvel_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = own_interfaces__srv__RPMvel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        own_interfaces__srv__RPMvel_Request__fini(&data[i - 1]);
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
own_interfaces__srv__RPMvel_Request__Sequence__fini(own_interfaces__srv__RPMvel_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      own_interfaces__srv__RPMvel_Request__fini(&array->data[i]);
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

own_interfaces__srv__RPMvel_Request__Sequence *
own_interfaces__srv__RPMvel_Request__Sequence__create(size_t size)
{
  own_interfaces__srv__RPMvel_Request__Sequence * array = (own_interfaces__srv__RPMvel_Request__Sequence *)malloc(sizeof(own_interfaces__srv__RPMvel_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = own_interfaces__srv__RPMvel_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
own_interfaces__srv__RPMvel_Request__Sequence__destroy(own_interfaces__srv__RPMvel_Request__Sequence * array)
{
  if (array) {
    own_interfaces__srv__RPMvel_Request__Sequence__fini(array);
  }
  free(array);
}


bool
own_interfaces__srv__RPMvel_Response__init(own_interfaces__srv__RPMvel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // vel
  return true;
}

void
own_interfaces__srv__RPMvel_Response__fini(own_interfaces__srv__RPMvel_Response * msg)
{
  if (!msg) {
    return;
  }
  // vel
}

own_interfaces__srv__RPMvel_Response *
own_interfaces__srv__RPMvel_Response__create()
{
  own_interfaces__srv__RPMvel_Response * msg = (own_interfaces__srv__RPMvel_Response *)malloc(sizeof(own_interfaces__srv__RPMvel_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(own_interfaces__srv__RPMvel_Response));
  bool success = own_interfaces__srv__RPMvel_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
own_interfaces__srv__RPMvel_Response__destroy(own_interfaces__srv__RPMvel_Response * msg)
{
  if (msg) {
    own_interfaces__srv__RPMvel_Response__fini(msg);
  }
  free(msg);
}


bool
own_interfaces__srv__RPMvel_Response__Sequence__init(own_interfaces__srv__RPMvel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  own_interfaces__srv__RPMvel_Response * data = NULL;
  if (size) {
    data = (own_interfaces__srv__RPMvel_Response *)calloc(size, sizeof(own_interfaces__srv__RPMvel_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = own_interfaces__srv__RPMvel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        own_interfaces__srv__RPMvel_Response__fini(&data[i - 1]);
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
own_interfaces__srv__RPMvel_Response__Sequence__fini(own_interfaces__srv__RPMvel_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      own_interfaces__srv__RPMvel_Response__fini(&array->data[i]);
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

own_interfaces__srv__RPMvel_Response__Sequence *
own_interfaces__srv__RPMvel_Response__Sequence__create(size_t size)
{
  own_interfaces__srv__RPMvel_Response__Sequence * array = (own_interfaces__srv__RPMvel_Response__Sequence *)malloc(sizeof(own_interfaces__srv__RPMvel_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = own_interfaces__srv__RPMvel_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
own_interfaces__srv__RPMvel_Response__Sequence__destroy(own_interfaces__srv__RPMvel_Response__Sequence * array)
{
  if (array) {
    own_interfaces__srv__RPMvel_Response__Sequence__fini(array);
  }
  free(array);
}
