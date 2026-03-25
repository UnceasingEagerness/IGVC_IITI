# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_visualization_msgs:msg/TexturedMarker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TexturedMarker(type):
    """Metaclass of message 'TexturedMarker'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ADD': 0,
        'MODIFY': 0,
        'DELETE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('marti_visualization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_visualization_msgs.msg.TexturedMarker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__textured_marker
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__textured_marker
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__textured_marker
            cls._TYPE_SUPPORT = module.type_support_msg__msg__textured_marker
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__textured_marker

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ADD': cls.__constants['ADD'],
            'MODIFY': cls.__constants['MODIFY'],
            'DELETE': cls.__constants['DELETE'],
        }

    @property
    def ADD(self):
        """Message constant 'ADD'."""
        return Metaclass_TexturedMarker.__constants['ADD']

    @property
    def MODIFY(self):
        """Message constant 'MODIFY'."""
        return Metaclass_TexturedMarker.__constants['MODIFY']

    @property
    def DELETE(self):
        """Message constant 'DELETE'."""
        return Metaclass_TexturedMarker.__constants['DELETE']


class TexturedMarker(metaclass=Metaclass_TexturedMarker):
    """
    Message class 'TexturedMarker'.

    Constants:
      ADD
      MODIFY
      DELETE
    """

    __slots__ = [
        '_header',
        '_ns',
        '_id',
        '_action',
        '_lifetime',
        '_image',
        '_pose',
        '_resolution',
        '_alpha',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ns': 'string',
        'id': 'int32',
        'action': 'int32',
        'lifetime': 'builtin_interfaces/Duration',
        'image': 'sensor_msgs/Image',
        'pose': 'geometry_msgs/Pose',
        'resolution': 'double',
        'alpha': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ns = kwargs.get('ns', str())
        self.id = kwargs.get('id', int())
        self.action = kwargs.get('action', int())
        from builtin_interfaces.msg import Duration
        self.lifetime = kwargs.get('lifetime', Duration())
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.resolution = kwargs.get('resolution', float())
        self.alpha = kwargs.get('alpha', float())

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
        if self.ns != other.ns:
            return False
        if self.id != other.id:
            return False
        if self.action != other.action:
            return False
        if self.lifetime != other.lifetime:
            return False
        if self.image != other.image:
            return False
        if self.pose != other.pose:
            return False
        if self.resolution != other.resolution:
            return False
        if self.alpha != other.alpha:
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
    def ns(self):
        """Message field 'ns'."""
        return self._ns

    @ns.setter
    def ns(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ns' field must be of type 'str'"
        self._ns = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'action' field must be an integer in [-2147483648, 2147483647]"
        self._action = value

    @builtins.property
    def lifetime(self):
        """Message field 'lifetime'."""
        return self._lifetime

    @lifetime.setter
    def lifetime(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'lifetime' field must be a sub message of type 'Duration'"
        self._lifetime = value

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._resolution = value

    @builtins.property
    def alpha(self):
        """Message field 'alpha'."""
        return self._alpha

    @alpha.setter
    def alpha(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha = value
