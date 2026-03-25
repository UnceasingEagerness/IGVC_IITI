# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_introspection_msgs:msg/NodeInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeInfo(type):
    """Metaclass of message 'NodeInfo'."""

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
            module = import_type_support('marti_introspection_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marti_introspection_msgs.msg.NodeInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_info

            from marti_introspection_msgs.msg import ParamInfo
            if ParamInfo.__class__._TYPE_SUPPORT is None:
                ParamInfo.__class__.__import_type_support__()

            from marti_introspection_msgs.msg import ServiceInfo
            if ServiceInfo.__class__._TYPE_SUPPORT is None:
                ServiceInfo.__class__.__import_type_support__()

            from marti_introspection_msgs.msg import TopicInfo
            if TopicInfo.__class__._TYPE_SUPPORT is None:
                TopicInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeInfo(metaclass=Metaclass_NodeInfo):
    """Message class 'NodeInfo'."""

    __slots__ = [
        '_name',
        '_location',
        '_nodelet_manager',
        '_description',
        '_topics',
        '_parameters',
        '_services',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'location': 'string',
        'nodelet_manager': 'string',
        'description': 'string',
        'topics': 'sequence<marti_introspection_msgs/TopicInfo>',
        'parameters': 'sequence<marti_introspection_msgs/ParamInfo>',
        'services': 'sequence<marti_introspection_msgs/ServiceInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['marti_introspection_msgs', 'msg'], 'TopicInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['marti_introspection_msgs', 'msg'], 'ParamInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['marti_introspection_msgs', 'msg'], 'ServiceInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.location = kwargs.get('location', str())
        self.nodelet_manager = kwargs.get('nodelet_manager', str())
        self.description = kwargs.get('description', str())
        self.topics = kwargs.get('topics', [])
        self.parameters = kwargs.get('parameters', [])
        self.services = kwargs.get('services', [])

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
        if self.name != other.name:
            return False
        if self.location != other.location:
            return False
        if self.nodelet_manager != other.nodelet_manager:
            return False
        if self.description != other.description:
            return False
        if self.topics != other.topics:
            return False
        if self.parameters != other.parameters:
            return False
        if self.services != other.services:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'location' field must be of type 'str'"
        self._location = value

    @builtins.property
    def nodelet_manager(self):
        """Message field 'nodelet_manager'."""
        return self._nodelet_manager

    @nodelet_manager.setter
    def nodelet_manager(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'nodelet_manager' field must be of type 'str'"
        self._nodelet_manager = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @builtins.property
    def topics(self):
        """Message field 'topics'."""
        return self._topics

    @topics.setter
    def topics(self, value):
        if __debug__:
            from marti_introspection_msgs.msg import TopicInfo
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
                 all(isinstance(v, TopicInfo) for v in value) and
                 True), \
                "The 'topics' field must be a set or sequence and each value of type 'TopicInfo'"
        self._topics = value

    @builtins.property
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
        if __debug__:
            from marti_introspection_msgs.msg import ParamInfo
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
                 all(isinstance(v, ParamInfo) for v in value) and
                 True), \
                "The 'parameters' field must be a set or sequence and each value of type 'ParamInfo'"
        self._parameters = value

    @builtins.property
    def services(self):
        """Message field 'services'."""
        return self._services

    @services.setter
    def services(self, value):
        if __debug__:
            from marti_introspection_msgs.msg import ServiceInfo
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
                 all(isinstance(v, ServiceInfo) for v in value) and
                 True), \
                "The 'services' field must be a set or sequence and each value of type 'ServiceInfo'"
        self._services = value
