// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/ServiceCollection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__SERVICE_COLLECTION__TRAITS_HPP_
#define INTERFACES__SRV__SERVICE_COLLECTION__TRAITS_HPP_

#include "interfaces/srv/service_collection__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ServiceCollection_Request>()
{
  return "interfaces::srv::ServiceCollection_Request";
}

template<>
struct has_fixed_size<interfaces::srv::ServiceCollection_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::ServiceCollection_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::ServiceCollection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ServiceCollection_Response>()
{
  return "interfaces::srv::ServiceCollection_Response";
}

template<>
struct has_fixed_size<interfaces::srv::ServiceCollection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::ServiceCollection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::ServiceCollection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ServiceCollection>()
{
  return "interfaces::srv::ServiceCollection";
}

template<>
struct has_fixed_size<interfaces::srv::ServiceCollection>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::ServiceCollection_Request>::value &&
    has_fixed_size<interfaces::srv::ServiceCollection_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::ServiceCollection>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::ServiceCollection_Request>::value &&
    has_bounded_size<interfaces::srv::ServiceCollection_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::ServiceCollection>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::ServiceCollection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::ServiceCollection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__SERVICE_COLLECTION__TRAITS_HPP_
