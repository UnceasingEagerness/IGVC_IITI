# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_sensor_msgs:msg/DioRealTimeData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'sample_states'
# Member 'sample_times'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DioRealTimeData(type):
    """Metaclass of message 'DioRealTimeData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('marti_sensor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_sensor_msgs.msg.DioRealTimeData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dio_real_time_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dio_real_time_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dio_real_time_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dio_real_time_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dio_real_time_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DioRealTimeData(metaclass=Metaclass_DioRealTimeData):
    """Message class 'DioRealTimeData'."""

    __slots__ = [
        '_header',
        '_sample_frequency',
        '_latest_sample_time',
        '_sample_states',
        '_sample_times',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sample_frequency': 'double',
        'latest_sample_time': 'uint64',
        'sample_states': 'sequence<uint16>',
        'sample_times': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sample_frequency = kwargs.get('sample_frequency', float())
        self.latest_sample_time = kwargs.get('latest_sample_time', int())
        self.sample_states = array.array('H', kwargs.get('sample_states', []))
        self.sample_times = array.array('I', kwargs.get('sample_times', []))

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
        if self.header != other.header:
            return False
        if self.sample_frequency != other.sample_frequency:
            return False
        if self.latest_sample_time != other.latest_sample_time:
            return False
        if self.sample_states != other.sample_states:
            return False
        if self.sample_times != other.sample_times:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def sample_frequency(self):
        """Message field 'sample_frequency'."""
        return self._sample_frequency

    @sample_frequency.setter
    def sample_frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sample_frequency' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sample_frequency' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sample_frequency = value

    @builtins.property
    def latest_sample_time(self):
        """Message field 'latest_sample_time'."""
        return self._latest_sample_time

    @latest_sample_time.setter
    def latest_sample_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'latest_sample_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'latest_sample_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._latest_sample_time = value

    @builtins.property
    def sample_states(self):
        """Message field 'sample_states'."""
        return self._sample_states

    @sample_states.setter
    def sample_states(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'sample_states' array.array() must have the type code of 'H'"
            self._sample_states = value
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
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'sample_states' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._sample_states = array.array('H', value)

    @builtins.property
    def sample_times(self):
        """Message field 'sample_times'."""
        return self._sample_times

    @sample_times.setter
    def sample_times(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'sample_times' array.array() must have the type code of 'I'"
            self._sample_times = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'sample_times' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._sample_times = array.array('I', value)
