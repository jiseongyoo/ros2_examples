// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:action/ActionCollection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__ACTION_COLLECTION__STRUCT_H_
#define INTERFACES__ACTION__ACTION_COLLECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONSTANT_STRING_FIRST'.
static const char * const interfaces__action__ActionCollection_Goal__CONSTANT_STRING_FIRST = "CONSTANT_STRING_FIRST";

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
  interfaces__action__ActionCollection_Goal__bounded_five_long_int_arr__MAX_SIZE = 5
};
// bounded_ten_char_string_t
enum
{
  interfaces__action__ActionCollection_Goal__bounded_ten_char_string_t__MAX_STRING_SIZE = 10
};
// bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Goal__bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_unbounded_string_arr
enum
{
  interfaces__action__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr__MAX_STRING_SIZE = 10
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr__MAX_STRING_SIZE = 10
};

// Struct defined in action/ActionCollection in the package interfaces.
typedef struct interfaces__action__ActionCollection_Goal
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
} interfaces__action__ActionCollection_Goal;

// Struct for a sequence of interfaces__action__ActionCollection_Goal.
typedef struct interfaces__action__ActionCollection_Goal__Sequence
{
  interfaces__action__ActionCollection_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActionCollection_Goal__Sequence;


// Constants defined in the message

/// Constant 'CONSTANT_STRING_SECOND'.
static const char * const interfaces__action__ActionCollection_Result__CONSTANT_STRING_SECOND = "CONSTANT_STRING_SECOND";

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
  interfaces__action__ActionCollection_Result__bounded_five_long_int_arr__MAX_SIZE = 5
};
// bounded_ten_char_string_t
enum
{
  interfaces__action__ActionCollection_Result__bounded_ten_char_string_t__MAX_STRING_SIZE = 10
};
// bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Result__bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_unbounded_string_arr
enum
{
  interfaces__action__ActionCollection_Result__bounded_ten_char_unbounded_string_arr__MAX_STRING_SIZE = 10
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr__MAX_STRING_SIZE = 10
};

// Struct defined in action/ActionCollection in the package interfaces.
typedef struct interfaces__action__ActionCollection_Result
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
} interfaces__action__ActionCollection_Result;

// Struct for a sequence of interfaces__action__ActionCollection_Result.
typedef struct interfaces__action__ActionCollection_Result__Sequence
{
  interfaces__action__ActionCollection_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActionCollection_Result__Sequence;


// Constants defined in the message

/// Constant 'CONSTANT_STRING_THIRD'.
static const char * const interfaces__action__ActionCollection_Feedback__CONSTANT_STRING_THIRD = "CONSTANT_STRING_THIRD";

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
  interfaces__action__ActionCollection_Feedback__bounded_five_long_int_arr__MAX_SIZE = 5
};
// bounded_ten_char_string_t
enum
{
  interfaces__action__ActionCollection_Feedback__bounded_ten_char_string_t__MAX_STRING_SIZE = 10
};
// bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Feedback__bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_unbounded_string_arr
enum
{
  interfaces__action__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr__MAX_STRING_SIZE = 10
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr__MAX_SIZE = 5
};
// bounded_ten_char_bounded_five_string_arr
enum
{
  interfaces__action__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr__MAX_STRING_SIZE = 10
};

// Struct defined in action/ActionCollection in the package interfaces.
typedef struct interfaces__action__ActionCollection_Feedback
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
} interfaces__action__ActionCollection_Feedback;

// Struct for a sequence of interfaces__action__ActionCollection_Feedback.
typedef struct interfaces__action__ActionCollection_Feedback__Sequence
{
  interfaces__action__ActionCollection_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActionCollection_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "interfaces/action/action_collection__struct.h"

// Struct defined in action/ActionCollection in the package interfaces.
typedef struct interfaces__action__ActionCollection_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__ActionCollection_Goal goal;
} interfaces__action__ActionCollection_SendGoal_Request;

// Struct for a sequence of interfaces__action__ActionCollection_SendGoal_Request.
typedef struct interfaces__action__ActionCollection_SendGoal_Request__Sequence
{
  interfaces__action__ActionCollection_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActionCollection_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/ActionCollection in the package interfaces.
typedef struct interfaces__action__ActionCollection_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interfaces__action__ActionCollection_SendGoal_Response;

// Struct for a sequence of interfaces__action__ActionCollection_SendGoal_Response.
typedef struct interfaces__action__ActionCollection_SendGoal_Response__Sequence
{
  interfaces__action__ActionCollection_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActionCollection_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/ActionCollection in the package interfaces.
typedef struct interfaces__action__ActionCollection_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interfaces__action__ActionCollection_GetResult_Request;

// Struct for a sequence of interfaces__action__ActionCollection_GetResult_Request.
typedef struct interfaces__action__ActionCollection_GetResult_Request__Sequence
{
  interfaces__action__ActionCollection_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActionCollection_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/action_collection__struct.h"

// Struct defined in action/ActionCollection in the package interfaces.
typedef struct interfaces__action__ActionCollection_GetResult_Response
{
  int8_t status;
  interfaces__action__ActionCollection_Result result;
} interfaces__action__ActionCollection_GetResult_Response;

// Struct for a sequence of interfaces__action__ActionCollection_GetResult_Response.
typedef struct interfaces__action__ActionCollection_GetResult_Response__Sequence
{
  interfaces__action__ActionCollection_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActionCollection_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interfaces/action/action_collection__struct.h"

// Struct defined in action/ActionCollection in the package interfaces.
typedef struct interfaces__action__ActionCollection_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__ActionCollection_Feedback feedback;
} interfaces__action__ActionCollection_FeedbackMessage;

// Struct for a sequence of interfaces__action__ActionCollection_FeedbackMessage.
typedef struct interfaces__action__ActionCollection_FeedbackMessage__Sequence
{
  interfaces__action__ActionCollection_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActionCollection_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__ACTION__ACTION_COLLECTION__STRUCT_H_
