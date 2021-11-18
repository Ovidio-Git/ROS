// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from own_interfaces:srv/RPMvel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__SRV__DETAIL__RP_MVEL__STRUCT_H_
#define OWN_INTERFACES__SRV__DETAIL__RP_MVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/RPMvel in the package own_interfaces.
typedef struct own_interfaces__srv__RPMvel_Request
{
  int64_t rpm;
  float r;
} own_interfaces__srv__RPMvel_Request;

// Struct for a sequence of own_interfaces__srv__RPMvel_Request.
typedef struct own_interfaces__srv__RPMvel_Request__Sequence
{
  own_interfaces__srv__RPMvel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} own_interfaces__srv__RPMvel_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RPMvel in the package own_interfaces.
typedef struct own_interfaces__srv__RPMvel_Response
{
  double vel;
} own_interfaces__srv__RPMvel_Response;

// Struct for a sequence of own_interfaces__srv__RPMvel_Response.
typedef struct own_interfaces__srv__RPMvel_Response__Sequence
{
  own_interfaces__srv__RPMvel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} own_interfaces__srv__RPMvel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OWN_INTERFACES__SRV__DETAIL__RP_MVEL__STRUCT_H_
