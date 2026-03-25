// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marti_status_msgs:msg/ChronyTrackingStatus.idl
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
#include "marti_status_msgs/msg/detail/chrony_tracking_status__struct.h"
#include "marti_status_msgs/msg/detail/chrony_tracking_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool marti_status_msgs__msg__chrony_tracking_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("marti_status_msgs.msg._chrony_tracking_status.ChronyTrackingStatus", full_classname_dest, 66) == 0);
  }
  marti_status_msgs__msg__ChronyTrackingStatus * ros_message = _ros_message;
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
  {  // reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reference, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // stratum
    PyObject * field = PyObject_GetAttrString(_pymsg, "stratum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stratum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // system_time_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_time_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_time_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // last_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rms_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "rms_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rms_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // frequency_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "frequency_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->frequency_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // residual_frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "residual_frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->residual_frequency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // skew
    PyObject * field = PyObject_GetAttrString(_pymsg, "skew");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->skew = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // root_delay
    PyObject * field = PyObject_GetAttrString(_pymsg, "root_delay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->root_delay = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // root_dispersion
    PyObject * field = PyObject_GetAttrString(_pymsg, "root_dispersion");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->root_dispersion = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // update_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "update_interval");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->update_interval = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leap_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "leap_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->leap_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * marti_status_msgs__msg__chrony_tracking_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChronyTrackingStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marti_status_msgs.msg._chrony_tracking_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChronyTrackingStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marti_status_msgs__msg__ChronyTrackingStatus * ros_message = (marti_status_msgs__msg__ChronyTrackingStatus *)raw_ros_message;
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
  {  // reference
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reference.data,
      strlen(ros_message->reference.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stratum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stratum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stratum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_time_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_time_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_time_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rms_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rms_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rms_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frequency_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->frequency_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frequency_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // residual_frequency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->residual_frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "residual_frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skew
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->skew);
    {
      int rc = PyObject_SetAttrString(_pymessage, "skew", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // root_delay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->root_delay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "root_delay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // root_dispersion
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->root_dispersion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "root_dispersion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // update_interval
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->update_interval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "update_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leap_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->leap_status.data,
      strlen(ros_message->leap_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "leap_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
