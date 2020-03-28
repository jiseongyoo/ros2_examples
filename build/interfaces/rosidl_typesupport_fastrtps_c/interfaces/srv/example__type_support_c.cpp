// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:srv/Example.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/example__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/example__struct.h"
#include "interfaces/srv/example__functions.h"
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

#include "rosidl_generator_c/string.h"  // request
#include "rosidl_generator_c/string_functions.h"  // request

// forward declare type support functions


using _Example_Request__ros_msg_type = interfaces__srv__Example_Request;

static bool _Example_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Example_Request__ros_msg_type * ros_message = static_cast<const _Example_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    const rosidl_generator_c__String * str = &ros_message->request;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Example_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Example_Request__ros_msg_type * ros_message = static_cast<_Example_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->request.data) {
      rosidl_generator_c__String__init(&ros_message->request);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->request,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'request'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Example_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Example_Request__ros_msg_type * ros_message = static_cast<const _Example_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->request.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Example_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Example_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Example_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: request
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Example_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Example_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Example_Request = {
  "interfaces::srv",
  "Example_Request",
  _Example_Request__cdr_serialize,
  _Example_Request__cdr_deserialize,
  _Example_Request__get_serialized_size,
  _Example_Request__max_serialized_size
};

static rosidl_message_type_support_t _Example_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Example_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Example_Request)() {
  return &_Example_Request__type_support;
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
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces/srv/example__struct.h"
// already included above
// #include "interfaces/srv/example__functions.h"
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

// already included above
// #include "rosidl_generator_c/string.h"  // response
// already included above
// #include "rosidl_generator_c/string_functions.h"  // response

// forward declare type support functions


using _Example_Response__ros_msg_type = interfaces__srv__Example_Response;

static bool _Example_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Example_Response__ros_msg_type * ros_message = static_cast<const _Example_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const rosidl_generator_c__String * str = &ros_message->response;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Example_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Example_Response__ros_msg_type * ros_message = static_cast<_Example_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->response.data) {
      rosidl_generator_c__String__init(&ros_message->response);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'response'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Example_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Example_Response__ros_msg_type * ros_message = static_cast<const _Example_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->response.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Example_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Example_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Example_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Example_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Example_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Example_Response = {
  "interfaces::srv",
  "Example_Response",
  _Example_Response__cdr_serialize,
  _Example_Response__cdr_deserialize,
  _Example_Response__get_serialized_size,
  _Example_Response__max_serialized_size
};

static rosidl_message_type_support_t _Example_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Example_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Example_Response)() {
  return &_Example_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/example.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Example__callbacks = {
  "interfaces::srv",
  "Example",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Example_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Example_Response)(),
};

static rosidl_service_type_support_t Example__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Example__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Example)() {
  return &Example__handle;
}

#if defined(__cplusplus)
}
#endif
