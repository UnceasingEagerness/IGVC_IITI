# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_status_msgs:msg/ChronyTrackingStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChronyTrackingStatus(type):
    """Metaclass of message 'ChronyTrackingStatus'."""

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
            module = import_type_support('marti_status_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_status_msgs.msg.ChronyTrackingStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__chrony_tracking_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__chrony_tracking_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__chrony_tracking_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__chrony_tracking_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__chrony_tracking_status

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


class ChronyTrackingStatus(metaclass=Metaclass_ChronyTrackingStatus):
    """Message class 'ChronyTrackingStatus'."""

    __slots__ = [
        '_header',
        '_reference',
        '_stratum',
        '_system_time_offset',
        '_last_offset',
        '_rms_offset',
        '_frequency_offset',
        '_residual_frequency',
        '_skew',
        '_root_delay',
        '_root_dispersion',
        '_update_interval',
        '_leap_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'reference': 'string',
        'stratum': 'int32',
        'system_time_offset': 'double',
        'last_offset': 'double',
        'rms_offset': 'double',
        'frequency_offset': 'float',
        'residual_frequency': 'float',
        'skew': 'float',
        'root_delay': 'double',
        'root_dispersion': 'double',
        'update_interval': 'float',
        'leap_status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.reference = kwargs.get('reference', str())
        self.stratum = kwargs.get('stratum', int())
        self.system_time_offset = kwargs.get('system_time_offset', float())
        self.last_offset = kwargs.get('last_offset', float())
        self.rms_offset = kwargs.get('rms_offset', float())
        self.frequency_offset = kwargs.get('frequency_offset', float())
        self.residual_frequency = kwargs.get('residual_frequency', float())
        self.skew = kwargs.get('skew', float())
        self.root_delay = kwargs.get('root_delay', float())
        self.root_dispersion = kwargs.get('root_dispersion', float())
        self.update_interval = kwargs.get('update_interval', float())
        self.leap_status = kwargs.get('leap_status', str())

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
        if self.reference != other.reference:
            return False
        if self.stratum != other.stratum:
            return False
        if self.system_time_offset != other.system_time_offset:
            return False
        if self.last_offset != other.last_offset:
            return False
        if self.rms_offset != other.rms_offset:
            return False
        if self.frequency_offset != other.frequency_offset:
            return False
        if self.residual_frequency != other.residual_frequency:
            return False
        if self.skew != other.skew:
            return False
        if self.root_delay != other.root_delay:
            return False
        if self.root_dispersion != other.root_dispersion:
            return False
        if self.update_interval != other.update_interval:
            return False
        if self.leap_status != other.leap_status:
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
    def reference(self):
        """Message field 'reference'."""
        return self._reference

    @reference.setter
    def reference(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reference' field must be of type 'str'"
        self._reference = value

    @builtins.property
    def stratum(self):
        """Message field 'stratum'."""
        return self._stratum

    @stratum.setter
    def stratum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stratum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'stratum' field must be an integer in [-2147483648, 2147483647]"
        self._stratum = value

    @builtins.property
    def system_time_offset(self):
        """Message field 'system_time_offset'."""
        return self._system_time_offset

    @system_time_offset.setter
    def system_time_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'system_time_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'system_time_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._system_time_offset = value

    @builtins.property
    def last_offset(self):
        """Message field 'last_offset'."""
        return self._last_offset

    @last_offset.setter
    def last_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_offset = value

    @builtins.property
    def rms_offset(self):
        """Message field 'rms_offset'."""
        return self._rms_offset

    @rms_offset.setter
    def rms_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rms_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rms_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rms_offset = value

    @builtins.property
    def frequency_offset(self):
        """Message field 'frequency_offset'."""
        return self._frequency_offset

    @frequency_offset.setter
    def frequency_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'frequency_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'frequency_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._frequency_offset = value

    @builtins.property
    def residual_frequency(self):
        """Message field 'residual_frequency'."""
        return self._residual_frequency

    @residual_frequency.setter
    def residual_frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'residual_frequency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'residual_frequency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._residual_frequency = value

    @builtins.property
    def skew(self):
        """Message field 'skew'."""
        return self._skew

    @skew.setter
    def skew(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'skew' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'skew' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._skew = value

    @builtins.property
    def root_delay(self):
        """Message field 'root_delay'."""
        return self._root_delay

    @root_delay.setter
    def root_delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'root_delay' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'root_delay' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._root_delay = value

    @builtins.property
    def root_dispersion(self):
        """Message field 'root_dispersion'."""
        return self._root_dispersion

    @root_dispersion.setter
    def root_dispersion(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'root_dispersion' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'root_dispersion' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._root_dispersion = value

    @builtins.property
    def update_interval(self):
        """Message field 'update_interval'."""
        return self._update_interval

    @update_interval.setter
    def update_interval(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'update_interval' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'update_interval' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._update_interval = value

    @builtins.property
    def leap_status(self):
        """Message field 'leap_status'."""
        return self._leap_status

    @leap_status.setter
    def leap_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'leap_status' field must be of type 'str'"
        self._leap_status = value
