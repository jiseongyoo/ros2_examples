# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/MessageCollection.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'unbounded_long_int_arr'
# Member 'bounded_five_long_int_arr'
import array  # noqa: E402, I100

# Member 'static_five_long_int_arr'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MessageCollection(type):
    """Metaclass of message 'MessageCollection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONSTANT_STRING': 'CONSTANT_STRING',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.MessageCollection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__message_collection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__message_collection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__message_collection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__message_collection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__message_collection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONSTANT_STRING': cls.__constants['CONSTANT_STRING'],
        }

    @property
    def CONSTANT_STRING(self):
        """Message constant 'CONSTANT_STRING'."""
        return Metaclass_MessageCollection.__constants['CONSTANT_STRING']


class MessageCollection(metaclass=Metaclass_MessageCollection):
    """
    Message class 'MessageCollection'.

    Constants:
      CONSTANT_STRING
    """

    __slots__ = [
        '_bool_t',
        '_byte_t',
        '_char_t',
        '_float_t',
        '_double_t',
        '_octet_int_t',
        '_octet_uint_t',
        '_short_int_t',
        '_short_uint_t',
        '_long_int_t',
        '_long_uint_t',
        '_long_long_int_t',
        '_long_long_uint_t',
        '_unbounded_long_int_arr',
        '_static_five_long_int_arr',
        '_bounded_five_long_int_arr',
        '_string_t',
        '_static_five_string_arr',
        '_bounded_ten_char_string_t',
        '_bounded_five_string_arr',
        '_bounded_ten_char_unbounded_string_arr',
        '_bounded_ten_char_bounded_five_string_arr',
    ]

    _fields_and_field_types = {
        'bool_t': 'boolean',
        'byte_t': 'octet',
        'char_t': 'uint8',
        'float_t': 'float',
        'double_t': 'double',
        'octet_int_t': 'int8',
        'octet_uint_t': 'uint8',
        'short_int_t': 'int16',
        'short_uint_t': 'uint16',
        'long_int_t': 'int32',
        'long_uint_t': 'uint32',
        'long_long_int_t': 'int64',
        'long_long_uint_t': 'uint64',
        'unbounded_long_int_arr': 'sequence<int32>',
        'static_five_long_int_arr': 'int32[5]',
        'bounded_five_long_int_arr': 'sequence<int32, 5>',
        'string_t': 'string',
        'static_five_string_arr': 'string[5]',
        'bounded_ten_char_string_t': 'string<10>',
        'bounded_five_string_arr': 'sequence<string, 5>',
        'bounded_ten_char_unbounded_string_arr': 'sequence<string<10>>',
        'bounded_ten_char_bounded_five_string_arr': 'sequence<string<10>, 5>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 5),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('int32'), 5),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 5),  # noqa: E501
        rosidl_parser.definition.BoundedString(10),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.UnboundedString(), 5),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BoundedString(10)),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(10), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bool_t = kwargs.get('bool_t', bool())
        self.byte_t = kwargs.get('byte_t', bytes([0]))
        self.char_t = kwargs.get('char_t', int())
        self.float_t = kwargs.get('float_t', float())
        self.double_t = kwargs.get('double_t', float())
        self.octet_int_t = kwargs.get('octet_int_t', int())
        self.octet_uint_t = kwargs.get('octet_uint_t', int())
        self.short_int_t = kwargs.get('short_int_t', int())
        self.short_uint_t = kwargs.get('short_uint_t', int())
        self.long_int_t = kwargs.get('long_int_t', int())
        self.long_uint_t = kwargs.get('long_uint_t', int())
        self.long_long_int_t = kwargs.get('long_long_int_t', int())
        self.long_long_uint_t = kwargs.get('long_long_uint_t', int())
        self.unbounded_long_int_arr = array.array('i', kwargs.get('unbounded_long_int_arr', []))
        if 'static_five_long_int_arr' not in kwargs:
            self.static_five_long_int_arr = numpy.zeros(5, dtype=numpy.int32)
        else:
            self.static_five_long_int_arr = numpy.array(kwargs.get('static_five_long_int_arr'), dtype=numpy.int32)
            assert self.static_five_long_int_arr.shape == (5, )
        self.bounded_five_long_int_arr = array.array('i', kwargs.get('bounded_five_long_int_arr', []))
        self.string_t = kwargs.get('string_t', str())
        self.static_five_string_arr = kwargs.get(
            'static_five_string_arr',
            [str() for x in range(5)]
        )
        self.bounded_ten_char_string_t = kwargs.get('bounded_ten_char_string_t', str())
        self.bounded_five_string_arr = kwargs.get('bounded_five_string_arr', [])
        self.bounded_ten_char_unbounded_string_arr = kwargs.get('bounded_ten_char_unbounded_string_arr', [])
        self.bounded_ten_char_bounded_five_string_arr = kwargs.get('bounded_ten_char_bounded_five_string_arr', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.bool_t != other.bool_t:
            return False
        if self.byte_t != other.byte_t:
            return False
        if self.char_t != other.char_t:
            return False
        if self.float_t != other.float_t:
            return False
        if self.double_t != other.double_t:
            return False
        if self.octet_int_t != other.octet_int_t:
            return False
        if self.octet_uint_t != other.octet_uint_t:
            return False
        if self.short_int_t != other.short_int_t:
            return False
        if self.short_uint_t != other.short_uint_t:
            return False
        if self.long_int_t != other.long_int_t:
            return False
        if self.long_uint_t != other.long_uint_t:
            return False
        if self.long_long_int_t != other.long_long_int_t:
            return False
        if self.long_long_uint_t != other.long_long_uint_t:
            return False
        if self.unbounded_long_int_arr != other.unbounded_long_int_arr:
            return False
        if all(self.static_five_long_int_arr != other.static_five_long_int_arr):
            return False
        if self.bounded_five_long_int_arr != other.bounded_five_long_int_arr:
            return False
        if self.string_t != other.string_t:
            return False
        if self.static_five_string_arr != other.static_five_string_arr:
            return False
        if self.bounded_ten_char_string_t != other.bounded_ten_char_string_t:
            return False
        if self.bounded_five_string_arr != other.bounded_five_string_arr:
            return False
        if self.bounded_ten_char_unbounded_string_arr != other.bounded_ten_char_unbounded_string_arr:
            return False
        if self.bounded_ten_char_bounded_five_string_arr != other.bounded_ten_char_bounded_five_string_arr:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def bool_t(self):
        """Message field 'bool_t'."""
        return self._bool_t

    @bool_t.setter
    def bool_t(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bool_t' field must be of type 'bool'"
        self._bool_t = value

    @property
    def byte_t(self):
        """Message field 'byte_t'."""
        return self._byte_t

    @byte_t.setter
    def byte_t(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'byte_t' field must be of type 'bytes' or 'ByteString' with length 1"
        self._byte_t = value

    @property
    def char_t(self):
        """Message field 'char_t'."""
        return self._char_t

    @char_t.setter
    def char_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'char_t' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'char_t' field must be an unsigned integer in [0, 255]"
        self._char_t = value

    @property
    def float_t(self):
        """Message field 'float_t'."""
        return self._float_t

    @float_t.setter
    def float_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'float_t' field must be of type 'float'"
        self._float_t = value

    @property
    def double_t(self):
        """Message field 'double_t'."""
        return self._double_t

    @double_t.setter
    def double_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'double_t' field must be of type 'float'"
        self._double_t = value

    @property
    def octet_int_t(self):
        """Message field 'octet_int_t'."""
        return self._octet_int_t

    @octet_int_t.setter
    def octet_int_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'octet_int_t' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'octet_int_t' field must be an integer in [-128, 127]"
        self._octet_int_t = value

    @property
    def octet_uint_t(self):
        """Message field 'octet_uint_t'."""
        return self._octet_uint_t

    @octet_uint_t.setter
    def octet_uint_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'octet_uint_t' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'octet_uint_t' field must be an unsigned integer in [0, 255]"
        self._octet_uint_t = value

    @property
    def short_int_t(self):
        """Message field 'short_int_t'."""
        return self._short_int_t

    @short_int_t.setter
    def short_int_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'short_int_t' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'short_int_t' field must be an integer in [-32768, 32767]"
        self._short_int_t = value

    @property
    def short_uint_t(self):
        """Message field 'short_uint_t'."""
        return self._short_uint_t

    @short_uint_t.setter
    def short_uint_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'short_uint_t' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'short_uint_t' field must be an unsigned integer in [0, 65535]"
        self._short_uint_t = value

    @property
    def long_int_t(self):
        """Message field 'long_int_t'."""
        return self._long_int_t

    @long_int_t.setter
    def long_int_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'long_int_t' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'long_int_t' field must be an integer in [-2147483648, 2147483647]"
        self._long_int_t = value

    @property
    def long_uint_t(self):
        """Message field 'long_uint_t'."""
        return self._long_uint_t

    @long_uint_t.setter
    def long_uint_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'long_uint_t' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'long_uint_t' field must be an unsigned integer in [0, 4294967295]"
        self._long_uint_t = value

    @property
    def long_long_int_t(self):
        """Message field 'long_long_int_t'."""
        return self._long_long_int_t

    @long_long_int_t.setter
    def long_long_int_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'long_long_int_t' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'long_long_int_t' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._long_long_int_t = value

    @property
    def long_long_uint_t(self):
        """Message field 'long_long_uint_t'."""
        return self._long_long_uint_t

    @long_long_uint_t.setter
    def long_long_uint_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'long_long_uint_t' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'long_long_uint_t' field must be an unsigned integer in [0, 18446744073709551615]"
        self._long_long_uint_t = value

    @property
    def unbounded_long_int_arr(self):
        """Message field 'unbounded_long_int_arr'."""
        return self._unbounded_long_int_arr

    @unbounded_long_int_arr.setter
    def unbounded_long_int_arr(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'unbounded_long_int_arr' array.array() must have the type code of 'i'"
            self._unbounded_long_int_arr = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'unbounded_long_int_arr' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._unbounded_long_int_arr = array.array('i', value)

    @property
    def static_five_long_int_arr(self):
        """Message field 'static_five_long_int_arr'."""
        return self._static_five_long_int_arr

    @static_five_long_int_arr.setter
    def static_five_long_int_arr(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'static_five_long_int_arr' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 5, \
                "The 'static_five_long_int_arr' numpy.ndarray() must have a size of 5"
            self._static_five_long_int_arr = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'static_five_long_int_arr' field must be a set or sequence with length 5 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._static_five_long_int_arr = numpy.array(value, dtype=numpy.int32)

    @property
    def bounded_five_long_int_arr(self):
        """Message field 'bounded_five_long_int_arr'."""
        return self._bounded_five_long_int_arr

    @bounded_five_long_int_arr.setter
    def bounded_five_long_int_arr(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'bounded_five_long_int_arr' array.array() must have the type code of 'i'"
            assert len(value) <= 5, \
                "The 'bounded_five_long_int_arr' array.array() must have a size <= 5"
            self._bounded_five_long_int_arr = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 5 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'bounded_five_long_int_arr' field must be a set or sequence with length <= 5 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._bounded_five_long_int_arr = array.array('i', value)

    @property
    def string_t(self):
        """Message field 'string_t'."""
        return self._string_t

    @string_t.setter
    def string_t(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_t' field must be of type 'str'"
        self._string_t = value

    @property
    def static_five_string_arr(self):
        """Message field 'static_five_string_arr'."""
        return self._static_five_string_arr

    @static_five_string_arr.setter
    def static_five_string_arr(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'static_five_string_arr' field must be a set or sequence with length 5 and each value of type 'str'"
        self._static_five_string_arr = value

    @property
    def bounded_ten_char_string_t(self):
        """Message field 'bounded_ten_char_string_t'."""
        return self._bounded_ten_char_string_t

    @bounded_ten_char_string_t.setter
    def bounded_ten_char_string_t(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 10), \
                "The 'bounded_ten_char_string_t' field must be string value " \
                'not longer than 10'
        self._bounded_ten_char_string_t = value

    @property
    def bounded_five_string_arr(self):
        """Message field 'bounded_five_string_arr'."""
        return self._bounded_five_string_arr

    @bounded_five_string_arr.setter
    def bounded_five_string_arr(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 5 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'bounded_five_string_arr' field must be a set or sequence with length <= 5 and each value of type 'str'"
        self._bounded_five_string_arr = value

    @property
    def bounded_ten_char_unbounded_string_arr(self):
        """Message field 'bounded_ten_char_unbounded_string_arr'."""
        return self._bounded_ten_char_unbounded_string_arr

    @bounded_ten_char_unbounded_string_arr.setter
    def bounded_ten_char_unbounded_string_arr(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(len(val) <= 10 for val in value) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'bounded_ten_char_unbounded_string_arr' field must be a set or sequence and each string value not longer than 10 and each value of type 'str'"
        self._bounded_ten_char_unbounded_string_arr = value

    @property
    def bounded_ten_char_bounded_five_string_arr(self):
        """Message field 'bounded_ten_char_bounded_five_string_arr'."""
        return self._bounded_ten_char_bounded_five_string_arr

    @bounded_ten_char_bounded_five_string_arr.setter
    def bounded_ten_char_bounded_five_string_arr(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(len(val) <= 10 for val in value) and
                 len(value) <= 5 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'bounded_ten_char_bounded_five_string_arr' field must be a set or sequence with length <= 5 and each string value not longer than 10 and each value of type 'str'"
        self._bounded_ten_char_bounded_five_string_arr = value
