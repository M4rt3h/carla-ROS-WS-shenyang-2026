// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/HostVehicleState2807.idl
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
#include "ibeo_msgs/msg/detail/host_vehicle_state2807__struct.h"
#include "ibeo_msgs/msg/detail/host_vehicle_state2807__functions.h"

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
bool ibeo_msgs__msg__host_vehicle_state2807__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ibeo_msgs.msg._host_vehicle_state2807.HostVehicleState2807", full_classname_dest, 58) == 0);
  }
  ibeo_msgs__msg__HostVehicleState2807 * ros_message = _ros_message;
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
  {  // distance_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distance_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // course_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "course_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->course_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitudinal_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cross_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "cross_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cross_acceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_wheel_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_front_to_front_axle
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_front_to_front_axle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_front_to_front_axle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_axle_to_front_axle
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_axle_to_front_axle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_axle_to_front_axle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_axle_to_vehicle_rear
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_axle_to_vehicle_rear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_axle_to_vehicle_rear = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_ratio_poly_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ratio_poly_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_ratio_poly_0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_ratio_poly_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ratio_poly_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_ratio_poly_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_ratio_poly_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ratio_poly_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_ratio_poly_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_ratio_poly_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ratio_poly_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_ratio_poly_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitudinal_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_acceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ibeo_msgs__msg__host_vehicle_state2807__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HostVehicleState2807 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._host_vehicle_state2807");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HostVehicleState2807");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__HostVehicleState2807 * ros_message = (ibeo_msgs__msg__HostVehicleState2807 *)raw_ros_message;
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
  {  // distance_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->distance_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->distance_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // course_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->course_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "course_angle", field);
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
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
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
  {  // cross_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cross_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cross_acceleration", field);
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
  {  // vehicle_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_front_to_front_axle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_front_to_front_axle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_front_to_front_axle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_axle_to_front_axle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_axle_to_front_axle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_axle_to_front_axle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_axle_to_vehicle_rear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_axle_to_vehicle_rear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_axle_to_vehicle_rear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ratio_poly_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_ratio_poly_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ratio_poly_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ratio_poly_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_ratio_poly_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ratio_poly_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ratio_poly_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_ratio_poly_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ratio_poly_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ratio_poly_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_ratio_poly_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ratio_poly_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
