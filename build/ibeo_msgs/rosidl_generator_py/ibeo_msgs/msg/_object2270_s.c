// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/Object2270.idl
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
#include "ibeo_msgs/msg/detail/object2270__struct.h"
#include "ibeo_msgs/msg/detail/object2270__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ibeo_msgs/msg/detail/point2_di__functions.h"
// end nested array functions include
bool ibeo_msgs__msg__point2_di__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_di__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__object2270__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ibeo_msgs.msg._object2270.Object2270", full_classname_dest, 36) == 0);
  }
  ibeo_msgs__msg__Object2270 * ros_message = _ros_message;
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
  {  // relative_moment_of_measurement
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_moment_of_measurement");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relative_moment_of_measurement = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reference_point_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_point_location = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reference_point_position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_position_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_point_position_x = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // reference_point_position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_position_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_point_position_y = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // reference_point_position_sigma_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_position_sigma_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_point_position_sigma_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reference_point_position_sigma_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_position_sigma_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_point_position_sigma_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // contour_points_cog_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "contour_points_cog_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->contour_points_cog_x = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // contour_points_cog_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "contour_points_cog_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->contour_points_cog_y = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // object_box_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_box_length = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_box_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_box_width = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_box_orientation_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_orientation_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_box_orientation_angle = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // object_box_orientation_angle_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_orientation_angle_sigma");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_box_orientation_angle_sigma = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // absolute_velocity_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->absolute_velocity_x = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // absolute_velocity_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->absolute_velocity_y = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // absolute_velocity_sigma_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity_sigma_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->absolute_velocity_sigma_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // absolute_velocity_sigma_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity_sigma_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->absolute_velocity_sigma_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // relative_velocity_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relative_velocity_x = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // relative_velocity_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relative_velocity_y = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // relative_velocity_sigma_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity_sigma_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relative_velocity_sigma_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // relative_velocity_sigma_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity_sigma_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relative_velocity_sigma_y = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // tracking_model
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_model");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tracking_model = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mobile_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "mobile_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mobile_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // track_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->track_valid = (Py_True == field);
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
  {  // classification_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification_confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification_confidence = (uint16_t)PyLong_AsUnsignedLong(field);
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
PyObject * ibeo_msgs__msg__object2270__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Object2270 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._object2270");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Object2270");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__Object2270 * ros_message = (ibeo_msgs__msg__Object2270 *)raw_ros_message;
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
  {  // relative_moment_of_measurement
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->relative_moment_of_measurement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_moment_of_measurement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point_location
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reference_point_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point_position_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->reference_point_position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point_position_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->reference_point_position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point_position_sigma_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reference_point_position_sigma_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_position_sigma_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point_position_sigma_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reference_point_position_sigma_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_position_sigma_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contour_points_cog_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->contour_points_cog_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contour_points_cog_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contour_points_cog_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->contour_points_cog_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contour_points_cog_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_box_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_box_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_orientation_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->object_box_orientation_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_orientation_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_orientation_angle_sigma
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->object_box_orientation_angle_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_orientation_angle_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_velocity_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->absolute_velocity_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_velocity_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_velocity_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->absolute_velocity_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_velocity_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_velocity_sigma_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->absolute_velocity_sigma_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_velocity_sigma_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_velocity_sigma_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->absolute_velocity_sigma_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_velocity_sigma_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_velocity_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->relative_velocity_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_velocity_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->relative_velocity_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_velocity_sigma_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->relative_velocity_sigma_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity_sigma_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_velocity_sigma_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->relative_velocity_sigma_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity_sigma_y", field);
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
  {  // tracking_model
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tracking_model);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mobile_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mobile_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mobile_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->track_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_valid", field);
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
  {  // classification_confidence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->classification_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification_confidence", field);
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
