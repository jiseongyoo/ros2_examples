// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:action/ActionCollection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/action/action_collection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionCollection_Goal_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::action::ActionCollection_Goal(_init);
}

void ActionCollection_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::action::ActionCollection_Goal *>(message_memory);
  typed_message->~ActionCollection_Goal();
}

size_t size_function__ActionCollection_Goal__unbounded_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Goal__unbounded_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Goal__unbounded_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Goal__unbounded_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Goal__static_five_long_int_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ActionCollection_Goal__static_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Goal__static_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ActionCollection_Goal__bounded_five_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Goal__bounded_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Goal__bounded_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Goal__bounded_five_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Goal__static_five_string_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ActionCollection_Goal__static_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Goal__static_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ActionCollection_Goal__bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Goal__bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Goal__bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Goal__bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionCollection_Goal_message_member_array[22] = {
  {
    "bool_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, bool_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, byte_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, char_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, float_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "double_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, double_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octet_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, octet_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octet_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, octet_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "short_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, short_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "short_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, short_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, long_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, long_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_long_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, long_long_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_long_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, long_long_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "unbounded_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, unbounded_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Goal__unbounded_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Goal__unbounded_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Goal__unbounded_long_int_arr,  // get(index) function pointer
    resize_function__ActionCollection_Goal__unbounded_long_int_arr  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, static_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Goal__static_five_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Goal__static_five_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Goal__static_five_long_int_arr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, bounded_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Goal__bounded_five_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Goal__bounded_five_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Goal__bounded_five_long_int_arr,  // get(index) function pointer
    resize_function__ActionCollection_Goal__bounded_five_long_int_arr  // resize(index) function pointer
  },
  {
    "string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, string_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "static_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, static_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Goal__static_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Goal__static_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Goal__static_five_string_arr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, bounded_ten_char_string_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Goal__bounded_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Goal__bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Goal__bounded_five_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Goal__bounded_five_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Goal__bounded_ten_char_unbounded_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Goal, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Goal__bounded_ten_char_bounded_five_string_arr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionCollection_Goal_message_members = {
  "interfaces::action",  // message namespace
  "ActionCollection_Goal",  // message name
  22,  // number of fields
  sizeof(interfaces::action::ActionCollection_Goal),
  ActionCollection_Goal_message_member_array,  // message members
  ActionCollection_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionCollection_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::action::ActionCollection_Goal>()
{
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_Goal)() {
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionCollection_Result_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::action::ActionCollection_Result(_init);
}

void ActionCollection_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::action::ActionCollection_Result *>(message_memory);
  typed_message->~ActionCollection_Result();
}

size_t size_function__ActionCollection_Result__unbounded_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Result__unbounded_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Result__unbounded_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Result__unbounded_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Result__static_five_long_int_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ActionCollection_Result__static_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Result__static_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ActionCollection_Result__bounded_five_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Result__bounded_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Result__bounded_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Result__bounded_five_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Result__static_five_string_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ActionCollection_Result__static_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Result__static_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ActionCollection_Result__bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Result__bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Result__bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Result__bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Result__bounded_ten_char_unbounded_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Result__bounded_ten_char_unbounded_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Result__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Result__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionCollection_Result_message_member_array[22] = {
  {
    "bool_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, bool_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, byte_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, char_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, float_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "double_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, double_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octet_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, octet_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octet_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, octet_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "short_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, short_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "short_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, short_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, long_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, long_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_long_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, long_long_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_long_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, long_long_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "unbounded_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, unbounded_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Result__unbounded_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Result__unbounded_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Result__unbounded_long_int_arr,  // get(index) function pointer
    resize_function__ActionCollection_Result__unbounded_long_int_arr  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, static_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Result__static_five_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Result__static_five_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Result__static_five_long_int_arr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, bounded_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Result__bounded_five_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Result__bounded_five_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Result__bounded_five_long_int_arr,  // get(index) function pointer
    resize_function__ActionCollection_Result__bounded_five_long_int_arr  // resize(index) function pointer
  },
  {
    "string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, string_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "static_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, static_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Result__static_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Result__static_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Result__static_five_string_arr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, bounded_ten_char_string_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Result__bounded_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Result__bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Result__bounded_five_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Result__bounded_five_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Result__bounded_ten_char_unbounded_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Result__bounded_ten_char_unbounded_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Result__bounded_ten_char_unbounded_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Result__bounded_ten_char_unbounded_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Result, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Result__bounded_ten_char_bounded_five_string_arr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionCollection_Result_message_members = {
  "interfaces::action",  // message namespace
  "ActionCollection_Result",  // message name
  22,  // number of fields
  sizeof(interfaces::action::ActionCollection_Result),
  ActionCollection_Result_message_member_array,  // message members
  ActionCollection_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionCollection_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::action::ActionCollection_Result>()
{
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_Result)() {
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionCollection_Feedback_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::action::ActionCollection_Feedback(_init);
}

void ActionCollection_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::action::ActionCollection_Feedback *>(message_memory);
  typed_message->~ActionCollection_Feedback();
}

size_t size_function__ActionCollection_Feedback__unbounded_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Feedback__unbounded_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Feedback__unbounded_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Feedback__unbounded_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Feedback__static_five_long_int_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ActionCollection_Feedback__static_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Feedback__static_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ActionCollection_Feedback__bounded_five_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Feedback__bounded_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Feedback__bounded_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Feedback__bounded_five_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Feedback__static_five_string_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ActionCollection_Feedback__static_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Feedback__static_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ActionCollection_Feedback__bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Feedback__bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Feedback__bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Feedback__bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionCollection_Feedback_message_member_array[22] = {
  {
    "bool_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, bool_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, byte_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, char_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, float_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "double_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, double_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octet_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, octet_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octet_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, octet_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "short_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, short_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "short_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, short_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, long_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, long_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_long_int_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, long_long_int_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "long_long_uint_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, long_long_uint_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "unbounded_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, unbounded_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Feedback__unbounded_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Feedback__unbounded_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Feedback__unbounded_long_int_arr,  // get(index) function pointer
    resize_function__ActionCollection_Feedback__unbounded_long_int_arr  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, static_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Feedback__static_five_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Feedback__static_five_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Feedback__static_five_long_int_arr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, bounded_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Feedback__bounded_five_long_int_arr,  // size() function pointer
    get_const_function__ActionCollection_Feedback__bounded_five_long_int_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Feedback__bounded_five_long_int_arr,  // get(index) function pointer
    resize_function__ActionCollection_Feedback__bounded_five_long_int_arr  // resize(index) function pointer
  },
  {
    "string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, string_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "static_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, static_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Feedback__static_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Feedback__static_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Feedback__static_five_string_arr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, bounded_ten_char_string_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Feedback__bounded_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Feedback__bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Feedback__bounded_five_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Feedback__bounded_five_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Feedback__bounded_ten_char_unbounded_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::action::ActionCollection_Feedback, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr,  // size() function pointer
    get_const_function__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr,  // get(index) function pointer
    resize_function__ActionCollection_Feedback__bounded_ten_char_bounded_five_string_arr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionCollection_Feedback_message_members = {
  "interfaces::action",  // message namespace
  "ActionCollection_Feedback",  // message name
  22,  // number of fields
  sizeof(interfaces::action::ActionCollection_Feedback),
  ActionCollection_Feedback_message_member_array,  // message members
  ActionCollection_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionCollection_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::action::ActionCollection_Feedback>()
{
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_Feedback)() {
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionCollection_SendGoal_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::action::ActionCollection_SendGoal_Request(_init);
}

void ActionCollection_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::action::ActionCollection_SendGoal_Request *>(message_memory);
  typed_message->~ActionCollection_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionCollection_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces::action::ActionCollection_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionCollection_SendGoal_Request_message_members = {
  "interfaces::action",  // message namespace
  "ActionCollection_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(interfaces::action::ActionCollection_SendGoal_Request),
  ActionCollection_SendGoal_Request_message_member_array,  // message members
  ActionCollection_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionCollection_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::action::ActionCollection_SendGoal_Request>()
{
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_SendGoal_Request)() {
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionCollection_SendGoal_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::action::ActionCollection_SendGoal_Response(_init);
}

void ActionCollection_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::action::ActionCollection_SendGoal_Response *>(message_memory);
  typed_message->~ActionCollection_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionCollection_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionCollection_SendGoal_Response_message_members = {
  "interfaces::action",  // message namespace
  "ActionCollection_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(interfaces::action::ActionCollection_SendGoal_Response),
  ActionCollection_SendGoal_Response_message_member_array,  // message members
  ActionCollection_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionCollection_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::action::ActionCollection_SendGoal_Response>()
{
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_SendGoal_Response)() {
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ActionCollection_SendGoal_service_members = {
  "interfaces::action",  // service namespace
  "ActionCollection_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<interfaces::action::ActionCollection_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ActionCollection_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces::action::ActionCollection_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces::action::ActionCollection_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces::action::ActionCollection_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<interfaces::action::ActionCollection_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionCollection_GetResult_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::action::ActionCollection_GetResult_Request(_init);
}

void ActionCollection_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::action::ActionCollection_GetResult_Request *>(message_memory);
  typed_message->~ActionCollection_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionCollection_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionCollection_GetResult_Request_message_members = {
  "interfaces::action",  // message namespace
  "ActionCollection_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(interfaces::action::ActionCollection_GetResult_Request),
  ActionCollection_GetResult_Request_message_member_array,  // message members
  ActionCollection_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionCollection_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::action::ActionCollection_GetResult_Request>()
{
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_GetResult_Request)() {
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionCollection_GetResult_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::action::ActionCollection_GetResult_Response(_init);
}

void ActionCollection_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::action::ActionCollection_GetResult_Response *>(message_memory);
  typed_message->~ActionCollection_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionCollection_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces::action::ActionCollection_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionCollection_GetResult_Response_message_members = {
  "interfaces::action",  // message namespace
  "ActionCollection_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(interfaces::action::ActionCollection_GetResult_Response),
  ActionCollection_GetResult_Response_message_member_array,  // message members
  ActionCollection_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionCollection_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::action::ActionCollection_GetResult_Response>()
{
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_GetResult_Response)() {
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ActionCollection_GetResult_service_members = {
  "interfaces::action",  // service namespace
  "ActionCollection_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<interfaces::action::ActionCollection_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ActionCollection_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces::action::ActionCollection_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces::action::ActionCollection_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces::action::ActionCollection_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<interfaces::action::ActionCollection_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces/action/action_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionCollection_FeedbackMessage_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::action::ActionCollection_FeedbackMessage(_init);
}

void ActionCollection_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::action::ActionCollection_FeedbackMessage *>(message_memory);
  typed_message->~ActionCollection_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionCollection_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces::action::ActionCollection_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::action::ActionCollection_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionCollection_FeedbackMessage_message_members = {
  "interfaces::action",  // message namespace
  "ActionCollection_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(interfaces::action::ActionCollection_FeedbackMessage),
  ActionCollection_FeedbackMessage_message_member_array,  // message members
  ActionCollection_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionCollection_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionCollection_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionCollection_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::action::ActionCollection_FeedbackMessage>()
{
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, action, ActionCollection_FeedbackMessage)() {
  return &::interfaces::action::rosidl_typesupport_introspection_cpp::ActionCollection_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
