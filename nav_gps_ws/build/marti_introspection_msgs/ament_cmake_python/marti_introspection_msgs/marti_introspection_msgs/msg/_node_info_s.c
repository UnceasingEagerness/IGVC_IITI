// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marti_introspection_msgs:msg/NodeInfo.idl
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
#include "marti_introspection_msgs/msg/detail/node_info__struct.h"
#include "marti_introspection_msgs/msg/detail/node_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "marti_introspection_msgs/msg/detail/param_info__functions.h"
#include "marti_introspection_msgs/msg/detail/service_info__functions.h"
#include "marti_introspection_msgs/msg/detail/topic_info__functions.h"
// end nested array functions include
bool marti_introspection_msgs__msg__topic_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * marti_introspection_msgs__msg__topic_info__convert_to_py(void * raw_ros_message);
bool marti_introspection_msgs__msg__param_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * marti_introspection_msgs__msg__param_info__convert_to_py(void * raw_ros_message);
bool marti_introspection_msgs__msg__service_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * marti_introspection_msgs__msg__service_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool marti_introspection_msgs__msg__node_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("marti_introspection_msgs.msg._node_info.NodeInfo", full_classname_dest, 48) == 0);
  }
  marti_introspection_msgs__msg__NodeInfo * ros_message = _ros_message;
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
  {  // location
    PyObject * field = PyObject_GetAttrString(_pymsg, "location");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->location, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // nodelet_manager
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodelet_manager");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->nodelet_manager, PyBytes_AS_STRING(encoded_field));
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
  {  // topics
    PyObject * field = PyObject_GetAttrString(_pymsg, "topics");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'topics'");
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
    if (!marti_introspection_msgs__msg__TopicInfo__Sequence__init(&(ros_message->topics), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create marti_introspection_msgs__msg__TopicInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    marti_introspection_msgs__msg__TopicInfo * dest = ros_message->topics.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!marti_introspection_msgs__msg__topic_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // parameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "parameters");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'parameters'");
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
    if (!marti_introspection_msgs__msg__ParamInfo__Sequence__init(&(ros_message->parameters), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create marti_introspection_msgs__msg__ParamInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    marti_introspection_msgs__msg__ParamInfo * dest = ros_message->parameters.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!marti_introspection_msgs__msg__param_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // services
    PyObject * field = PyObject_GetAttrString(_pymsg, "services");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'services'");
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
    if (!marti_introspection_msgs__msg__ServiceInfo__Sequence__init(&(ros_message->services), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create marti_introspection_msgs__msg__ServiceInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    marti_introspection_msgs__msg__ServiceInfo * dest = ros_message->services.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!marti_introspection_msgs__msg__service_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * marti_introspection_msgs__msg__node_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NodeInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marti_introspection_msgs.msg._node_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NodeInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marti_introspection_msgs__msg__NodeInfo * ros_message = (marti_introspection_msgs__msg__NodeInfo *)raw_ros_message;
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
  {  // location
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->location.data,
      strlen(ros_message->location.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodelet_manager
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->nodelet_manager.data,
      strlen(ros_message->nodelet_manager.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodelet_manager", field);
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
  {  // topics
    PyObject * field = NULL;
    size_t size = ros_message->topics.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    marti_introspection_msgs__msg__TopicInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->topics.data[i]);
      PyObject * pyitem = marti_introspection_msgs__msg__topic_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "topics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parameters
    PyObject * field = NULL;
    size_t size = ros_message->parameters.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    marti_introspection_msgs__msg__ParamInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->parameters.data[i]);
      PyObject * pyitem = marti_introspection_msgs__msg__param_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "parameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // services
    PyObject * field = NULL;
    size_t size = ros_message->services.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    marti_introspection_msgs__msg__ServiceInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->services.data[i]);
      PyObject * pyitem = marti_introspection_msgs__msg__service_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "services", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
