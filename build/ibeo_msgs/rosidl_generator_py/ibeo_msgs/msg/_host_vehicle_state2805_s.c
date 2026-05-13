// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/HostVehicleState2805.idl
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
#include "ibeo_msgs/msg/detail/host_vehicle_state2805__struct.h"
#include "ibeo_msgs/msg/detail/host_vehicle_state2805__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__ibeo_data_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__ibeo_data_header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__host_vehicle_state2805__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("ibeo_msgs.msg._host_vehicle_state2805.HostVehicleState2805", full_classname_dest, 58) == 0);
  }
  ibeo_msgs__msg__HostVehicleState2805 * ros_message = _ros_message;
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
  {  // ibeo_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "ibeo_header");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__ibeo_data_header__convert_from_py(field, &ros_message->ibeo_header)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // scan_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_flags = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // longitudinal_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_wheel_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // y_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // course_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "course_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->course_angle = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // time_difference
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_difference");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_difference = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // x_difference
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_difference");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_difference = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // y_difference
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_difference");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_difference = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // heading_difference
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_difference");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heading_difference = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // current_yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_yaw_rate = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ibeo_msgs__msg__host_vehicle_state2805__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HostVehicleState2805 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._host_vehicle_state2805");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HostVehicleState2805");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__HostVehicleState2805 * ros_message = (ibeo_msgs__msg__HostVehicleState2805 *)raw_ros_message;
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
  {  // ibeo_header
    PyObject * field = NULL;
    field = ibeo_msgs__msg__ibeo_data_header__convert_to_py(&ros_message->ibeo_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ibeo_header", field);
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
  {  // scan_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scan_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_wheel_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_wheel_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_wheel_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_wheel_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->x_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->y_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // course_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->course_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "course_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_difference
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_difference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_difference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_difference
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->x_difference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_difference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_difference
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->y_difference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_difference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_difference
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->heading_difference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_difference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_yaw_rate
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
