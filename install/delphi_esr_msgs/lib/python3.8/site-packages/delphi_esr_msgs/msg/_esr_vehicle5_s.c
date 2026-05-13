// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle5.idl
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
#include "delphi_esr_msgs/msg/detail/esr_vehicle5__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle5__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_vehicle5__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("delphi_esr_msgs.msg._esr_vehicle5.EsrVehicle5", full_classname_dest, 45) == 0);
  }
  delphi_esr_msgs__msg__EsrVehicle5 * ros_message = _ros_message;
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
  {  // oversteer_understeer
    PyObject * field = PyObject_GetAttrString(_pymsg, "oversteer_understeer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->oversteer_understeer = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_bias_shift
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_bias_shift");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->yaw_rate_bias_shift = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beamwidth_vert
    PyObject * field = PyObject_GetAttrString(_pymsg, "beamwidth_vert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beamwidth_vert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // funnel_offset_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "funnel_offset_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->funnel_offset_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // funnel_offset_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "funnel_offset_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->funnel_offset_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cw_blockage_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "cw_blockage_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cw_blockage_threshold = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_rear_axle
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_rear_axle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance_rear_axle = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wheelbase
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelbase");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheelbase = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steering_gear_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_gear_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_gear_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_vehicle5__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrVehicle5 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_vehicle5");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrVehicle5");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrVehicle5 * ros_message = (delphi_esr_msgs__msg__EsrVehicle5 *)raw_ros_message;
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
  {  // oversteer_understeer
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->oversteer_understeer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oversteer_understeer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_bias_shift
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->yaw_rate_bias_shift ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_bias_shift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beamwidth_vert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->beamwidth_vert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beamwidth_vert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // funnel_offset_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->funnel_offset_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "funnel_offset_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // funnel_offset_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->funnel_offset_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "funnel_offset_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cw_blockage_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cw_blockage_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cw_blockage_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_rear_axle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->distance_rear_axle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_rear_axle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelbase
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wheelbase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelbase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_gear_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_gear_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_gear_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
