// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrStatus1.idl
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
#include "delphi_esr_msgs/msg/detail/esr_status1__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status1__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_status1__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_esr_msgs.msg._esr_status1.EsrStatus1", full_classname_dest, 43) == 0);
  }
  delphi_esr_msgs__msg__EsrStatus1 * ros_message = _ros_message;
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
  {  // canmsg
    PyObject * field = PyObject_GetAttrString(_pymsg, "canmsg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->canmsg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rolling_count_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_count_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_count_1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dsp_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dsp_timestamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // comm_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "comm_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->comm_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radius_curvature_calc
    PyObject * field = PyObject_GetAttrString(_pymsg, "radius_curvature_calc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radius_curvature_calc = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // scan_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_calc
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_calc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_calc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_speed_calc
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed_calc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_speed_calc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_status1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrStatus1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_status1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrStatus1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrStatus1 * ros_message = (delphi_esr_msgs__msg__EsrStatus1 *)raw_ros_message;
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
  {  // canmsg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->canmsg.data,
      strlen(ros_message->canmsg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "canmsg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolling_count_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rolling_count_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_count_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dsp_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // comm_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->comm_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "comm_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radius_curvature_calc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->radius_curvature_calc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radius_curvature_calc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scan_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_calc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_calc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_calc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed_calc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_speed_calc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed_calc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
