// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from esda_ros_interface:msg/EsdaMessage.idl
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
#include "esda_ros_interface/msg/detail/esda_message__struct.h"
#include "esda_ros_interface/msg/detail/esda_message__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool esda_ros_interface__msg__esda_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("esda_ros_interface.msg._esda_message.EsdaMessage", full_classname_dest, 48) == 0);
  }
  esda_ros_interface__msg__EsdaMessage * ros_message = _ros_message;
  {  // current_vel_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_vel_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_vel_right = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_vel_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_vel_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_vel_left = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // auto_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // estop
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->estop = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * esda_ros_interface__msg__esda_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsdaMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("esda_ros_interface.msg._esda_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsdaMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  esda_ros_interface__msg__EsdaMessage * ros_message = (esda_ros_interface__msg__EsdaMessage *)raw_ros_message;
  {  // current_vel_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_vel_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_vel_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_vel_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_vel_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_vel_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->estop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
