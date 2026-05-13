// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
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
#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__struct.h"
#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__mrr_status_temp_volt__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("delphi_mrr_msgs.msg._mrr_status_temp_volt.MrrStatusTempVolt", full_classname_dest, 59) == 0);
  }
  delphi_mrr_msgs__msg__MrrStatusTempVolt * ros_message = _ros_message;
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
  {  // can_batt_volts
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_batt_volts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_batt_volts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_1_25_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_1_25_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_1_25_v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_5_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_5_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_5_v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_3_3_v_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_3_3_v_raw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_3_3_v_raw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_3_3_v_dac
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_3_3_v_dac");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_3_3_v_dac = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_mmic_temp1
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_mmic_temp1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_mmic_temp1 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // can_processor_thermistor
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_processor_thermistor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_processor_thermistor = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // can_processor_temp1
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_processor_temp1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_processor_temp1 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__mrr_status_temp_volt__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MrrStatusTempVolt */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._mrr_status_temp_volt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MrrStatusTempVolt");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__MrrStatusTempVolt * ros_message = (delphi_mrr_msgs__msg__MrrStatusTempVolt *)raw_ros_message;
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
  {  // can_batt_volts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_batt_volts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_batt_volts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_1_25_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_1_25_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_1_25_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_5_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_5_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_5_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_3_3_v_raw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_3_3_v_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_3_3_v_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_3_3_v_dac
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_3_3_v_dac);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_3_3_v_dac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_mmic_temp1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->can_mmic_temp1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_mmic_temp1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_processor_thermistor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->can_processor_thermistor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_processor_thermistor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_processor_temp1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->can_processor_temp1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_processor_temp1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
