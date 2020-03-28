// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:action/ActionCollection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/action/action_collection__functions.h"
#include "interfaces/action/action_collection__struct.h"


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

#ifdef __cplusplus
extern "C"
{
#endif

void ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionCollection_Goal__init(message_memory);
}

void ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_fini_function(void * message_memory)
{
  interfaces__action__ActionCollection_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_message_member_array[22] = {
  {
    "bool_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, bool_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, byte_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, char_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, float_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "double_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, double_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octet_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, octet_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octet_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, octet_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "short_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, short_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "short_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, short_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, long_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, long_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_long_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, long_long_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_long_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, long_long_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unbounded_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, unbounded_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, static_five_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_five_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, bounded_five_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, string_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, static_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_string_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, bounded_ten_char_string_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, bounded_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Goal, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_message_members = {
  "interfaces__action",  // message namespace
  "ActionCollection_Goal",  // message name
  22,  // number of fields
  sizeof(interfaces__action__ActionCollection_Goal),
  ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_message_member_array,  // message members
  ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_message_type_support_handle = {
  0,
  &ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_Goal)() {
  if (!ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_message_type_support_handle.typesupport_identifier) {
    ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionCollection_Goal__rosidl_typesupport_introspection_c__ActionCollection_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
// already included above
// #include "interfaces/action/action_collection__struct.h"


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

#ifdef __cplusplus
extern "C"
{
#endif

void ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionCollection_Result__init(message_memory);
}

void ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_fini_function(void * message_memory)
{
  interfaces__action__ActionCollection_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_message_member_array[22] = {
  {
    "bool_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, bool_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, byte_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, char_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, float_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "double_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, double_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octet_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, octet_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octet_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, octet_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "short_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, short_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "short_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, short_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, long_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, long_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_long_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, long_long_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_long_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, long_long_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unbounded_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, unbounded_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, static_five_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_five_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, bounded_five_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, string_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, static_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_string_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, bounded_ten_char_string_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, bounded_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Result, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_message_members = {
  "interfaces__action",  // message namespace
  "ActionCollection_Result",  // message name
  22,  // number of fields
  sizeof(interfaces__action__ActionCollection_Result),
  ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_message_member_array,  // message members
  ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_message_type_support_handle = {
  0,
  &ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_Result)() {
  if (!ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_message_type_support_handle.typesupport_identifier) {
    ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionCollection_Result__rosidl_typesupport_introspection_c__ActionCollection_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
// already included above
// #include "interfaces/action/action_collection__struct.h"


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

#ifdef __cplusplus
extern "C"
{
#endif

void ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionCollection_Feedback__init(message_memory);
}

void ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_fini_function(void * message_memory)
{
  interfaces__action__ActionCollection_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_message_member_array[22] = {
  {
    "bool_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, bool_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, byte_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, char_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, float_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "double_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, double_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octet_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, octet_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octet_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, octet_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "short_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, short_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "short_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, short_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, long_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, long_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_long_int_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, long_long_int_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_long_uint_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, long_long_uint_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unbounded_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, unbounded_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, static_five_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_five_long_int_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, bounded_five_long_int_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, string_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, static_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_string_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, bounded_ten_char_string_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, bounded_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces__action__ActionCollection_Feedback, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_message_members = {
  "interfaces__action",  // message namespace
  "ActionCollection_Feedback",  // message name
  22,  // number of fields
  sizeof(interfaces__action__ActionCollection_Feedback),
  ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_message_member_array,  // message members
  ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_message_type_support_handle = {
  0,
  &ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_Feedback)() {
  if (!ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_message_type_support_handle.typesupport_identifier) {
    ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionCollection_Feedback__rosidl_typesupport_introspection_c__ActionCollection_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
// already included above
// #include "interfaces/action/action_collection__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "interfaces/action/action_collection.h"
// Member `goal`
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionCollection_SendGoal_Request__init(message_memory);
}

void ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_fini_function(void * message_memory)
{
  interfaces__action__ActionCollection_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_members = {
  "interfaces__action",  // message namespace
  "ActionCollection_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(interfaces__action__ActionCollection_SendGoal_Request),
  ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_member_array,  // message members
  ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_type_support_handle = {
  0,
  &ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_SendGoal_Request)() {
  ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_Goal)();
  if (!ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionCollection_SendGoal_Request__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
// already included above
// #include "interfaces/action/action_collection__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionCollection_SendGoal_Response__init(message_memory);
}

void ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_fini_function(void * message_memory)
{
  interfaces__action__ActionCollection_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_members = {
  "interfaces__action",  // message namespace
  "ActionCollection_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(interfaces__action__ActionCollection_SendGoal_Response),
  ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_member_array,  // message members
  ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_type_support_handle = {
  0,
  &ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_SendGoal_Response)() {
  ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionCollection_SendGoal_Response__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_service_members = {
  "interfaces__action",  // service namespace
  "ActionCollection_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_service_type_support_handle = {
  0,
  &interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_SendGoal)() {
  if (!interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_service_type_support_handle.typesupport_identifier) {
    interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_SendGoal_Response)()->data;
  }

  return &interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
// already included above
// #include "interfaces/action/action_collection__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionCollection_GetResult_Request__init(message_memory);
}

void ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_fini_function(void * message_memory)
{
  interfaces__action__ActionCollection_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_members = {
  "interfaces__action",  // message namespace
  "ActionCollection_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(interfaces__action__ActionCollection_GetResult_Request),
  ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_member_array,  // message members
  ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_type_support_handle = {
  0,
  &ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_GetResult_Request)() {
  ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionCollection_GetResult_Request__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
// already included above
// #include "interfaces/action/action_collection__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "interfaces/action/action_collection.h"
// Member `result`
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionCollection_GetResult_Response__init(message_memory);
}

void ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_fini_function(void * message_memory)
{
  interfaces__action__ActionCollection_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_members = {
  "interfaces__action",  // message namespace
  "ActionCollection_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(interfaces__action__ActionCollection_GetResult_Response),
  ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_member_array,  // message members
  ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_type_support_handle = {
  0,
  &ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_GetResult_Response)() {
  ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_Result)();
  if (!ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionCollection_GetResult_Response__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_service_members = {
  "interfaces__action",  // service namespace
  "ActionCollection_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_service_type_support_handle = {
  0,
  &interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_GetResult)() {
  if (!interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_service_type_support_handle.typesupport_identifier) {
    interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_GetResult_Response)()->data;
  }

  return &interfaces__action__action_collection__rosidl_typesupport_introspection_c__ActionCollection_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_collection__functions.h"
// already included above
// #include "interfaces/action/action_collection__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "interfaces/action/action_collection.h"
// Member `feedback`
// already included above
// #include "interfaces/action/action_collection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionCollection_FeedbackMessage__init(message_memory);
}

void ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_fini_function(void * message_memory)
{
  interfaces__action__ActionCollection_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionCollection_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_members = {
  "interfaces__action",  // message namespace
  "ActionCollection_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(interfaces__action__ActionCollection_FeedbackMessage),
  ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_member_array,  // message members
  ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_type_support_handle = {
  0,
  &ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_FeedbackMessage)() {
  ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionCollection_Feedback)();
  if (!ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionCollection_FeedbackMessage__rosidl_typesupport_introspection_c__ActionCollection_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
