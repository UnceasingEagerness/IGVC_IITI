# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_nav_msgs:msg/TrackedObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'linear_acceleration_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedObject(type):
    """Metaclass of message 'TrackedObject'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE': 0,
        'PEDESTRIAN': 1,
        'UNKNOWN': 255,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('marti_nav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_nav_msgs.msg.TrackedObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_object

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

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
            'VEHICLE': cls.__constants['VEHICLE'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
        }

    @property
    def VEHICLE(self):
        """Message constant 'VEHICLE'."""
        return Metaclass_TrackedObject.__constants['VEHICLE']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_TrackedObject.__constants['PEDESTRIAN']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_TrackedObject.__constants['UNKNOWN']


class TrackedObject(metaclass=Metaclass_TrackedObject):
    """
    Message class 'TrackedObject'.

    Constants:
      VEHICLE
      PEDESTRIAN
      UNKNOWN
    """

    __slots__ = [
        '_header',
        '_id',
        '_pose',
        '_velocity',
        '_linear_acceleration',
        '_linear_acceleration_covariance',
        '_polygon',
        '_length',
        '_length_quality',
        '_width',
        '_width_quality',
        '_classification',
        '_classification_quality',
        '_existence_probability',
        '_age_duration',
        '_prediction_duration',
        '_active',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'uint16',
        'pose': 'geometry_msgs/PoseWithCovariance',
        'velocity': 'geometry_msgs/TwistWithCovariance',
        'linear_acceleration': 'geometry_msgs/Vector3',
        'linear_acceleration_covariance': 'double[9]',
        'polygon': 'sequence<geometry_msgs/Point>',
        'length': 'float',
        'length_quality': 'float',
        'width': 'float',
        'width_quality': 'float',
        'classification': 'uint8',
        'classification_quality': 'float',
        'existence_probability': 'float',
        'age_duration': 'builtin_interfaces/Duration',
        'prediction_duration': 'builtin_interfaces/Duration',
        'active': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import PoseWithCovariance
        self.pose = kwargs.get('pose', PoseWithCovariance())
        from geometry_msgs.msg import TwistWithCovariance
        self.velocity = kwargs.get('velocity', TwistWithCovariance())
        from geometry_msgs.msg import Vector3
        self.linear_acceleration = kwargs.get('linear_acceleration', Vector3())
        if 'linear_acceleration_covariance' not in kwargs:
            self.linear_acceleration_covariance = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.linear_acceleration_covariance = numpy.array(kwargs.get('linear_acceleration_covariance'), dtype=numpy.float64)
            assert self.linear_acceleration_covariance.shape == (9, )
        self.polygon = kwargs.get('polygon', [])
        self.length = kwargs.get('length', float())
        self.length_quality = kwargs.get('length_quality', float())
        self.width = kwargs.get('width', float())
        self.width_quality = kwargs.get('width_quality', float())
        self.classification = kwargs.get('classification', int())
        self.classification_quality = kwargs.get('classification_quality', float())
        self.existence_probability = kwargs.get('existence_probability', float())
        from builtin_interfaces.msg import Duration
        self.age_duration = kwargs.get('age_duration', Duration())
        from builtin_interfaces.msg import Duration
        self.prediction_duration = kwargs.get('prediction_duration', Duration())
        self.active = kwargs.get('active', bool())

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
        if self.id != other.id:
            return False
        if self.pose != other.pose:
            return False
        if self.velocity != other.velocity:
            return False
        if self.linear_acceleration != other.linear_acceleration:
            return False
        if any(self.linear_acceleration_covariance != other.linear_acceleration_covariance):
            return False
        if self.polygon != other.polygon:
            return False
        if self.length != other.length:
            return False
        if self.length_quality != other.length_quality:
            return False
        if self.width != other.width:
            return False
        if self.width_quality != other.width_quality:
            return False
        if self.classification != other.classification:
            return False
        if self.classification_quality != other.classification_quality:
            return False
        if self.existence_probability != other.existence_probability:
            return False
        if self.age_duration != other.age_duration:
            return False
        if self.prediction_duration != other.prediction_duration:
            return False
        if self.active != other.active:
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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'id' field must be an unsigned integer in [0, 65535]"
        self._id = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'pose' field must be a sub message of type 'PoseWithCovariance'"
        self._pose = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'velocity' field must be a sub message of type 'TwistWithCovariance'"
        self._velocity = value

    @builtins.property
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'linear_acceleration' field must be a sub message of type 'Vector3'"
        self._linear_acceleration = value

    @builtins.property
    def linear_acceleration_covariance(self):
        """Message field 'linear_acceleration_covariance'."""
        return self._linear_acceleration_covariance

    @linear_acceleration_covariance.setter
    def linear_acceleration_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'linear_acceleration_covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'linear_acceleration_covariance' numpy.ndarray() must have a size of 9"
            self._linear_acceleration_covariance = value
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
                "The 'linear_acceleration_covariance' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._linear_acceleration_covariance = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def polygon(self):
        """Message field 'polygon'."""
        return self._polygon

    @polygon.setter
    def polygon(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'polygon' field must be a set or sequence and each value of type 'Point'"
        self._polygon = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._length = value

    @builtins.property
    def length_quality(self):
        """Message field 'length_quality'."""
        return self._length_quality

    @length_quality.setter
    def length_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length_quality' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'length_quality' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._length_quality = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._width = value

    @builtins.property
    def width_quality(self):
        """Message field 'width_quality'."""
        return self._width_quality

    @width_quality.setter
    def width_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width_quality' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'width_quality' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._width_quality = value

    @builtins.property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'classification' field must be an unsigned integer in [0, 255]"
        self._classification = value

    @builtins.property
    def classification_quality(self):
        """Message field 'classification_quality'."""
        return self._classification_quality

    @classification_quality.setter
    def classification_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'classification_quality' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'classification_quality' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._classification_quality = value

    @builtins.property
    def existence_probability(self):
        """Message field 'existence_probability'."""
        return self._existence_probability

    @existence_probability.setter
    def existence_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'existence_probability' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'existence_probability' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._existence_probability = value

    @builtins.property
    def age_duration(self):
        """Message field 'age_duration'."""
        return self._age_duration

    @age_duration.setter
    def age_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'age_duration' field must be a sub message of type 'Duration'"
        self._age_duration = value

    @builtins.property
    def prediction_duration(self):
        """Message field 'prediction_duration'."""
        return self._prediction_duration

    @prediction_duration.setter
    def prediction_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'prediction_duration' field must be a sub message of type 'Duration'"
        self._prediction_duration = value

    @builtins.property
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value
