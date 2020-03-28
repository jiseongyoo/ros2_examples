// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/MessageInterfaceExample.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__STRUCT_H_
#define INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/MessageInterfaceExample in the package interfaces.
typedef struct interfaces__msg__MessageInterfaceExample
{
  rosidl_generator_c__String message;
} interfaces__msg__MessageInterfaceExample;

// Struct for a sequence of interfaces__msg__MessageInterfaceExample.
typedef struct interfaces__msg__MessageInterfaceExample__Sequence
{
  interfaces__msg__MessageInterfaceExample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__MessageInterfaceExample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__STRUCT_H_
