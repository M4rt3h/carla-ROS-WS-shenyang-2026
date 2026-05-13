// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/ErrorWarning.idl
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
#include "ibeo_msgs/msg/detail/error_warning__struct.h"
#include "ibeo_msgs/msg/detail/error_warning__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__ibeo_data_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__ibeo_data_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__error_warning__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("ibeo_msgs.msg._error_warning.ErrorWarning", full_classname_dest, 41) == 0);
  }
  ibeo_msgs__msg__ErrorWarning * ros_message = _ros_message;
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
  {  // ibeo_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "ibeo_header");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__ibeo_data_header__convert_from_py(field, &ros_message->ibeo_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // err_internal_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_internal_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_internal_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_motor_1_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_motor_1_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_motor_1_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_buffer_error_xmt_incomplete
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_buffer_error_xmt_incomplete");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_buffer_error_xmt_incomplete = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_buffer_error_overflow
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_buffer_error_overflow");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_buffer_error_overflow = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_apd_over_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_apd_over_temperature");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_apd_over_temperature = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_apd_under_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_apd_under_temperature");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_apd_under_temperature = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_apd_temperature_sensor_defect
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_apd_temperature_sensor_defect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_apd_temperature_sensor_defect = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_motor_2_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_motor_2_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_motor_2_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_motor_3_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_motor_3_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_motor_3_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_motor_4_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_motor_4_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_motor_4_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_motor_5_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_motor_5_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_motor_5_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_int_no_scan_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_int_no_scan_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_int_no_scan_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_int_communication_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_int_communication_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_int_communication_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_int_incorrect_scan_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_int_incorrect_scan_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_int_incorrect_scan_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_config_fpga_not_configurable
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_config_fpga_not_configurable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_config_fpga_not_configurable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_config_incorrect_config_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_config_incorrect_config_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_config_incorrect_config_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_config_contains_incorrect_params
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_config_contains_incorrect_params");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_config_contains_incorrect_params = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_timeout_data_processing
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_timeout_data_processing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_timeout_data_processing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_timeout_env_model_computation_reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_timeout_env_model_computation_reset");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->err_timeout_env_model_computation_reset = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_int_communication_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_int_communication_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_int_communication_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_low_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_low_temperature");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_low_temperature = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_high_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_high_temperature");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_high_temperature = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_int_motor_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_int_motor_1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_int_motor_1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_sync_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_sync_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_sync_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_laser_1_start_pulse_missing
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_laser_1_start_pulse_missing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_laser_1_start_pulse_missing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_laser_2_start_pulse_missing
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_laser_2_start_pulse_missing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_laser_2_start_pulse_missing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_can_interface_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_can_interface_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_can_interface_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_eth_interface_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_eth_interface_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_eth_interface_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_incorrect_can_data_rcvd
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_incorrect_can_data_rcvd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_incorrect_can_data_rcvd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_int_incorrect_scan_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_int_incorrect_scan_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_int_incorrect_scan_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_eth_unkwn_incomplete_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_eth_unkwn_incomplete_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_eth_unkwn_incomplete_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_incorrect_or_forbidden_cmd_rcvd
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_incorrect_or_forbidden_cmd_rcvd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_incorrect_or_forbidden_cmd_rcvd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_memory_access_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_memory_access_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_memory_access_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_int_overflow
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_int_overflow");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_int_overflow = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_ego_motion_data_missing
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_ego_motion_data_missing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_ego_motion_data_missing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_incorrect_mounting_params
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_incorrect_mounting_params");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_incorrect_mounting_params = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wrn_no_obj_comp_due_to_scan_freq
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrn_no_obj_comp_due_to_scan_freq");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrn_no_obj_comp_due_to_scan_freq = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ibeo_msgs__msg__error_warning__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ErrorWarning */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._error_warning");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ErrorWarning");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__ErrorWarning * ros_message = (ibeo_msgs__msg__ErrorWarning *)raw_ros_message;
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
  {  // ibeo_header
    PyObject * field = NULL;
    field = ibeo_msgs__msg__ibeo_data_header__convert_to_py(&ros_message->ibeo_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ibeo_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_internal_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_internal_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_internal_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_motor_1_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_motor_1_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_motor_1_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_buffer_error_xmt_incomplete
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_buffer_error_xmt_incomplete ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_buffer_error_xmt_incomplete", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_buffer_error_overflow
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_buffer_error_overflow ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_buffer_error_overflow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_apd_over_temperature
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_apd_over_temperature ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_apd_over_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_apd_under_temperature
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_apd_under_temperature ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_apd_under_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_apd_temperature_sensor_defect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_apd_temperature_sensor_defect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_apd_temperature_sensor_defect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_motor_2_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_motor_2_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_motor_2_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_motor_3_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_motor_3_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_motor_3_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_motor_4_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_motor_4_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_motor_4_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_motor_5_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_motor_5_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_motor_5_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_int_no_scan_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_int_no_scan_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_int_no_scan_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_int_communication_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_int_communication_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_int_communication_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_int_incorrect_scan_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_int_incorrect_scan_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_int_incorrect_scan_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_config_fpga_not_configurable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_config_fpga_not_configurable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_config_fpga_not_configurable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_config_incorrect_config_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_config_incorrect_config_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_config_incorrect_config_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_config_contains_incorrect_params
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_config_contains_incorrect_params ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_config_contains_incorrect_params", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_timeout_data_processing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_timeout_data_processing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_timeout_data_processing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_timeout_env_model_computation_reset
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->err_timeout_env_model_computation_reset ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_timeout_env_model_computation_reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_int_communication_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_int_communication_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_int_communication_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_low_temperature
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_low_temperature ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_low_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_high_temperature
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_high_temperature ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_high_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_int_motor_1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_int_motor_1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_int_motor_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_sync_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_sync_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_sync_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_laser_1_start_pulse_missing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_laser_1_start_pulse_missing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_laser_1_start_pulse_missing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_laser_2_start_pulse_missing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_laser_2_start_pulse_missing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_laser_2_start_pulse_missing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_can_interface_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_can_interface_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_can_interface_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_eth_interface_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_eth_interface_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_eth_interface_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_incorrect_can_data_rcvd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_incorrect_can_data_rcvd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_incorrect_can_data_rcvd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_int_incorrect_scan_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_int_incorrect_scan_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_int_incorrect_scan_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_eth_unkwn_incomplete_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_eth_unkwn_incomplete_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_eth_unkwn_incomplete_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_incorrect_or_forbidden_cmd_rcvd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_incorrect_or_forbidden_cmd_rcvd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_incorrect_or_forbidden_cmd_rcvd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_memory_access_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_memory_access_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_memory_access_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_int_overflow
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_int_overflow ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_int_overflow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_ego_motion_data_missing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_ego_motion_data_missing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_ego_motion_data_missing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_incorrect_mounting_params
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_incorrect_mounting_params ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_incorrect_mounting_params", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrn_no_obj_comp_due_to_scan_freq
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrn_no_obj_comp_due_to_scan_freq ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrn_no_obj_comp_due_to_scan_freq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
