// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marti_introspection_msgs:msg/ParamInfo.idl
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
#include "marti_introspection_msgs/msg/detail/param_info__struct.h"
#include "marti_introspection_msgs/msg/detail/param_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool marti_introspection_msgs__msg__param_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("marti_introspection_msgs.msg._param_info.ParamInfo", full_classname_dest, 50) == 0);
  }
  marti_introspection_msgs__msg__ParamInfo * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // resolved_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "resolved_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->resolved_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // description
    PyObject * field = PyObject_GetAttrString(_pymsg, "description");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->description, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // group
    PyObject * field = PyObject_GetAttrString(_pymsg, "group");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->group, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dynamic
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamic");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dynamic = (Py_True == field);
    Py_DECREF(field);
  }
  {  // default_int
    PyObject * field = PyObject_GetAttrString(_pymsg, "default_int");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->default_int = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // default_float
    PyObject * field = PyObject_GetAttrString(_pymsg, "default_float");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->default_float = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // default_double
    PyObject * field = PyObject_GetAttrString(_pymsg, "default_double");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->default_double = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // default_string
    PyObject * field = PyObject_GetAttrString(_pymsg, "default_string");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->default_string, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // default_bool
    PyObject * field = PyObject_GetAttrString(_pymsg, "default_bool");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->default_bool = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * marti_introspection_msgs__msg__param_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParamInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marti_introspection_msgs.msg._param_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParamInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marti_introspection_msgs__msg__ParamInfo * ros_message = (marti_introspection_msgs__msg__ParamInfo *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // resolved_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->resolved_name.data,
      strlen(ros_message->resolved_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "resolved_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // description
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->description.data,
      strlen(ros_message->description.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "description", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->group.data,
      strlen(ros_message->group.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "group", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamic
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dynamic ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // default_int
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->default_int);
    {
      int rc = PyObject_SetAttrString(_pymessage, "default_int", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // default_float
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->default_float);
    {
      int rc = PyObject_SetAttrString(_pymessage, "default_float", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // default_double
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->default_double);
    {
      int rc = PyObject_SetAttrString(_pymessage, "default_double", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // default_string
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->default_string.data,
      strlen(ros_message->default_string.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "default_string", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // default_bool
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->default_bool ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "default_bool", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
