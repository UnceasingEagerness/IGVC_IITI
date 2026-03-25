# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_perception_msgs:msg/PedestrianImageID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PedestrianImageID(type):
    """Metaclass of message 'PedestrianImageID'."""

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
            module = import_type_support('marti_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_perception_msgs.msg.PedestrianImageID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pedestrian_image_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pedestrian_image_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pedestrian_image_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pedestrian_image_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pedestrian_image_id

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


class PedestrianImageID(metaclass=Metaclass_PedestrianImageID):
    """Message class 'PedestrianImageID'."""

    __slots__ = [
        '_header',
        '_pixel_x',
        '_pixel_y',
        '_image_width',
        '_image_height',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pixel_x': 'int32',
        'pixel_y': 'int32',
        'image_width': 'int32',
        'image_height': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pixel_x = kwargs.get('pixel_x', int())
        self.pixel_y = kwargs.get('pixel_y', int())
        self.image_width = kwargs.get('image_width', int())
        self.image_height = kwargs.get('image_height', int())

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
        if self.pixel_x != other.pixel_x:
            return False
        if self.pixel_y != other.pixel_y:
            return False
        if self.image_width != other.image_width:
            return False
        if self.image_height != other.image_height:
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
    def pixel_x(self):
        """Message field 'pixel_x'."""
        return self._pixel_x

    @pixel_x.setter
    def pixel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pixel_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pixel_x' field must be an integer in [-2147483648, 2147483647]"
        self._pixel_x = value

    @builtins.property
    def pixel_y(self):
        """Message field 'pixel_y'."""
        return self._pixel_y

    @pixel_y.setter
    def pixel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pixel_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pixel_y' field must be an integer in [-2147483648, 2147483647]"
        self._pixel_y = value

    @builtins.property
    def image_width(self):
        """Message field 'image_width'."""
        return self._image_width

    @image_width.setter
    def image_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'image_width' field must be an integer in [-2147483648, 2147483647]"
        self._image_width = value

    @builtins.property
    def image_height(self):
        """Message field 'image_height'."""
        return self._image_height

    @image_height.setter
    def image_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'image_height' field must be an integer in [-2147483648, 2147483647]"
        self._image_height = value
