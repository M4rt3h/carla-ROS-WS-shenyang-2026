// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched2.idl
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
#include "delphi_mrr_msgs/msg/detail/active_fault_latched2__struct.h"
#include "delphi_mrr_msgs/msg/detail/active_fault_latched2__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__active_fault_latched2__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("delphi_mrr_msgs.msg._active_fault_latched2.ActiveFaultLatched2", full_classname_dest, 62) == 0);
  }
  delphi_mrr_msgs__msg__ActiveFaultLatched2 * ros_message = _ros_message;
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
  {  // ipma_pcan_data_range_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipma_pcan_data_range_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ipma_pcan_data_range_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ipma_pcan_missing_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipma_pcan_missing_msg");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ipma_pcan_missing_msg = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vin_signal_compare_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin_signal_compare_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vin_signal_compare_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // module_not_configured_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "module_not_configured_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->module_not_configured_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // car_cfg_not_configured_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "car_cfg_not_configured_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->car_cfg_not_configured_error = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__active_fault_latched2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ActiveFaultLatched2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._active_fault_latched2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ActiveFaultLatched2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__ActiveFaultLatched2 * ros_message = (delphi_mrr_msgs__msg__ActiveFaultLatched2 *)raw_ros_message;
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
  {  // ipma_pcan_data_range_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ipma_pcan_data_range_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipma_pcan_data_range_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipma_pcan_missing_msg
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ipma_pcan_missing_msg ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipma_pcan_missing_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin_signal_compare_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vin_signal_compare_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin_signal_compare_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // module_not_configured_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->module_not_configured_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "module_not_configured_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // car_cfg_not_configured_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->car_cfg_not_configured_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "car_cfg_not_configured_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
