// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from own_interfaces:msg/Vel.idl
// generated code does not contain a copyright notice
#include "own_interfaces/msg/detail/vel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "own_interfaces/msg/detail/vel__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vel
  cdr << ros_message.vel;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  own_interfaces::msg::Vel & ros_message)
{
  // Member: vel
  cdr >> ros_message.vel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
get_serialized_size(
  const own_interfaces::msg::Vel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vel
  {
    size_t item_size = sizeof(ros_message.vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
max_serialized_size_Vel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Vel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const own_interfaces::msg::Vel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Vel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<own_interfaces::msg::Vel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Vel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const own_interfaces::msg::Vel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Vel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Vel(full_bounded, 0);
}

static message_type_support_callbacks_t _Vel__callbacks = {
  "own_interfaces::msg",
  "Vel",
  _Vel__cdr_serialize,
  _Vel__cdr_deserialize,
  _Vel__get_serialized_size,
  _Vel__max_serialized_size
};

static rosidl_message_type_support_t _Vel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Vel__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace own_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_own_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<own_interfaces::msg::Vel>()
{
  return &own_interfaces::msg::typesupport_fastrtps_cpp::_Vel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, own_interfaces, msg, Vel)() {
  return &own_interfaces::msg::typesupport_fastrtps_cpp::_Vel__handle;
}

#ifdef __cplusplus
}
#endif
