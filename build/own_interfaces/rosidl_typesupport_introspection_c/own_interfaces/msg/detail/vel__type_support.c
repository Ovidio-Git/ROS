// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from own_interfaces:msg/Vel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "own_interfaces/msg/detail/vel__rosidl_typesupport_introspection_c.h"
#include "own_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "own_interfaces/msg/detail/vel__functions.h"
#include "own_interfaces/msg/detail/vel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Vel__rosidl_typesupport_introspection_c__Vel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  own_interfaces__msg__Vel__init(message_memory);
}

void Vel__rosidl_typesupport_introspection_c__Vel_fini_function(void * message_memory)
{
  own_interfaces__msg__Vel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Vel__rosidl_typesupport_introspection_c__Vel_message_member_array[1] = {
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(own_interfaces__msg__Vel, vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Vel__rosidl_typesupport_introspection_c__Vel_message_members = {
  "own_interfaces__msg",  // message namespace
  "Vel",  // message name
  1,  // number of fields
  sizeof(own_interfaces__msg__Vel),
  Vel__rosidl_typesupport_introspection_c__Vel_message_member_array,  // message members
  Vel__rosidl_typesupport_introspection_c__Vel_init_function,  // function to initialize message memory (memory has to be allocated)
  Vel__rosidl_typesupport_introspection_c__Vel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Vel__rosidl_typesupport_introspection_c__Vel_message_type_support_handle = {
  0,
  &Vel__rosidl_typesupport_introspection_c__Vel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_own_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, own_interfaces, msg, Vel)() {
  if (!Vel__rosidl_typesupport_introspection_c__Vel_message_type_support_handle.typesupport_identifier) {
    Vel__rosidl_typesupport_introspection_c__Vel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Vel__rosidl_typesupport_introspection_c__Vel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
