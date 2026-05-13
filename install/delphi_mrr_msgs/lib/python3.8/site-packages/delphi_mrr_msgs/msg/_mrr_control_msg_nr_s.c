// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgNR.idl
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
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_nr__struct.h"
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_nr__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__mrr_control_msg_nr__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_mrr_msgs.msg._mrr_control_msg_nr.MrrControlMsgNR", full_classname_dest, 55) == 0);
  }
  delphi_mrr_msgs__msg__MrrControlMsgNR * ros_message = _ros_message;
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
  {  // can_stop_frequency_nrml
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_stop_frequency_nrml");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_stop_frequency_nrml = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_prp_factor_nrml
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_prp_factor_nrml");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_prp_factor_nrml = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_desired_sweep_bw_nrml
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_desired_sweep_bw_nrml");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_desired_sweep_bw_nrml = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_radiation_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radiation_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_radiation_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_stop_frequency_nrll
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_stop_frequency_nrll");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_stop_frequency_nrll = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_prp_factor_nrll
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_prp_factor_nrll");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_prp_factor_nrll = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_desired_sweep_bw_nrll
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_desired_sweep_bw_nrll");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_desired_sweep_bw_nrll = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__mrr_control_msg_nr__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MrrControlMsgNR */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._mrr_control_msg_nr");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MrrControlMsgNR");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__MrrControlMsgNR * ros_message = (delphi_mrr_msgs__msg__MrrControlMsgNR *)raw_ros_message;
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
  {  // can_stop_frequency_nrml
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_stop_frequency_nrml);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_stop_frequency_nrml", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_prp_factor_nrml
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_prp_factor_nrml);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_prp_factor_nrml", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_desired_sweep_bw_nrml
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_desired_sweep_bw_nrml);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_desired_sweep_bw_nrml", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radiation_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_radiation_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radiation_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_stop_frequency_nrll
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_stop_frequency_nrll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_stop_frequency_nrll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_prp_factor_nrll
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_prp_factor_nrll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_prp_factor_nrll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_desired_sweep_bw_nrll
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_desired_sweep_bw_nrll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_desired_sweep_bw_nrll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
