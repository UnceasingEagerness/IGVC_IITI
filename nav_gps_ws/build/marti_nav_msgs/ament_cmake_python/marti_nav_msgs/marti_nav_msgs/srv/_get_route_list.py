# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_nav_msgs:srv/GetRouteList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetRouteList_Request(type):
    """Metaclass of message 'GetRouteList_Request'."""

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
                'marti_nav_msgs.srv.GetRouteList_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_route_list__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_route_list__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_route_list__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_route_list__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_route_list__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRouteList_Request(metaclass=Metaclass_GetRouteList_Request):
    """Message class 'GetRouteList_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRouteList_Response(type):
    """Metaclass of message 'GetRouteList_Response'."""

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
                'marti_nav_msgs.srv.GetRouteList_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_route_list__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_route_list__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_route_list__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_route_list__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_route_list__response

            from marti_nav_msgs.msg import Route
            if Route.__class__._TYPE_SUPPORT is None:
                Route.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRouteList_Response(metaclass=Metaclass_GetRouteList_Response):
    """Message class 'GetRouteList_Response'."""

    __slots__ = [
        '_routes',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'routes': 'sequence<marti_nav_msgs/Route>',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['marti_nav_msgs', 'msg'], 'Route')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.routes = kwargs.get('routes', [])
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
        if self.routes != other.routes:
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
    def routes(self):
        """Message field 'routes'."""
        return self._routes

    @routes.setter
    def routes(self, value):
        if __debug__:
            from marti_nav_msgs.msg import Route
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
                 all(isinstance(v, Route) for v in value) and
                 True), \
                "The 'routes' field must be a set or sequence and each value of type 'Route'"
        self._routes = value

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


class Metaclass_GetRouteList(type):
    """Metaclass of service 'GetRouteList'."""

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
                'marti_nav_msgs.srv.GetRouteList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_route_list

            from marti_nav_msgs.srv import _get_route_list
            if _get_route_list.Metaclass_GetRouteList_Request._TYPE_SUPPORT is None:
                _get_route_list.Metaclass_GetRouteList_Request.__import_type_support__()
            if _get_route_list.Metaclass_GetRouteList_Response._TYPE_SUPPORT is None:
                _get_route_list.Metaclass_GetRouteList_Response.__import_type_support__()


class GetRouteList(metaclass=Metaclass_GetRouteList):
    from marti_nav_msgs.srv._get_route_list import GetRouteList_Request as Request
    from marti_nav_msgs.srv._get_route_list import GetRouteList_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
