// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/MsgCollection1.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/msg_collection1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/msg_collection1__struct.h"
#include "interfaces/msg/msg_collection1__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // bounded_five_long_int_arr, unbounded_long_int_arr
#include "rosidl_generator_c/primitives_sequence_functions.h"  // bounded_five_long_int_arr, unbounded_long_int_arr
#include "rosidl_generator_c/string.h"  // bounded_five_string_arr, bounded_ten_char_bounded_five_string_arr, bounded_ten_char_string_t, bounded_ten_char_unbounded_string_arr, static_five_string_arr, string_t
#include "rosidl_generator_c/string_functions.h"  // bounded_five_string_arr, bounded_ten_char_bounded_five_string_arr, bounded_ten_char_string_t, bounded_ten_char_unbounded_string_arr, static_five_string_arr, string_t

// forward declare type support functions


using _MsgCollection1__ros_msg_type = interfaces__msg__MsgCollection1;

static bool _MsgCollection1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MsgCollection1__ros_msg_type * ros_message = static_cast<const _MsgCollection1__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_t
  {
    cdr << (ros_message->bool_t ? true : false);
  }

  // Field name: byte_t
  {
    cdr << ros_message->byte_t;
  }

  // Field name: char_t
  {
    cdr << ros_message->char_t;
  }

  // Field name: float_t
  {
    cdr << ros_message->float_t;
  }

  // Field name: double_t
  {
    cdr << ros_message->double_t;
  }

  // Field name: short_int_t
  {
    cdr << ros_message->short_int_t;
  }

  // Field name: short_uint_t
  {
    cdr << ros_message->short_uint_t;
  }

  // Field name: int_t
  {
    cdr << ros_message->int_t;
  }

  // Field name: uint_t
  {
    cdr << ros_message->uint_t;
  }

  // Field name: long_int_t
  {
    cdr << ros_message->long_int_t;
  }

  // Field name: long_uint_t
  {
    cdr << ros_message->long_uint_t;
  }

  // Field name: long_long_int_t
  {
    cdr << ros_message->long_long_int_t;
  }

  // Field name: long_long_uint_t
  {
    cdr << ros_message->long_long_uint_t;
  }

  // Field name: unbounded_long_int_arr
  {
    size_t size = ros_message->unbounded_long_int_arr.size;
    auto array_ptr = ros_message->unbounded_long_int_arr.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: static_five_long_int_arr
  {
    size_t size = 5;
    auto array_ptr = ros_message->static_five_long_int_arr;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bounded_five_long_int_arr
  {
    size_t size = ros_message->bounded_five_long_int_arr.size;
    auto array_ptr = ros_message->bounded_five_long_int_arr.data;
    if (size > 5) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: string_t
  {
    const rosidl_generator_c__String * str = &ros_message->string_t;
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

  // Field name: static_five_string_arr
  {
    size_t size = 5;
    auto array_ptr = ros_message->static_five_string_arr;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
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
  }

  // Field name: bounded_ten_char_string_t
  {
    const rosidl_generator_c__String * str = &ros_message->bounded_ten_char_string_t;
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

  // Field name: bounded_five_string_arr
  {
    size_t size = ros_message->bounded_five_string_arr.size;
    auto array_ptr = ros_message->bounded_five_string_arr.data;
    if (size > 5) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
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
  }

  // Field name: bounded_ten_char_unbounded_string_arr
  {
    size_t size = ros_message->bounded_ten_char_unbounded_string_arr.size;
    auto array_ptr = ros_message->bounded_ten_char_unbounded_string_arr.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
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
  }

  // Field name: bounded_ten_char_bounded_five_string_arr
  {
    size_t size = ros_message->bounded_ten_char_bounded_five_string_arr.size;
    auto array_ptr = ros_message->bounded_ten_char_bounded_five_string_arr.data;
    if (size > 5) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _MsgCollection1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MsgCollection1__ros_msg_type * ros_message = static_cast<_MsgCollection1__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_t
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_t = tmp ? true : false;
  }

  // Field name: byte_t
  {
    cdr >> ros_message->byte_t;
  }

  // Field name: char_t
  {
    cdr >> ros_message->char_t;
  }

  // Field name: float_t
  {
    cdr >> ros_message->float_t;
  }

  // Field name: double_t
  {
    cdr >> ros_message->double_t;
  }

  // Field name: short_int_t
  {
    cdr >> ros_message->short_int_t;
  }

  // Field name: short_uint_t
  {
    cdr >> ros_message->short_uint_t;
  }

  // Field name: int_t
  {
    cdr >> ros_message->int_t;
  }

  // Field name: uint_t
  {
    cdr >> ros_message->uint_t;
  }

  // Field name: long_int_t
  {
    cdr >> ros_message->long_int_t;
  }

  // Field name: long_uint_t
  {
    cdr >> ros_message->long_uint_t;
  }

  // Field name: long_long_int_t
  {
    cdr >> ros_message->long_long_int_t;
  }

  // Field name: long_long_uint_t
  {
    cdr >> ros_message->long_long_uint_t;
  }

  // Field name: unbounded_long_int_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_long_int_arr.data) {
      rosidl_generator_c__int32__Sequence__fini(&ros_message->unbounded_long_int_arr);
    }
    if (!rosidl_generator_c__int32__Sequence__init(&ros_message->unbounded_long_int_arr, size)) {
      return "failed to create array for field 'unbounded_long_int_arr'";
    }
    auto array_ptr = ros_message->unbounded_long_int_arr.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: static_five_long_int_arr
  {
    size_t size = 5;
    auto array_ptr = ros_message->static_five_long_int_arr;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bounded_five_long_int_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_five_long_int_arr.data) {
      rosidl_generator_c__int32__Sequence__fini(&ros_message->bounded_five_long_int_arr);
    }
    if (!rosidl_generator_c__int32__Sequence__init(&ros_message->bounded_five_long_int_arr, size)) {
      return "failed to create array for field 'bounded_five_long_int_arr'";
    }
    auto array_ptr = ros_message->bounded_five_long_int_arr.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: string_t
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_t.data) {
      rosidl_generator_c__String__init(&ros_message->string_t);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->string_t,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_t'\n");
      return false;
    }
  }

  // Field name: static_five_string_arr
  {
    size_t size = 5;
    auto array_ptr = ros_message->static_five_string_arr;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'static_five_string_arr'\n");
        return false;
      }
    }
  }

  // Field name: bounded_ten_char_string_t
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_ten_char_string_t.data) {
      rosidl_generator_c__String__init(&ros_message->bounded_ten_char_string_t);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->bounded_ten_char_string_t,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_ten_char_string_t'\n");
      return false;
    }
  }

  // Field name: bounded_five_string_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_five_string_arr.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->bounded_five_string_arr);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->bounded_five_string_arr, size)) {
      return "failed to create array for field 'bounded_five_string_arr'";
    }
    auto array_ptr = ros_message->bounded_five_string_arr.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'bounded_five_string_arr'\n");
        return false;
      }
    }
  }

  // Field name: bounded_ten_char_unbounded_string_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_ten_char_unbounded_string_arr.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->bounded_ten_char_unbounded_string_arr);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->bounded_ten_char_unbounded_string_arr, size)) {
      return "failed to create array for field 'bounded_ten_char_unbounded_string_arr'";
    }
    auto array_ptr = ros_message->bounded_ten_char_unbounded_string_arr.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'bounded_ten_char_unbounded_string_arr'\n");
        return false;
      }
    }
  }

  // Field name: bounded_ten_char_bounded_five_string_arr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_ten_char_bounded_five_string_arr.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->bounded_ten_char_bounded_five_string_arr);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->bounded_ten_char_bounded_five_string_arr, size)) {
      return "failed to create array for field 'bounded_ten_char_bounded_five_string_arr'";
    }
    auto array_ptr = ros_message->bounded_ten_char_bounded_five_string_arr.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'bounded_ten_char_bounded_five_string_arr'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__MsgCollection1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MsgCollection1__ros_msg_type * ros_message = static_cast<const _MsgCollection1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_t
  {
    size_t item_size = sizeof(ros_message->bool_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_t
  {
    size_t item_size = sizeof(ros_message->byte_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_t
  {
    size_t item_size = sizeof(ros_message->char_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float_t
  {
    size_t item_size = sizeof(ros_message->float_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name double_t
  {
    size_t item_size = sizeof(ros_message->double_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name short_int_t
  {
    size_t item_size = sizeof(ros_message->short_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name short_uint_t
  {
    size_t item_size = sizeof(ros_message->short_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int_t
  {
    size_t item_size = sizeof(ros_message->int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint_t
  {
    size_t item_size = sizeof(ros_message->uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_int_t
  {
    size_t item_size = sizeof(ros_message->long_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_uint_t
  {
    size_t item_size = sizeof(ros_message->long_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_long_int_t
  {
    size_t item_size = sizeof(ros_message->long_long_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_long_uint_t
  {
    size_t item_size = sizeof(ros_message->long_long_uint_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name unbounded_long_int_arr
  {
    size_t array_size = ros_message->unbounded_long_int_arr.size;
    auto array_ptr = ros_message->unbounded_long_int_arr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name static_five_long_int_arr
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->static_five_long_int_arr;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bounded_five_long_int_arr
  {
    size_t array_size = ros_message->bounded_five_long_int_arr.size;
    auto array_ptr = ros_message->bounded_five_long_int_arr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_t
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_t.size + 1);
  // field.name static_five_string_arr
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->static_five_string_arr;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name bounded_ten_char_string_t
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_ten_char_string_t.size + 1);
  // field.name bounded_five_string_arr
  {
    size_t array_size = ros_message->bounded_five_string_arr.size;
    auto array_ptr = ros_message->bounded_five_string_arr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name bounded_ten_char_unbounded_string_arr
  {
    size_t array_size = ros_message->bounded_ten_char_unbounded_string_arr.size;
    auto array_ptr = ros_message->bounded_ten_char_unbounded_string_arr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name bounded_ten_char_bounded_five_string_arr
  {
    size_t array_size = ros_message->bounded_ten_char_bounded_five_string_arr.size;
    auto array_ptr = ros_message->bounded_ten_char_bounded_five_string_arr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MsgCollection1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__MsgCollection1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__MsgCollection1(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: bool_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: double_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: short_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: short_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: long_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: long_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: long_long_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: long_long_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: unbounded_long_int_arr
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: static_five_long_int_arr
  {
    size_t array_size = 5;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bounded_five_long_int_arr
  {
    size_t array_size = 5;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: string_t
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: static_five_string_arr
  {
    size_t array_size = 5;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bounded_ten_char_string_t
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
  // member: bounded_five_string_arr
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
  // member: bounded_ten_char_unbounded_string_arr
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
  // member: bounded_ten_char_bounded_five_string_arr
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

static size_t _MsgCollection1__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__msg__MsgCollection1(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MsgCollection1 = {
  "interfaces::msg",
  "MsgCollection1",
  _MsgCollection1__cdr_serialize,
  _MsgCollection1__cdr_deserialize,
  _MsgCollection1__get_serialized_size,
  _MsgCollection1__max_serialized_size
};

static rosidl_message_type_support_t _MsgCollection1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MsgCollection1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, MsgCollection1)() {
  return &_MsgCollection1__type_support;
}

#if defined(__cplusplus)
}
#endif
