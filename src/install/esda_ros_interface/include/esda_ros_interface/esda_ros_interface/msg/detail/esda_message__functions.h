// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
// generated code does not contain a copyright notice

#ifndef ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__FUNCTIONS_H_
#define ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "esda_ros_interface/msg/rosidl_generator_c__visibility_control.h"

#include "esda_ros_interface/msg/detail/esda_message__struct.h"

/// Initialize msg/EsdaMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * esda_ros_interface__msg__EsdaMessage
 * )) before or use
 * esda_ros_interface__msg__EsdaMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
bool
esda_ros_interface__msg__EsdaMessage__init(esda_ros_interface__msg__EsdaMessage * msg);

/// Finalize msg/EsdaMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
void
esda_ros_interface__msg__EsdaMessage__fini(esda_ros_interface__msg__EsdaMessage * msg);

/// Create msg/EsdaMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * esda_ros_interface__msg__EsdaMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
esda_ros_interface__msg__EsdaMessage *
esda_ros_interface__msg__EsdaMessage__create();

/// Destroy msg/EsdaMessage message.
/**
 * It calls
 * esda_ros_interface__msg__EsdaMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
void
esda_ros_interface__msg__EsdaMessage__destroy(esda_ros_interface__msg__EsdaMessage * msg);

/// Check for msg/EsdaMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
bool
esda_ros_interface__msg__EsdaMessage__are_equal(const esda_ros_interface__msg__EsdaMessage * lhs, const esda_ros_interface__msg__EsdaMessage * rhs);

/// Copy a msg/EsdaMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
bool
esda_ros_interface__msg__EsdaMessage__copy(
  const esda_ros_interface__msg__EsdaMessage * input,
  esda_ros_interface__msg__EsdaMessage * output);

/// Initialize array of msg/EsdaMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * esda_ros_interface__msg__EsdaMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
bool
esda_ros_interface__msg__EsdaMessage__Sequence__init(esda_ros_interface__msg__EsdaMessage__Sequence * array, size_t size);

/// Finalize array of msg/EsdaMessage messages.
/**
 * It calls
 * esda_ros_interface__msg__EsdaMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
void
esda_ros_interface__msg__EsdaMessage__Sequence__fini(esda_ros_interface__msg__EsdaMessage__Sequence * array);

/// Create array of msg/EsdaMessage messages.
/**
 * It allocates the memory for the array and calls
 * esda_ros_interface__msg__EsdaMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
esda_ros_interface__msg__EsdaMessage__Sequence *
esda_ros_interface__msg__EsdaMessage__Sequence__create(size_t size);

/// Destroy array of msg/EsdaMessage messages.
/**
 * It calls
 * esda_ros_interface__msg__EsdaMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
void
esda_ros_interface__msg__EsdaMessage__Sequence__destroy(esda_ros_interface__msg__EsdaMessage__Sequence * array);

/// Check for msg/EsdaMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
bool
esda_ros_interface__msg__EsdaMessage__Sequence__are_equal(const esda_ros_interface__msg__EsdaMessage__Sequence * lhs, const esda_ros_interface__msg__EsdaMessage__Sequence * rhs);

/// Copy an array of msg/EsdaMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_esda_ros_interface
bool
esda_ros_interface__msg__EsdaMessage__Sequence__copy(
  const esda_ros_interface__msg__EsdaMessage__Sequence * input,
  esda_ros_interface__msg__EsdaMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ESDA_ROS_INTERFACE__MSG__DETAIL__ESDA_MESSAGE__FUNCTIONS_H_
