// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/ServiceInterfaceExample.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__STRUCT_H_
#define INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/ServiceInterfaceExample in the package interfaces.
typedef struct interfaces__srv__ServiceInterfaceExample_Request
{
  rosidl_generator_c__String request;
} interfaces__srv__ServiceInterfaceExample_Request;

// Struct for a sequence of interfaces__srv__ServiceInterfaceExample_Request.
typedef struct interfaces__srv__ServiceInterfaceExample_Request__Sequence
{
  interfaces__srv__ServiceInterfaceExample_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ServiceInterfaceExample_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/ServiceInterfaceExample in the package interfaces.
typedef struct interfaces__srv__ServiceInterfaceExample_Response
{
  rosidl_generator_c__String response;
} interfaces__srv__ServiceInterfaceExample_Response;

// Struct for a sequence of interfaces__srv__ServiceInterfaceExample_Response.
typedef struct interfaces__srv__ServiceInterfaceExample_Response__Sequence
{
  interfaces__srv__ServiceInterfaceExample_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ServiceInterfaceExample_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__STRUCT_H_
