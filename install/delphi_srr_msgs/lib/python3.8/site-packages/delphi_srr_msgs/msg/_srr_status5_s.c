// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_srr_msgs:msg/SrrStatus5.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "delphi_srr_msgs/msg/detail/srr_status5__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_status5__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_srr_msgs__msg__srr_status5__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("delphi_srr_msgs.msg._srr_status5.SrrStatus5", full_classname_dest, 43) == 0);
  }
  delphi_srr_msgs__msg__SrrStatus5 * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // disable_auto_align
    PyObject * field = PyObject_GetAttrString(_pymsg, "disable_auto_align");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->disable_auto_align = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx_yaw_rate_ref_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_yaw_rate_ref_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_yaw_rate_ref_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_yaw_rate_raw_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_yaw_rate_raw_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_yaw_rate_raw_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_yaw_rate_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_yaw_rate_reference");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_yaw_rate_reference = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_tx_yaw_rate_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_yaw_rate_raw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_yaw_rate_raw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_tx_system_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_system_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_system_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_outside_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_outside_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_outside_temperature = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // can_blockage_mnr_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_mnr_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_blockage_mnr_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_blockage_bb_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_bb_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_blockage_bb_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_blockage_radar_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_radar_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_blockage_radar_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_td_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_td_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_td_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radar_tx_power_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_tx_power_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar_tx_power_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radar_lo_power_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_lo_power_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar_lo_power_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radar_data_sync_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_data_sync_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar_data_sync_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // linearizer_spi_transfer_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "linearizer_spi_transfer_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->linearizer_spi_transfer_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // saturated_tuning_freq_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "saturated_tuning_freq_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->saturated_tuning_freq_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rtn_spi_transfer_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtn_spi_transfer_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rtn_spi_transfer_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rrn_spi_transfer_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "rrn_spi_transfer_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rrn_spi_transfer_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // video_port_capture_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "video_port_capture_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->video_port_capture_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vertical_misalignment_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_misalignment_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vertical_misalignment_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tx_temperature_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_temperature_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tx_temperature_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // transmitter_id_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmitter_id_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->transmitter_id_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_unit_cal_checksum_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_unit_cal_checksum_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_unit_cal_checksum_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_unit_cal_block_chcksm_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_unit_cal_block_chcksm_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_unit_cal_block_chcksm_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_tuning_sensitivity_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_tuning_sensitivity_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_tuning_sensitivity_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_loop_overrun_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_loop_overrun_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_loop_overrun_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // adc_spi_transfer_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc_spi_transfer_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->adc_spi_transfer_error = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_srr_msgs__msg__srr_status5__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SrrStatus5 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_srr_msgs.msg._srr_status5");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SrrStatus5");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_srr_msgs__msg__SrrStatus5 * ros_message = (delphi_srr_msgs__msg__SrrStatus5 *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disable_auto_align
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->disable_auto_align ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disable_auto_align", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_yaw_rate_ref_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_yaw_rate_ref_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_yaw_rate_ref_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_yaw_rate_raw_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_yaw_rate_raw_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_yaw_rate_raw_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_yaw_rate_reference
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_yaw_rate_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_yaw_rate_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_yaw_rate_raw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_yaw_rate_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_yaw_rate_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_system_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_system_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_system_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_outside_temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->can_tx_outside_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_outside_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_mnr_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_blockage_mnr_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_mnr_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_bb_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_blockage_bb_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_bb_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_radar_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_blockage_radar_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_radar_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_td_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_td_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_td_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_tx_power_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar_tx_power_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_tx_power_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_lo_power_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar_lo_power_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_lo_power_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_data_sync_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar_data_sync_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_data_sync_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linearizer_spi_transfer_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->linearizer_spi_transfer_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linearizer_spi_transfer_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // saturated_tuning_freq_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->saturated_tuning_freq_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "saturated_tuning_freq_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtn_spi_transfer_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rtn_spi_transfer_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtn_spi_transfer_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rrn_spi_transfer_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rrn_spi_transfer_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rrn_spi_transfer_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // video_port_capture_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->video_port_capture_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "video_port_capture_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_misalignment_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vertical_misalignment_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_misalignment_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_temperature_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tx_temperature_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_temperature_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmitter_id_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->transmitter_id_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmitter_id_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_unit_cal_checksum_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_unit_cal_checksum_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_unit_cal_checksum_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_unit_cal_block_chcksm_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_unit_cal_block_chcksm_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_unit_cal_block_chcksm_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_tuning_sensitivity_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_tuning_sensitivity_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_tuning_sensitivity_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_loop_overrun_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_loop_overrun_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_loop_overrun_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adc_spi_transfer_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->adc_spi_transfer_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adc_spi_transfer_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
