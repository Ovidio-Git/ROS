// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from own_interfaces:srv/RPMvel.idl
// generated code does not contain a copyright notice
#include "own_interfaces/srv/detail/rp_mvel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "own_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "own_interfaces/srv/detail/rp_mvel__struct.h"
#include "own_interfaces/srv/detail/rp_mvel__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RPMvel_Request__ros_msg_type = own_interfaces__srv__RPMvel_Request;

static bool _RPMvel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RPMvel_Request__ros_msg_type * ros_message = static_cast<const _RPMvel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: rpm
  {
    cdr << ros_message->rpm;
  }

  // Field name: r
  {
    cdr << ros_message->r;
  }

  return true;
}

static bool _RPMvel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RPMvel_Request__ros_msg_type * ros_message = static_cast<_RPMvel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: rpm
  {
    cdr >> ros_message->rpm;
  }

  // Field name: r
  {
    cdr >> ros_message->r;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_own_interfaces
size_t get_serialized_size_own_interfaces__srv__RPMvel_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RPMvel_Request__ros_msg_type * ros_message = static_cast<const _RPMvel_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rpm
  {
    size_t item_size = sizeof(ros_message->rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r
  {
    size_t item_size = sizeof(ros_message->r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RPMvel_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_own_interfaces__srv__RPMvel_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_own_interfaces
size_t max_serialized_size_own_interfaces__srv__RPMvel_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RPMvel_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_own_interfaces__srv__RPMvel_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RPMvel_Request = {
  "own_interfaces::srv",
  "RPMvel_Request",
  _RPMvel_Request__cdr_serialize,
  _RPMvel_Request__cdr_deserialize,
  _RPMvel_Request__get_serialized_size,
  _RPMvel_Request__max_serialized_size
};

static rosidl_message_type_support_t _RPMvel_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RPMvel_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, own_interfaces, srv, RPMvel_Request)() {
  return &_RPMvel_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "own_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "own_interfaces/srv/detail/rp_mvel__struct.h"
// already included above
// #include "own_interfaces/srv/detail/rp_mvel__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RPMvel_Response__ros_msg_type = own_interfaces__srv__RPMvel_Response;

static bool _RPMvel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RPMvel_Response__ros_msg_type * ros_message = static_cast<const _RPMvel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: vel
  {
    cdr << ros_message->vel;
  }

  return true;
}

static bool _RPMvel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RPMvel_Response__ros_msg_type * ros_message = static_cast<_RPMvel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: vel
  {
    cdr >> ros_message->vel;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_own_interfaces
size_t get_serialized_size_own_interfaces__srv__RPMvel_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RPMvel_Response__ros_msg_type * ros_message = static_cast<const _RPMvel_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vel
  {
    size_t item_size = sizeof(ros_message->vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RPMvel_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_own_interfaces__srv__RPMvel_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_own_interfaces
size_t max_serialized_size_own_interfaces__srv__RPMvel_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RPMvel_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_own_interfaces__srv__RPMvel_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RPMvel_Response = {
  "own_interfaces::srv",
  "RPMvel_Response",
  _RPMvel_Response__cdr_serialize,
  _RPMvel_Response__cdr_deserialize,
  _RPMvel_Response__get_serialized_size,
  _RPMvel_Response__max_serialized_size
};

static rosidl_message_type_support_t _RPMvel_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RPMvel_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, own_interfaces, srv, RPMvel_Response)() {
  return &_RPMvel_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "own_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "own_interfaces/srv/rp_mvel.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RPMvel__callbacks = {
  "own_interfaces::srv",
  "RPMvel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, own_interfaces, srv, RPMvel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, own_interfaces, srv, RPMvel_Response)(),
};

static rosidl_service_type_support_t RPMvel__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RPMvel__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, own_interfaces, srv, RPMvel)() {
  return &RPMvel__handle;
}

#if defined(__cplusplus)
}
#endif
