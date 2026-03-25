# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_sensor_msgs:msg/DifferentialMeasurement.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DifferentialMeasurement(type):
    """Metaclass of message 'DifferentialMeasurement'."""

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
                'marti_sensor_msgs.msg.DifferentialMeasurement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__differential_measurement
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__differential_measurement
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__differential_measurement
            cls._TYPE_SUPPORT = module.type_support_msg__msg__differential_measurement
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__differential_measurement

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class DifferentialMeasurement(metaclass=Metaclass_DifferentialMeasurement):
    """Message class 'DifferentialMeasurement'."""

    __slots__ = [
        '_header',
        '_base_frame_id',
        '_baseline_length',
        '_baseline_length_variance',
        '_heading',
        '_heading_variance',
        '_pitch',
        '_pitch_variance',
        '_roll',
        '_roll_variance',
        '_position',
        '_position_covariance',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'base_frame_id': 'string',
        'baseline_length': 'double',
        'baseline_length_variance': 'double',
        'heading': 'double',
        'heading_variance': 'double',
        'pitch': 'double',
        'pitch_variance': 'double',
        'roll': 'double',
        'roll_variance': 'double',
        'position': 'geometry_msgs/Vector3',
        'position_covariance': 'double[9]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.base_frame_id = kwargs.get('base_frame_id', str())
        self.baseline_length = kwargs.get('baseline_length', float())
        self.baseline_length_variance = kwargs.get('baseline_length_variance', float())
        self.heading = kwargs.get('heading', float())
        self.heading_variance = kwargs.get('heading_variance', float())
        self.pitch = kwargs.get('pitch', float())
        self.pitch_variance = kwargs.get('pitch_variance', float())
        self.roll = kwargs.get('roll', float())
        self.roll_variance = kwargs.get('roll_variance', float())
        from geometry_msgs.msg import Vector3
        self.position = kwargs.get('position', Vector3())
        if 'position_covariance' not in kwargs:
            self.position_covariance = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.position_covariance = numpy.array(kwargs.get('position_covariance'), dtype=numpy.float64)
            assert self.position_covariance.shape == (9, )

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
        if self.base_frame_id != other.base_frame_id:
            return False
        if self.baseline_length != other.baseline_length:
            return False
        if self.baseline_length_variance != other.baseline_length_variance:
            return False
        if self.heading != other.heading:
            return False
        if self.heading_variance != other.heading_variance:
            return False
        if self.pitch != other.pitch:
            return False
        if self.pitch_variance != other.pitch_variance:
            return False
        if self.roll != other.roll:
            return False
        if self.roll_variance != other.roll_variance:
            return False
        if self.position != other.position:
            return False
        if any(self.position_covariance != other.position_covariance):
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
    def base_frame_id(self):
        """Message field 'base_frame_id'."""
        return self._base_frame_id

    @base_frame_id.setter
    def base_frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'base_frame_id' field must be of type 'str'"
        self._base_frame_id = value

    @builtins.property
    def baseline_length(self):
        """Message field 'baseline_length'."""
        return self._baseline_length

    @baseline_length.setter
    def baseline_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baseline_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'baseline_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._baseline_length = value

    @builtins.property
    def baseline_length_variance(self):
        """Message field 'baseline_length_variance'."""
        return self._baseline_length_variance

    @baseline_length_variance.setter
    def baseline_length_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baseline_length_variance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'baseline_length_variance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._baseline_length_variance = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading = value

    @builtins.property
    def heading_variance(self):
        """Message field 'heading_variance'."""
        return self._heading_variance

    @heading_variance.setter
    def heading_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_variance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_variance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_variance = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def pitch_variance(self):
        """Message field 'pitch_variance'."""
        return self._pitch_variance

    @pitch_variance.setter
    def pitch_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_variance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch_variance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch_variance = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def roll_variance(self):
        """Message field 'roll_variance'."""
        return self._roll_variance

    @roll_variance.setter
    def roll_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_variance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll_variance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll_variance = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position' field must be a sub message of type 'Vector3'"
        self._position = value

    @builtins.property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'position_covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'position_covariance' numpy.ndarray() must have a size of 9"
            self._position_covariance = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position_covariance' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position_covariance = numpy.array(value, dtype=numpy.float64)
