// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/MessageCollection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__MESSAGE_COLLECTION__FUNCTIONS_H_
#define INTERFACES__MSG__MESSAGE_COLLECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "interfaces/msg/message_collection__struct.h"

/// Initialize msg/MessageCollection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaces__msg__MessageCollection
 * )) before or use
 * interfaces__msg__MessageCollection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__MessageCollection__init(interfaces__msg__MessageCollection * msg);

/// Finalize msg/MessageCollection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__MessageCollection__fini(interfaces__msg__MessageCollection * msg);

/// Create msg/MessageCollection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaces__msg__MessageCollection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
interfaces__msg__MessageCollection *
interfaces__msg__MessageCollection__create();

/// Destroy msg/MessageCollection message.
/**
 * It calls
 * interfaces__msg__MessageCollection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__MessageCollection__destroy(interfaces__msg__MessageCollection * msg);


/// Initialize array of msg/MessageCollection messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaces__msg__MessageCollection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__MessageCollection__Sequence__init(interfaces__msg__MessageCollection__Sequence * array, size_t size);

/// Finalize array of msg/MessageCollection messages.
/**
 * It calls
 * interfaces__msg__MessageCollection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__MessageCollection__Sequence__fini(interfaces__msg__MessageCollection__Sequence * array);

/// Create array of msg/MessageCollection messages.
/**
 * It allocates the memory for the array and calls
 * interfaces__msg__MessageCollection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
interfaces__msg__MessageCollection__Sequence *
interfaces__msg__MessageCollection__Sequence__create(size_t size);

/// Destroy array of msg/MessageCollection messages.
/**
 * It calls
 * interfaces__msg__MessageCollection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__MessageCollection__Sequence__destroy(interfaces__msg__MessageCollection__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__MESSAGE_COLLECTION__FUNCTIONS_H_
