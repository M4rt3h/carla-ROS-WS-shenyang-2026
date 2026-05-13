// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_srr_msgs:msg/SrrFeatureAlert.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_feature_alert__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_srr_msgs__msg__SrrFeatureAlert__init(delphi_srr_msgs__msg__SrrFeatureAlert * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_srr_msgs__msg__SrrFeatureAlert__fini(msg);
    return false;
  }
  // lcma_blis_ignored_track_id
  // lcma_blis_track_id
  // lcma_cvw_ttc
  // cta_ttc_alert
  // cta_selected_track_ttc
  // cta_selected_track
  // cta_alert
  // cta_active
  // lcma_cvw_cipv
  // lcma_cvw_alert_state
  // lcma_blis_alert_state
  // lcma_active
  return true;
}

void
delphi_srr_msgs__msg__SrrFeatureAlert__fini(delphi_srr_msgs__msg__SrrFeatureAlert * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lcma_blis_ignored_track_id
  // lcma_blis_track_id
  // lcma_cvw_ttc
  // cta_ttc_alert
  // cta_selected_track_ttc
  // cta_selected_track
  // cta_alert
  // cta_active
  // lcma_cvw_cipv
  // lcma_cvw_alert_state
  // lcma_blis_alert_state
  // lcma_active
}

bool
delphi_srr_msgs__msg__SrrFeatureAlert__are_equal(const delphi_srr_msgs__msg__SrrFeatureAlert * lhs, const delphi_srr_msgs__msg__SrrFeatureAlert * rhs)
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
  // lcma_blis_ignored_track_id
  if (lhs->lcma_blis_ignored_track_id != rhs->lcma_blis_ignored_track_id) {
    return false;
  }
  // lcma_blis_track_id
  if (lhs->lcma_blis_track_id != rhs->lcma_blis_track_id) {
    return false;
  }
  // lcma_cvw_ttc
  if (lhs->lcma_cvw_ttc != rhs->lcma_cvw_ttc) {
    return false;
  }
  // cta_ttc_alert
  if (lhs->cta_ttc_alert != rhs->cta_ttc_alert) {
    return false;
  }
  // cta_selected_track_ttc
  if (lhs->cta_selected_track_ttc != rhs->cta_selected_track_ttc) {
    return false;
  }
  // cta_selected_track
  if (lhs->cta_selected_track != rhs->cta_selected_track) {
    return false;
  }
  // cta_alert
  if (lhs->cta_alert != rhs->cta_alert) {
    return false;
  }
  // cta_active
  if (lhs->cta_active != rhs->cta_active) {
    return false;
  }
  // lcma_cvw_cipv
  if (lhs->lcma_cvw_cipv != rhs->lcma_cvw_cipv) {
    return false;
  }
  // lcma_cvw_alert_state
  if (lhs->lcma_cvw_alert_state != rhs->lcma_cvw_alert_state) {
    return false;
  }
  // lcma_blis_alert_state
  if (lhs->lcma_blis_alert_state != rhs->lcma_blis_alert_state) {
    return false;
  }
  // lcma_active
  if (lhs->lcma_active != rhs->lcma_active) {
    return false;
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrFeatureAlert__copy(
  const delphi_srr_msgs__msg__SrrFeatureAlert * input,
  delphi_srr_msgs__msg__SrrFeatureAlert * output)
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
  // lcma_blis_ignored_track_id
  output->lcma_blis_ignored_track_id = input->lcma_blis_ignored_track_id;
  // lcma_blis_track_id
  output->lcma_blis_track_id = input->lcma_blis_track_id;
  // lcma_cvw_ttc
  output->lcma_cvw_ttc = input->lcma_cvw_ttc;
  // cta_ttc_alert
  output->cta_ttc_alert = input->cta_ttc_alert;
  // cta_selected_track_ttc
  output->cta_selected_track_ttc = input->cta_selected_track_ttc;
  // cta_selected_track
  output->cta_selected_track = input->cta_selected_track;
  // cta_alert
  output->cta_alert = input->cta_alert;
  // cta_active
  output->cta_active = input->cta_active;
  // lcma_cvw_cipv
  output->lcma_cvw_cipv = input->lcma_cvw_cipv;
  // lcma_cvw_alert_state
  output->lcma_cvw_alert_state = input->lcma_cvw_alert_state;
  // lcma_blis_alert_state
  output->lcma_blis_alert_state = input->lcma_blis_alert_state;
  // lcma_active
  output->lcma_active = input->lcma_active;
  return true;
}

delphi_srr_msgs__msg__SrrFeatureAlert *
delphi_srr_msgs__msg__SrrFeatureAlert__create()
{
  delphi_srr_msgs__msg__SrrFeatureAlert * msg = (delphi_srr_msgs__msg__SrrFeatureAlert *)malloc(sizeof(delphi_srr_msgs__msg__SrrFeatureAlert));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_srr_msgs__msg__SrrFeatureAlert));
  bool success = delphi_srr_msgs__msg__SrrFeatureAlert__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_srr_msgs__msg__SrrFeatureAlert__destroy(delphi_srr_msgs__msg__SrrFeatureAlert * msg)
{
  if (msg) {
    delphi_srr_msgs__msg__SrrFeatureAlert__fini(msg);
  }
  free(msg);
}


bool
delphi_srr_msgs__msg__SrrFeatureAlert__Sequence__init(delphi_srr_msgs__msg__SrrFeatureAlert__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_srr_msgs__msg__SrrFeatureAlert * data = NULL;
  if (size) {
    data = (delphi_srr_msgs__msg__SrrFeatureAlert *)calloc(size, sizeof(delphi_srr_msgs__msg__SrrFeatureAlert));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_srr_msgs__msg__SrrFeatureAlert__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_srr_msgs__msg__SrrFeatureAlert__fini(&data[i - 1]);
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
delphi_srr_msgs__msg__SrrFeatureAlert__Sequence__fini(delphi_srr_msgs__msg__SrrFeatureAlert__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_srr_msgs__msg__SrrFeatureAlert__fini(&array->data[i]);
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

delphi_srr_msgs__msg__SrrFeatureAlert__Sequence *
delphi_srr_msgs__msg__SrrFeatureAlert__Sequence__create(size_t size)
{
  delphi_srr_msgs__msg__SrrFeatureAlert__Sequence * array = (delphi_srr_msgs__msg__SrrFeatureAlert__Sequence *)malloc(sizeof(delphi_srr_msgs__msg__SrrFeatureAlert__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_srr_msgs__msg__SrrFeatureAlert__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_srr_msgs__msg__SrrFeatureAlert__Sequence__destroy(delphi_srr_msgs__msg__SrrFeatureAlert__Sequence * array)
{
  if (array) {
    delphi_srr_msgs__msg__SrrFeatureAlert__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_srr_msgs__msg__SrrFeatureAlert__Sequence__are_equal(const delphi_srr_msgs__msg__SrrFeatureAlert__Sequence * lhs, const delphi_srr_msgs__msg__SrrFeatureAlert__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrFeatureAlert__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrFeatureAlert__Sequence__copy(
  const delphi_srr_msgs__msg__SrrFeatureAlert__Sequence * input,
  delphi_srr_msgs__msg__SrrFeatureAlert__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_srr_msgs__msg__SrrFeatureAlert);
    delphi_srr_msgs__msg__SrrFeatureAlert * data =
      (delphi_srr_msgs__msg__SrrFeatureAlert *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_srr_msgs__msg__SrrFeatureAlert__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_srr_msgs__msg__SrrFeatureAlert__fini(&data[i]);
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
    if (!delphi_srr_msgs__msg__SrrFeatureAlert__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
