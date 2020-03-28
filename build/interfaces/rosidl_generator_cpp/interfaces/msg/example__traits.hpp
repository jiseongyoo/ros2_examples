// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__EXAMPLE__TRAITS_HPP_
#define INTERFACES__MSG__EXAMPLE__TRAITS_HPP_

#include "interfaces/msg/example__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::msg::Example>()
{
  return "interfaces::msg::Example";
}

template<>
struct has_fixed_size<interfaces::msg::Example>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::Example>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::Example>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__EXAMPLE__TRAITS_HPP_
