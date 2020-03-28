// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:srv/ServiceCollection.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/service_collection__functions.h"

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
interfaces__srv__ServiceCollection_Request__init(interfaces__srv__ServiceCollection_Request * msg)
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
    interfaces__srv__ServiceCollection_Request__fini(msg);
    return false;
  }
  // static_five_long_int_arr
  // bounded_five_long_int_arr
  if (!rosidl_generator_c__int32__Sequence__init(&msg->bounded_five_long_int_arr, 0)) {
    interfaces__srv__ServiceCollection_Request__fini(msg);
    return false;
  }
  // string_t
  if (!rosidl_generator_c__String__init(&msg->string_t)) {
    interfaces__srv__ServiceCollection_Request__fini(msg);
    return false;
  }
  // static_five_string_arr
  for (size_t i = 0; i < 5; ++i) {
    if (!rosidl_generator_c__String__init(&msg->static_five_string_arr[i])) {
      interfaces__srv__ServiceCollection_Request__fini(msg);
      return false;
    }
  }
  // bounded_ten_char_string_t
  if (!rosidl_generator_c__String__init(&msg->bounded_ten_char_string_t)) {
    interfaces__srv__ServiceCollection_Request__fini(msg);
    return false;
  }
  // bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_five_string_arr, 0)) {
    interfaces__srv__ServiceCollection_Request__fini(msg);
    return false;
  }
  // bounded_ten_char_unbounded_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_unbounded_string_arr, 0)) {
    interfaces__srv__ServiceCollection_Request__fini(msg);
    return false;
  }
  // bounded_ten_char_bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_bounded_five_string_arr, 0)) {
    interfaces__srv__ServiceCollection_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__srv__ServiceCollection_Request__fini(interfaces__srv__ServiceCollection_Request * msg)
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

interfaces__srv__ServiceCollection_Request *
interfaces__srv__ServiceCollection_Request__create()
{
  interfaces__srv__ServiceCollection_Request * msg = (interfaces__srv__ServiceCollection_Request *)malloc(sizeof(interfaces__srv__ServiceCollection_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__ServiceCollection_Request));
  bool success = interfaces__srv__ServiceCollection_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__ServiceCollection_Request__destroy(interfaces__srv__ServiceCollection_Request * msg)
{
  if (msg) {
    interfaces__srv__ServiceCollection_Request__fini(msg);
  }
  free(msg);
}


bool
interfaces__srv__ServiceCollection_Request__Sequence__init(interfaces__srv__ServiceCollection_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__srv__ServiceCollection_Request * data = NULL;
  if (size) {
    data = (interfaces__srv__ServiceCollection_Request *)calloc(size, sizeof(interfaces__srv__ServiceCollection_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__ServiceCollection_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__ServiceCollection_Request__fini(&data[i - 1]);
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
interfaces__srv__ServiceCollection_Request__Sequence__fini(interfaces__srv__ServiceCollection_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__srv__ServiceCollection_Request__fini(&array->data[i]);
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

interfaces__srv__ServiceCollection_Request__Sequence *
interfaces__srv__ServiceCollection_Request__Sequence__create(size_t size)
{
  interfaces__srv__ServiceCollection_Request__Sequence * array = (interfaces__srv__ServiceCollection_Request__Sequence *)malloc(sizeof(interfaces__srv__ServiceCollection_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__ServiceCollection_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__srv__ServiceCollection_Request__Sequence__destroy(interfaces__srv__ServiceCollection_Request__Sequence * array)
{
  if (array) {
    interfaces__srv__ServiceCollection_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `unbounded_long_int_arr`
// Member `bounded_five_long_int_arr`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"
// Member `string_t`
// Member `static_five_string_arr`
// Member `bounded_ten_char_string_t`
// Member `bounded_five_string_arr`
// Member `bounded_ten_char_unbounded_string_arr`
// Member `bounded_ten_char_bounded_five_string_arr`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
interfaces__srv__ServiceCollection_Response__init(interfaces__srv__ServiceCollection_Response * msg)
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
    interfaces__srv__ServiceCollection_Response__fini(msg);
    return false;
  }
  // static_five_long_int_arr
  // bounded_five_long_int_arr
  if (!rosidl_generator_c__int32__Sequence__init(&msg->bounded_five_long_int_arr, 0)) {
    interfaces__srv__ServiceCollection_Response__fini(msg);
    return false;
  }
  // string_t
  if (!rosidl_generator_c__String__init(&msg->string_t)) {
    interfaces__srv__ServiceCollection_Response__fini(msg);
    return false;
  }
  // static_five_string_arr
  for (size_t i = 0; i < 5; ++i) {
    if (!rosidl_generator_c__String__init(&msg->static_five_string_arr[i])) {
      interfaces__srv__ServiceCollection_Response__fini(msg);
      return false;
    }
  }
  // bounded_ten_char_string_t
  if (!rosidl_generator_c__String__init(&msg->bounded_ten_char_string_t)) {
    interfaces__srv__ServiceCollection_Response__fini(msg);
    return false;
  }
  // bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_five_string_arr, 0)) {
    interfaces__srv__ServiceCollection_Response__fini(msg);
    return false;
  }
  // bounded_ten_char_unbounded_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_unbounded_string_arr, 0)) {
    interfaces__srv__ServiceCollection_Response__fini(msg);
    return false;
  }
  // bounded_ten_char_bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_bounded_five_string_arr, 0)) {
    interfaces__srv__ServiceCollection_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__srv__ServiceCollection_Response__fini(interfaces__srv__ServiceCollection_Response * msg)
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

interfaces__srv__ServiceCollection_Response *
interfaces__srv__ServiceCollection_Response__create()
{
  interfaces__srv__ServiceCollection_Response * msg = (interfaces__srv__ServiceCollection_Response *)malloc(sizeof(interfaces__srv__ServiceCollection_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__ServiceCollection_Response));
  bool success = interfaces__srv__ServiceCollection_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__ServiceCollection_Response__destroy(interfaces__srv__ServiceCollection_Response * msg)
{
  if (msg) {
    interfaces__srv__ServiceCollection_Response__fini(msg);
  }
  free(msg);
}


bool
interfaces__srv__ServiceCollection_Response__Sequence__init(interfaces__srv__ServiceCollection_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__srv__ServiceCollection_Response * data = NULL;
  if (size) {
    data = (interfaces__srv__ServiceCollection_Response *)calloc(size, sizeof(interfaces__srv__ServiceCollection_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__ServiceCollection_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__ServiceCollection_Response__fini(&data[i - 1]);
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
interfaces__srv__ServiceCollection_Response__Sequence__fini(interfaces__srv__ServiceCollection_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__srv__ServiceCollection_Response__fini(&array->data[i]);
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

interfaces__srv__ServiceCollection_Response__Sequence *
interfaces__srv__ServiceCollection_Response__Sequence__create(size_t size)
{
  interfaces__srv__ServiceCollection_Response__Sequence * array = (interfaces__srv__ServiceCollection_Response__Sequence *)malloc(sizeof(interfaces__srv__ServiceCollection_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__ServiceCollection_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__srv__ServiceCollection_Response__Sequence__destroy(interfaces__srv__ServiceCollection_Response__Sequence * array)
{
  if (array) {
    interfaces__srv__ServiceCollection_Response__Sequence__fini(array);
  }
  free(array);
}
