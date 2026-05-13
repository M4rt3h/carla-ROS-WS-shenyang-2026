// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle3.idl
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
#include "delphi_esr_msgs/msg/detail/esr_vehicle3__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle3__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_vehicle3__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("delphi_esr_msgs.msg._esr_vehicle3.EsrVehicle3", full_classname_dest, 45) == 0);
  }
  delphi_esr_msgs__msg__EsrVehicle3 * ros_message = _ros_message;
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
  {  // long_accel_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_accel_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->long_accel_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lat_accel_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_accel_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lat_accel_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lat_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // long_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->long_accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radar_fov_lr
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_fov_lr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radar_fov_lr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // radar_fov_mr
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_fov_mr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radar_fov_mr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // auto_align_disable
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_align_disable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_align_disable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radar_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radar_height = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // serv_align_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "serv_align_type");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->serv_align_type = (Py_True == field);
    Py_DECREF(field);
  }
  {  // serv_align_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "serv_align_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->serv_align_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // aalign_avg_ctr_total
    PyObject * field = PyObject_GetAttrString(_pymsg, "aalign_avg_ctr_total");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aalign_avg_ctr_total = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // auto_align_converged
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_align_converged");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_align_converged = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wheel_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_slip");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheel_slip = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // serv_align_updates_need
    PyObject * field = PyObject_GetAttrString(_pymsg, "serv_align_updates_need");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->serv_align_updates_need = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angle_mounting_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_mounting_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->angle_mounting_offset = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_vehicle3__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrVehicle3 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_vehicle3");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrVehicle3");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrVehicle3 * ros_message = (delphi_esr_msgs__msg__EsrVehicle3 *)raw_ros_message;
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
  {  // long_accel_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->long_accel_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_accel_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_accel_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lat_accel_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_accel_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->long_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_fov_lr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radar_fov_lr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_fov_lr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_fov_mr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radar_fov_mr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_fov_mr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_align_disable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_align_disable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_align_disable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radar_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serv_align_type
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->serv_align_type ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serv_align_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serv_align_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->serv_align_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serv_align_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aalign_avg_ctr_total
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aalign_avg_ctr_total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aalign_avg_ctr_total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_align_converged
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_align_converged ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_align_converged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_slip
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wheel_slip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serv_align_updates_need
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->serv_align_updates_need);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serv_align_updates_need", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_mounting_offset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->angle_mounting_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_mounting_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
