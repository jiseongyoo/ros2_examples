// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:srv/ServiceCollection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/srv/service_collection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServiceCollection_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::srv::ServiceCollection_Request(_init);
}

void ServiceCollection_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::srv::ServiceCollection_Request *>(message_memory);
  typed_message->~ServiceCollection_Request();
}

size_t size_function__ServiceCollection_Request__unbounded_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Request__unbounded_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Request__unbounded_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Request__unbounded_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceCollection_Request__static_five_long_int_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ServiceCollection_Request__static_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Request__static_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ServiceCollection_Request__bounded_five_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Request__bounded_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Request__bounded_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Request__bounded_five_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceCollection_Request__static_five_string_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ServiceCollection_Request__static_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Request__static_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ServiceCollection_Request__bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Request__bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Request__bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Request__bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceCollection_Request_message_member_array[22] = {
  {
    "bool_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Request, bool_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, byte_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, char_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, float_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, double_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, octet_int_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, octet_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, short_int_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, short_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, long_int_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, long_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, long_long_int_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, long_long_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, unbounded_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Request__unbounded_long_int_arr,  // size() function pointer
    get_const_function__ServiceCollection_Request__unbounded_long_int_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Request__unbounded_long_int_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Request__unbounded_long_int_arr  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Request, static_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Request__static_five_long_int_arr,  // size() function pointer
    get_const_function__ServiceCollection_Request__static_five_long_int_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Request__static_five_long_int_arr,  // get(index) function pointer
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
    offsetof(interfaces::srv::ServiceCollection_Request, bounded_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Request__bounded_five_long_int_arr,  // size() function pointer
    get_const_function__ServiceCollection_Request__bounded_five_long_int_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Request__bounded_five_long_int_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Request__bounded_five_long_int_arr  // resize(index) function pointer
  },
  {
    "string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Request, string_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, static_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Request__static_five_string_arr,  // size() function pointer
    get_const_function__ServiceCollection_Request__static_five_string_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Request__static_five_string_arr,  // get(index) function pointer
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
    offsetof(interfaces::srv::ServiceCollection_Request, bounded_ten_char_string_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Request, bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Request__bounded_five_string_arr,  // size() function pointer
    get_const_function__ServiceCollection_Request__bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Request__bounded_five_string_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Request__bounded_five_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Request, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr,  // size() function pointer
    get_const_function__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Request__bounded_ten_char_unbounded_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Request, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr,  // size() function pointer
    get_const_function__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Request__bounded_ten_char_bounded_five_string_arr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceCollection_Request_message_members = {
  "interfaces::srv",  // message namespace
  "ServiceCollection_Request",  // message name
  22,  // number of fields
  sizeof(interfaces::srv::ServiceCollection_Request),
  ServiceCollection_Request_message_member_array,  // message members
  ServiceCollection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceCollection_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceCollection_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceCollection_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::ServiceCollection_Request>()
{
  return &::interfaces::srv::rosidl_typesupport_introspection_cpp::ServiceCollection_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, ServiceCollection_Request)() {
  return &::interfaces::srv::rosidl_typesupport_introspection_cpp::ServiceCollection_Request_message_type_support_handle;
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
// #include "interfaces/srv/service_collection__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServiceCollection_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::srv::ServiceCollection_Response(_init);
}

void ServiceCollection_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::srv::ServiceCollection_Response *>(message_memory);
  typed_message->~ServiceCollection_Response();
}

size_t size_function__ServiceCollection_Response__unbounded_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Response__unbounded_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Response__unbounded_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Response__unbounded_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceCollection_Response__static_five_long_int_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ServiceCollection_Response__static_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Response__static_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ServiceCollection_Response__bounded_five_long_int_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Response__bounded_five_long_int_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Response__bounded_five_long_int_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Response__bounded_five_long_int_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceCollection_Response__static_five_string_arr(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ServiceCollection_Response__static_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Response__static_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 5> *>(untyped_member);
  return &member[index];
}

size_t size_function__ServiceCollection_Response__bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Response__bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Response__bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Response__bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceCollection_Response_message_member_array[22] = {
  {
    "bool_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Response, bool_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, byte_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, char_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, float_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, double_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, octet_int_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, octet_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, short_int_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, short_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, long_int_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, long_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, long_long_int_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, long_long_uint_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, unbounded_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Response__unbounded_long_int_arr,  // size() function pointer
    get_const_function__ServiceCollection_Response__unbounded_long_int_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Response__unbounded_long_int_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Response__unbounded_long_int_arr  // resize(index) function pointer
  },
  {
    "static_five_long_int_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Response, static_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Response__static_five_long_int_arr,  // size() function pointer
    get_const_function__ServiceCollection_Response__static_five_long_int_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Response__static_five_long_int_arr,  // get(index) function pointer
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
    offsetof(interfaces::srv::ServiceCollection_Response, bounded_five_long_int_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Response__bounded_five_long_int_arr,  // size() function pointer
    get_const_function__ServiceCollection_Response__bounded_five_long_int_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Response__bounded_five_long_int_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Response__bounded_five_long_int_arr  // resize(index) function pointer
  },
  {
    "string_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Response, string_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, static_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Response__static_five_string_arr,  // size() function pointer
    get_const_function__ServiceCollection_Response__static_five_string_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Response__static_five_string_arr,  // get(index) function pointer
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
    offsetof(interfaces::srv::ServiceCollection_Response, bounded_ten_char_string_t),  // bytes offset in struct
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
    offsetof(interfaces::srv::ServiceCollection_Response, bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Response__bounded_five_string_arr,  // size() function pointer
    get_const_function__ServiceCollection_Response__bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Response__bounded_five_string_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Response__bounded_five_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_unbounded_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Response, bounded_ten_char_unbounded_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr,  // size() function pointer
    get_const_function__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Response__bounded_ten_char_unbounded_string_arr  // resize(index) function pointer
  },
  {
    "bounded_ten_char_bounded_five_string_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    10,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(interfaces::srv::ServiceCollection_Response, bounded_ten_char_bounded_five_string_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr,  // size() function pointer
    get_const_function__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr,  // get_const(index) function pointer
    get_function__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr,  // get(index) function pointer
    resize_function__ServiceCollection_Response__bounded_ten_char_bounded_five_string_arr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceCollection_Response_message_members = {
  "interfaces::srv",  // message namespace
  "ServiceCollection_Response",  // message name
  22,  // number of fields
  sizeof(interfaces::srv::ServiceCollection_Response),
  ServiceCollection_Response_message_member_array,  // message members
  ServiceCollection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceCollection_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceCollection_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceCollection_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::ServiceCollection_Response>()
{
  return &::interfaces::srv::rosidl_typesupport_introspection_cpp::ServiceCollection_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, ServiceCollection_Response)() {
  return &::interfaces::srv::rosidl_typesupport_introspection_cpp::ServiceCollection_Response_message_type_support_handle;
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
// #include "interfaces/srv/service_collection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ServiceCollection_service_members = {
  "interfaces::srv",  // service namespace
  "ServiceCollection",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<interfaces::srv::ServiceCollection>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ServiceCollection_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceCollection_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces::srv::ServiceCollection>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::interfaces::srv::rosidl_typesupport_introspection_cpp::ServiceCollection_service_type_support_handle;
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
        ::interfaces::srv::ServiceCollection_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces::srv::ServiceCollection_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, ServiceCollection)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<interfaces::srv::ServiceCollection>();
}

#ifdef __cplusplus
}
#endif
