// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/TrackedProperties.idl
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
#include "ibeo_msgs/msg/detail/tracked_properties__struct.h"
#include "ibeo_msgs/msg/detail/tracked_properties__functions.h"

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
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_dui__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_dui__convert_to_py(void * raw_ros_message);
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
bool ibeo_msgs__msg__tracked_properties__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ibeo_msgs.msg._tracked_properties.TrackedProperties", full_classname_dest, 51) == 0);
  }
  ibeo_msgs__msg__TrackedProperties * ros_message = _ros_message;
  {  // object_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hidden_status_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "hidden_status_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hidden_status_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_phase");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_phase = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dynamic_property
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamic_property");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dynamic_property = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // relative_time_of_measure
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_time_of_measure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relative_time_of_measure = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // relative_velocity_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_dui__convert_from_py(field, &ros_message->relative_velocity_sigma)) {
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
  {  // tracking_point_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_point_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tracking_point_location = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_dui__convert_from_py(field, &ros_message->velocity_sigma)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_di__convert_from_py(field, &ros_message->acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_dui__convert_from_py(field, &ros_message->acceleration_sigma)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yaw_rate = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_sigma");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yaw_rate_sigma = (uint16_t)PyLong_AsUnsignedLong(field);
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
PyObject * ibeo_msgs__msg__tracked_properties__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrackedProperties */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._tracked_properties");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrackedProperties");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__TrackedProperties * ros_message = (ibeo_msgs__msg__TrackedProperties *)raw_ros_message;
  {  // object_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hidden_status_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hidden_status_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hidden_status_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_phase
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamic_property
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dynamic_property);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamic_property", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_time_of_measure
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->relative_time_of_measure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_time_of_measure", field);
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
  {  // relative_velocity_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_dui__convert_to_py(&ros_message->relative_velocity_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity_sigma", field);
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
  {  // tracking_point_location
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tracking_point_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_point_location", field);
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
  {  // velocity
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_dui__convert_to_py(&ros_message->velocity_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_di__convert_to_py(&ros_message->acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_dui__convert_to_py(&ros_message->acceleration_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_sigma
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->yaw_rate_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_sigma", field);
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
