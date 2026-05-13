// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
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
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__struct.h"
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mobileye_560_660_msgs__msg__ahbc_gradual__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("mobileye_560_660_msgs.msg._ahbc_gradual.AhbcGradual", full_classname_dest, 51) == 0);
  }
  mobileye_560_660_msgs__msg__AhbcGradual * ros_message = _ros_message;
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
  {  // boundary_domain_bottom_non_glare_hlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "boundary_domain_bottom_non_glare_hlb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boundary_domain_bottom_non_glare_hlb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // boundary_domain_non_glare_left_hand_hlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "boundary_domain_non_glare_left_hand_hlb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boundary_domain_non_glare_left_hand_hlb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // boundary_domain_non_glare_right_hand_hlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "boundary_domain_non_glare_right_hand_hlb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boundary_domain_non_glare_right_hand_hlb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // object_distance_hlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_distance_hlb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_distance_hlb = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_boundary_domain_bottom_non_glare_hlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_boundary_domain_bottom_non_glare_hlb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_boundary_domain_bottom_non_glare_hlb = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_boundary_domain_non_glare_left_hand_hlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_boundary_domain_non_glare_left_hand_hlb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_boundary_domain_non_glare_left_hand_hlb = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_boundary_domain_non_glare_right_hand_hlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_boundary_domain_non_glare_right_hand_hlb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_boundary_domain_non_glare_right_hand_hlb = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_object_distance_hlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_object_distance_hlb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_object_distance_hlb = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_target_change
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_target_change");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_target_change = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_target_change
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_target_change");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_target_change = (Py_True == field);
    Py_DECREF(field);
  }
  {  // too_many_cars
    PyObject * field = PyObject_GetAttrString(_pymsg, "too_many_cars");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->too_many_cars = (Py_True == field);
    Py_DECREF(field);
  }
  {  // busy_scene
    PyObject * field = PyObject_GetAttrString(_pymsg, "busy_scene");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->busy_scene = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mobileye_560_660_msgs__msg__ahbc_gradual__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AhbcGradual */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mobileye_560_660_msgs.msg._ahbc_gradual");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AhbcGradual");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mobileye_560_660_msgs__msg__AhbcGradual * ros_message = (mobileye_560_660_msgs__msg__AhbcGradual *)raw_ros_message;
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
  {  // boundary_domain_bottom_non_glare_hlb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boundary_domain_bottom_non_glare_hlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boundary_domain_bottom_non_glare_hlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boundary_domain_non_glare_left_hand_hlb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boundary_domain_non_glare_left_hand_hlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boundary_domain_non_glare_left_hand_hlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boundary_domain_non_glare_right_hand_hlb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boundary_domain_non_glare_right_hand_hlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boundary_domain_non_glare_right_hand_hlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_distance_hlb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_distance_hlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_distance_hlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_boundary_domain_bottom_non_glare_hlb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_boundary_domain_bottom_non_glare_hlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_boundary_domain_bottom_non_glare_hlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_boundary_domain_non_glare_left_hand_hlb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_boundary_domain_non_glare_left_hand_hlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_boundary_domain_non_glare_left_hand_hlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_boundary_domain_non_glare_right_hand_hlb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_boundary_domain_non_glare_right_hand_hlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_boundary_domain_non_glare_right_hand_hlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_object_distance_hlb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_object_distance_hlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_object_distance_hlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_target_change
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_target_change ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_target_change", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_target_change
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_target_change ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_target_change", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // too_many_cars
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->too_many_cars ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "too_many_cars", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // busy_scene
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->busy_scene ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "busy_scene", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
