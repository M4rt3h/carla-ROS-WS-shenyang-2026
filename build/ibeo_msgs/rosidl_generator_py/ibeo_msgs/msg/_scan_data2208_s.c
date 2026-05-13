// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/ScanData2208.idl
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
#include "ibeo_msgs/msg/detail/scan_data2208__struct.h"
#include "ibeo_msgs/msg/detail/scan_data2208__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ibeo_msgs/msg/detail/scan_point2208__functions.h"
// end nested array functions include
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
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__scan_point2208__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__scan_point2208__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__scan_data2208__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("ibeo_msgs.msg._scan_data2208.ScanData2208", full_classname_dest, 41) == 0);
  }
  ibeo_msgs__msg__ScanData2208 * ros_message = _ros_message;
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
  {  // scan_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scanner_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "scanner_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scanner_type = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motor_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // laser_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->laser_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frequency_locked
    PyObject * field = PyObject_GetAttrString(_pymsg, "frequency_locked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->frequency_locked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motor_rotating_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_rotating_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_rotating_direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angle_ticks_per_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_ticks_per_rotation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->angle_ticks_per_rotation = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scan_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mounting_yaw_angle_ticks
    PyObject * field = PyObject_GetAttrString(_pymsg, "mounting_yaw_angle_ticks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mounting_yaw_angle_ticks = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mounting_pitch_angle_ticks
    PyObject * field = PyObject_GetAttrString(_pymsg, "mounting_pitch_angle_ticks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mounting_pitch_angle_ticks = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mounting_roll_angle_ticks
    PyObject * field = PyObject_GetAttrString(_pymsg, "mounting_roll_angle_ticks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mounting_roll_angle_ticks = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mounting_position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "mounting_position_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mounting_position_x = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mounting_position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "mounting_position_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mounting_position_y = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mounting_position_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "mounting_position_z");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mounting_position_z = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scan_start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_start_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->scan_start_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scan_end_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_end_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->scan_end_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // start_angle_ticks
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_angle_ticks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_angle_ticks = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // end_angle_ticks
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_angle_ticks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_angle_ticks = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mirror_side
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirror_side");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirror_side = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mirror_tilt
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirror_tilt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirror_tilt = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // scan_point_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_point_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'scan_point_list'");
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
    if (!ibeo_msgs__msg__ScanPoint2208__Sequence__init(&(ros_message->scan_point_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ibeo_msgs__msg__ScanPoint2208__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ibeo_msgs__msg__ScanPoint2208 * dest = ros_message->scan_point_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ibeo_msgs__msg__scan_point2208__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ibeo_msgs__msg__scan_data2208__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScanData2208 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._scan_data2208");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScanData2208");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__ScanData2208 * ros_message = (ibeo_msgs__msg__ScanData2208 *)raw_ros_message;
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
  {  // scanner_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scanner_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scanner_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motor_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->laser_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frequency_locked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->frequency_locked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frequency_locked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_rotating_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_rotating_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_rotating_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_ticks_per_rotation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->angle_ticks_per_rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_ticks_per_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scan_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mounting_yaw_angle_ticks
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mounting_yaw_angle_ticks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mounting_yaw_angle_ticks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mounting_pitch_angle_ticks
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mounting_pitch_angle_ticks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mounting_pitch_angle_ticks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mounting_roll_angle_ticks
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mounting_roll_angle_ticks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mounting_roll_angle_ticks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mounting_position_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mounting_position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mounting_position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mounting_position_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mounting_position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mounting_position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mounting_position_z
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mounting_position_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mounting_position_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_start_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->scan_start_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_end_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->scan_end_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_end_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_angle_ticks
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->start_angle_ticks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_angle_ticks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_angle_ticks
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->end_angle_ticks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_angle_ticks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirror_side
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mirror_side);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirror_side", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirror_tilt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mirror_tilt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirror_tilt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_point_list
    PyObject * field = NULL;
    size_t size = ros_message->scan_point_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ibeo_msgs__msg__ScanPoint2208 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->scan_point_list.data[i]);
      PyObject * pyitem = ibeo_msgs__msg__scan_point2208__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "scan_point_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
