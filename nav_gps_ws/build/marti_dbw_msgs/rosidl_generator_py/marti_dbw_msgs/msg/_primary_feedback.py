# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_dbw_msgs:msg/PrimaryFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PrimaryFeedback(type):
    """Metaclass of message 'PrimaryFeedback'."""

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
            module = import_type_support('marti_dbw_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_dbw_msgs.msg.PrimaryFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__primary_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__primary_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__primary_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__primary_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__primary_feedback

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


class PrimaryFeedback(metaclass=Metaclass_PrimaryFeedback):
    """Message class 'PrimaryFeedback'."""

    __slots__ = [
        '_header',
        '_present',
        '_robotic_mode',
        '_steering_command',
        '_steering_measure',
        '_throttle_command',
        '_throttle_measure',
        '_brake_command',
        '_brake_measure',
        '_estop_command',
        '_estop_measure',
        '_error_steering',
        '_error_throttle',
        '_error_brake',
        '_error_other',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'present': 'boolean',
        'robotic_mode': 'boolean',
        'steering_command': 'float',
        'steering_measure': 'float',
        'throttle_command': 'float',
        'throttle_measure': 'float',
        'brake_command': 'float',
        'brake_measure': 'float',
        'estop_command': 'boolean',
        'estop_measure': 'boolean',
        'error_steering': 'boolean',
        'error_throttle': 'boolean',
        'error_brake': 'boolean',
        'error_other': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.present = kwargs.get('present', bool())
        self.robotic_mode = kwargs.get('robotic_mode', bool())
        self.steering_command = kwargs.get('steering_command', float())
        self.steering_measure = kwargs.get('steering_measure', float())
        self.throttle_command = kwargs.get('throttle_command', float())
        self.throttle_measure = kwargs.get('throttle_measure', float())
        self.brake_command = kwargs.get('brake_command', float())
        self.brake_measure = kwargs.get('brake_measure', float())
        self.estop_command = kwargs.get('estop_command', bool())
        self.estop_measure = kwargs.get('estop_measure', bool())
        self.error_steering = kwargs.get('error_steering', bool())
        self.error_throttle = kwargs.get('error_throttle', bool())
        self.error_brake = kwargs.get('error_brake', bool())
        self.error_other = kwargs.get('error_other', bool())

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
        if self.present != other.present:
            return False
        if self.robotic_mode != other.robotic_mode:
            return False
        if self.steering_command != other.steering_command:
            return False
        if self.steering_measure != other.steering_measure:
            return False
        if self.throttle_command != other.throttle_command:
            return False
        if self.throttle_measure != other.throttle_measure:
            return False
        if self.brake_command != other.brake_command:
            return False
        if self.brake_measure != other.brake_measure:
            return False
        if self.estop_command != other.estop_command:
            return False
        if self.estop_measure != other.estop_measure:
            return False
        if self.error_steering != other.error_steering:
            return False
        if self.error_throttle != other.error_throttle:
            return False
        if self.error_brake != other.error_brake:
            return False
        if self.error_other != other.error_other:
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
    def present(self):
        """Message field 'present'."""
        return self._present

    @present.setter
    def present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'present' field must be of type 'bool'"
        self._present = value

    @builtins.property
    def robotic_mode(self):
        """Message field 'robotic_mode'."""
        return self._robotic_mode

    @robotic_mode.setter
    def robotic_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robotic_mode' field must be of type 'bool'"
        self._robotic_mode = value

    @builtins.property
    def steering_command(self):
        """Message field 'steering_command'."""
        return self._steering_command

    @steering_command.setter
    def steering_command(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_command' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_command' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_command = value

    @builtins.property
    def steering_measure(self):
        """Message field 'steering_measure'."""
        return self._steering_measure

    @steering_measure.setter
    def steering_measure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_measure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_measure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_measure = value

    @builtins.property
    def throttle_command(self):
        """Message field 'throttle_command'."""
        return self._throttle_command

    @throttle_command.setter
    def throttle_command(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_command' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_command' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_command = value

    @builtins.property
    def throttle_measure(self):
        """Message field 'throttle_measure'."""
        return self._throttle_measure

    @throttle_measure.setter
    def throttle_measure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_measure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_measure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_measure = value

    @builtins.property
    def brake_command(self):
        """Message field 'brake_command'."""
        return self._brake_command

    @brake_command.setter
    def brake_command(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_command' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_command' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_command = value

    @builtins.property
    def brake_measure(self):
        """Message field 'brake_measure'."""
        return self._brake_measure

    @brake_measure.setter
    def brake_measure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_measure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_measure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_measure = value

    @builtins.property
    def estop_command(self):
        """Message field 'estop_command'."""
        return self._estop_command

    @estop_command.setter
    def estop_command(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'estop_command' field must be of type 'bool'"
        self._estop_command = value

    @builtins.property
    def estop_measure(self):
        """Message field 'estop_measure'."""
        return self._estop_measure

    @estop_measure.setter
    def estop_measure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'estop_measure' field must be of type 'bool'"
        self._estop_measure = value

    @builtins.property
    def error_steering(self):
        """Message field 'error_steering'."""
        return self._error_steering

    @error_steering.setter
    def error_steering(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error_steering' field must be of type 'bool'"
        self._error_steering = value

    @builtins.property
    def error_throttle(self):
        """Message field 'error_throttle'."""
        return self._error_throttle

    @error_throttle.setter
    def error_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error_throttle' field must be of type 'bool'"
        self._error_throttle = value

    @builtins.property
    def error_brake(self):
        """Message field 'error_brake'."""
        return self._error_brake

    @error_brake.setter
    def error_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error_brake' field must be of type 'bool'"
        self._error_brake = value

    @builtins.property
    def error_other(self):
        """Message field 'error_other'."""
        return self._error_other

    @error_other.setter
    def error_other(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error_other' field must be of type 'bool'"
        self._error_other = value
