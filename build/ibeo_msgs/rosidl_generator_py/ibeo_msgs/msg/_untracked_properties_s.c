// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
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
#include "ibeo_msgs/msg/detail/untracked_properties__struct.h"
#include "ibeo_msgs/msg/detail/untracked_properties__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ibeo_msgs/msg/detail/contour_point_sigma__functions.h"
// end nested array functions include
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_dui__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_dui__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_dui__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_dui__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__contour_point_sigma__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__contour_point_sigma__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__untracked_properties__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ibeo_msgs.msg._untracked_properties.UntrackedProperties", full_classname_dest, 55) == 0);
  }
  ibeo_msgs__msg__UntrackedProperties * ros_message = _ros_message;
  {  // relative_time_of_measurement
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_time_of_measurement");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relative_time_of_measurement = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position_closest_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_closest_point");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->position_closest_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_box_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_size");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->object_box_size)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_box_size_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_size_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_dui__convert_from_py(field, &ros_message->object_box_size_sigma)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_box_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_orientation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_box_orientation = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // object_box_orientation_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_orientation_sigma");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_box_orientation_sigma = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tracking_point_coordinate
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_point_coordinate");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->tracking_point_coordinate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tracking_point_coordinate_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_point_coordinate_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_dui__convert_from_py(field, &ros_message->tracking_point_coordinate_sigma)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // number_of_contour_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_contour_points");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_contour_points = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // contour_point_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "contour_point_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'contour_point_list'");
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
    if (!ibeo_msgs__msg__ContourPointSigma__Sequence__init(&(ros_message->contour_point_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ibeo_msgs__msg__ContourPointSigma__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ibeo_msgs__msg__ContourPointSigma * dest = ros_message->contour_point_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ibeo_msgs__msg__contour_point_sigma__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ibeo_msgs__msg__untracked_properties__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UntrackedProperties */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._untracked_properties");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UntrackedProperties");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__UntrackedProperties * ros_message = (ibeo_msgs__msg__UntrackedProperties *)raw_ros_message;
  {  // relative_time_of_measurement
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->relative_time_of_measurement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_time_of_measurement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_closest_point
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->position_closest_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_closest_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_size
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->object_box_size);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_size_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_dui__convert_to_py(&ros_message->object_box_size_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_size_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_orientation
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->object_box_orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_orientation_sigma
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_box_orientation_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_orientation_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_point_coordinate
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->tracking_point_coordinate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_point_coordinate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_point_coordinate_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_dui__convert_to_py(&ros_message->tracking_point_coordinate_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_point_coordinate_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_contour_points
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->number_of_contour_points);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_contour_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contour_point_list
    PyObject * field = NULL;
    size_t size = ros_message->contour_point_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ibeo_msgs__msg__ContourPointSigma * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->contour_point_list.data[i]);
      PyObject * pyitem = ibeo_msgs__msg__contour_point_sigma__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "contour_point_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
