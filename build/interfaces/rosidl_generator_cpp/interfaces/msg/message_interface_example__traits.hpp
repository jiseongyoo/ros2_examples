// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/MessageInterfaceExample.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__TRAITS_HPP_
#define INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__TRAITS_HPP_

#include "interfaces/msg/message_interface_example__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::msg::MessageInterfaceExample>()
{
  return "interfaces::msg::MessageInterfaceExample";
}

template<>
struct has_fixed_size<interfaces::msg::MessageInterfaceExample>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::MessageInterfaceExample>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::MessageInterfaceExample>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__TRAITS_HPP_
