// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgFR.idl
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
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_fr__struct.h"
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_fr__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__mrr_control_msg_fr__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("delphi_mrr_msgs.msg._mrr_control_msg_fr.MrrControlMsgFR", full_classname_dest, 55) == 0);
  }
  delphi_mrr_msgs__msg__MrrControlMsgFR * ros_message = _ros_message;
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
  {  // can_sensitivity_profile_select
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_sensitivity_profile_select");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_sensitivity_profile_select = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_stop_frequency_frml
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_stop_frequency_frml");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_stop_frequency_frml = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_stop_frequency_frll
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_stop_frequency_frll");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_stop_frequency_frll = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_prp_factor_frml
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_prp_factor_frml");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_prp_factor_frml = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_prp_factor_frll
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_prp_factor_frll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_prp_factor_frll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_desired_sweep_bw_frml
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_desired_sweep_bw_frml");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_desired_sweep_bw_frml = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_desired_sweep_bw_frll
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_desired_sweep_bw_frll");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_desired_sweep_bw_frll = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__mrr_control_msg_fr__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MrrControlMsgFR */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._mrr_control_msg_fr");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MrrControlMsgFR");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__MrrControlMsgFR * ros_message = (delphi_mrr_msgs__msg__MrrControlMsgFR *)raw_ros_message;
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
  {  // can_sensitivity_profile_select
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_sensitivity_profile_select);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_sensitivity_profile_select", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_stop_frequency_frml
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_stop_frequency_frml);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_stop_frequency_frml", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_stop_frequency_frll
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_stop_frequency_frll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_stop_frequency_frll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_prp_factor_frml
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_prp_factor_frml);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_prp_factor_frml", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_prp_factor_frll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_prp_factor_frll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_prp_factor_frll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_desired_sweep_bw_frml
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_desired_sweep_bw_frml);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_desired_sweep_bw_frml", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_desired_sweep_bw_frll
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_desired_sweep_bw_frll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_desired_sweep_bw_frll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
