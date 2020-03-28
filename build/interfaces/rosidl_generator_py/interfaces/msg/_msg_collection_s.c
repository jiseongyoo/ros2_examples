// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/MsgCollection.idl
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
#include "rosidl_generator_c/visibility_control.h"
#include "interfaces/msg/msg_collection__struct.h"
#include "interfaces/msg/msg_collection__functions.h"

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/primitives_sequence_functions.h"

#include "rosidl_generator_c/string.h"
#include "rosidl_generator_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__msg_collection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp(
        "interfaces.msg._msg_collection.MsgCollection",
        full_classname_dest, 44) == 0);
  }
  interfaces__msg__MsgCollection * ros_message = _ros_message;
  {  // bool_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_t");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bool_t = (Py_True == field);
    Py_DECREF(field);
  }
  {  // byte_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "byte_t");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->byte_t = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // char_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "char_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->char_t = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // float_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "float_t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float_t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // double_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "double_t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->double_t = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // octet_int_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "octet_int_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->octet_int_t = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // octet_uint_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "octet_uint_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->octet_uint_t = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // short_int_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "short_int_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->short_int_t = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // short_uint_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "short_uint_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->short_uint_t = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // long_int_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_int_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->long_int_t = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // long_uint_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_uint_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->long_uint_t = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // long_long_int_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_long_int_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->long_long_int_t = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // long_long_uint_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_long_uint_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->long_long_uint_t = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // unbounded_long_int_arr
    PyObject * field = PyObject_GetAttrString(_pymsg, "unbounded_long_int_arr");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unbounded_long_int_arr'");
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
    if (!rosidl_generator_c__int32__Sequence__init(&(ros_message->unbounded_long_int_arr), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    int32_t * dest = ros_message->unbounded_long_int_arr.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyLong_Check(item));
      int32_t tmp = (int32_t)PyLong_AsLong(item);
      memcpy(&dest[i], &tmp, sizeof(int32_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // static_five_long_int_arr
    PyObject * field = PyObject_GetAttrString(_pymsg, "static_five_long_int_arr");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    Py_ssize_t size = 5;
    int32_t * dest = ros_message->static_five_long_int_arr;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int32_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bounded_five_long_int_arr
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_five_long_int_arr");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_five_long_int_arr'");
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
    if (!rosidl_generator_c__int32__Sequence__init(&(ros_message->bounded_five_long_int_arr), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    int32_t * dest = ros_message->bounded_five_long_int_arr.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyLong_Check(item));
      int32_t tmp = (int32_t)PyLong_AsLong(item);
      memcpy(&dest[i], &tmp, sizeof(int32_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // string_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_t");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->string_t, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // static_five_string_arr
    PyObject * field = PyObject_GetAttrString(_pymsg, "static_five_string_arr");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'static_five_string_arr'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 5;
    rosidl_generator_c__String * dest = ros_message->static_five_string_arr;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bounded_ten_char_string_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_ten_char_string_t");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->bounded_ten_char_string_t, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bounded_five_string_arr
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_five_string_arr");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_five_string_arr'");
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
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->bounded_five_string_arr), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->bounded_five_string_arr.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bounded_ten_char_unbounded_string_arr
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_ten_char_unbounded_string_arr");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_ten_char_unbounded_string_arr'");
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
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->bounded_ten_char_unbounded_string_arr), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->bounded_ten_char_unbounded_string_arr.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bounded_ten_char_bounded_five_string_arr
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_ten_char_bounded_five_string_arr");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_ten_char_bounded_five_string_arr'");
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
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->bounded_ten_char_bounded_five_string_arr), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->bounded_ten_char_bounded_five_string_arr.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__msg_collection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MsgCollection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._msg_collection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MsgCollection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__MsgCollection * ros_message = (interfaces__msg__MsgCollection *)raw_ros_message;
  {  // bool_t
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bool_t ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // byte_t
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->byte_t, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "byte_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // char_t
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->char_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "char_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float_t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // double_t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->double_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "double_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // octet_int_t
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->octet_int_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "octet_int_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // octet_uint_t
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->octet_uint_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "octet_uint_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // short_int_t
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->short_int_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "short_int_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // short_uint_t
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->short_uint_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "short_uint_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_int_t
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->long_int_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_int_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_uint_t
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->long_uint_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_uint_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_long_int_t
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->long_long_int_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_long_int_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_long_uint_t
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->long_long_uint_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_long_uint_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unbounded_long_int_arr
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "unbounded_long_int_arr");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->unbounded_long_int_arr.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->unbounded_long_int_arr.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->unbounded_long_int_arr.size * sizeof(int32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // static_five_long_int_arr
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "static_five_long_int_arr");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->static_five_long_int_arr[0]);
    memcpy(dst, src, 5 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // bounded_five_long_int_arr
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "bounded_five_long_int_arr");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->bounded_five_long_int_arr.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->bounded_five_long_int_arr.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->bounded_five_long_int_arr.size * sizeof(int32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // string_t
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->string_t.data,
      strlen(ros_message->string_t.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // static_five_string_arr
    PyObject * field = NULL;
    size_t size = 5;
    rosidl_generator_c__String * src = ros_message->static_five_string_arr;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "static_five_string_arr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_ten_char_string_t
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bounded_ten_char_string_t.data,
      strlen(ros_message->bounded_ten_char_string_t.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_ten_char_string_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_five_string_arr
    PyObject * field = NULL;
    size_t size = ros_message->bounded_five_string_arr.size;
    rosidl_generator_c__String * src = ros_message->bounded_five_string_arr.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_five_string_arr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_ten_char_unbounded_string_arr
    PyObject * field = NULL;
    size_t size = ros_message->bounded_ten_char_unbounded_string_arr.size;
    rosidl_generator_c__String * src = ros_message->bounded_ten_char_unbounded_string_arr.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_ten_char_unbounded_string_arr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_ten_char_bounded_five_string_arr
    PyObject * field = NULL;
    size_t size = ros_message->bounded_ten_char_bounded_five_string_arr.size;
    rosidl_generator_c__String * src = ros_message->bounded_ten_char_bounded_five_string_arr.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_ten_char_bounded_five_string_arr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
