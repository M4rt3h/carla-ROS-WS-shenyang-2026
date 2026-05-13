// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorCoverage.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__FUNCTIONS_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "delphi_mrr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "delphi_mrr_msgs/msg/detail/mrr_header_sensor_coverage__struct.h"

/// Initialize msg/MrrHeaderSensorCoverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * delphi_mrr_msgs__msg__MrrHeaderSensorCoverage
 * )) before or use
 * delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__init(delphi_mrr_msgs__msg__MrrHeaderSensorCoverage * msg);

/// Finalize msg/MrrHeaderSensorCoverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__fini(delphi_mrr_msgs__msg__MrrHeaderSensorCoverage * msg);

/// Create msg/MrrHeaderSensorCoverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage *
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__create();

/// Destroy msg/MrrHeaderSensorCoverage message.
/**
 * It calls
 * delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__destroy(delphi_mrr_msgs__msg__MrrHeaderSensorCoverage * msg);

/// Check for msg/MrrHeaderSensorCoverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__are_equal(const delphi_mrr_msgs__msg__MrrHeaderSensorCoverage * lhs, const delphi_mrr_msgs__msg__MrrHeaderSensorCoverage * rhs);

/// Copy a msg/MrrHeaderSensorCoverage message.
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
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__copy(
  const delphi_mrr_msgs__msg__MrrHeaderSensorCoverage * input,
  delphi_mrr_msgs__msg__MrrHeaderSensorCoverage * output);

/// Initialize array of msg/MrrHeaderSensorCoverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence__init(delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence * array, size_t size);

/// Finalize array of msg/MrrHeaderSensorCoverage messages.
/**
 * It calls
 * delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence__fini(delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence * array);

/// Create array of msg/MrrHeaderSensorCoverage messages.
/**
 * It allocates the memory for the array and calls
 * delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence *
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence__create(size_t size);

/// Destroy array of msg/MrrHeaderSensorCoverage messages.
/**
 * It calls
 * delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence__destroy(delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence * array);

/// Check for msg/MrrHeaderSensorCoverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence * lhs, const delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence * rhs);

/// Copy an array of msg/MrrHeaderSensorCoverage messages.
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
delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence * input,
  delphi_mrr_msgs__msg__MrrHeaderSensorCoverage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__FUNCTIONS_H_
