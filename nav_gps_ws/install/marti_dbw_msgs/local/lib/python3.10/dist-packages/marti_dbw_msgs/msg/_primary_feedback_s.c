// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
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
#include "marti_dbw_msgs/msg/detail/primary_feedback__struct.h"
#include "marti_dbw_msgs/msg/detail/primary_feedback__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool marti_dbw_msgs__msg__primary_feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("marti_dbw_msgs.msg._primary_feedback.PrimaryFeedback", full_classname_dest, 52) == 0);
  }
  marti_dbw_msgs__msg__PrimaryFeedback * ros_message = _ros_message;
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
  {  // present
    PyObject * field = PyObject_GetAttrString(_pymsg, "present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // robotic_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "robotic_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->robotic_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_command");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_command = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_measure
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_measure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_measure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_command");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_command = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_measure
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_measure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_measure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_command");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_command = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_measure
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_measure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_measure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // estop_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop_command");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->estop_command = (Py_True == field);
    Py_DECREF(field);
  }
  {  // estop_measure
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop_measure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->estop_measure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // error_steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_steering");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->error_steering = (Py_True == field);
    Py_DECREF(field);
  }
  {  // error_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_throttle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->error_throttle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // error_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_brake");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->error_brake = (Py_True == field);
    Py_DECREF(field);
  }
  {  // error_other
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_other");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->error_other = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * marti_dbw_msgs__msg__primary_feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PrimaryFeedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marti_dbw_msgs.msg._primary_feedback");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PrimaryFeedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marti_dbw_msgs__msg__PrimaryFeedback * ros_message = (marti_dbw_msgs__msg__PrimaryFeedback *)raw_ros_message;
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
  {  // present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robotic_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->robotic_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robotic_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_command
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_measure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_measure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_measure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_command
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_measure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_measure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_measure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_command
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_measure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_measure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_measure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop_command
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->estop_command ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop_measure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->estop_measure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop_measure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_steering
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->error_steering ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_throttle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->error_throttle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_brake
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->error_brake ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_other
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->error_other ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_other", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
