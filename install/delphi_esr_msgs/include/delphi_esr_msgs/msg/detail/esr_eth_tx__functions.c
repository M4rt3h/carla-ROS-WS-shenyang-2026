// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_esr_msgs__msg__EsrEthTx__init(delphi_esr_msgs__msg__EsrEthTx * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrEthTx__fini(msg);
    return false;
  }
  // xcp_format_version
  // scan_index
  // tcp_size
  // xcp_scan_type
  // look_index
  // mmr_scan_index
  // target_report_host_speed
  // target_report_host_yaw_rate
  // xcp_timestamp
  // release_revision
  // promote_revision
  // field_revision
  // target_report_count
  // target_report_range
  // target_report_range_rate
  // target_report_theta
  // target_report_amplitude
  return true;
}

void
delphi_esr_msgs__msg__EsrEthTx__fini(delphi_esr_msgs__msg__EsrEthTx * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // xcp_format_version
  // scan_index
  // tcp_size
  // xcp_scan_type
  // look_index
  // mmr_scan_index
  // target_report_host_speed
  // target_report_host_yaw_rate
  // xcp_timestamp
  // release_revision
  // promote_revision
  // field_revision
  // target_report_count
  // target_report_range
  // target_report_range_rate
  // target_report_theta
  // target_report_amplitude
}

bool
delphi_esr_msgs__msg__EsrEthTx__are_equal(const delphi_esr_msgs__msg__EsrEthTx * lhs, const delphi_esr_msgs__msg__EsrEthTx * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // xcp_format_version
  if (lhs->xcp_format_version != rhs->xcp_format_version) {
    return false;
  }
  // scan_index
  if (lhs->scan_index != rhs->scan_index) {
    return false;
  }
  // tcp_size
  if (lhs->tcp_size != rhs->tcp_size) {
    return false;
  }
  // xcp_scan_type
  if (lhs->xcp_scan_type != rhs->xcp_scan_type) {
    return false;
  }
  // look_index
  if (lhs->look_index != rhs->look_index) {
    return false;
  }
  // mmr_scan_index
  if (lhs->mmr_scan_index != rhs->mmr_scan_index) {
    return false;
  }
  // target_report_host_speed
  if (lhs->target_report_host_speed != rhs->target_report_host_speed) {
    return false;
  }
  // target_report_host_yaw_rate
  if (lhs->target_report_host_yaw_rate != rhs->target_report_host_yaw_rate) {
    return false;
  }
  // xcp_timestamp
  if (lhs->xcp_timestamp != rhs->xcp_timestamp) {
    return false;
  }
  // release_revision
  if (lhs->release_revision != rhs->release_revision) {
    return false;
  }
  // promote_revision
  if (lhs->promote_revision != rhs->promote_revision) {
    return false;
  }
  // field_revision
  if (lhs->field_revision != rhs->field_revision) {
    return false;
  }
  // target_report_count
  if (lhs->target_report_count != rhs->target_report_count) {
    return false;
  }
  // target_report_range
  for (size_t i = 0; i < 64; ++i) {
    if (lhs->target_report_range[i] != rhs->target_report_range[i]) {
      return false;
    }
  }
  // target_report_range_rate
  for (size_t i = 0; i < 64; ++i) {
    if (lhs->target_report_range_rate[i] != rhs->target_report_range_rate[i]) {
      return false;
    }
  }
  // target_report_theta
  for (size_t i = 0; i < 64; ++i) {
    if (lhs->target_report_theta[i] != rhs->target_report_theta[i]) {
      return false;
    }
  }
  // target_report_amplitude
  for (size_t i = 0; i < 64; ++i) {
    if (lhs->target_report_amplitude[i] != rhs->target_report_amplitude[i]) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrEthTx__copy(
  const delphi_esr_msgs__msg__EsrEthTx * input,
  delphi_esr_msgs__msg__EsrEthTx * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // xcp_format_version
  output->xcp_format_version = input->xcp_format_version;
  // scan_index
  output->scan_index = input->scan_index;
  // tcp_size
  output->tcp_size = input->tcp_size;
  // xcp_scan_type
  output->xcp_scan_type = input->xcp_scan_type;
  // look_index
  output->look_index = input->look_index;
  // mmr_scan_index
  output->mmr_scan_index = input->mmr_scan_index;
  // target_report_host_speed
  output->target_report_host_speed = input->target_report_host_speed;
  // target_report_host_yaw_rate
  output->target_report_host_yaw_rate = input->target_report_host_yaw_rate;
  // xcp_timestamp
  output->xcp_timestamp = input->xcp_timestamp;
  // release_revision
  output->release_revision = input->release_revision;
  // promote_revision
  output->promote_revision = input->promote_revision;
  // field_revision
  output->field_revision = input->field_revision;
  // target_report_count
  output->target_report_count = input->target_report_count;
  // target_report_range
  for (size_t i = 0; i < 64; ++i) {
    output->target_report_range[i] = input->target_report_range[i];
  }
  // target_report_range_rate
  for (size_t i = 0; i < 64; ++i) {
    output->target_report_range_rate[i] = input->target_report_range_rate[i];
  }
  // target_report_theta
  for (size_t i = 0; i < 64; ++i) {
    output->target_report_theta[i] = input->target_report_theta[i];
  }
  // target_report_amplitude
  for (size_t i = 0; i < 64; ++i) {
    output->target_report_amplitude[i] = input->target_report_amplitude[i];
  }
  return true;
}

delphi_esr_msgs__msg__EsrEthTx *
delphi_esr_msgs__msg__EsrEthTx__create()
{
  delphi_esr_msgs__msg__EsrEthTx * msg = (delphi_esr_msgs__msg__EsrEthTx *)malloc(sizeof(delphi_esr_msgs__msg__EsrEthTx));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrEthTx));
  bool success = delphi_esr_msgs__msg__EsrEthTx__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrEthTx__destroy(delphi_esr_msgs__msg__EsrEthTx * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrEthTx__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrEthTx__Sequence__init(delphi_esr_msgs__msg__EsrEthTx__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrEthTx * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrEthTx *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrEthTx));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrEthTx__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrEthTx__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delphi_esr_msgs__msg__EsrEthTx__Sequence__fini(delphi_esr_msgs__msg__EsrEthTx__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrEthTx__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delphi_esr_msgs__msg__EsrEthTx__Sequence *
delphi_esr_msgs__msg__EsrEthTx__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrEthTx__Sequence * array = (delphi_esr_msgs__msg__EsrEthTx__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrEthTx__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrEthTx__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrEthTx__Sequence__destroy(delphi_esr_msgs__msg__EsrEthTx__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrEthTx__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrEthTx__Sequence__are_equal(const delphi_esr_msgs__msg__EsrEthTx__Sequence * lhs, const delphi_esr_msgs__msg__EsrEthTx__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrEthTx__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrEthTx__Sequence__copy(
  const delphi_esr_msgs__msg__EsrEthTx__Sequence * input,
  delphi_esr_msgs__msg__EsrEthTx__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrEthTx);
    delphi_esr_msgs__msg__EsrEthTx * data =
      (delphi_esr_msgs__msg__EsrEthTx *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrEthTx__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrEthTx__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrEthTx__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
