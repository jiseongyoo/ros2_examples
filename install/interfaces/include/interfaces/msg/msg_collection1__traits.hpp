// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/MsgCollection1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__MSG_COLLECTION1__TRAITS_HPP_
#define INTERFACES__MSG__MSG_COLLECTION1__TRAITS_HPP_

#include "interfaces/msg/msg_collection1__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::msg::MsgCollection1>()
{
  return "interfaces::msg::MsgCollection1";
}

template<>
struct has_fixed_size<interfaces::msg::MsgCollection1>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::MsgCollection1>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::MsgCollection1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__MSG_COLLECTION1__TRAITS_HPP_
