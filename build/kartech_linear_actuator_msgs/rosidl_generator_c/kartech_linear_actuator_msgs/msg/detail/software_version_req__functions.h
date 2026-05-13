// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kartech_linear_actuator_msgs:msg/SoftwareVersionReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_VERSION_REQ__FUNCTIONS_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_VERSION_REQ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kartech_linear_actuator_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "kartech_linear_actuator_msgs/msg/detail/software_version_req__struct.h"

/// Initialize msg/SoftwareVersionReq message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kartech_linear_actuator_msgs__msg__SoftwareVersionReq
 * )) before or use
 * kartech_linear_actuator_msgs__msg__SoftwareVersionReq__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__init(kartech_linear_actuator_msgs__msg__SoftwareVersionReq * msg);

/// Finalize msg/SoftwareVersionReq message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
void
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__fini(kartech_linear_actuator_msgs__msg__SoftwareVersionReq * msg);

/// Create msg/SoftwareVersionReq message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kartech_linear_actuator_msgs__msg__SoftwareVersionReq__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
kartech_linear_actuator_msgs__msg__SoftwareVersionReq *
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__create();

/// Destroy msg/SoftwareVersionReq message.
/**
 * It calls
 * kartech_linear_actuator_msgs__msg__SoftwareVersionReq__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
void
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__destroy(kartech_linear_actuator_msgs__msg__SoftwareVersionReq * msg);

/// Check for msg/SoftwareVersionReq message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__are_equal(const kartech_linear_actuator_msgs__msg__SoftwareVersionReq * lhs, const kartech_linear_actuator_msgs__msg__SoftwareVersionReq * rhs);

/// Copy a msg/SoftwareVersionReq message.
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
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__copy(
  const kartech_linear_actuator_msgs__msg__SoftwareVersionReq * input,
  kartech_linear_actuator_msgs__msg__SoftwareVersionReq * output);

/// Initialize array of msg/SoftwareVersionReq messages.
/**
 * It allocates the memory for the number of elements and calls
 * kartech_linear_actuator_msgs__msg__SoftwareVersionReq__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence__init(kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence * array, size_t size);

/// Finalize array of msg/SoftwareVersionReq messages.
/**
 * It calls
 * kartech_linear_actuator_msgs__msg__SoftwareVersionReq__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
void
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence__fini(kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence * array);

/// Create array of msg/SoftwareVersionReq messages.
/**
 * It allocates the memory for the array and calls
 * kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence *
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence__create(size_t size);

/// Destroy array of msg/SoftwareVersionReq messages.
/**
 * It calls
 * kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
void
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence__destroy(kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence * array);

/// Check for msg/SoftwareVersionReq message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence * lhs, const kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence * rhs);

/// Copy an array of msg/SoftwareVersionReq messages.
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
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence * input,
  kartech_linear_actuator_msgs__msg__SoftwareVersionReq__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_VERSION_REQ__FUNCTIONS_H_
