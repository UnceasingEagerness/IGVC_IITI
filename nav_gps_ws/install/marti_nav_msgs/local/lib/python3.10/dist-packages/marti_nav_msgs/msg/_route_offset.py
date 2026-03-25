# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_nav_msgs:msg/RouteOffset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RouteOffset(type):
    """Metaclass of message 'RouteOffset'."""

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
                'marti_nav_msgs.msg.RouteOffset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__route_offset
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__route_offset
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__route_offset
            cls._TYPE_SUPPORT = module.type_support_msg__msg__route_offset
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__route_offset

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from marti_nav_msgs.msg import RoutePosition
            if RoutePosition.__class__._TYPE_SUPPORT is None:
                RoutePosition.__class__.__import_type_support__()

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


class RouteOffset(metaclass=Metaclass_RouteOffset):
    """Message class 'RouteOffset'."""

    __slots__ = [
        '_header',
        '_relative_pose',
        '_route_position',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'relative_pose': 'geometry_msgs/Pose',
        'route_position': 'marti_nav_msgs/RoutePosition',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['marti_nav_msgs', 'msg'], 'RoutePosition'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.relative_pose = kwargs.get('relative_pose', Pose())
        from marti_nav_msgs.msg import RoutePosition
        self.route_position = kwargs.get('route_position', RoutePosition())

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
        if self.relative_pose != other.relative_pose:
            return False
        if self.route_position != other.route_position:
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
    def relative_pose(self):
        """Message field 'relative_pose'."""
        return self._relative_pose

    @relative_pose.setter
    def relative_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'relative_pose' field must be a sub message of type 'Pose'"
        self._relative_pose = value

    @builtins.property
    def route_position(self):
        """Message field 'route_position'."""
        return self._route_position

    @route_position.setter
    def route_position(self, value):
        if __debug__:
            from marti_nav_msgs.msg import RoutePosition
            assert \
                isinstance(value, RoutePosition), \
                "The 'route_position' field must be a sub message of type 'RoutePosition'"
        self._route_position = value
