# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_nav_msgs:msg/GridMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GridMap(type):
    """Metaclass of message 'GridMap'."""

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
                'marti_nav_msgs.msg.GridMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__grid_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__grid_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__grid_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__grid_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__grid_map

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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
        }


class GridMap(metaclass=Metaclass_GridMap):
    """Message class 'GridMap'."""

    __slots__ = [
        '_header',
        '_top_left',
        '_top_right',
        '_bottom_right',
        '_bottom_left',
        '_map_names',
        '_map_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'top_left': 'geometry_msgs/Point',
        'top_right': 'geometry_msgs/Point',
        'bottom_right': 'geometry_msgs/Point',
        'bottom_left': 'geometry_msgs/Point',
        'map_names': 'sequence<string>',
        'map_data': 'sequence<sensor_msgs/Image>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Point
        self.top_left = kwargs.get('top_left', Point())
        from geometry_msgs.msg import Point
        self.top_right = kwargs.get('top_right', Point())
        from geometry_msgs.msg import Point
        self.bottom_right = kwargs.get('bottom_right', Point())
        from geometry_msgs.msg import Point
        self.bottom_left = kwargs.get('bottom_left', Point())
        self.map_names = kwargs.get('map_names', [])
        self.map_data = kwargs.get('map_data', [])

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
        if self.top_left != other.top_left:
            return False
        if self.top_right != other.top_right:
            return False
        if self.bottom_right != other.bottom_right:
            return False
        if self.bottom_left != other.bottom_left:
            return False
        if self.map_names != other.map_names:
            return False
        if self.map_data != other.map_data:
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
    def top_left(self):
        """Message field 'top_left'."""
        return self._top_left

    @top_left.setter
    def top_left(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'top_left' field must be a sub message of type 'Point'"
        self._top_left = value

    @builtins.property
    def top_right(self):
        """Message field 'top_right'."""
        return self._top_right

    @top_right.setter
    def top_right(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'top_right' field must be a sub message of type 'Point'"
        self._top_right = value

    @builtins.property
    def bottom_right(self):
        """Message field 'bottom_right'."""
        return self._bottom_right

    @bottom_right.setter
    def bottom_right(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'bottom_right' field must be a sub message of type 'Point'"
        self._bottom_right = value

    @builtins.property
    def bottom_left(self):
        """Message field 'bottom_left'."""
        return self._bottom_left

    @bottom_left.setter
    def bottom_left(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'bottom_left' field must be a sub message of type 'Point'"
        self._bottom_left = value

    @builtins.property
    def map_names(self):
        """Message field 'map_names'."""
        return self._map_names

    @map_names.setter
    def map_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'map_names' field must be a set or sequence and each value of type 'str'"
        self._map_names = value

    @builtins.property
    def map_data(self):
        """Message field 'map_data'."""
        return self._map_data

    @map_data.setter
    def map_data(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
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
                 all(isinstance(v, Image) for v in value) and
                 True), \
                "The 'map_data' field must be a set or sequence and each value of type 'Image'"
        self._map_data = value
