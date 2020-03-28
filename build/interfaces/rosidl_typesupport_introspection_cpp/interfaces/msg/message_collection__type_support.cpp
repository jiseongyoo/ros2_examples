// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/MessageCollection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/message_collection__struct.hpp"
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

void MessageCollection_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::MessageCollection(_init);
}

void MessageCollection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::MessageCollection *>(message_memory);
  typed_message->~MessageCollection();
}

size_t size_function__MessageCollection__unbounded_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MessageCollection__unbounded_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MessageCollection__unbounded_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MessageCollection__unbounded_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MessageCollection__static_five_long_int_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MessageCollection__static_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MessageCollection__static_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__MessageCollection__bounded_five_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MessageCollection__bounded_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MessageCollection__bounded_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MessageCollection__bounded_five_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MessageCollection__static_five_string_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MessageCollection__static_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MessageCollection__static_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__MessageCollection__bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MessageCollection__bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MessageCollection__bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__MessageCollection__bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MessageCollection__bounded_ten_char_unbounded_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MessageCollection__bounded_ten_char_unbounded_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MessageCollection__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__MessageCollection__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MessageCollection__bounded_ten_char_bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MessageCollection__bounded_ten_char_bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MessageCollection__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__MessageCollection__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MessageCollection_message_member_array[22] = {
  {
    "bool_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::MessageCollection, bool_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, byte_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, char_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, float_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, double_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, octet_int_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, octet_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, short_int_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, short_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, long_int_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, long_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, long_long_int_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, long_long_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, unbounded_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MessageCollection__unbounded_long_int_arr,  // size() function pointer
    get_const_function__MessageCollection__unbounded_long_int_arr,  // get_const(index) function pointer
    get_function__MessageCollection__unbounded_long_int_arr,  // get(index) function pointer
    resize_function__MessageCollection__unbounded_long_int_arr  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::MessageCollection, static_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MessageCollection__static_five_long_int_arr,  // size() function pointer
    get_const_function__MessageCollection__static_five_long_int_arr,  // get_const(index) function pointer
    get_function__MessageCollection__static_five_long_int_arr,  // get(index) function pointer
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
    offsetof(interfaces::msg::MessageCollection, bounded_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MessageCollection__bounded_five_long_int_arr,  // size() function pointer
    get_const_function__MessageCollection__bounded_five_long_int_arr,  // get_const(index) function pointer
    get_function__MessageCollection__bounded_five_long_int_arr,  // get(index) function pointer
    resize_function__MessageCollection__bounded_five_long_int_arr  // resize(index) function pointer
  },
  {
    "string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::MessageCollection, string_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, static_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MessageCollection__static_five_string_arr,  // size() function pointer
    get_const_function__MessageCollection__static_five_string_arr,  // get_const(index) function pointer
    get_function__MessageCollection__static_five_string_arr,  // get(index) function pointer
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
    offsetof(interfaces::msg::MessageCollection, bounded_ten_char_string_t),  // bytes offset in struct
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
    offsetof(interfaces::msg::MessageCollection, bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MessageCollection__bounded_five_string_arr,  // size() function pointer
    get_const_function__MessageCollection__bounded_five_string_arr,  // get_const(index) function pointer
    get_function__MessageCollection__bounded_five_string_arr,  // get(index) function pointer
    resize_function__MessageCollection__bounded_five_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::MessageCollection, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MessageCollection__bounded_ten_char_unbounded_string_arr,  // size() function pointer
    get_const_function__MessageCollection__bounded_ten_char_unbounded_string_arr,  // get_const(index) function pointer
    get_function__MessageCollection__bounded_ten_char_unbounded_string_arr,  // get(index) function pointer
    resize_function__MessageCollection__bounded_ten_char_unbounded_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::msg::MessageCollection, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MessageCollection__bounded_ten_char_bounded_five_string_arr,  // size() function pointer
    get_const_function__MessageCollection__bounded_ten_char_bounded_five_string_arr,  // get_const(index) function pointer
    get_function__MessageCollection__bounded_ten_char_bounded_five_string_arr,  // get(index) function pointer
    resize_function__MessageCollection__bounded_ten_char_bounded_five_string_arr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MessageCollection_message_members = {
  "interfaces::msg",  // message namespace
  "MessageCollection",  // message name
  22,  // number of fields
  sizeof(interfaces::msg::MessageCollection),
  MessageCollection_message_member_array,  // message members
  MessageCollection_init_function,  // function to initialize message memory (memory has to be allocated)
  MessageCollection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MessageCollection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MessageCollection_message_members,
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
get_message_type_support_handle<interfaces::msg::MessageCollection>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::MessageCollection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, MessageCollection)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::MessageCollection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
