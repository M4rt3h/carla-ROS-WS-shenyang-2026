// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from neobotix_usboard_msgs:msg/Paraset.idl
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
#include "neobotix_usboard_msgs/msg/detail/paraset__struct.h"
#include "neobotix_usboard_msgs/msg/detail/paraset__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool neobotix_usboard_msgs__msg__paraset__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("neobotix_usboard_msgs.msg._paraset.Paraset", full_classname_dest, 42) == 0);
  }
  neobotix_usboard_msgs__msg__Paraset * ros_message = _ros_message;
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
  {  // set_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte54
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte54");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte54 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte53
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte53");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte53 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte52
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte52");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte52 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte51
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte51");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte51 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte50
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte50");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte50 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte49
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte49");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte49 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte48
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte48");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte48 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte47
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte47");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte47 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte46
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte46");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte46 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte45
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte45");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte45 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte44
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte44");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte44 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte43
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte43");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte43 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte42
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte42");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte42 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte41
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte41");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte41 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte40
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte40");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte40 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte39
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte39");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte39 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte38
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte38");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte38 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte37
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte37");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte37 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte36
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte36");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte36 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte35
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte35");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte35 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte34
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte34");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte34 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte33
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte33");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte33 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte32
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte32");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte32 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte31
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte31");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte31 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte30
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte30");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte30 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte29
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte29");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte29 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte28
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte28");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte28 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte27
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte27");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte27 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte26
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte26");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte26 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte25
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte25");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte25 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte24
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte24");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte24 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte23
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte23");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte23 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte22
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte22");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte22 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte21
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte21");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte21 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte20
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte20");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte20 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte19
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte19");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte19 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte18
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte18");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte18 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte17
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte17");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte17 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte16
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte16");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte16 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte15
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte15");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte15 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte14
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte14");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte14 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte13
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte13");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte13 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte12
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte12");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte12 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte11
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte11");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte11 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte10
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte10");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte10 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte9
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte9");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte9 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte8
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte8 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // paraset_byte7
    PyObject * field = PyObject_GetAttrString(_pymsg, "paraset_byte7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->paraset_byte7 = (uint8_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * neobotix_usboard_msgs__msg__paraset__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Paraset */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("neobotix_usboard_msgs.msg._paraset");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Paraset");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  neobotix_usboard_msgs__msg__Paraset * ros_message = (neobotix_usboard_msgs__msg__Paraset *)raw_ros_message;
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
  {  // paraset_byte54
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte54);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte54", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte53
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte53);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte53", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte52
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte52);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte52", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte51
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte51);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte51", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte50
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte50);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte50", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte49
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte49);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte49", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte48
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte48);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte48", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte47
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte47);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte47", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte46
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte46);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte46", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte45
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte45);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte45", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte44
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte44);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte44", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte43
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte43);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte43", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte42
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte42);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte42", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte41
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte41);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte41", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte40
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte40);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte40", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte39
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte39);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte39", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte38
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte38);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte38", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte37
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte37);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte37", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte36
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte36);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte36", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte35
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte35);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte35", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte34
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte34);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte34", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte33
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte33);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte33", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte32
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte32);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte32", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte31
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte31);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte31", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte30
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte30);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte30", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte29
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte29);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte29", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte28
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte28);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte28", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte27
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte27);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte27", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte26
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte26);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte26", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte25
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte25);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte25", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte24
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte24);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte24", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte23
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte23);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte23", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte22
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte22);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte22", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte21
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte21);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte21", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte20
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte20);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte20", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte19
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte19);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte19", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte18
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte18);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte18", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte17
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte17);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte17", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte16
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte16);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte16", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte15
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte15);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte15", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte14
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte14);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte14", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte13
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte13);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte13", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte12
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte11
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte10
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte9
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paraset_byte7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->paraset_byte7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "paraset_byte7", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
