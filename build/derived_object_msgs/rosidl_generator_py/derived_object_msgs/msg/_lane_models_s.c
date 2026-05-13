// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from derived_object_msgs:msg/LaneModels.idl
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
#include "derived_object_msgs/msg/detail/lane_models__struct.h"
#include "derived_object_msgs/msg/detail/lane_models__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "derived_object_msgs/msg/detail/lane__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool derived_object_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * derived_object_msgs__msg__lane__convert_to_py(void * raw_ros_message);
bool derived_object_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * derived_object_msgs__msg__lane__convert_to_py(void * raw_ros_message);
bool derived_object_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * derived_object_msgs__msg__lane__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool derived_object_msgs__msg__lane_models__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("derived_object_msgs.msg._lane_models.LaneModels", full_classname_dest, 47) == 0);
  }
  derived_object_msgs__msg__LaneModels * ros_message = _ros_message;
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
  {  // left_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane");
    if (!field) {
      return false;
    }
    if (!derived_object_msgs__msg__lane__convert_from_py(field, &ros_message->left_lane)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane");
    if (!field) {
      return false;
    }
    if (!derived_object_msgs__msg__lane__convert_from_py(field, &ros_message->right_lane)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // additional_lanes
    PyObject * field = PyObject_GetAttrString(_pymsg, "additional_lanes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'additional_lanes'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!derived_object_msgs__msg__Lane__Sequence__init(&(ros_message->additional_lanes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create derived_object_msgs__msg__Lane__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    derived_object_msgs__msg__Lane * dest = ros_message->additional_lanes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!derived_object_msgs__msg__lane__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * derived_object_msgs__msg__lane_models__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneModels */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("derived_object_msgs.msg._lane_models");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneModels");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  derived_object_msgs__msg__LaneModels * ros_message = (derived_object_msgs__msg__LaneModels *)raw_ros_message;
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
  {  // left_lane
    PyObject * field = NULL;
    field = derived_object_msgs__msg__lane__convert_to_py(&ros_message->left_lane);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane
    PyObject * field = NULL;
    field = derived_object_msgs__msg__lane__convert_to_py(&ros_message->right_lane);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // additional_lanes
    PyObject * field = NULL;
    size_t size = ros_message->additional_lanes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    derived_object_msgs__msg__Lane * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->additional_lanes.data[i]);
      PyObject * pyitem = derived_object_msgs__msg__lane__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "additional_lanes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
