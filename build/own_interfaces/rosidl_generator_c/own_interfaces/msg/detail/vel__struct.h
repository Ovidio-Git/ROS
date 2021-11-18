// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from own_interfaces:msg/Vel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__MSG__DETAIL__VEL__STRUCT_H_
#define OWN_INTERFACES__MSG__DETAIL__VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Vel in the package own_interfaces.
typedef struct own_interfaces__msg__Vel
{
  double vel;
} own_interfaces__msg__Vel;

// Struct for a sequence of own_interfaces__msg__Vel.
typedef struct own_interfaces__msg__Vel__Sequence
{
  own_interfaces__msg__Vel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} own_interfaces__msg__Vel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OWN_INTERFACES__MSG__DETAIL__VEL__STRUCT_H_
