// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrTrack.idl
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
#include "delphi_esr_msgs/msg/detail/esr_track__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_track__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_track__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("delphi_esr_msgs.msg._esr_track.EsrTrack", full_classname_dest, 39) == 0);
  }
  delphi_esr_msgs__msg__EsrTrack * ros_message = _ros_message;
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
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lat_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // grouping_changed
    PyObject * field = PyObject_GetAttrString(_pymsg, "grouping_changed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->grouping_changed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // oncoming
    PyObject * field = PyObject_GetAttrString(_pymsg, "oncoming");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->oncoming = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bridge_object
    PyObject * field = PyObject_GetAttrString(_pymsg, "bridge_object");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bridge_object = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rolling_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_count");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rolling_count = (Py_True == field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // med_range_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "med_range_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->med_range_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // range_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_track__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrTrack */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_track");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrTrack");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrTrack * ros_message = (delphi_esr_msgs__msg__EsrTrack *)raw_ros_message;
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
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grouping_changed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->grouping_changed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grouping_changed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oncoming
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->oncoming ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oncoming", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bridge_object
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bridge_object ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bridge_object", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolling_count
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rolling_count ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // med_range_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->med_range_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "med_range_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
