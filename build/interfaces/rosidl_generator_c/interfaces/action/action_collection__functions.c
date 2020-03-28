// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:action/ActionCollection.idl
// generated code does not contain a copyright notice
#include "interfaces/action/action_collection__functions.h"

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
interfaces__action__ActionCollection_Goal__init(interfaces__action__ActionCollection_Goal * msg)
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
    interfaces__action__ActionCollection_Goal__fini(msg);
    return false;
  }
  // static_five_long_int_arr
  // bounded_five_long_int_arr
  if (!rosidl_generator_c__int32__Sequence__init(&msg->bounded_five_long_int_arr, 0)) {
    interfaces__action__ActionCollection_Goal__fini(msg);
    return false;
  }
  // string_t
  if (!rosidl_generator_c__String__init(&msg->string_t)) {
    interfaces__action__ActionCollection_Goal__fini(msg);
    return false;
  }
  // static_five_string_arr
  for (size_t i = 0; i < 5; ++i) {
    if (!rosidl_generator_c__String__init(&msg->static_five_string_arr[i])) {
      interfaces__action__ActionCollection_Goal__fini(msg);
      return false;
    }
  }
  // bounded_ten_char_string_t
  if (!rosidl_generator_c__String__init(&msg->bounded_ten_char_string_t)) {
    interfaces__action__ActionCollection_Goal__fini(msg);
    return false;
  }
  // bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_five_string_arr, 0)) {
    interfaces__action__ActionCollection_Goal__fini(msg);
    return false;
  }
  // bounded_ten_char_unbounded_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_unbounded_string_arr, 0)) {
    interfaces__action__ActionCollection_Goal__fini(msg);
    return false;
  }
  // bounded_ten_char_bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_bounded_five_string_arr, 0)) {
    interfaces__action__ActionCollection_Goal__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__ActionCollection_Goal__fini(interfaces__action__ActionCollection_Goal * msg)
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

interfaces__action__ActionCollection_Goal *
interfaces__action__ActionCollection_Goal__create()
{
  interfaces__action__ActionCollection_Goal * msg = (interfaces__action__ActionCollection_Goal *)malloc(sizeof(interfaces__action__ActionCollection_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__ActionCollection_Goal));
  bool success = interfaces__action__ActionCollection_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__action__ActionCollection_Goal__destroy(interfaces__action__ActionCollection_Goal * msg)
{
  if (msg) {
    interfaces__action__ActionCollection_Goal__fini(msg);
  }
  free(msg);
}


bool
interfaces__action__ActionCollection_Goal__Sequence__init(interfaces__action__ActionCollection_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__action__ActionCollection_Goal * data = NULL;
  if (size) {
    data = (interfaces__action__ActionCollection_Goal *)calloc(size, sizeof(interfaces__action__ActionCollection_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__ActionCollection_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__ActionCollection_Goal__fini(&data[i - 1]);
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
interfaces__action__ActionCollection_Goal__Sequence__fini(interfaces__action__ActionCollection_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__ActionCollection_Goal__fini(&array->data[i]);
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

interfaces__action__ActionCollection_Goal__Sequence *
interfaces__action__ActionCollection_Goal__Sequence__create(size_t size)
{
  interfaces__action__ActionCollection_Goal__Sequence * array = (interfaces__action__ActionCollection_Goal__Sequence *)malloc(sizeof(interfaces__action__ActionCollection_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__ActionCollection_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__action__ActionCollection_Goal__Sequence__destroy(interfaces__action__ActionCollection_Goal__Sequence * array)
{
  if (array) {
    interfaces__action__ActionCollection_Goal__Sequence__fini(array);
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
interfaces__action__ActionCollection_Result__init(interfaces__action__ActionCollection_Result * msg)
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
    interfaces__action__ActionCollection_Result__fini(msg);
    return false;
  }
  // static_five_long_int_arr
  // bounded_five_long_int_arr
  if (!rosidl_generator_c__int32__Sequence__init(&msg->bounded_five_long_int_arr, 0)) {
    interfaces__action__ActionCollection_Result__fini(msg);
    return false;
  }
  // string_t
  if (!rosidl_generator_c__String__init(&msg->string_t)) {
    interfaces__action__ActionCollection_Result__fini(msg);
    return false;
  }
  // static_five_string_arr
  for (size_t i = 0; i < 5; ++i) {
    if (!rosidl_generator_c__String__init(&msg->static_five_string_arr[i])) {
      interfaces__action__ActionCollection_Result__fini(msg);
      return false;
    }
  }
  // bounded_ten_char_string_t
  if (!rosidl_generator_c__String__init(&msg->bounded_ten_char_string_t)) {
    interfaces__action__ActionCollection_Result__fini(msg);
    return false;
  }
  // bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_five_string_arr, 0)) {
    interfaces__action__ActionCollection_Result__fini(msg);
    return false;
  }
  // bounded_ten_char_unbounded_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_unbounded_string_arr, 0)) {
    interfaces__action__ActionCollection_Result__fini(msg);
    return false;
  }
  // bounded_ten_char_bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_bounded_five_string_arr, 0)) {
    interfaces__action__ActionCollection_Result__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__ActionCollection_Result__fini(interfaces__action__ActionCollection_Result * msg)
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

interfaces__action__ActionCollection_Result *
interfaces__action__ActionCollection_Result__create()
{
  interfaces__action__ActionCollection_Result * msg = (interfaces__action__ActionCollection_Result *)malloc(sizeof(interfaces__action__ActionCollection_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__ActionCollection_Result));
  bool success = interfaces__action__ActionCollection_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__action__ActionCollection_Result__destroy(interfaces__action__ActionCollection_Result * msg)
{
  if (msg) {
    interfaces__action__ActionCollection_Result__fini(msg);
  }
  free(msg);
}


bool
interfaces__action__ActionCollection_Result__Sequence__init(interfaces__action__ActionCollection_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__action__ActionCollection_Result * data = NULL;
  if (size) {
    data = (interfaces__action__ActionCollection_Result *)calloc(size, sizeof(interfaces__action__ActionCollection_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__ActionCollection_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__ActionCollection_Result__fini(&data[i - 1]);
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
interfaces__action__ActionCollection_Result__Sequence__fini(interfaces__action__ActionCollection_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__ActionCollection_Result__fini(&array->data[i]);
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

interfaces__action__ActionCollection_Result__Sequence *
interfaces__action__ActionCollection_Result__Sequence__create(size_t size)
{
  interfaces__action__ActionCollection_Result__Sequence * array = (interfaces__action__ActionCollection_Result__Sequence *)malloc(sizeof(interfaces__action__ActionCollection_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__ActionCollection_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__action__ActionCollection_Result__Sequence__destroy(interfaces__action__ActionCollection_Result__Sequence * array)
{
  if (array) {
    interfaces__action__ActionCollection_Result__Sequence__fini(array);
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
interfaces__action__ActionCollection_Feedback__init(interfaces__action__ActionCollection_Feedback * msg)
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
    interfaces__action__ActionCollection_Feedback__fini(msg);
    return false;
  }
  // static_five_long_int_arr
  // bounded_five_long_int_arr
  if (!rosidl_generator_c__int32__Sequence__init(&msg->bounded_five_long_int_arr, 0)) {
    interfaces__action__ActionCollection_Feedback__fini(msg);
    return false;
  }
  // string_t
  if (!rosidl_generator_c__String__init(&msg->string_t)) {
    interfaces__action__ActionCollection_Feedback__fini(msg);
    return false;
  }
  // static_five_string_arr
  for (size_t i = 0; i < 5; ++i) {
    if (!rosidl_generator_c__String__init(&msg->static_five_string_arr[i])) {
      interfaces__action__ActionCollection_Feedback__fini(msg);
      return false;
    }
  }
  // bounded_ten_char_string_t
  if (!rosidl_generator_c__String__init(&msg->bounded_ten_char_string_t)) {
    interfaces__action__ActionCollection_Feedback__fini(msg);
    return false;
  }
  // bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_five_string_arr, 0)) {
    interfaces__action__ActionCollection_Feedback__fini(msg);
    return false;
  }
  // bounded_ten_char_unbounded_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_unbounded_string_arr, 0)) {
    interfaces__action__ActionCollection_Feedback__fini(msg);
    return false;
  }
  // bounded_ten_char_bounded_five_string_arr
  if (!rosidl_generator_c__String__Sequence__init(&msg->bounded_ten_char_bounded_five_string_arr, 0)) {
    interfaces__action__ActionCollection_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__ActionCollection_Feedback__fini(interfaces__action__ActionCollection_Feedback * msg)
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

interfaces__action__ActionCollection_Feedback *
interfaces__action__ActionCollection_Feedback__create()
{
  interfaces__action__ActionCollection_Feedback * msg = (interfaces__action__ActionCollection_Feedback *)malloc(sizeof(interfaces__action__ActionCollection_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__ActionCollection_Feedback));
  bool success = interfaces__action__ActionCollection_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__action__ActionCollection_Feedback__destroy(interfaces__action__ActionCollection_Feedback * msg)
{
  if (msg) {
    interfaces__action__ActionCollection_Feedback__fini(msg);
  }
  free(msg);
}


bool
interfaces__action__ActionCollection_Feedback__Sequence__init(interfaces__action__ActionCollection_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__action__ActionCollection_Feedback * data = NULL;
  if (size) {
    data = (interfaces__action__ActionCollection_Feedback *)calloc(size, sizeof(interfaces__action__ActionCollection_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__ActionCollection_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__ActionCollection_Feedback__fini(&data[i - 1]);
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
interfaces__action__ActionCollection_Feedback__Sequence__fini(interfaces__action__ActionCollection_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__ActionCollection_Feedback__fini(&array->data[i]);
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

interfaces__action__ActionCollection_Feedback__Sequence *
interfaces__action__ActionCollection_Feedback__Sequence__create(size_t size)
{
  interfaces__action__ActionCollection_Feedback__Sequence * array = (interfaces__action__ActionCollection_Feedback__Sequence *)malloc(sizeof(interfaces__action__ActionCollection_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__ActionCollection_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__action__ActionCollection_Feedback__Sequence__destroy(interfaces__action__ActionCollection_Feedback__Sequence * array)
{
  if (array) {
    interfaces__action__ActionCollection_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "interfaces/action/action_collection__functions.h"

bool
interfaces__action__ActionCollection_SendGoal_Request__init(interfaces__action__ActionCollection_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__ActionCollection_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!interfaces__action__ActionCollection_Goal__init(&msg->goal)) {
    interfaces__action__ActionCollection_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__ActionCollection_SendGoal_Request__fini(interfaces__action__ActionCollection_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  interfaces__action__ActionCollection_Goal__fini(&msg->goal);
}

interfaces__action__ActionCollection_SendGoal_Request *
interfaces__action__ActionCollection_SendGoal_Request__create()
{
  interfaces__action__ActionCollection_SendGoal_Request * msg = (interfaces__action__ActionCollection_SendGoal_Request *)malloc(sizeof(interfaces__action__ActionCollection_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__ActionCollection_SendGoal_Request));
  bool success = interfaces__action__ActionCollection_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__action__ActionCollection_SendGoal_Request__destroy(interfaces__action__ActionCollection_SendGoal_Request * msg)
{
  if (msg) {
    interfaces__action__ActionCollection_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
interfaces__action__ActionCollection_SendGoal_Request__Sequence__init(interfaces__action__ActionCollection_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__action__ActionCollection_SendGoal_Request * data = NULL;
  if (size) {
    data = (interfaces__action__ActionCollection_SendGoal_Request *)calloc(size, sizeof(interfaces__action__ActionCollection_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__ActionCollection_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__ActionCollection_SendGoal_Request__fini(&data[i - 1]);
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
interfaces__action__ActionCollection_SendGoal_Request__Sequence__fini(interfaces__action__ActionCollection_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__ActionCollection_SendGoal_Request__fini(&array->data[i]);
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

interfaces__action__ActionCollection_SendGoal_Request__Sequence *
interfaces__action__ActionCollection_SendGoal_Request__Sequence__create(size_t size)
{
  interfaces__action__ActionCollection_SendGoal_Request__Sequence * array = (interfaces__action__ActionCollection_SendGoal_Request__Sequence *)malloc(sizeof(interfaces__action__ActionCollection_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__ActionCollection_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__action__ActionCollection_SendGoal_Request__Sequence__destroy(interfaces__action__ActionCollection_SendGoal_Request__Sequence * array)
{
  if (array) {
    interfaces__action__ActionCollection_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
interfaces__action__ActionCollection_SendGoal_Response__init(interfaces__action__ActionCollection_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    interfaces__action__ActionCollection_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__ActionCollection_SendGoal_Response__fini(interfaces__action__ActionCollection_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

interfaces__action__ActionCollection_SendGoal_Response *
interfaces__action__ActionCollection_SendGoal_Response__create()
{
  interfaces__action__ActionCollection_SendGoal_Response * msg = (interfaces__action__ActionCollection_SendGoal_Response *)malloc(sizeof(interfaces__action__ActionCollection_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__ActionCollection_SendGoal_Response));
  bool success = interfaces__action__ActionCollection_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__action__ActionCollection_SendGoal_Response__destroy(interfaces__action__ActionCollection_SendGoal_Response * msg)
{
  if (msg) {
    interfaces__action__ActionCollection_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
interfaces__action__ActionCollection_SendGoal_Response__Sequence__init(interfaces__action__ActionCollection_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__action__ActionCollection_SendGoal_Response * data = NULL;
  if (size) {
    data = (interfaces__action__ActionCollection_SendGoal_Response *)calloc(size, sizeof(interfaces__action__ActionCollection_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__ActionCollection_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__ActionCollection_SendGoal_Response__fini(&data[i - 1]);
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
interfaces__action__ActionCollection_SendGoal_Response__Sequence__fini(interfaces__action__ActionCollection_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__ActionCollection_SendGoal_Response__fini(&array->data[i]);
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

interfaces__action__ActionCollection_SendGoal_Response__Sequence *
interfaces__action__ActionCollection_SendGoal_Response__Sequence__create(size_t size)
{
  interfaces__action__ActionCollection_SendGoal_Response__Sequence * array = (interfaces__action__ActionCollection_SendGoal_Response__Sequence *)malloc(sizeof(interfaces__action__ActionCollection_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__ActionCollection_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__action__ActionCollection_SendGoal_Response__Sequence__destroy(interfaces__action__ActionCollection_SendGoal_Response__Sequence * array)
{
  if (array) {
    interfaces__action__ActionCollection_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
interfaces__action__ActionCollection_GetResult_Request__init(interfaces__action__ActionCollection_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__ActionCollection_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__ActionCollection_GetResult_Request__fini(interfaces__action__ActionCollection_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

interfaces__action__ActionCollection_GetResult_Request *
interfaces__action__ActionCollection_GetResult_Request__create()
{
  interfaces__action__ActionCollection_GetResult_Request * msg = (interfaces__action__ActionCollection_GetResult_Request *)malloc(sizeof(interfaces__action__ActionCollection_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__ActionCollection_GetResult_Request));
  bool success = interfaces__action__ActionCollection_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__action__ActionCollection_GetResult_Request__destroy(interfaces__action__ActionCollection_GetResult_Request * msg)
{
  if (msg) {
    interfaces__action__ActionCollection_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
interfaces__action__ActionCollection_GetResult_Request__Sequence__init(interfaces__action__ActionCollection_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__action__ActionCollection_GetResult_Request * data = NULL;
  if (size) {
    data = (interfaces__action__ActionCollection_GetResult_Request *)calloc(size, sizeof(interfaces__action__ActionCollection_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__ActionCollection_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__ActionCollection_GetResult_Request__fini(&data[i - 1]);
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
interfaces__action__ActionCollection_GetResult_Request__Sequence__fini(interfaces__action__ActionCollection_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__ActionCollection_GetResult_Request__fini(&array->data[i]);
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

interfaces__action__ActionCollection_GetResult_Request__Sequence *
interfaces__action__ActionCollection_GetResult_Request__Sequence__create(size_t size)
{
  interfaces__action__ActionCollection_GetResult_Request__Sequence * array = (interfaces__action__ActionCollection_GetResult_Request__Sequence *)malloc(sizeof(interfaces__action__ActionCollection_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__ActionCollection_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__action__ActionCollection_GetResult_Request__Sequence__destroy(interfaces__action__ActionCollection_GetResult_Request__Sequence * array)
{
  if (array) {
    interfaces__action__ActionCollection_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "interfaces/action/action_collection__functions.h"

bool
interfaces__action__ActionCollection_GetResult_Response__init(interfaces__action__ActionCollection_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!interfaces__action__ActionCollection_Result__init(&msg->result)) {
    interfaces__action__ActionCollection_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__ActionCollection_GetResult_Response__fini(interfaces__action__ActionCollection_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  interfaces__action__ActionCollection_Result__fini(&msg->result);
}

interfaces__action__ActionCollection_GetResult_Response *
interfaces__action__ActionCollection_GetResult_Response__create()
{
  interfaces__action__ActionCollection_GetResult_Response * msg = (interfaces__action__ActionCollection_GetResult_Response *)malloc(sizeof(interfaces__action__ActionCollection_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__ActionCollection_GetResult_Response));
  bool success = interfaces__action__ActionCollection_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__action__ActionCollection_GetResult_Response__destroy(interfaces__action__ActionCollection_GetResult_Response * msg)
{
  if (msg) {
    interfaces__action__ActionCollection_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
interfaces__action__ActionCollection_GetResult_Response__Sequence__init(interfaces__action__ActionCollection_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__action__ActionCollection_GetResult_Response * data = NULL;
  if (size) {
    data = (interfaces__action__ActionCollection_GetResult_Response *)calloc(size, sizeof(interfaces__action__ActionCollection_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__ActionCollection_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__ActionCollection_GetResult_Response__fini(&data[i - 1]);
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
interfaces__action__ActionCollection_GetResult_Response__Sequence__fini(interfaces__action__ActionCollection_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__ActionCollection_GetResult_Response__fini(&array->data[i]);
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

interfaces__action__ActionCollection_GetResult_Response__Sequence *
interfaces__action__ActionCollection_GetResult_Response__Sequence__create(size_t size)
{
  interfaces__action__ActionCollection_GetResult_Response__Sequence * array = (interfaces__action__ActionCollection_GetResult_Response__Sequence *)malloc(sizeof(interfaces__action__ActionCollection_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__ActionCollection_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__action__ActionCollection_GetResult_Response__Sequence__destroy(interfaces__action__ActionCollection_GetResult_Response__Sequence * array)
{
  if (array) {
    interfaces__action__ActionCollection_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "interfaces/action/action_collection__functions.h"

bool
interfaces__action__ActionCollection_FeedbackMessage__init(interfaces__action__ActionCollection_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__ActionCollection_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!interfaces__action__ActionCollection_Feedback__init(&msg->feedback)) {
    interfaces__action__ActionCollection_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__ActionCollection_FeedbackMessage__fini(interfaces__action__ActionCollection_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  interfaces__action__ActionCollection_Feedback__fini(&msg->feedback);
}

interfaces__action__ActionCollection_FeedbackMessage *
interfaces__action__ActionCollection_FeedbackMessage__create()
{
  interfaces__action__ActionCollection_FeedbackMessage * msg = (interfaces__action__ActionCollection_FeedbackMessage *)malloc(sizeof(interfaces__action__ActionCollection_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__ActionCollection_FeedbackMessage));
  bool success = interfaces__action__ActionCollection_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__action__ActionCollection_FeedbackMessage__destroy(interfaces__action__ActionCollection_FeedbackMessage * msg)
{
  if (msg) {
    interfaces__action__ActionCollection_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
interfaces__action__ActionCollection_FeedbackMessage__Sequence__init(interfaces__action__ActionCollection_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__action__ActionCollection_FeedbackMessage * data = NULL;
  if (size) {
    data = (interfaces__action__ActionCollection_FeedbackMessage *)calloc(size, sizeof(interfaces__action__ActionCollection_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__ActionCollection_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__ActionCollection_FeedbackMessage__fini(&data[i - 1]);
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
interfaces__action__ActionCollection_FeedbackMessage__Sequence__fini(interfaces__action__ActionCollection_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__ActionCollection_FeedbackMessage__fini(&array->data[i]);
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

interfaces__action__ActionCollection_FeedbackMessage__Sequence *
interfaces__action__ActionCollection_FeedbackMessage__Sequence__create(size_t size)
{
  interfaces__action__ActionCollection_FeedbackMessage__Sequence * array = (interfaces__action__ActionCollection_FeedbackMessage__Sequence *)malloc(sizeof(interfaces__action__ActionCollection_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__ActionCollection_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__action__ActionCollection_FeedbackMessage__Sequence__destroy(interfaces__action__ActionCollection_FeedbackMessage__Sequence * array)
{
  if (array) {
    interfaces__action__ActionCollection_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
