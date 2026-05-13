// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
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
#include "mobileye_560_660_msgs/msg/detail/obstacle_data__struct.h"
#include "mobileye_560_660_msgs/msg/detail/obstacle_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mobileye_560_660_msgs__msg__obstacle_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("mobileye_560_660_msgs.msg._obstacle_data.ObstacleData", full_classname_dest, 53) == 0);
  }
  mobileye_560_660_msgs__msg__ObstacleData * ros_message = _ros_message;
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
  {  // obstacle_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacle_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacle_pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_pos_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacle_pos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_pos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_pos_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // blinker_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "blinker_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blinker_info = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cut_in_and_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "cut_in_and_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cut_in_and_out = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacle_rel_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_rel_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_rel_vel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacle_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacle_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacle_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacle_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacle_brake_lights
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_brake_lights");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obstacle_brake_lights = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obstacle_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacle_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacle_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacle_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacle_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacle_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacle_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_lane");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacle_lane = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cipv_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "cipv_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cipv_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radar_pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radar_pos_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radar_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radar_vel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radar_match_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_match_confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radar_match_confidence = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // matched_radar_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_radar_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->matched_radar_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacle_angle_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_angle_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_angle_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacle_scale_change
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_scale_change");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_scale_change = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // object_accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_accel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacle_replaced
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_replaced");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obstacle_replaced = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obstacle_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mobileye_560_660_msgs__msg__obstacle_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mobileye_560_660_msgs.msg._obstacle_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mobileye_560_660_msgs__msg__ObstacleData * ros_message = (mobileye_560_660_msgs__msg__ObstacleData *)raw_ros_message;
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
  {  // obstacle_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstacle_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_pos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_pos_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blinker_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blinker_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blinker_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cut_in_and_out
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cut_in_and_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cut_in_and_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_rel_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_rel_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_rel_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstacle_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstacle_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_brake_lights
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obstacle_brake_lights ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_brake_lights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstacle_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstacle_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_lane
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstacle_lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cipv_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cipv_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cipv_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_pos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radar_pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radar_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_match_confidence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radar_match_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_match_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_radar_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->matched_radar_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_radar_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_angle_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_angle_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_angle_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_scale_change
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_scale_change);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_scale_change", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_accel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->object_accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_replaced
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obstacle_replaced ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_replaced", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
