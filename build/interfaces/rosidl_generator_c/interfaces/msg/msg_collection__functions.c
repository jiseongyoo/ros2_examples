// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/MsgCollection.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/msg_collection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `unbounded_long_int_arr`
// Member `bounded_five_long_int_arr`
#include "rosidl_generator_c/primitives_sequence_functions.h"
// Member `string_t`
// Member `static_five_string_arr`
// Member `bounded_ten_char_string_t`
// Member `bounded_five_string_arr`
// Member `bounded_ten_char_unbounded_string_arr`
// Member `bounded_ten_char_bounded_five_string_arr`
#include "rosidl_generator_c/string_functions.h"

bool
interfaces__msg__MsgCollection__init(interfaces__msg__MsgCollection * msg)
{
  if (!msg) {
    return false;
  }
  // bool_t
  // byte_t
  // char_t
  // float_t
  // double_t
  // octet_int_t
  // octet_uint_t
  // short_int_t
  // short_uint_t
  // long_int_t
  // long_uint_t
  // long_long_int_t
  // long_long_uint_t
  // unbounded_long_int_arr
  if (!rosidl_generator_c__int32__Sequence__init(&msg->unbounded_long_int_arr, 0)) {
    interfaces__msg__MsgCollection__fini(msg);
    return false;
  }
  // static_five_long_int_arr
  // bounded_five_long_int_arr
  if (!rosidl_generator_c__int32__Sequence__init(&msg->bounded_five_long_int_arr, 0)) {
    interfaces__msg__MsgCollection__fini(msg);
    return false;
  }
  // string_t
  if (!rosidl_generator_c__String__init(&msg->string_t)) {
    interfaces__msg__MsgCollection__fini(msg);
    return false;
  }
  // static_five_string_arr
  for (size_t i = 0; i < 5; ++i) {
    if (!rosidl_generator_c__String__init(&msg->static_five_string_arr[i])) {
      interfaces__msg__MsgCollection__fini(msg);
      return false;
    }
  }
  // bounded_ten_char_string_t
  if (!rosidl_generator_c__String__init(&msg->bounded_ten_char_string_t)) {
    interfaces__msg__MsgCollection__fini(msg);
    return false;
  }
  // bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_five_string_arr, 0)) {
    interfaces__msg__MsgCollection__fini(msg);
    return false;
  }
  // bounded_ten_char_unbounded_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_unbounded_string_arr, 0)) {
    interfaces__msg__MsgCollection__fini(msg);
    return false;
  }
  // bounded_ten_char_bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_bounded_five_string_arr, 0)) {
    interfaces__msg__MsgCollection__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__MsgCollection__fini(interfaces__msg__MsgCollection * msg)
{
  if (!msg) {
    return;
  }
  // bool_t
  // byte_t
  // char_t
  // float_t
  // double_t
  // octet_int_t
  // octet_uint_t
  // short_int_t
  // short_uint_t
  // long_int_t
  // long_uint_t
  // long_long_int_t
  // long_long_uint_t
  // unbounded_long_int_arr
  rosidl_generator_c__int32__Sequence__fini(&msg->unbounded_long_int_arr);
  // static_five_long_int_arr
  // bounded_five_long_int_arr
  rosidl_generator_c__int32__Sequence__fini(&msg->bounded_five_long_int_arr);
  // string_t
  rosidl_generator_c__String__fini(&msg->string_t);
  // static_five_string_arr
  for (size_t i = 0; i < 5; ++i) {
    rosidl_generator_c__String__fini(&msg->static_five_string_arr[i]);
  }
  // bounded_ten_char_string_t
  rosidl_generator_c__String__fini(&msg->bounded_ten_char_string_t);
  // bounded_five_string_arr
  rosidl_generator_c__String__Sequence__fini(&msg->bounded_five_string_arr);
  // bounded_ten_char_unbounded_string_arr
  rosidl_generator_c__String__Sequence__fini(&msg->bounded_ten_char_unbounded_string_arr);
  // bounded_ten_char_bounded_five_string_arr
  rosidl_generator_c__String__Sequence__fini(&msg->bounded_ten_char_bounded_five_string_arr);
}

interfaces__msg__MsgCollection *
interfaces__msg__MsgCollection__create()
{
  interfaces__msg__MsgCollection * msg = (interfaces__msg__MsgCollection *)malloc(sizeof(interfaces__msg__MsgCollection));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__MsgCollection));
  bool success = interfaces__msg__MsgCollection__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__MsgCollection__destroy(interfaces__msg__MsgCollection * msg)
{
  if (msg) {
    interfaces__msg__MsgCollection__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__MsgCollection__Sequence__init(interfaces__msg__MsgCollection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__MsgCollection * data = NULL;
  if (size) {
    data = (interfaces__msg__MsgCollection *)calloc(size, sizeof(interfaces__msg__MsgCollection));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__MsgCollection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__MsgCollection__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__MsgCollection__Sequence__fini(interfaces__msg__MsgCollection__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__MsgCollection__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__MsgCollection__Sequence *
interfaces__msg__MsgCollection__Sequence__create(size_t size)
{
  interfaces__msg__MsgCollection__Sequence * array = (interfaces__msg__MsgCollection__Sequence *)malloc(sizeof(interfaces__msg__MsgCollection__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__MsgCollection__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__MsgCollection__Sequence__destroy(interfaces__msg__MsgCollection__Sequence * array)
{
  if (array) {
    interfaces__msg__MsgCollection__Sequence__fini(array);
  }
  free(array);
}
