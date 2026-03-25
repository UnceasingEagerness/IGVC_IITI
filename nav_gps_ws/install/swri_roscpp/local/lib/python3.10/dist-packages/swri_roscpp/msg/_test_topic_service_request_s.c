// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swri_roscpp:msg/TestTopicServiceRequest.idl
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
#include "swri_roscpp/msg/detail/test_topic_service_request__struct.h"
#include "swri_roscpp/msg/detail/test_topic_service_request__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool marti_common_msgs__msg__service_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * marti_common_msgs__msg__service_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool swri_roscpp__msg__test_topic_service_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("swri_roscpp.msg._test_topic_service_request.TestTopicServiceRequest", full_classname_dest, 67) == 0);
  }
  swri_roscpp__msg__TestTopicServiceRequest * ros_message = _ros_message;
  {  // srv_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "srv_header");
    if (!field) {
      return false;
    }
    if (!marti_common_msgs__msg__service_header__convert_from_py(field, &ros_message->srv_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "request_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->request_value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * swri_roscpp__msg__test_topic_service_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TestTopicServiceRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swri_roscpp.msg._test_topic_service_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TestTopicServiceRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swri_roscpp__msg__TestTopicServiceRequest * ros_message = (swri_roscpp__msg__TestTopicServiceRequest *)raw_ros_message;
  {  // srv_header
    PyObject * field = NULL;
    field = marti_common_msgs__msg__service_header__convert_to_py(&ros_message->srv_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "srv_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->request_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "request_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
