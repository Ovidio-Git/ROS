// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from own_interfaces:srv/RPMvel.idl
// generated code does not contain a copyright notice
#include "own_interfaces/srv/detail/rp_mvel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "own_interfaces/srv/detail/rp_mvel__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
cdr_serialize(
  const own_interfaces::srv::RPMvel_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rpm
  cdr << ros_message.rpm;
  // Member: r
  cdr << ros_message.r;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  own_interfaces::srv::RPMvel_Request & ros_message)
{
  // Member: rpm
  cdr >> ros_message.rpm;

  // Member: r
  cdr >> ros_message.r;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
get_serialized_size(
  const own_interfaces::srv::RPMvel_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rpm
  {
    size_t item_size = sizeof(ros_message.rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r
  {
    size_t item_size = sizeof(ros_message.r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
max_serialized_size_RPMvel_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RPMvel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const own_interfaces::srv::RPMvel_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RPMvel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<own_interfaces::srv::RPMvel_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RPMvel_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const own_interfaces::srv::RPMvel_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RPMvel_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RPMvel_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RPMvel_Request__callbacks = {
  "own_interfaces::srv",
  "RPMvel_Request",
  _RPMvel_Request__cdr_serialize,
  _RPMvel_Request__cdr_deserialize,
  _RPMvel_Request__get_serialized_size,
  _RPMvel_Request__max_serialized_size
};

static rosidl_message_type_support_t _RPMvel_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RPMvel_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace own_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_own_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<own_interfaces::srv::RPMvel_Request>()
{
  return &own_interfaces::srv::typesupport_fastrtps_cpp::_RPMvel_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, own_interfaces, srv, RPMvel_Request)() {
  return &own_interfaces::srv::typesupport_fastrtps_cpp::_RPMvel_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace own_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
cdr_serialize(
  const own_interfaces::srv::RPMvel_Response & ros_message,
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
  own_interfaces::srv::RPMvel_Response & ros_message)
{
  // Member: vel
  cdr >> ros_message.vel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_own_interfaces
get_serialized_size(
  const own_interfaces::srv::RPMvel_Response & ros_message,
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
max_serialized_size_RPMvel_Response(
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

static bool _RPMvel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const own_interfaces::srv::RPMvel_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RPMvel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<own_interfaces::srv::RPMvel_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RPMvel_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const own_interfaces::srv::RPMvel_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RPMvel_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RPMvel_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RPMvel_Response__callbacks = {
  "own_interfaces::srv",
  "RPMvel_Response",
  _RPMvel_Response__cdr_serialize,
  _RPMvel_Response__cdr_deserialize,
  _RPMvel_Response__get_serialized_size,
  _RPMvel_Response__max_serialized_size
};

static rosidl_message_type_support_t _RPMvel_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RPMvel_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace own_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_own_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<own_interfaces::srv::RPMvel_Response>()
{
  return &own_interfaces::srv::typesupport_fastrtps_cpp::_RPMvel_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, own_interfaces, srv, RPMvel_Response)() {
  return &own_interfaces::srv::typesupport_fastrtps_cpp::_RPMvel_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace own_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RPMvel__callbacks = {
  "own_interfaces::srv",
  "RPMvel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, own_interfaces, srv, RPMvel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, own_interfaces, srv, RPMvel_Response)(),
};

static rosidl_service_type_support_t _RPMvel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RPMvel__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace own_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_own_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<own_interfaces::srv::RPMvel>()
{
  return &own_interfaces::srv::typesupport_fastrtps_cpp::_RPMvel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, own_interfaces, srv, RPMvel)() {
  return &own_interfaces::srv::typesupport_fastrtps_cpp::_RPMvel__handle;
}

#ifdef __cplusplus
}
#endif
