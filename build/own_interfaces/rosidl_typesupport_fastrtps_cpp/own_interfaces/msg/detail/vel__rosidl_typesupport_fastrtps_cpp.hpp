// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from own_interfaces:msg/Vel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__MSG__DETAIL__VEL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OWN_INTERFACES__MSG__DETAIL__VEL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "own_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "own_interfaces/msg/detail/vel__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace own_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
cdr_serialize(
  const own_interfaces::msg::Vel & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  own_interfaces::msg::Vel & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
get_serialized_size(
  const own_interfaces::msg::Vel & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
max_serialized_size_Vel(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace own_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, own_interfaces, msg, Vel)();

#ifdef __cplusplus
}
#endif

#endif  // OWN_INTERFACES__MSG__DETAIL__VEL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
