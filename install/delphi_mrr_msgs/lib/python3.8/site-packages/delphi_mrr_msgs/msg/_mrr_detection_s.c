// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/MrrDetection.idl
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
#include "delphi_mrr_msgs/msg/detail/mrr_detection__struct.h"
#include "delphi_mrr_msgs/msg/detail/mrr_detection__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__mrr_detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("delphi_mrr_msgs.msg._mrr_detection.MrrDetection", full_classname_dest, 47) == 0);
  }
  delphi_mrr_msgs__msg__MrrDetection * ros_message = _ros_message;
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
  {  // detection_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "detection_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->detection_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // confid_azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "confid_azimuth");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confid_azimuth = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // super_res_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "super_res_target");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->super_res_target = (Py_True == field);
    Py_DECREF(field);
  }
  {  // nd_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "nd_target");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->nd_target = (Py_True == field);
    Py_DECREF(field);
  }
  {  // host_veh_clutter
    PyObject * field = PyObject_GetAttrString(_pymsg, "host_veh_clutter");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->host_veh_clutter = (Py_True == field);
    Py_DECREF(field);
  }
  {  // valid_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_level");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid_level = (Py_True == field);
    Py_DECREF(field);
  }
  {  // azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "azimuth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->azimuth = (float)PyFloat_AS_DOUBLE(field);
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
  {  // range_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "amplitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->amplitude = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // index_2lsb
    PyObject * field = PyObject_GetAttrString(_pymsg, "index_2lsb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->index_2lsb = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__mrr_detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MrrDetection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._mrr_detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MrrDetection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__MrrDetection * ros_message = (delphi_mrr_msgs__msg__MrrDetection *)raw_ros_message;
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
  {  // detection_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->detection_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detection_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confid_azimuth
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->confid_azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confid_azimuth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // super_res_target
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->super_res_target ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "super_res_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nd_target
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->nd_target ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nd_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // host_veh_clutter
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->host_veh_clutter ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "host_veh_clutter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_level
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid_level ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azimuth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azimuth", field);
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
  {  // amplitude
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // index_2lsb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->index_2lsb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index_2lsb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
