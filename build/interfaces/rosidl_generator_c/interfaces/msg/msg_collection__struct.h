// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/MsgCollection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__MSG_COLLECTION__STRUCT_H_
#define INTERFACES__MSG__MSG_COLLECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONSTANT_STRING'.
static const char * const interfaces__msg__MsgCollection__CONSTANT_STRING = "CONSTANT_STRING";

// Include directives for member types
// Member 'unbounded_long_int_arr'
// Member 'bounded_five_long_int_arr'
#include "rosidl_generator_c/primitives_sequence.h"
// Member 'string_t'
// Member 'static_five_string_arr'
// Member 'bounded_ten_char_string_t'
// Member 'bounded_five_string_arr'
// Member 'bounded_ten_char_unbounded_string_arr'
// Member 'bounded_ten_char_bounded_five_string_arr'
#include "rosidl_generator_c/string.h"

// constants for array fields with an upper bound
// bounded_five_long_int_arr
enum
{
  interfaces__msg__MsgCollection__bounded_five_long_int_arr__MAX_SIZE = 5
};
// bounded_ten_char_string_t
enum
{
  interfaces__msg__MsgCollection__bounded_ten_char_string_t__MAX_STRING_SIZE = 10
};
// bounded_five_string_arr
enum
{
  interfaces__msg__MsgCollection__bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_unbounded_string_arr
enum
{
  interfaces__msg__MsgCollection__bounded_ten_char_unbounded_string_arr__MAX_STRING_SIZE = 10
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__msg__MsgCollection__bounded_ten_char_bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__msg__MsgCollection__bounded_ten_char_bounded_five_string_arr__MAX_STRING_SIZE = 10
};

// Struct defined in msg/MsgCollection in the package interfaces.
typedef struct interfaces__msg__MsgCollection
{
  bool bool_t;
  uint8_t byte_t;
  uint8_t char_t;
  float float_t;
  double double_t;
  int8_t octet_int_t;
  uint8_t octet_uint_t;
  int16_t short_int_t;
  uint16_t short_uint_t;
  int32_t long_int_t;
  uint32_t long_uint_t;
  int64_t long_long_int_t;
  uint64_t long_long_uint_t;
  rosidl_generator_c__int32__Sequence unbounded_long_int_arr;
  int32_t static_five_long_int_arr[5];
  rosidl_generator_c__int32__Sequence bounded_five_long_int_arr;
  rosidl_generator_c__String string_t;
  rosidl_generator_c__String static_five_string_arr[5];
  rosidl_generator_c__String bounded_ten_char_string_t;
  rosidl_generator_c__String__Sequence bounded_five_string_arr;
  rosidl_generator_c__String__Sequence bounded_ten_char_unbounded_string_arr;
  rosidl_generator_c__String__Sequence bounded_ten_char_bounded_five_string_arr;
} interfaces__msg__MsgCollection;

// Struct for a sequence of interfaces__msg__MsgCollection.
typedef struct interfaces__msg__MsgCollection__Sequence
{
  interfaces__msg__MsgCollection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__MsgCollection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__MSG_COLLECTION__STRUCT_H_
