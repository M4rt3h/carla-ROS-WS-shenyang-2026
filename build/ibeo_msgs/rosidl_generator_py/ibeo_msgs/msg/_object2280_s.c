// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/Object2280.idl
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
#include "ibeo_msgs/msg/detail/object2280__struct.h"
#include "ibeo_msgs/msg/detail/object2280__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ibeo_msgs/msg/detail/point2_df__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__point2_df__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__point2_df__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__object2280__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ibeo_msgs.msg._object2280.Object2280", full_classname_dest, 36) == 0);
  }
  ibeo_msgs__msg__Object2280 * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // mobility_of_dyn_object_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "mobility_of_dyn_object_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mobility_of_dyn_object_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motion_model_validated
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_model_validated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motion_model_validated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // object_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_age = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_prediction_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_prediction_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_prediction_age = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // classification_certainty
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification_certainty");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification_certainty = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // classification_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification_age = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_box_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_center");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->object_box_center)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_box_center_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_center_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->object_box_center_sigma)) {
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
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->object_box_size)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_box_orientation_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_orientation_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_box_orientation_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // object_box_orientation_angle_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_box_orientation_angle_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_box_orientation_angle_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // relative_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->relative_velocity)) {
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
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->relative_velocity_sigma)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // absolute_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->absolute_velocity)) {
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
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->absolute_velocity_sigma)) {
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
  {  // closest_point_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "closest_point_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->closest_point_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reference_point_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_point_location = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reference_point_coordinate
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_coordinate");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->reference_point_coordinate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reference_point_coordinate_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_coordinate_sigma");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__point2_df__convert_from_py(field, &ros_message->reference_point_coordinate_sigma)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reference_point_position_correction_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_point_position_correction_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reference_point_position_correction_coefficient = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // object_priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_priority");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_priority = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_existence_measurement
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_existence_measurement");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_existence_measurement = (float)PyFloat_AS_DOUBLE(field);
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
    if (!ibeo_msgs__msg__Point2Df__Sequence__init(&(ros_message->contour_point_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ibeo_msgs__msg__Point2Df__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ibeo_msgs__msg__Point2Df * dest = ros_message->contour_point_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ibeo_msgs__msg__point2_df__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ibeo_msgs__msg__object2280__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Object2280 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._object2280");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Object2280");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__Object2280 * ros_message = (ibeo_msgs__msg__Object2280 *)raw_ros_message;
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
  {  // mobility_of_dyn_object_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mobility_of_dyn_object_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mobility_of_dyn_object_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_model_validated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motion_model_validated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_model_validated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_prediction_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_prediction_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_prediction_age", field);
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
  {  // object_box_center
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->object_box_center);
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
  {  // object_box_center_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->object_box_center_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_center_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_box_size
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->object_box_size);
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
  {  // object_box_orientation_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->object_box_orientation_angle);
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
    field = PyFloat_FromDouble(ros_message->object_box_orientation_angle_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_box_orientation_angle_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_velocity
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->relative_velocity);
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
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->relative_velocity_sigma);
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
  {  // absolute_velocity
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->absolute_velocity);
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
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->absolute_velocity_sigma);
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
  {  // closest_point_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->closest_point_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "closest_point_index", field);
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
  {  // reference_point_coordinate
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->reference_point_coordinate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_coordinate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point_coordinate_sigma
    PyObject * field = NULL;
    field = ibeo_msgs__msg__point2_df__convert_to_py(&ros_message->reference_point_coordinate_sigma);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_coordinate_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_point_position_correction_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reference_point_position_correction_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_point_position_correction_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_priority
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_priority);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_existence_measurement
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->object_existence_measurement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_existence_measurement", field);
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
    ibeo_msgs__msg__Point2Df * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->contour_point_list.data[i]);
      PyObject * pyitem = ibeo_msgs__msg__point2_df__convert_to_py(item);
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
