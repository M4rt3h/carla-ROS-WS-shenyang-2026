// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from neobotix_usboard_msgs:msg/Command.idl
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
#include "neobotix_usboard_msgs/msg/detail/command__struct.h"
#include "neobotix_usboard_msgs/msg/detail/command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool neobotix_usboard_msgs__msg__command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("neobotix_usboard_msgs.msg._command.Command", full_classname_dest, 42) == 0);
  }
  neobotix_usboard_msgs__msg__Command * ros_message = _ros_message;
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
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_data");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_data = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // set_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte6
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte6 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte5
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte5 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte4
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte3
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte2
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte1
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_active_9to16
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_active_9to16");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_active_9to16 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_active_1to8
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_active_1to8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_active_1to8 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * neobotix_usboard_msgs__msg__command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Command */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("neobotix_usboard_msgs.msg._command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Command");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  neobotix_usboard_msgs__msg__Command * ros_message = (neobotix_usboard_msgs__msg__Command *)raw_ros_message;
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
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_data
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->command_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_active_9to16
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_active_9to16);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_active_9to16", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_active_1to8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_active_1to8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_active_1to8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
