// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
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
#include "mobileye_560_660_msgs/msg/detail/aws_display__struct.h"
#include "mobileye_560_660_msgs/msg/detail/aws_display__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mobileye_560_660_msgs__msg__aws_display__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("mobileye_560_660_msgs.msg._aws_display.AwsDisplay", full_classname_dest, 49) == 0);
  }
  mobileye_560_660_msgs__msg__AwsDisplay * ros_message = _ros_message;
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
  {  // suppress_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "suppress_sound");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->suppress_sound = (Py_True == field);
    Py_DECREF(field);
  }
  {  // night_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "night_time");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->night_time = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dusk_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "dusk_time");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dusk_time = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sound_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sound_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sound_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // headway_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "headway_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->headway_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // headway_measurement
    PyObject * field = PyObject_GetAttrString(_pymsg, "headway_measurement");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->headway_measurement = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lanes_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanes_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lanes_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_ldw_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_ldw_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_ldw_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_ldw_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_ldw_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_ldw_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fcw_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "fcw_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fcw_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_crossing
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_crossing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_crossing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_crossing
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_crossing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_crossing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // maintenance
    PyObject * field = PyObject_GetAttrString(_pymsg, "maintenance");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->maintenance = (Py_True == field);
    Py_DECREF(field);
  }
  {  // failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ped_fcw
    PyObject * field = PyObject_GetAttrString(_pymsg, "ped_fcw");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ped_fcw = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ped_in_dz
    PyObject * field = PyObject_GetAttrString(_pymsg, "ped_in_dz");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ped_in_dz = (Py_True == field);
    Py_DECREF(field);
  }
  {  // headway_warning_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "headway_warning_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->headway_warning_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mobileye_560_660_msgs__msg__aws_display__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AwsDisplay */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mobileye_560_660_msgs.msg._aws_display");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AwsDisplay");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mobileye_560_660_msgs__msg__AwsDisplay * ros_message = (mobileye_560_660_msgs__msg__AwsDisplay *)raw_ros_message;
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
  {  // suppress_sound
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->suppress_sound ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "suppress_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // night_time
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->night_time ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "night_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dusk_time
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dusk_time ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dusk_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sound_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sound_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sound_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // headway_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->headway_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "headway_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // headway_measurement
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->headway_measurement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "headway_measurement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanes_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lanes_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanes_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_ldw_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_ldw_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_ldw_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_ldw_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_ldw_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_ldw_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fcw_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fcw_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fcw_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_crossing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_crossing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_crossing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_crossing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_crossing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_crossing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maintenance
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->maintenance ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maintenance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ped_fcw
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ped_fcw ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ped_fcw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ped_in_dz
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ped_in_dz ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ped_in_dz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // headway_warning_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->headway_warning_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "headway_warning_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
