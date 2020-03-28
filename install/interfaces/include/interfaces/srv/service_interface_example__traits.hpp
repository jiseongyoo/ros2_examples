// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/ServiceInterfaceExample.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__TRAITS_HPP_
#define INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__TRAITS_HPP_

#include "interfaces/srv/service_interface_example__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ServiceInterfaceExample_Request>()
{
  return "interfaces::srv::ServiceInterfaceExample_Request";
}

template<>
struct has_fixed_size<interfaces::srv::ServiceInterfaceExample_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::ServiceInterfaceExample_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::ServiceInterfaceExample_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ServiceInterfaceExample_Response>()
{
  return "interfaces::srv::ServiceInterfaceExample_Response";
}

template<>
struct has_fixed_size<interfaces::srv::ServiceInterfaceExample_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::ServiceInterfaceExample_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::ServiceInterfaceExample_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ServiceInterfaceExample>()
{
  return "interfaces::srv::ServiceInterfaceExample";
}

template<>
struct has_fixed_size<interfaces::srv::ServiceInterfaceExample>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::ServiceInterfaceExample_Request>::value &&
    has_fixed_size<interfaces::srv::ServiceInterfaceExample_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::ServiceInterfaceExample>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::ServiceInterfaceExample_Request>::value &&
    has_bounded_size<interfaces::srv::ServiceInterfaceExample_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::ServiceInterfaceExample>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::ServiceInterfaceExample_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::ServiceInterfaceExample_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__TRAITS_HPP_
