// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__init(delphi_mrr_msgs__msg__MrrStatusTempVolt * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrStatusTempVolt__fini(msg);
    return false;
  }
  // can_batt_volts
  // can_1_25_v
  // can_5_v
  // can_3_3_v_raw
  // can_3_3_v_dac
  // can_mmic_temp1
  // can_processor_thermistor
  // can_processor_temp1
  return true;
}

void
delphi_mrr_msgs__msg__MrrStatusTempVolt__fini(delphi_mrr_msgs__msg__MrrStatusTempVolt * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_batt_volts
  // can_1_25_v
  // can_5_v
  // can_3_3_v_raw
  // can_3_3_v_dac
  // can_mmic_temp1
  // can_processor_thermistor
  // can_processor_temp1
}

bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__are_equal(const delphi_mrr_msgs__msg__MrrStatusTempVolt * lhs, const delphi_mrr_msgs__msg__MrrStatusTempVolt * rhs)
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
  // can_batt_volts
  if (lhs->can_batt_volts != rhs->can_batt_volts) {
    return false;
  }
  // can_1_25_v
  if (lhs->can_1_25_v != rhs->can_1_25_v) {
    return false;
  }
  // can_5_v
  if (lhs->can_5_v != rhs->can_5_v) {
    return false;
  }
  // can_3_3_v_raw
  if (lhs->can_3_3_v_raw != rhs->can_3_3_v_raw) {
    return false;
  }
  // can_3_3_v_dac
  if (lhs->can_3_3_v_dac != rhs->can_3_3_v_dac) {
    return false;
  }
  // can_mmic_temp1
  if (lhs->can_mmic_temp1 != rhs->can_mmic_temp1) {
    return false;
  }
  // can_processor_thermistor
  if (lhs->can_processor_thermistor != rhs->can_processor_thermistor) {
    return false;
  }
  // can_processor_temp1
  if (lhs->can_processor_temp1 != rhs->can_processor_temp1) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__copy(
  const delphi_mrr_msgs__msg__MrrStatusTempVolt * input,
  delphi_mrr_msgs__msg__MrrStatusTempVolt * output)
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
  // can_batt_volts
  output->can_batt_volts = input->can_batt_volts;
  // can_1_25_v
  output->can_1_25_v = input->can_1_25_v;
  // can_5_v
  output->can_5_v = input->can_5_v;
  // can_3_3_v_raw
  output->can_3_3_v_raw = input->can_3_3_v_raw;
  // can_3_3_v_dac
  output->can_3_3_v_dac = input->can_3_3_v_dac;
  // can_mmic_temp1
  output->can_mmic_temp1 = input->can_mmic_temp1;
  // can_processor_thermistor
  output->can_processor_thermistor = input->can_processor_thermistor;
  // can_processor_temp1
  output->can_processor_temp1 = input->can_processor_temp1;
  return true;
}

delphi_mrr_msgs__msg__MrrStatusTempVolt *
delphi_mrr_msgs__msg__MrrStatusTempVolt__create()
{
  delphi_mrr_msgs__msg__MrrStatusTempVolt * msg = (delphi_mrr_msgs__msg__MrrStatusTempVolt *)malloc(sizeof(delphi_mrr_msgs__msg__MrrStatusTempVolt));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrStatusTempVolt));
  bool success = delphi_mrr_msgs__msg__MrrStatusTempVolt__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrStatusTempVolt__destroy(delphi_mrr_msgs__msg__MrrStatusTempVolt * msg)
{
  if (msg) {
    delphi_mrr_msgs__msg__MrrStatusTempVolt__fini(msg);
  }
  free(msg);
}


bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__init(delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_mrr_msgs__msg__MrrStatusTempVolt * data = NULL;
  if (size) {
    data = (delphi_mrr_msgs__msg__MrrStatusTempVolt *)calloc(size, sizeof(delphi_mrr_msgs__msg__MrrStatusTempVolt));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrStatusTempVolt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrStatusTempVolt__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__fini(delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_mrr_msgs__msg__MrrStatusTempVolt__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence *
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__create(size_t size)
{
  delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * array = (delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence *)malloc(sizeof(delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__destroy(delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * array)
{
  if (array) {
    delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * lhs, const delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrStatusTempVolt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * input,
  delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrStatusTempVolt);
    delphi_mrr_msgs__msg__MrrStatusTempVolt * data =
      (delphi_mrr_msgs__msg__MrrStatusTempVolt *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrStatusTempVolt__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrStatusTempVolt__fini(&data[i]);
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
    if (!delphi_mrr_msgs__msg__MrrStatusTempVolt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
