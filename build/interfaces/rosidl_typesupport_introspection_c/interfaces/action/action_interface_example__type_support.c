// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:action/ActionInterfaceExample.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/action/action_interface_example__functions.h"
#include "interfaces/action/action_interface_example__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionInterfaceExample_Goal__init(message_memory);
}

void ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_fini_function(void * message_memory)
{
  interfaces__action__ActionInterfaceExample_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionInterfaceExample_Goal, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_message_members = {
  "interfaces__action",  // message namespace
  "ActionInterfaceExample_Goal",  // message name
  1,  // number of fields
  sizeof(interfaces__action__ActionInterfaceExample_Goal),
  ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_message_member_array,  // message members
  ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_message_type_support_handle = {
  0,
  &ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_Goal)() {
  if (!ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_message_type_support_handle.typesupport_identifier) {
    ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionInterfaceExample_Goal__rosidl_typesupport_introspection_c__ActionInterfaceExample_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_interface_example__functions.h"
// already included above
// #include "interfaces/action/action_interface_example__struct.h"


// Include directives for member types
// Member `goal`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionInterfaceExample_Result__init(message_memory);
}

void ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_fini_function(void * message_memory)
{
  interfaces__action__ActionInterfaceExample_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_message_member_array[1] = {
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionInterfaceExample_Result, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_message_members = {
  "interfaces__action",  // message namespace
  "ActionInterfaceExample_Result",  // message name
  1,  // number of fields
  sizeof(interfaces__action__ActionInterfaceExample_Result),
  ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_message_member_array,  // message members
  ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_message_type_support_handle = {
  0,
  &ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_Result)() {
  if (!ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_message_type_support_handle.typesupport_identifier) {
    ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionInterfaceExample_Result__rosidl_typesupport_introspection_c__ActionInterfaceExample_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_interface_example__functions.h"
// already included above
// #include "interfaces/action/action_interface_example__struct.h"


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionInterfaceExample_Feedback__init(message_memory);
}

void ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_fini_function(void * message_memory)
{
  interfaces__action__ActionInterfaceExample_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionInterfaceExample_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_message_members = {
  "interfaces__action",  // message namespace
  "ActionInterfaceExample_Feedback",  // message name
  1,  // number of fields
  sizeof(interfaces__action__ActionInterfaceExample_Feedback),
  ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_message_member_array,  // message members
  ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_message_type_support_handle = {
  0,
  &ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_Feedback)() {
  if (!ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_message_type_support_handle.typesupport_identifier) {
    ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionInterfaceExample_Feedback__rosidl_typesupport_introspection_c__ActionInterfaceExample_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_interface_example__functions.h"
// already included above
// #include "interfaces/action/action_interface_example__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "interfaces/action/action_interface_example.h"
// Member `goal`
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionInterfaceExample_SendGoal_Request__init(message_memory);
}

void ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_fini_function(void * message_memory)
{
  interfaces__action__ActionInterfaceExample_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionInterfaceExample_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(interfaces__action__ActionInterfaceExample_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_members = {
  "interfaces__action",  // message namespace
  "ActionInterfaceExample_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(interfaces__action__ActionInterfaceExample_SendGoal_Request),
  ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_member_array,  // message members
  ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_type_support_handle = {
  0,
  &ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_SendGoal_Request)() {
  ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_Goal)();
  if (!ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionInterfaceExample_SendGoal_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_interface_example__functions.h"
// already included above
// #include "interfaces/action/action_interface_example__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionInterfaceExample_SendGoal_Response__init(message_memory);
}

void ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_fini_function(void * message_memory)
{
  interfaces__action__ActionInterfaceExample_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionInterfaceExample_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(interfaces__action__ActionInterfaceExample_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_members = {
  "interfaces__action",  // message namespace
  "ActionInterfaceExample_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(interfaces__action__ActionInterfaceExample_SendGoal_Response),
  ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_member_array,  // message members
  ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_type_support_handle = {
  0,
  &ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_SendGoal_Response)() {
  ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionInterfaceExample_SendGoal_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_service_members = {
  "interfaces__action",  // service namespace
  "ActionInterfaceExample_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_service_type_support_handle = {
  0,
  &interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_SendGoal)() {
  if (!interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_service_type_support_handle.typesupport_identifier) {
    interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_SendGoal_Response)()->data;
  }

  return &interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_interface_example__functions.h"
// already included above
// #include "interfaces/action/action_interface_example__struct.h"


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

void ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionInterfaceExample_GetResult_Request__init(message_memory);
}

void ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_fini_function(void * message_memory)
{
  interfaces__action__ActionInterfaceExample_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionInterfaceExample_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_members = {
  "interfaces__action",  // message namespace
  "ActionInterfaceExample_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(interfaces__action__ActionInterfaceExample_GetResult_Request),
  ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_member_array,  // message members
  ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_type_support_handle = {
  0,
  &ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_GetResult_Request)() {
  ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionInterfaceExample_GetResult_Request__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_interface_example__functions.h"
// already included above
// #include "interfaces/action/action_interface_example__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "interfaces/action/action_interface_example.h"
// Member `result`
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionInterfaceExample_GetResult_Response__init(message_memory);
}

void ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_fini_function(void * message_memory)
{
  interfaces__action__ActionInterfaceExample_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionInterfaceExample_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(interfaces__action__ActionInterfaceExample_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_members = {
  "interfaces__action",  // message namespace
  "ActionInterfaceExample_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(interfaces__action__ActionInterfaceExample_GetResult_Response),
  ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_member_array,  // message members
  ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_type_support_handle = {
  0,
  &ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_GetResult_Response)() {
  ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_Result)();
  if (!ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionInterfaceExample_GetResult_Response__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_service_members = {
  "interfaces__action",  // service namespace
  "ActionInterfaceExample_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_service_type_support_handle = {
  0,
  &interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_GetResult)() {
  if (!interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_service_type_support_handle.typesupport_identifier) {
    interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_GetResult_Response)()->data;
  }

  return &interfaces__action__action_interface_example__rosidl_typesupport_introspection_c__ActionInterfaceExample_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/action/action_interface_example__functions.h"
// already included above
// #include "interfaces/action/action_interface_example__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "interfaces/action/action_interface_example.h"
// Member `feedback`
// already included above
// #include "interfaces/action/action_interface_example__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__action__ActionInterfaceExample_FeedbackMessage__init(message_memory);
}

void ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_fini_function(void * message_memory)
{
  interfaces__action__ActionInterfaceExample_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__action__ActionInterfaceExample_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(interfaces__action__ActionInterfaceExample_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_members = {
  "interfaces__action",  // message namespace
  "ActionInterfaceExample_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(interfaces__action__ActionInterfaceExample_FeedbackMessage),
  ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_member_array,  // message members
  ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_type_support_handle = {
  0,
  &ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_FeedbackMessage)() {
  ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, ActionInterfaceExample_Feedback)();
  if (!ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionInterfaceExample_FeedbackMessage__rosidl_typesupport_introspection_c__ActionInterfaceExample_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
