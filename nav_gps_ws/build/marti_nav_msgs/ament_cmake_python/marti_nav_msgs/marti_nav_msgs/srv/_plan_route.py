# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_nav_msgs:srv/PlanRoute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanRoute_Request(type):
    """Metaclass of message 'PlanRoute_Request'."""

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
                'marti_nav_msgs.srv.PlanRoute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_route__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_route__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_route__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_route__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_route__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

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


class PlanRoute_Request(metaclass=Metaclass_PlanRoute_Request):
    """Message class 'PlanRoute_Request'."""

    __slots__ = [
        '_header',
        '_waypoints',
        '_plan_from_vehicle',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'waypoints': 'sequence<geometry_msgs/Pose>',
        'plan_from_vehicle': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.waypoints = kwargs.get('waypoints', [])
        self.plan_from_vehicle = kwargs.get('plan_from_vehicle', bool())

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
        if self.waypoints != other.waypoints:
            return False
        if self.plan_from_vehicle != other.plan_from_vehicle:
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
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'Pose'"
        self._waypoints = value

    @builtins.property
    def plan_from_vehicle(self):
        """Message field 'plan_from_vehicle'."""
        return self._plan_from_vehicle

    @plan_from_vehicle.setter
    def plan_from_vehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plan_from_vehicle' field must be of type 'bool'"
        self._plan_from_vehicle = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_PlanRoute_Response(type):
    """Metaclass of message 'PlanRoute_Response'."""

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
                'marti_nav_msgs.srv.PlanRoute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_route__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_route__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_route__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_route__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_route__response

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


class PlanRoute_Response(metaclass=Metaclass_PlanRoute_Response):
    """Message class 'PlanRoute_Response'."""

    __slots__ = [
        '_route',
        '_success',
        '_message',
        '_cost',
    ]

    _fields_and_field_types = {
        'route': 'marti_nav_msgs/Route',
        'success': 'boolean',
        'message': 'string',
        'cost': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['marti_nav_msgs', 'msg'], 'Route'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from marti_nav_msgs.msg import Route
        self.route = kwargs.get('route', Route())
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.cost = kwargs.get('cost', float())

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
        if self.route != other.route:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.cost != other.cost:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def route(self):
        """Message field 'route'."""
        return self._route

    @route.setter
    def route(self, value):
        if __debug__:
            from marti_nav_msgs.msg import Route
            assert \
                isinstance(value, Route), \
                "The 'route' field must be a sub message of type 'Route'"
        self._route = value

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

    @builtins.property
    def cost(self):
        """Message field 'cost'."""
        return self._cost

    @cost.setter
    def cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cost' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cost' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cost = value


class Metaclass_PlanRoute(type):
    """Metaclass of service 'PlanRoute'."""

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
                'marti_nav_msgs.srv.PlanRoute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plan_route

            from marti_nav_msgs.srv import _plan_route
            if _plan_route.Metaclass_PlanRoute_Request._TYPE_SUPPORT is None:
                _plan_route.Metaclass_PlanRoute_Request.__import_type_support__()
            if _plan_route.Metaclass_PlanRoute_Response._TYPE_SUPPORT is None:
                _plan_route.Metaclass_PlanRoute_Response.__import_type_support__()


class PlanRoute(metaclass=Metaclass_PlanRoute):
    from marti_nav_msgs.srv._plan_route import PlanRoute_Request as Request
    from marti_nav_msgs.srv._plan_route import PlanRoute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
