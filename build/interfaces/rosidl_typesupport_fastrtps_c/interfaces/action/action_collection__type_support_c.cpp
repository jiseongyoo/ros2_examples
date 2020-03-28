// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:action/ActionCollection.idl
// generated code does not contain a copyright notice
#include "interfaces/action/action_collection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/action/action_collection__struct.h"
#include "interfaces/action/action_collection__functions.h"
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


using _ActionCollection_Goal__ros_msg_type = interfaces__action__ActionCollection_Goal;

static bool _ActionCollection_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCollection_Goal__ros_msg_type * ros_message = static_cast<const _ActionCollection_Goal__ros_msg_type *>(untyped_ros_message);
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

  // Field name: octet_int_t
  {
    cdr << ros_message->octet_int_t;
  }

  // Field name: octet_uint_t
  {
    cdr << ros_message->octet_uint_t;
  }

  // Field name: short_int_t
  {
    cdr << ros_message->short_int_t;
  }

  // Field name: short_uint_t
  {
    cdr << ros_message->short_uint_t;
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

static bool _ActionCollection_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCollection_Goal__ros_msg_type * ros_message = static_cast<_ActionCollection_Goal__ros_msg_type *>(untyped_ros_message);
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

  // Field name: octet_int_t
  {
    cdr >> ros_message->octet_int_t;
  }

  // Field name: octet_uint_t
  {
    cdr >> ros_message->octet_uint_t;
  }

  // Field name: short_int_t
  {
    cdr >> ros_message->short_int_t;
  }

  // Field name: short_uint_t
  {
    cdr >> ros_message->short_uint_t;
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
size_t get_serialized_size_interfaces__action__ActionCollection_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCollection_Goal__ros_msg_type * ros_message = static_cast<const _ActionCollection_Goal__ros_msg_type *>(untyped_ros_message);
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
  // field.name octet_int_t
  {
    size_t item_size = sizeof(ros_message->octet_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name octet_uint_t
  {
    size_t item_size = sizeof(ros_message->octet_uint_t);
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

static uint32_t _ActionCollection_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__action__ActionCollection_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__action__ActionCollection_Goal(
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
  // member: octet_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: octet_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: short_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: short_uint_t
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

static size_t _ActionCollection_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__action__ActionCollection_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionCollection_Goal = {
  "interfaces::action",
  "ActionCollection_Goal",
  _ActionCollection_Goal__cdr_serialize,
  _ActionCollection_Goal__cdr_deserialize,
  _ActionCollection_Goal__get_serialized_size,
  _ActionCollection_Goal__max_serialized_size
};

static rosidl_message_type_support_t _ActionCollection_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCollection_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Goal)() {
  return &_ActionCollection_Goal__type_support;
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
// #include "interfaces/action/action_collection__struct.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
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
// #include "rosidl_generator_c/primitives_sequence.h"  // bounded_five_long_int_arr, unbounded_long_int_arr
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"  // bounded_five_long_int_arr, unbounded_long_int_arr
// already included above
// #include "rosidl_generator_c/string.h"  // bounded_five_string_arr, bounded_ten_char_bounded_five_string_arr, bounded_ten_char_string_t, bounded_ten_char_unbounded_string_arr, static_five_string_arr, string_t
// already included above
// #include "rosidl_generator_c/string_functions.h"  // bounded_five_string_arr, bounded_ten_char_bounded_five_string_arr, bounded_ten_char_string_t, bounded_ten_char_unbounded_string_arr, static_five_string_arr, string_t

// forward declare type support functions


using _ActionCollection_Result__ros_msg_type = interfaces__action__ActionCollection_Result;

static bool _ActionCollection_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCollection_Result__ros_msg_type * ros_message = static_cast<const _ActionCollection_Result__ros_msg_type *>(untyped_ros_message);
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

  // Field name: octet_int_t
  {
    cdr << ros_message->octet_int_t;
  }

  // Field name: octet_uint_t
  {
    cdr << ros_message->octet_uint_t;
  }

  // Field name: short_int_t
  {
    cdr << ros_message->short_int_t;
  }

  // Field name: short_uint_t
  {
    cdr << ros_message->short_uint_t;
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

static bool _ActionCollection_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCollection_Result__ros_msg_type * ros_message = static_cast<_ActionCollection_Result__ros_msg_type *>(untyped_ros_message);
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

  // Field name: octet_int_t
  {
    cdr >> ros_message->octet_int_t;
  }

  // Field name: octet_uint_t
  {
    cdr >> ros_message->octet_uint_t;
  }

  // Field name: short_int_t
  {
    cdr >> ros_message->short_int_t;
  }

  // Field name: short_uint_t
  {
    cdr >> ros_message->short_uint_t;
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
size_t get_serialized_size_interfaces__action__ActionCollection_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCollection_Result__ros_msg_type * ros_message = static_cast<const _ActionCollection_Result__ros_msg_type *>(untyped_ros_message);
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
  // field.name octet_int_t
  {
    size_t item_size = sizeof(ros_message->octet_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name octet_uint_t
  {
    size_t item_size = sizeof(ros_message->octet_uint_t);
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

static uint32_t _ActionCollection_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__action__ActionCollection_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__action__ActionCollection_Result(
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
  // member: octet_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: octet_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: short_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: short_uint_t
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

static size_t _ActionCollection_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__action__ActionCollection_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionCollection_Result = {
  "interfaces::action",
  "ActionCollection_Result",
  _ActionCollection_Result__cdr_serialize,
  _ActionCollection_Result__cdr_deserialize,
  _ActionCollection_Result__get_serialized_size,
  _ActionCollection_Result__max_serialized_size
};

static rosidl_message_type_support_t _ActionCollection_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCollection_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Result)() {
  return &_ActionCollection_Result__type_support;
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
// #include "interfaces/action/action_collection__struct.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
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
// #include "rosidl_generator_c/primitives_sequence.h"  // bounded_five_long_int_arr, unbounded_long_int_arr
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"  // bounded_five_long_int_arr, unbounded_long_int_arr
// already included above
// #include "rosidl_generator_c/string.h"  // bounded_five_string_arr, bounded_ten_char_bounded_five_string_arr, bounded_ten_char_string_t, bounded_ten_char_unbounded_string_arr, static_five_string_arr, string_t
// already included above
// #include "rosidl_generator_c/string_functions.h"  // bounded_five_string_arr, bounded_ten_char_bounded_five_string_arr, bounded_ten_char_string_t, bounded_ten_char_unbounded_string_arr, static_five_string_arr, string_t

// forward declare type support functions


using _ActionCollection_Feedback__ros_msg_type = interfaces__action__ActionCollection_Feedback;

static bool _ActionCollection_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCollection_Feedback__ros_msg_type * ros_message = static_cast<const _ActionCollection_Feedback__ros_msg_type *>(untyped_ros_message);
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

  // Field name: octet_int_t
  {
    cdr << ros_message->octet_int_t;
  }

  // Field name: octet_uint_t
  {
    cdr << ros_message->octet_uint_t;
  }

  // Field name: short_int_t
  {
    cdr << ros_message->short_int_t;
  }

  // Field name: short_uint_t
  {
    cdr << ros_message->short_uint_t;
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

static bool _ActionCollection_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCollection_Feedback__ros_msg_type * ros_message = static_cast<_ActionCollection_Feedback__ros_msg_type *>(untyped_ros_message);
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

  // Field name: octet_int_t
  {
    cdr >> ros_message->octet_int_t;
  }

  // Field name: octet_uint_t
  {
    cdr >> ros_message->octet_uint_t;
  }

  // Field name: short_int_t
  {
    cdr >> ros_message->short_int_t;
  }

  // Field name: short_uint_t
  {
    cdr >> ros_message->short_uint_t;
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
size_t get_serialized_size_interfaces__action__ActionCollection_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCollection_Feedback__ros_msg_type * ros_message = static_cast<const _ActionCollection_Feedback__ros_msg_type *>(untyped_ros_message);
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
  // field.name octet_int_t
  {
    size_t item_size = sizeof(ros_message->octet_int_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name octet_uint_t
  {
    size_t item_size = sizeof(ros_message->octet_uint_t);
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

static uint32_t _ActionCollection_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__action__ActionCollection_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__action__ActionCollection_Feedback(
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
  // member: octet_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: octet_uint_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: short_int_t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: short_uint_t
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

static size_t _ActionCollection_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__action__ActionCollection_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionCollection_Feedback = {
  "interfaces::action",
  "ActionCollection_Feedback",
  _ActionCollection_Feedback__cdr_serialize,
  _ActionCollection_Feedback__cdr_deserialize,
  _ActionCollection_Feedback__get_serialized_size,
  _ActionCollection_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _ActionCollection_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCollection_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Feedback)() {
  return &_ActionCollection_Feedback__type_support;
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
// #include "interfaces/action/action_collection__struct.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
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
// #include "interfaces/action/action_collection__functions.h"  // goal
#include "unique_identifier_msgs/msg/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_interfaces__action__ActionCollection_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces__action__ActionCollection_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _ActionCollection_SendGoal_Request__ros_msg_type = interfaces__action__ActionCollection_SendGoal_Request;

static bool _ActionCollection_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCollection_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _ActionCollection_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ActionCollection_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCollection_SendGoal_Request__ros_msg_type * ros_message = static_cast<_ActionCollection_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__action__ActionCollection_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCollection_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _ActionCollection_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_interfaces__action__ActionCollection_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActionCollection_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__action__ActionCollection_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__action__ActionCollection_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_interfaces__action__ActionCollection_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActionCollection_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__action__ActionCollection_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionCollection_SendGoal_Request = {
  "interfaces::action",
  "ActionCollection_SendGoal_Request",
  _ActionCollection_SendGoal_Request__cdr_serialize,
  _ActionCollection_SendGoal_Request__cdr_deserialize,
  _ActionCollection_SendGoal_Request__get_serialized_size,
  _ActionCollection_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _ActionCollection_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCollection_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_SendGoal_Request)() {
  return &_ActionCollection_SendGoal_Request__type_support;
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
// #include "interfaces/action/action_collection__struct.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
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

#include "builtin_interfaces/msg/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _ActionCollection_SendGoal_Response__ros_msg_type = interfaces__action__ActionCollection_SendGoal_Response;

static bool _ActionCollection_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCollection_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _ActionCollection_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ActionCollection_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCollection_SendGoal_Response__ros_msg_type * ros_message = static_cast<_ActionCollection_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__action__ActionCollection_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCollection_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _ActionCollection_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActionCollection_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__action__ActionCollection_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__action__ActionCollection_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActionCollection_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__action__ActionCollection_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionCollection_SendGoal_Response = {
  "interfaces::action",
  "ActionCollection_SendGoal_Response",
  _ActionCollection_SendGoal_Response__cdr_serialize,
  _ActionCollection_SendGoal_Response__cdr_deserialize,
  _ActionCollection_SendGoal_Response__get_serialized_size,
  _ActionCollection_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _ActionCollection_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCollection_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_SendGoal_Response)() {
  return &_ActionCollection_SendGoal_Response__type_support;
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
#include "interfaces/action/action_collection.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ActionCollection_SendGoal__callbacks = {
  "interfaces::action",
  "ActionCollection_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_SendGoal_Response)(),
};

static rosidl_service_type_support_t ActionCollection_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ActionCollection_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_SendGoal)() {
  return &ActionCollection_SendGoal__handle;
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
// #include "interfaces/action/action_collection__struct.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
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
// #include "unique_identifier_msgs/msg/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _ActionCollection_GetResult_Request__ros_msg_type = interfaces__action__ActionCollection_GetResult_Request;

static bool _ActionCollection_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCollection_GetResult_Request__ros_msg_type * ros_message = static_cast<const _ActionCollection_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ActionCollection_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCollection_GetResult_Request__ros_msg_type * ros_message = static_cast<_ActionCollection_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__action__ActionCollection_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCollection_GetResult_Request__ros_msg_type * ros_message = static_cast<const _ActionCollection_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActionCollection_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__action__ActionCollection_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__action__ActionCollection_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActionCollection_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__action__ActionCollection_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionCollection_GetResult_Request = {
  "interfaces::action",
  "ActionCollection_GetResult_Request",
  _ActionCollection_GetResult_Request__cdr_serialize,
  _ActionCollection_GetResult_Request__cdr_deserialize,
  _ActionCollection_GetResult_Request__get_serialized_size,
  _ActionCollection_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _ActionCollection_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCollection_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_GetResult_Request)() {
  return &_ActionCollection_GetResult_Request__type_support;
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
// #include "interfaces/action/action_collection__struct.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
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
// #include "interfaces/action/action_collection__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_interfaces__action__ActionCollection_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces__action__ActionCollection_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Result)();


using _ActionCollection_GetResult_Response__ros_msg_type = interfaces__action__ActionCollection_GetResult_Response;

static bool _ActionCollection_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCollection_GetResult_Response__ros_msg_type * ros_message = static_cast<const _ActionCollection_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ActionCollection_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCollection_GetResult_Response__ros_msg_type * ros_message = static_cast<_ActionCollection_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__action__ActionCollection_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCollection_GetResult_Response__ros_msg_type * ros_message = static_cast<const _ActionCollection_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_interfaces__action__ActionCollection_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActionCollection_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__action__ActionCollection_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__action__ActionCollection_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_interfaces__action__ActionCollection_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActionCollection_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__action__ActionCollection_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionCollection_GetResult_Response = {
  "interfaces::action",
  "ActionCollection_GetResult_Response",
  _ActionCollection_GetResult_Response__cdr_serialize,
  _ActionCollection_GetResult_Response__cdr_deserialize,
  _ActionCollection_GetResult_Response__get_serialized_size,
  _ActionCollection_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _ActionCollection_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCollection_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_GetResult_Response)() {
  return &_ActionCollection_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces/action/action_collection.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ActionCollection_GetResult__callbacks = {
  "interfaces::action",
  "ActionCollection_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_GetResult_Response)(),
};

static rosidl_service_type_support_t ActionCollection_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ActionCollection_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_GetResult)() {
  return &ActionCollection_GetResult__handle;
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
// #include "interfaces/action/action_collection__struct.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
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
// #include "interfaces/action/action_collection__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_interfaces__action__ActionCollection_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces__action__ActionCollection_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _ActionCollection_FeedbackMessage__ros_msg_type = interfaces__action__ActionCollection_FeedbackMessage;

static bool _ActionCollection_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCollection_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _ActionCollection_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ActionCollection_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCollection_FeedbackMessage__ros_msg_type * ros_message = static_cast<_ActionCollection_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__action__ActionCollection_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCollection_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _ActionCollection_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_interfaces__action__ActionCollection_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActionCollection_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__action__ActionCollection_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__action__ActionCollection_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_interfaces__action__ActionCollection_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActionCollection_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__action__ActionCollection_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionCollection_FeedbackMessage = {
  "interfaces::action",
  "ActionCollection_FeedbackMessage",
  _ActionCollection_FeedbackMessage__cdr_serialize,
  _ActionCollection_FeedbackMessage__cdr_deserialize,
  _ActionCollection_FeedbackMessage__get_serialized_size,
  _ActionCollection_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _ActionCollection_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCollection_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, ActionCollection_FeedbackMessage)() {
  return &_ActionCollection_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
