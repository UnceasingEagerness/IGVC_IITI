# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_nav_msgs:srv/UpdateRouteMetadata.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UpdateRouteMetadata_Request(type):
    """Metaclass of message 'UpdateRouteMetadata_Request'."""

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
                'marti_nav_msgs.srv.UpdateRouteMetadata_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_route_metadata__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_route_metadata__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_route_metadata__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_route_metadata__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_route_metadata__request

            from marti_nav_msgs.msg import RoutePoint
            if RoutePoint.__class__._TYPE_SUPPORT is None:
                RoutePoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpdateRouteMetadata_Request(metaclass=Metaclass_UpdateRouteMetadata_Request):
    """Message class 'UpdateRouteMetadata_Request'."""

    __slots__ = [
        '_route_guid',
        '_metadata_points',
    ]

    _fields_and_field_types = {
        'route_guid': 'string',
        'metadata_points': 'sequence<marti_nav_msgs/RoutePoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['marti_nav_msgs', 'msg'], 'RoutePoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.route_guid = kwargs.get('route_guid', str())
        self.metadata_points = kwargs.get('metadata_points', [])

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
        if self.route_guid != other.route_guid:
            return False
        if self.metadata_points != other.metadata_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def route_guid(self):
        """Message field 'route_guid'."""
        return self._route_guid

    @route_guid.setter
    def route_guid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'route_guid' field must be of type 'str'"
        self._route_guid = value

    @builtins.property
    def metadata_points(self):
        """Message field 'metadata_points'."""
        return self._metadata_points

    @metadata_points.setter
    def metadata_points(self, value):
        if __debug__:
            from marti_nav_msgs.msg import RoutePoint
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
                 all(isinstance(v, RoutePoint) for v in value) and
                 True), \
                "The 'metadata_points' field must be a set or sequence and each value of type 'RoutePoint'"
        self._metadata_points = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UpdateRouteMetadata_Response(type):
    """Metaclass of message 'UpdateRouteMetadata_Response'."""

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
                'marti_nav_msgs.srv.UpdateRouteMetadata_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_route_metadata__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_route_metadata__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_route_metadata__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_route_metadata__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_route_metadata__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpdateRouteMetadata_Response(metaclass=Metaclass_UpdateRouteMetadata_Response):
    """Message class 'UpdateRouteMetadata_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_UpdateRouteMetadata(type):
    """Metaclass of service 'UpdateRouteMetadata'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('marti_nav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_nav_msgs.srv.UpdateRouteMetadata')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__update_route_metadata

            from marti_nav_msgs.srv import _update_route_metadata
            if _update_route_metadata.Metaclass_UpdateRouteMetadata_Request._TYPE_SUPPORT is None:
                _update_route_metadata.Metaclass_UpdateRouteMetadata_Request.__import_type_support__()
            if _update_route_metadata.Metaclass_UpdateRouteMetadata_Response._TYPE_SUPPORT is None:
                _update_route_metadata.Metaclass_UpdateRouteMetadata_Response.__import_type_support__()


class UpdateRouteMetadata(metaclass=Metaclass_UpdateRouteMetadata):
    from marti_nav_msgs.srv._update_route_metadata import UpdateRouteMetadata_Request as Request
    from marti_nav_msgs.srv._update_route_metadata import UpdateRouteMetadata_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
