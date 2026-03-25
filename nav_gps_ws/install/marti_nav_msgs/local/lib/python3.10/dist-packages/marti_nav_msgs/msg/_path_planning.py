# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_nav_msgs:msg/PathPlanning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathPlanning(type):
    """Metaclass of message 'PathPlanning'."""

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
            module = import_type_support('marti_nav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_nav_msgs.msg.PathPlanning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_planning
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_planning
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_planning
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_planning
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_planning

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


class PathPlanning(metaclass=Metaclass_PathPlanning):
    """Message class 'PathPlanning'."""

    __slots__ = [
        '_header',
        '_segment_type',
        '_length',
        '_start_speed',
        '_end_speed',
        '_startx',
        '_starty',
        '_endx',
        '_endy',
        '_theta0',
        '_a1',
        '_a2',
        '_k0',
        '_c1',
        '_c2',
        '_behavior',
        '_creep',
        '_acc',
        '_reverse',
        '_vehicle_track',
        '_transmitted',
        '_aux_transmitted',
        '_theta_end',
        '_k_end',
        '_seg_len',
        '_speed_limit',
        '_max_error',
        '_max_smooth',
        '_max_curv',
        '_possible_points',
        '_exit_segment',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'segment_type': 'int32',
        'length': 'float',
        'start_speed': 'float',
        'end_speed': 'float',
        'startx': 'float',
        'starty': 'float',
        'endx': 'float',
        'endy': 'float',
        'theta0': 'float',
        'a1': 'float',
        'a2': 'float',
        'k0': 'float',
        'c1': 'float',
        'c2': 'float',
        'behavior': 'int32',
        'creep': 'int32',
        'acc': 'int32',
        'reverse': 'int32',
        'vehicle_track': 'int32',
        'transmitted': 'boolean',
        'aux_transmitted': 'boolean',
        'theta_end': 'float',
        'k_end': 'float',
        'seg_len': 'int32',
        'speed_limit': 'float',
        'max_error': 'float',
        'max_smooth': 'float',
        'max_curv': 'float',
        'possible_points': 'int32',
        'exit_segment': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.segment_type = kwargs.get('segment_type', int())
        self.length = kwargs.get('length', float())
        self.start_speed = kwargs.get('start_speed', float())
        self.end_speed = kwargs.get('end_speed', float())
        self.startx = kwargs.get('startx', float())
        self.starty = kwargs.get('starty', float())
        self.endx = kwargs.get('endx', float())
        self.endy = kwargs.get('endy', float())
        self.theta0 = kwargs.get('theta0', float())
        self.a1 = kwargs.get('a1', float())
        self.a2 = kwargs.get('a2', float())
        self.k0 = kwargs.get('k0', float())
        self.c1 = kwargs.get('c1', float())
        self.c2 = kwargs.get('c2', float())
        self.behavior = kwargs.get('behavior', int())
        self.creep = kwargs.get('creep', int())
        self.acc = kwargs.get('acc', int())
        self.reverse = kwargs.get('reverse', int())
        self.vehicle_track = kwargs.get('vehicle_track', int())
        self.transmitted = kwargs.get('transmitted', bool())
        self.aux_transmitted = kwargs.get('aux_transmitted', bool())
        self.theta_end = kwargs.get('theta_end', float())
        self.k_end = kwargs.get('k_end', float())
        self.seg_len = kwargs.get('seg_len', int())
        self.speed_limit = kwargs.get('speed_limit', float())
        self.max_error = kwargs.get('max_error', float())
        self.max_smooth = kwargs.get('max_smooth', float())
        self.max_curv = kwargs.get('max_curv', float())
        self.possible_points = kwargs.get('possible_points', int())
        self.exit_segment = kwargs.get('exit_segment', bool())

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
        if self.segment_type != other.segment_type:
            return False
        if self.length != other.length:
            return False
        if self.start_speed != other.start_speed:
            return False
        if self.end_speed != other.end_speed:
            return False
        if self.startx != other.startx:
            return False
        if self.starty != other.starty:
            return False
        if self.endx != other.endx:
            return False
        if self.endy != other.endy:
            return False
        if self.theta0 != other.theta0:
            return False
        if self.a1 != other.a1:
            return False
        if self.a2 != other.a2:
            return False
        if self.k0 != other.k0:
            return False
        if self.c1 != other.c1:
            return False
        if self.c2 != other.c2:
            return False
        if self.behavior != other.behavior:
            return False
        if self.creep != other.creep:
            return False
        if self.acc != other.acc:
            return False
        if self.reverse != other.reverse:
            return False
        if self.vehicle_track != other.vehicle_track:
            return False
        if self.transmitted != other.transmitted:
            return False
        if self.aux_transmitted != other.aux_transmitted:
            return False
        if self.theta_end != other.theta_end:
            return False
        if self.k_end != other.k_end:
            return False
        if self.seg_len != other.seg_len:
            return False
        if self.speed_limit != other.speed_limit:
            return False
        if self.max_error != other.max_error:
            return False
        if self.max_smooth != other.max_smooth:
            return False
        if self.max_curv != other.max_curv:
            return False
        if self.possible_points != other.possible_points:
            return False
        if self.exit_segment != other.exit_segment:
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
    def segment_type(self):
        """Message field 'segment_type'."""
        return self._segment_type

    @segment_type.setter
    def segment_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'segment_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'segment_type' field must be an integer in [-2147483648, 2147483647]"
        self._segment_type = value

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
    def start_speed(self):
        """Message field 'start_speed'."""
        return self._start_speed

    @start_speed.setter
    def start_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'start_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._start_speed = value

    @builtins.property
    def end_speed(self):
        """Message field 'end_speed'."""
        return self._end_speed

    @end_speed.setter
    def end_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'end_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._end_speed = value

    @builtins.property
    def startx(self):
        """Message field 'startx'."""
        return self._startx

    @startx.setter
    def startx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'startx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'startx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._startx = value

    @builtins.property
    def starty(self):
        """Message field 'starty'."""
        return self._starty

    @starty.setter
    def starty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'starty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'starty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._starty = value

    @builtins.property
    def endx(self):
        """Message field 'endx'."""
        return self._endx

    @endx.setter
    def endx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'endx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'endx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._endx = value

    @builtins.property
    def endy(self):
        """Message field 'endy'."""
        return self._endy

    @endy.setter
    def endy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'endy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'endy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._endy = value

    @builtins.property
    def theta0(self):
        """Message field 'theta0'."""
        return self._theta0

    @theta0.setter
    def theta0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'theta0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._theta0 = value

    @builtins.property
    def a1(self):
        """Message field 'a1'."""
        return self._a1

    @a1.setter
    def a1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'a1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._a1 = value

    @builtins.property
    def a2(self):
        """Message field 'a2'."""
        return self._a2

    @a2.setter
    def a2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'a2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._a2 = value

    @builtins.property
    def k0(self):
        """Message field 'k0'."""
        return self._k0

    @k0.setter
    def k0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'k0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._k0 = value

    @builtins.property
    def c1(self):
        """Message field 'c1'."""
        return self._c1

    @c1.setter
    def c1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'c1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._c1 = value

    @builtins.property
    def c2(self):
        """Message field 'c2'."""
        return self._c2

    @c2.setter
    def c2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'c2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._c2 = value

    @builtins.property
    def behavior(self):
        """Message field 'behavior'."""
        return self._behavior

    @behavior.setter
    def behavior(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'behavior' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'behavior' field must be an integer in [-2147483648, 2147483647]"
        self._behavior = value

    @builtins.property
    def creep(self):
        """Message field 'creep'."""
        return self._creep

    @creep.setter
    def creep(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'creep' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'creep' field must be an integer in [-2147483648, 2147483647]"
        self._creep = value

    @builtins.property
    def acc(self):
        """Message field 'acc'."""
        return self._acc

    @acc.setter
    def acc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acc' field must be an integer in [-2147483648, 2147483647]"
        self._acc = value

    @builtins.property
    def reverse(self):
        """Message field 'reverse'."""
        return self._reverse

    @reverse.setter
    def reverse(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reverse' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'reverse' field must be an integer in [-2147483648, 2147483647]"
        self._reverse = value

    @builtins.property
    def vehicle_track(self):
        """Message field 'vehicle_track'."""
        return self._vehicle_track

    @vehicle_track.setter
    def vehicle_track(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_track' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vehicle_track' field must be an integer in [-2147483648, 2147483647]"
        self._vehicle_track = value

    @builtins.property
    def transmitted(self):
        """Message field 'transmitted'."""
        return self._transmitted

    @transmitted.setter
    def transmitted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'transmitted' field must be of type 'bool'"
        self._transmitted = value

    @builtins.property
    def aux_transmitted(self):
        """Message field 'aux_transmitted'."""
        return self._aux_transmitted

    @aux_transmitted.setter
    def aux_transmitted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aux_transmitted' field must be of type 'bool'"
        self._aux_transmitted = value

    @builtins.property
    def theta_end(self):
        """Message field 'theta_end'."""
        return self._theta_end

    @theta_end.setter
    def theta_end(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_end' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'theta_end' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._theta_end = value

    @builtins.property
    def k_end(self):
        """Message field 'k_end'."""
        return self._k_end

    @k_end.setter
    def k_end(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_end' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'k_end' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._k_end = value

    @builtins.property
    def seg_len(self):
        """Message field 'seg_len'."""
        return self._seg_len

    @seg_len.setter
    def seg_len(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_len' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seg_len' field must be an integer in [-2147483648, 2147483647]"
        self._seg_len = value

    @builtins.property
    def speed_limit(self):
        """Message field 'speed_limit'."""
        return self._speed_limit

    @speed_limit.setter
    def speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_limit = value

    @builtins.property
    def max_error(self):
        """Message field 'max_error'."""
        return self._max_error

    @max_error.setter
    def max_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_error = value

    @builtins.property
    def max_smooth(self):
        """Message field 'max_smooth'."""
        return self._max_smooth

    @max_smooth.setter
    def max_smooth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_smooth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_smooth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_smooth = value

    @builtins.property
    def max_curv(self):
        """Message field 'max_curv'."""
        return self._max_curv

    @max_curv.setter
    def max_curv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_curv' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_curv' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_curv = value

    @builtins.property
    def possible_points(self):
        """Message field 'possible_points'."""
        return self._possible_points

    @possible_points.setter
    def possible_points(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'possible_points' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'possible_points' field must be an integer in [-2147483648, 2147483647]"
        self._possible_points = value

    @builtins.property
    def exit_segment(self):
        """Message field 'exit_segment'."""
        return self._exit_segment

    @exit_segment.setter
    def exit_segment(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'exit_segment' field must be of type 'bool'"
        self._exit_segment = value
