// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__FUNCTIONS_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "delphi_mrr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__struct.h"

/// Initialize msg/VehicleStateMsg1 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * delphi_mrr_msgs__msg__VehicleStateMsg1
 * )) before or use
 * delphi_mrr_msgs__msg__VehicleStateMsg1__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__VehicleStateMsg1__init(delphi_mrr_msgs__msg__VehicleStateMsg1 * msg);

/// Finalize msg/VehicleStateMsg1 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__VehicleStateMsg1__fini(delphi_mrr_msgs__msg__VehicleStateMsg1 * msg);

/// Create msg/VehicleStateMsg1 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * delphi_mrr_msgs__msg__VehicleStateMsg1__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
delphi_mrr_msgs__msg__VehicleStateMsg1 *
delphi_mrr_msgs__msg__VehicleStateMsg1__create();

/// Destroy msg/VehicleStateMsg1 message.
/**
 * It calls
 * delphi_mrr_msgs__msg__VehicleStateMsg1__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__VehicleStateMsg1__destroy(delphi_mrr_msgs__msg__VehicleStateMsg1 * msg);

/// Check for msg/VehicleStateMsg1 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__VehicleStateMsg1__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg1 * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg1 * rhs);

/// Copy a msg/VehicleStateMsg1 message.
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
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__VehicleStateMsg1__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg1 * input,
  delphi_mrr_msgs__msg__VehicleStateMsg1 * output);

/// Initialize array of msg/VehicleStateMsg1 messages.
/**
 * It allocates the memory for the number of elements and calls
 * delphi_mrr_msgs__msg__VehicleStateMsg1__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__init(delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * array, size_t size);

/// Finalize array of msg/VehicleStateMsg1 messages.
/**
 * It calls
 * delphi_mrr_msgs__msg__VehicleStateMsg1__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__fini(delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * array);

/// Create array of msg/VehicleStateMsg1 messages.
/**
 * It allocates the memory for the array and calls
 * delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence *
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__create(size_t size);

/// Destroy array of msg/VehicleStateMsg1 messages.
/**
 * It calls
 * delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__destroy(delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * array);

/// Check for msg/VehicleStateMsg1 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * rhs);

/// Copy an array of msg/VehicleStateMsg1 messages.
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
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * input,
  delphi_mrr_msgs__msg__VehicleStateMsg1__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__FUNCTIONS_H_
