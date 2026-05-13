// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
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
#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__struct.h"
#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__color_rgba__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__color_rgba__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__color_rgba__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__color_rgba__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rviz_2d_overlay_msgs__msg__overlay_text__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("rviz_2d_overlay_msgs.msg._overlay_text.OverlayText", full_classname_dest, 50) == 0);
  }
  rviz_2d_overlay_msgs__msg__OverlayText * ros_message = _ros_message;
  {  // action
    PyObject * field = PyObject_GetAttrString(_pymsg, "action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->action = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // horizontal_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->horizontal_distance = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vertical_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vertical_distance = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // horizontal_alignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_alignment");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->horizontal_alignment = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vertical_alignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_alignment");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vertical_alignment = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bg_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "bg_color");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__color_rgba__convert_from_py(field, &ros_message->bg_color)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // line_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "line_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->line_width = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // text_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "text_size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->text_size = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // font
    PyObject * field = PyObject_GetAttrString(_pymsg, "font");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->font, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // fg_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "fg_color");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__color_rgba__convert_from_py(field, &ros_message->fg_color)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // text
    PyObject * field = PyObject_GetAttrString(_pymsg, "text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rviz_2d_overlay_msgs__msg__overlay_text__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OverlayText */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rviz_2d_overlay_msgs.msg._overlay_text");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OverlayText");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rviz_2d_overlay_msgs__msg__OverlayText * ros_message = (rviz_2d_overlay_msgs__msg__OverlayText *)raw_ros_message;
  {  // action
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_distance
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->horizontal_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_distance
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vertical_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_alignment
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->horizontal_alignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_alignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_alignment
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vertical_alignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_alignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bg_color
    PyObject * field = NULL;
    field = std_msgs__msg__color_rgba__convert_to_py(&ros_message->bg_color);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bg_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // line_width
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->line_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "line_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // text_size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->text_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "text_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // font
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->font.data,
      strlen(ros_message->font.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "font", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fg_color
    PyObject * field = NULL;
    field = std_msgs__msg__color_rgba__convert_to_py(&ros_message->fg_color);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fg_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->text.data,
      strlen(ros_message->text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
