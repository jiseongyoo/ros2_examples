// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/ServiceCollection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__SERVICE_COLLECTION__STRUCT_H_
#define INTERFACES__SRV__SERVICE_COLLECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONSTANT_STRING_FIRST'.
static const char * const interfaces__srv__ServiceCollection_Request__CONSTANT_STRING_FIRST = "CONSTANT_STRING_FIRST";

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
  interfaces__srv__ServiceCollection_Request__bounded_five_long_int_arr__MAX_SIZE = 5
};
// bounded_ten_char_string_t
enum
{
  interfaces__srv__ServiceCollection_Request__bounded_ten_char_string_t__MAX_STRING_SIZE = 10
};
// bounded_five_string_arr
enum
{
  interfaces__srv__ServiceCollection_Request__bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_unbounded_string_arr
enum
{
  interfaces__srv__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr__MAX_STRING_SIZE = 10
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__srv__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__srv__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr__MAX_STRING_SIZE = 10
};

// Struct defined in srv/ServiceCollection in the package interfaces.
typedef struct interfaces__srv__ServiceCollection_Request
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
} interfaces__srv__ServiceCollection_Request;

// Struct for a sequence of interfaces__srv__ServiceCollection_Request.
typedef struct interfaces__srv__ServiceCollection_Request__Sequence
{
  interfaces__srv__ServiceCollection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ServiceCollection_Request__Sequence;


// Constants defined in the message

/// Constant 'CONSTANT_STRING_SECOND'.
static const char * const interfaces__srv__ServiceCollection_Response__CONSTANT_STRING_SECOND = "CONSTANT_STRING_SECOND";

// Include directives for member types
// Member 'unbounded_long_int_arr'
// Member 'bounded_five_long_int_arr'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"
// Member 'string_t'
// Member 'static_five_string_arr'
// Member 'bounded_ten_char_string_t'
// Member 'bounded_five_string_arr'
// Member 'bounded_ten_char_unbounded_string_arr'
// Member 'bounded_ten_char_bounded_five_string_arr'
// already included above
// #include "rosidl_generator_c/string.h"

// constants for array fields with an upper bound
// bounded_five_long_int_arr
enum
{
  interfaces__srv__ServiceCollection_Response__bounded_five_long_int_arr__MAX_SIZE = 5
};
// bounded_ten_char_string_t
enum
{
  interfaces__srv__ServiceCollection_Response__bounded_ten_char_string_t__MAX_STRING_SIZE = 10
};
// bounded_five_string_arr
enum
{
  interfaces__srv__ServiceCollection_Response__bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_unbounded_string_arr
enum
{
  interfaces__srv__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr__MAX_STRING_SIZE = 10
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__srv__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__srv__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr__MAX_STRING_SIZE = 10
};

// Struct defined in srv/ServiceCollection in the package interfaces.
typedef struct interfaces__srv__ServiceCollection_Response
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
} interfaces__srv__ServiceCollection_Response;

// Struct for a sequence of interfaces__srv__ServiceCollection_Response.
typedef struct interfaces__srv__ServiceCollection_Response__Sequence
{
  interfaces__srv__ServiceCollection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ServiceCollection_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__SERVICE_COLLECTION__STRUCT_H_
