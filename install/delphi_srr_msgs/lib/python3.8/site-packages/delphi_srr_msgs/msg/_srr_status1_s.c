// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_srr_msgs:msg/SrrStatus1.idl
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
#include "delphi_srr_msgs/msg/detail/srr_status1__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_status1__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_srr_msgs__msg__srr_status1__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_srr_msgs.msg._srr_status1.SrrStatus1", full_classname_dest, 43) == 0);
  }
  delphi_srr_msgs__msg__SrrStatus1 * ros_message = _ros_message;
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
  {  // can_tx_look_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_look_type");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_tx_look_type = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx_dsp_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_dsp_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_dsp_timestamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_yaw_rate_calc
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_yaw_rate_calc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_yaw_rate_calc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_tx_vehicle_speed_calc
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_vehicle_speed_calc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_vehicle_speed_calc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_tx_scan_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_scan_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_scan_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_curvature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_curvature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_srr_msgs__msg__srr_status1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SrrStatus1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_srr_msgs.msg._srr_status1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SrrStatus1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_srr_msgs__msg__SrrStatus1 * ros_message = (delphi_srr_msgs__msg__SrrStatus1 *)raw_ros_message;
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
  {  // can_tx_look_type
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_tx_look_type ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_look_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_dsp_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_dsp_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_dsp_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_yaw_rate_calc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_yaw_rate_calc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_yaw_rate_calc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_vehicle_speed_calc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_vehicle_speed_calc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_vehicle_speed_calc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_scan_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_scan_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_scan_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_curvature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_curvature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
