// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/MessageInterfaceExample.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/message_interface_example__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MessageInterfaceExample_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::MessageInterfaceExample(_init);
}

void MessageInterfaceExample_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::MessageInterfaceExample *>(message_memory);
  typed_message->~MessageInterfaceExample();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MessageInterfaceExample_message_member_array[1] = {
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::MessageInterfaceExample, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MessageInterfaceExample_message_members = {
  "interfaces::msg",  // message namespace
  "MessageInterfaceExample",  // message name
  1,  // number of fields
  sizeof(interfaces::msg::MessageInterfaceExample),
  MessageInterfaceExample_message_member_array,  // message members
  MessageInterfaceExample_init_function,  // function to initialize message memory (memory has to be allocated)
  MessageInterfaceExample_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MessageInterfaceExample_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MessageInterfaceExample_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::MessageInterfaceExample>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::MessageInterfaceExample_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, MessageInterfaceExample)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::MessageInterfaceExample_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
