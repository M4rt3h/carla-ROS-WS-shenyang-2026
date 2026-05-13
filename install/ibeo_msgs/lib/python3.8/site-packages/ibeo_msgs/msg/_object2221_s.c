// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/Object2221.idl
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
#include "ibeo_msgs/msg/detail/object2221__struct.h"
#include "ibeo_msgs/msg/detail/object2221__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ibeo_msgs/msg/detail/point2_di__functions.h"
// end nested array functions include
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__size2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__size2_d__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__size2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__size2_d__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__object2221__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("ibeo_msgs.msg._object2221.Object2221", full_classname_dest, 36) == 0);
  }
  ibeo_msgs__msg__Object2221 * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // age
    PyObject * field = PyObject_GetAttrString(_pymsg, "age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prediction_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "prediction_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prediction_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // relative_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relative_timestamp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reference_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->reference_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reference_point_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->reference_point_sigma)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // closest_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "closest_point");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->closest_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bounding_box_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounding_box_center");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->bounding_box_center)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bounding_box_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounding_box_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bounding_box_width = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bounding_box_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounding_box_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bounding_box_length = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_box_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_center");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->object_box_center)) {
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
    if (!ibeo_msgs__msg__size2_d__convert_from_py(field, &ros_message->object_box_size)) {
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
  {  // absolute_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->absolute_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // absolute_velocity_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__size2_d__convert_from_py(field, &ros_message->absolute_velocity_sigma)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->relative_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // classification
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // classification_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // classification_certainty
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification_certainty");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification_certainty = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // number_of_contour_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_contour_points");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_contour_points = (uint16_t)PyLong_AsUnsignedLong(field);
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
    if (!ibeo_msgs__msg__Point2Di__Sequence__init(&(ros_message->contour_point_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ibeo_msgs__msg__Point2Di__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ibeo_msgs__msg__Point2Di * dest = ros_message->contour_point_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ibeo_msgs__msg__point2_di__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ibeo_msgs__msg__object2221__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Object2221 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._object2221");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Object2221");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__Object2221 * ros_message = (ibeo_msgs__msg__Object2221 *)raw_ros_message;
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
  {  // age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prediction_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prediction_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prediction_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->relative_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->reference_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->reference_point_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // closest_point
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->closest_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "closest_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounding_box_center
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->bounding_box_center);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounding_box_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounding_box_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bounding_box_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounding_box_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounding_box_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bounding_box_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounding_box_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_center
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->object_box_center);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_size
    PyObject * field = NULL;
    field = ibeo_msgs__msg__size2_d__convert_to_py(&ros_message->object_box_size);
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
  {  // absolute_velocity
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->absolute_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_velocity_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__size2_d__convert_to_py(&ros_message->absolute_velocity_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_velocity_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_velocity
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->relative_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->classification);
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->classification_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification_certainty
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->classification_certainty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification_certainty", field);
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
    ibeo_msgs__msg__Point2Di * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->contour_point_list.data[i]);
      PyObject * pyitem = ibeo_msgs__msg__point2_di__convert_to_py(item);
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
