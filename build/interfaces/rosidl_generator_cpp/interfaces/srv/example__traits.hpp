// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Example.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__EXAMPLE__TRAITS_HPP_
#define INTERFACES__SRV__EXAMPLE__TRAITS_HPP_

#include "interfaces/srv/example__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Example_Request>()
{
  return "interfaces::srv::Example_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Example_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Example_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::Example_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Example_Response>()
{
  return "interfaces::srv::Example_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Example_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Example_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::Example_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Example>()
{
  return "interfaces::srv::Example";
}

template<>
struct has_fixed_size<interfaces::srv::Example>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Example_Request>::value &&
    has_fixed_size<interfaces::srv::Example_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Example>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Example_Request>::value &&
    has_bounded_size<interfaces::srv::Example_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Example>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Example_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Example_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__EXAMPLE__TRAITS_HPP_
