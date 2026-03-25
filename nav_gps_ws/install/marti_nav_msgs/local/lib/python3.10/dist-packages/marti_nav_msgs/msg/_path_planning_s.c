// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marti_nav_msgs:msg/PathPlanning.idl
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
#include "marti_nav_msgs/msg/detail/path_planning__struct.h"
#include "marti_nav_msgs/msg/detail/path_planning__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool marti_nav_msgs__msg__path_planning__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("marti_nav_msgs.msg._path_planning.PathPlanning", full_classname_dest, 46) == 0);
  }
  marti_nav_msgs__msg__PathPlanning * ros_message = _ros_message;
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
  {  // segment_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "segment_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->segment_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // start_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // startx
    PyObject * field = PyObject_GetAttrString(_pymsg, "startx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->startx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // starty
    PyObject * field = PyObject_GetAttrString(_pymsg, "starty");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->starty = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // endx
    PyObject * field = PyObject_GetAttrString(_pymsg, "endx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->endx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // endy
    PyObject * field = PyObject_GetAttrString(_pymsg, "endy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->endy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta0
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a1
    PyObject * field = PyObject_GetAttrString(_pymsg, "a1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a2
    PyObject * field = PyObject_GetAttrString(_pymsg, "a2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k0
    PyObject * field = PyObject_GetAttrString(_pymsg, "k0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c1
    PyObject * field = PyObject_GetAttrString(_pymsg, "c1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c2
    PyObject * field = PyObject_GetAttrString(_pymsg, "c2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // behavior
    PyObject * field = PyObject_GetAttrString(_pymsg, "behavior");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->behavior = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // creep
    PyObject * field = PyObject_GetAttrString(_pymsg, "creep");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->creep = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // reverse
    PyObject * field = PyObject_GetAttrString(_pymsg, "reverse");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reverse = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_track");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_track = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // transmitted
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmitted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->transmitted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // aux_transmitted
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_transmitted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aux_transmitted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // theta_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_end");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_end = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_end");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_end = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // seg_len
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_len");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_len = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_smooth
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_smooth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_smooth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_curv
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_curv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_curv = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // possible_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "possible_points");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->possible_points = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // exit_segment
    PyObject * field = PyObject_GetAttrString(_pymsg, "exit_segment");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->exit_segment = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * marti_nav_msgs__msg__path_planning__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathPlanning */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marti_nav_msgs.msg._path_planning");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathPlanning");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marti_nav_msgs__msg__PathPlanning * ros_message = (marti_nav_msgs__msg__PathPlanning *)raw_ros_message;
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
  {  // segment_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->segment_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "segment_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // startx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->startx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "startx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // starty
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->starty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "starty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // endx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->endx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "endx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // endy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->endy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "endy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // behavior
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->behavior);
    {
      int rc = PyObject_SetAttrString(_pymessage, "behavior", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // creep
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->creep);
    {
      int rc = PyObject_SetAttrString(_pymessage, "creep", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reverse
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->reverse);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reverse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_track
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vehicle_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmitted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->transmitted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmitted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_transmitted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aux_transmitted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_transmitted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_end
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_end
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_len
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->seg_len);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_len", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_smooth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_smooth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_smooth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_curv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_curv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_curv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // possible_points
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->possible_points);
    {
      int rc = PyObject_SetAttrString(_pymessage, "possible_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exit_segment
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->exit_segment ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exit_segment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
