// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:srv/ServiceCollection.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/service_collection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces/srv/service_collection__struct.hpp"

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

namespace interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_serialize(
  const interfaces::srv::ServiceCollection_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bool_t
  cdr << (ros_message.bool_t ? true : false);
  // Member: byte_t
  cdr << ros_message.byte_t;
  // Member: char_t
  cdr << ros_message.char_t;
  // Member: float_t
  cdr << ros_message.float_t;
  // Member: double_t
  cdr << ros_message.double_t;
  // Member: octet_int_t
  cdr << ros_message.octet_int_t;
  // Member: octet_uint_t
  cdr << ros_message.octet_uint_t;
  // Member: short_int_t
  cdr << ros_message.short_int_t;
  // Member: short_uint_t
  cdr << ros_message.short_uint_t;
  // Member: long_int_t
  cdr << ros_message.long_int_t;
  // Member: long_uint_t
  cdr << ros_message.long_uint_t;
  // Member: long_long_int_t
  cdr << ros_message.long_long_int_t;
  // Member: long_long_uint_t
  cdr << ros_message.long_long_uint_t;
  // Member: unbounded_long_int_arr
  {
    cdr << ros_message.unbounded_long_int_arr;
  }
  // Member: static_five_long_int_arr
  {
    cdr << ros_message.static_five_long_int_arr;
  }
  // Member: bounded_five_long_int_arr
  {
    size_t size = ros_message.bounded_five_long_int_arr.size();
    if (size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.bounded_five_long_int_arr[i];
    }
  }
  // Member: string_t
  cdr << ros_message.string_t;
  // Member: static_five_string_arr
  {
    cdr << ros_message.static_five_string_arr;
  }
  // Member: bounded_ten_char_string_t
  cdr << ros_message.bounded_ten_char_string_t;
  // Member: bounded_five_string_arr
  {
    size_t size = ros_message.bounded_five_string_arr.size();
    if (size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.bounded_five_string_arr[i];
    }
  }
  // Member: bounded_ten_char_unbounded_string_arr
  {
    cdr << ros_message.bounded_ten_char_unbounded_string_arr;
  }
  // Member: bounded_ten_char_bounded_five_string_arr
  {
    size_t size = ros_message.bounded_ten_char_bounded_five_string_arr.size();
    if (size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.bounded_ten_char_bounded_five_string_arr[i];
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces::srv::ServiceCollection_Request & ros_message)
{
  // Member: bool_t
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bool_t = tmp ? true : false;
  }

  // Member: byte_t
  cdr >> ros_message.byte_t;

  // Member: char_t
  cdr >> ros_message.char_t;

  // Member: float_t
  cdr >> ros_message.float_t;

  // Member: double_t
  cdr >> ros_message.double_t;

  // Member: octet_int_t
  cdr >> ros_message.octet_int_t;

  // Member: octet_uint_t
  cdr >> ros_message.octet_uint_t;

  // Member: short_int_t
  cdr >> ros_message.short_int_t;

  // Member: short_uint_t
  cdr >> ros_message.short_uint_t;

  // Member: long_int_t
  cdr >> ros_message.long_int_t;

  // Member: long_uint_t
  cdr >> ros_message.long_uint_t;

  // Member: long_long_int_t
  cdr >> ros_message.long_long_int_t;

  // Member: long_long_uint_t
  cdr >> ros_message.long_long_uint_t;

  // Member: unbounded_long_int_arr
  {
    cdr >> ros_message.unbounded_long_int_arr;
  }

  // Member: static_five_long_int_arr
  {
    cdr >> ros_message.static_five_long_int_arr;
  }

  // Member: bounded_five_long_int_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_five_long_int_arr.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.bounded_five_long_int_arr[i];
    }
  }

  // Member: string_t
  cdr >> ros_message.string_t;

  // Member: static_five_string_arr
  {
    cdr >> ros_message.static_five_string_arr;
  }

  // Member: bounded_ten_char_string_t
  cdr >> ros_message.bounded_ten_char_string_t;

  // Member: bounded_five_string_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_five_string_arr.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.bounded_five_string_arr[i];
    }
  }

  // Member: bounded_ten_char_unbounded_string_arr
  {
    cdr >> ros_message.bounded_ten_char_unbounded_string_arr;
  }

  // Member: bounded_ten_char_bounded_five_string_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_ten_char_bounded_five_string_arr.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.bounded_ten_char_bounded_five_string_arr[i];
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
get_serialized_size(
  const interfaces::srv::ServiceCollection_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bool_t
  {
    size_t item_size = sizeof(ros_message.bool_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_t
  {
    size_t item_size = sizeof(ros_message.byte_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: char_t
  {
    size_t item_size = sizeof(ros_message.char_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float_t
  {
    size_t item_size = sizeof(ros_message.float_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: double_t
  {
    size_t item_size = sizeof(ros_message.double_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: octet_int_t
  {
    size_t item_size = sizeof(ros_message.octet_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: octet_uint_t
  {
    size_t item_size = sizeof(ros_message.octet_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: short_int_t
  {
    size_t item_size = sizeof(ros_message.short_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: short_uint_t
  {
    size_t item_size = sizeof(ros_message.short_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_int_t
  {
    size_t item_size = sizeof(ros_message.long_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_uint_t
  {
    size_t item_size = sizeof(ros_message.long_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_long_int_t
  {
    size_t item_size = sizeof(ros_message.long_long_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_long_uint_t
  {
    size_t item_size = sizeof(ros_message.long_long_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: unbounded_long_int_arr
  {
    size_t array_size = ros_message.unbounded_long_int_arr.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.unbounded_long_int_arr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: static_five_long_int_arr
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.static_five_long_int_arr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bounded_five_long_int_arr
  {
    size_t array_size = ros_message.bounded_five_long_int_arr.size();
    if (array_size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.bounded_five_long_int_arr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string_t
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_t.size() + 1);
  // Member: static_five_string_arr
  {
    size_t array_size = 5;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.static_five_string_arr[index].size() + 1);
    }
  }
  // Member: bounded_ten_char_string_t
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_ten_char_string_t.size() + 1);
  // Member: bounded_five_string_arr
  {
    size_t array_size = ros_message.bounded_five_string_arr.size();
    if (array_size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_five_string_arr[index].size() + 1);
    }
  }
  // Member: bounded_ten_char_unbounded_string_arr
  {
    size_t array_size = ros_message.bounded_ten_char_unbounded_string_arr.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_ten_char_unbounded_string_arr[index].size() + 1);
    }
  }
  // Member: bounded_ten_char_bounded_five_string_arr
  {
    size_t array_size = ros_message.bounded_ten_char_bounded_five_string_arr.size();
    if (array_size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_ten_char_bounded_five_string_arr[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
max_serialized_size_ServiceCollection_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: bool_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: char_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: float_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: double_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: octet_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: octet_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: short_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: short_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: long_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: long_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: long_long_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: long_long_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: unbounded_long_int_arr
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: static_five_long_int_arr
  {
    size_t array_size = 5;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bounded_five_long_int_arr
  {
    size_t array_size = 5;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: string_t
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: static_five_string_arr
  {
    size_t array_size = 5;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bounded_ten_char_string_t
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        10 +
        1;
    }
  }

  // Member: bounded_five_string_arr
  {
    size_t array_size = 5;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bounded_ten_char_unbounded_string_arr
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        10 +
        1;
    }
  }

  // Member: bounded_ten_char_bounded_five_string_arr
  {
    size_t array_size = 5;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        10 +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ServiceCollection_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces::srv::ServiceCollection_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServiceCollection_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces::srv::ServiceCollection_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServiceCollection_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces::srv::ServiceCollection_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServiceCollection_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ServiceCollection_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ServiceCollection_Request__callbacks = {
  "interfaces::srv",
  "ServiceCollection_Request",
  _ServiceCollection_Request__cdr_serialize,
  _ServiceCollection_Request__cdr_deserialize,
  _ServiceCollection_Request__get_serialized_size,
  _ServiceCollection_Request__max_serialized_size
};

static rosidl_message_type_support_t _ServiceCollection_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServiceCollection_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::ServiceCollection_Request>()
{
  return &interfaces::srv::typesupport_fastrtps_cpp::_ServiceCollection_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, ServiceCollection_Request)() {
  return &interfaces::srv::typesupport_fastrtps_cpp::_ServiceCollection_Request__handle;
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

namespace interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_serialize(
  const interfaces::srv::ServiceCollection_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bool_t
  cdr << (ros_message.bool_t ? true : false);
  // Member: byte_t
  cdr << ros_message.byte_t;
  // Member: char_t
  cdr << ros_message.char_t;
  // Member: float_t
  cdr << ros_message.float_t;
  // Member: double_t
  cdr << ros_message.double_t;
  // Member: octet_int_t
  cdr << ros_message.octet_int_t;
  // Member: octet_uint_t
  cdr << ros_message.octet_uint_t;
  // Member: short_int_t
  cdr << ros_message.short_int_t;
  // Member: short_uint_t
  cdr << ros_message.short_uint_t;
  // Member: long_int_t
  cdr << ros_message.long_int_t;
  // Member: long_uint_t
  cdr << ros_message.long_uint_t;
  // Member: long_long_int_t
  cdr << ros_message.long_long_int_t;
  // Member: long_long_uint_t
  cdr << ros_message.long_long_uint_t;
  // Member: unbounded_long_int_arr
  {
    cdr << ros_message.unbounded_long_int_arr;
  }
  // Member: static_five_long_int_arr
  {
    cdr << ros_message.static_five_long_int_arr;
  }
  // Member: bounded_five_long_int_arr
  {
    size_t size = ros_message.bounded_five_long_int_arr.size();
    if (size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.bounded_five_long_int_arr[i];
    }
  }
  // Member: string_t
  cdr << ros_message.string_t;
  // Member: static_five_string_arr
  {
    cdr << ros_message.static_five_string_arr;
  }
  // Member: bounded_ten_char_string_t
  cdr << ros_message.bounded_ten_char_string_t;
  // Member: bounded_five_string_arr
  {
    size_t size = ros_message.bounded_five_string_arr.size();
    if (size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.bounded_five_string_arr[i];
    }
  }
  // Member: bounded_ten_char_unbounded_string_arr
  {
    cdr << ros_message.bounded_ten_char_unbounded_string_arr;
  }
  // Member: bounded_ten_char_bounded_five_string_arr
  {
    size_t size = ros_message.bounded_ten_char_bounded_five_string_arr.size();
    if (size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.bounded_ten_char_bounded_five_string_arr[i];
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces::srv::ServiceCollection_Response & ros_message)
{
  // Member: bool_t
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bool_t = tmp ? true : false;
  }

  // Member: byte_t
  cdr >> ros_message.byte_t;

  // Member: char_t
  cdr >> ros_message.char_t;

  // Member: float_t
  cdr >> ros_message.float_t;

  // Member: double_t
  cdr >> ros_message.double_t;

  // Member: octet_int_t
  cdr >> ros_message.octet_int_t;

  // Member: octet_uint_t
  cdr >> ros_message.octet_uint_t;

  // Member: short_int_t
  cdr >> ros_message.short_int_t;

  // Member: short_uint_t
  cdr >> ros_message.short_uint_t;

  // Member: long_int_t
  cdr >> ros_message.long_int_t;

  // Member: long_uint_t
  cdr >> ros_message.long_uint_t;

  // Member: long_long_int_t
  cdr >> ros_message.long_long_int_t;

  // Member: long_long_uint_t
  cdr >> ros_message.long_long_uint_t;

  // Member: unbounded_long_int_arr
  {
    cdr >> ros_message.unbounded_long_int_arr;
  }

  // Member: static_five_long_int_arr
  {
    cdr >> ros_message.static_five_long_int_arr;
  }

  // Member: bounded_five_long_int_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_five_long_int_arr.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.bounded_five_long_int_arr[i];
    }
  }

  // Member: string_t
  cdr >> ros_message.string_t;

  // Member: static_five_string_arr
  {
    cdr >> ros_message.static_five_string_arr;
  }

  // Member: bounded_ten_char_string_t
  cdr >> ros_message.bounded_ten_char_string_t;

  // Member: bounded_five_string_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_five_string_arr.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.bounded_five_string_arr[i];
    }
  }

  // Member: bounded_ten_char_unbounded_string_arr
  {
    cdr >> ros_message.bounded_ten_char_unbounded_string_arr;
  }

  // Member: bounded_ten_char_bounded_five_string_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_ten_char_bounded_five_string_arr.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.bounded_ten_char_bounded_five_string_arr[i];
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
get_serialized_size(
  const interfaces::srv::ServiceCollection_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bool_t
  {
    size_t item_size = sizeof(ros_message.bool_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_t
  {
    size_t item_size = sizeof(ros_message.byte_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: char_t
  {
    size_t item_size = sizeof(ros_message.char_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float_t
  {
    size_t item_size = sizeof(ros_message.float_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: double_t
  {
    size_t item_size = sizeof(ros_message.double_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: octet_int_t
  {
    size_t item_size = sizeof(ros_message.octet_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: octet_uint_t
  {
    size_t item_size = sizeof(ros_message.octet_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: short_int_t
  {
    size_t item_size = sizeof(ros_message.short_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: short_uint_t
  {
    size_t item_size = sizeof(ros_message.short_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_int_t
  {
    size_t item_size = sizeof(ros_message.long_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_uint_t
  {
    size_t item_size = sizeof(ros_message.long_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_long_int_t
  {
    size_t item_size = sizeof(ros_message.long_long_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_long_uint_t
  {
    size_t item_size = sizeof(ros_message.long_long_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: unbounded_long_int_arr
  {
    size_t array_size = ros_message.unbounded_long_int_arr.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.unbounded_long_int_arr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: static_five_long_int_arr
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.static_five_long_int_arr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bounded_five_long_int_arr
  {
    size_t array_size = ros_message.bounded_five_long_int_arr.size();
    if (array_size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.bounded_five_long_int_arr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string_t
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_t.size() + 1);
  // Member: static_five_string_arr
  {
    size_t array_size = 5;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.static_five_string_arr[index].size() + 1);
    }
  }
  // Member: bounded_ten_char_string_t
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_ten_char_string_t.size() + 1);
  // Member: bounded_five_string_arr
  {
    size_t array_size = ros_message.bounded_five_string_arr.size();
    if (array_size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_five_string_arr[index].size() + 1);
    }
  }
  // Member: bounded_ten_char_unbounded_string_arr
  {
    size_t array_size = ros_message.bounded_ten_char_unbounded_string_arr.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_ten_char_unbounded_string_arr[index].size() + 1);
    }
  }
  // Member: bounded_ten_char_bounded_five_string_arr
  {
    size_t array_size = ros_message.bounded_ten_char_bounded_five_string_arr.size();
    if (array_size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_ten_char_bounded_five_string_arr[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
max_serialized_size_ServiceCollection_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: bool_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: char_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: float_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: double_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: octet_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: octet_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: short_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: short_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: long_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: long_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: long_long_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: long_long_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: unbounded_long_int_arr
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: static_five_long_int_arr
  {
    size_t array_size = 5;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bounded_five_long_int_arr
  {
    size_t array_size = 5;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: string_t
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: static_five_string_arr
  {
    size_t array_size = 5;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bounded_ten_char_string_t
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        10 +
        1;
    }
  }

  // Member: bounded_five_string_arr
  {
    size_t array_size = 5;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bounded_ten_char_unbounded_string_arr
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        10 +
        1;
    }
  }

  // Member: bounded_ten_char_bounded_five_string_arr
  {
    size_t array_size = 5;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        10 +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ServiceCollection_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces::srv::ServiceCollection_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServiceCollection_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces::srv::ServiceCollection_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServiceCollection_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces::srv::ServiceCollection_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServiceCollection_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ServiceCollection_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ServiceCollection_Response__callbacks = {
  "interfaces::srv",
  "ServiceCollection_Response",
  _ServiceCollection_Response__cdr_serialize,
  _ServiceCollection_Response__cdr_deserialize,
  _ServiceCollection_Response__get_serialized_size,
  _ServiceCollection_Response__max_serialized_size
};

static rosidl_message_type_support_t _ServiceCollection_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServiceCollection_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::ServiceCollection_Response>()
{
  return &interfaces::srv::typesupport_fastrtps_cpp::_ServiceCollection_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, ServiceCollection_Response)() {
  return &interfaces::srv::typesupport_fastrtps_cpp::_ServiceCollection_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ServiceCollection__callbacks = {
  "interfaces::srv",
  "ServiceCollection",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, ServiceCollection_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, ServiceCollection_Response)(),
};

static rosidl_service_type_support_t _ServiceCollection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServiceCollection__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces::srv::ServiceCollection>()
{
  return &interfaces::srv::typesupport_fastrtps_cpp::_ServiceCollection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, ServiceCollection)() {
  return &interfaces::srv::typesupport_fastrtps_cpp::_ServiceCollection__handle;
}

#ifdef __cplusplus
}
#endif
