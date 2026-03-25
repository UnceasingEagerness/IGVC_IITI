# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_introspection_msgs:msg/TopicInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TopicInfo(type):
    """Metaclass of message 'TopicInfo'."""

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
                'marti_introspection_msgs.msg.TopicInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__topic_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__topic_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__topic_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__topic_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__topic_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TopicInfo(metaclass=Metaclass_TopicInfo):
    """Message class 'TopicInfo'."""

    __slots__ = [
        '_name',
        '_resolved_name',
        '_description',
        '_group',
        '_message_type',
        '_advertised',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'resolved_name': 'string',
        'description': 'string',
        'group': 'string',
        'message_type': 'string',
        'advertised': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.resolved_name = kwargs.get('resolved_name', str())
        self.description = kwargs.get('description', str())
        self.group = kwargs.get('group', str())
        self.message_type = kwargs.get('message_type', str())
        self.advertised = kwargs.get('advertised', bool())

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
        if self.resolved_name != other.resolved_name:
            return False
        if self.description != other.description:
            return False
        if self.group != other.group:
            return False
        if self.message_type != other.message_type:
            return False
        if self.advertised != other.advertised:
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
    def resolved_name(self):
        """Message field 'resolved_name'."""
        return self._resolved_name

    @resolved_name.setter
    def resolved_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'resolved_name' field must be of type 'str'"
        self._resolved_name = value

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
    def group(self):
        """Message field 'group'."""
        return self._group

    @group.setter
    def group(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'group' field must be of type 'str'"
        self._group = value

    @builtins.property
    def message_type(self):
        """Message field 'message_type'."""
        return self._message_type

    @message_type.setter
    def message_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_type' field must be of type 'str'"
        self._message_type = value

    @builtins.property
    def advertised(self):
        """Message field 'advertised'."""
        return self._advertised

    @advertised.setter
    def advertised(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'advertised' field must be of type 'bool'"
        self._advertised = value
