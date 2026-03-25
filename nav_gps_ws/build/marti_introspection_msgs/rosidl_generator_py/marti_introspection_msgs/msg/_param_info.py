# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marti_introspection_msgs:msg/ParamInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParamInfo(type):
    """Metaclass of message 'ParamInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_XMLRPC': 0,
        'TYPE_DOUBLE': 1,
        'TYPE_STRING': 2,
        'TYPE_INT': 3,
        'TYPE_FLOAT': 4,
        'TYPE_BOOL': 5,
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
                'marti_introspection_msgs.msg.ParamInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__param_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__param_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__param_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__param_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__param_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_XMLRPC': cls.__constants['TYPE_XMLRPC'],
            'TYPE_DOUBLE': cls.__constants['TYPE_DOUBLE'],
            'TYPE_STRING': cls.__constants['TYPE_STRING'],
            'TYPE_INT': cls.__constants['TYPE_INT'],
            'TYPE_FLOAT': cls.__constants['TYPE_FLOAT'],
            'TYPE_BOOL': cls.__constants['TYPE_BOOL'],
        }

    @property
    def TYPE_XMLRPC(self):
        """Message constant 'TYPE_XMLRPC'."""
        return Metaclass_ParamInfo.__constants['TYPE_XMLRPC']

    @property
    def TYPE_DOUBLE(self):
        """Message constant 'TYPE_DOUBLE'."""
        return Metaclass_ParamInfo.__constants['TYPE_DOUBLE']

    @property
    def TYPE_STRING(self):
        """Message constant 'TYPE_STRING'."""
        return Metaclass_ParamInfo.__constants['TYPE_STRING']

    @property
    def TYPE_INT(self):
        """Message constant 'TYPE_INT'."""
        return Metaclass_ParamInfo.__constants['TYPE_INT']

    @property
    def TYPE_FLOAT(self):
        """Message constant 'TYPE_FLOAT'."""
        return Metaclass_ParamInfo.__constants['TYPE_FLOAT']

    @property
    def TYPE_BOOL(self):
        """Message constant 'TYPE_BOOL'."""
        return Metaclass_ParamInfo.__constants['TYPE_BOOL']


class ParamInfo(metaclass=Metaclass_ParamInfo):
    """
    Message class 'ParamInfo'.

    Constants:
      TYPE_XMLRPC
      TYPE_DOUBLE
      TYPE_STRING
      TYPE_INT
      TYPE_FLOAT
      TYPE_BOOL
    """

    __slots__ = [
        '_name',
        '_resolved_name',
        '_description',
        '_group',
        '_type',
        '_dynamic',
        '_default_int',
        '_default_float',
        '_default_double',
        '_default_string',
        '_default_bool',
        '_max_value',
        '_min_value',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'resolved_name': 'string',
        'description': 'string',
        'group': 'string',
        'type': 'uint8',
        'dynamic': 'boolean',
        'default_int': 'int32',
        'default_float': 'float',
        'default_double': 'double',
        'default_string': 'string',
        'default_bool': 'boolean',
        'max_value': 'double',
        'min_value': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.resolved_name = kwargs.get('resolved_name', str())
        self.description = kwargs.get('description', str())
        self.group = kwargs.get('group', str())
        self.type = kwargs.get('type', int())
        self.dynamic = kwargs.get('dynamic', bool())
        self.default_int = kwargs.get('default_int', int())
        self.default_float = kwargs.get('default_float', float())
        self.default_double = kwargs.get('default_double', float())
        self.default_string = kwargs.get('default_string', str())
        self.default_bool = kwargs.get('default_bool', bool())
        self.max_value = kwargs.get('max_value', float())
        self.min_value = kwargs.get('min_value', float())

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
        if self.type != other.type:
            return False
        if self.dynamic != other.dynamic:
            return False
        if self.default_int != other.default_int:
            return False
        if self.default_float != other.default_float:
            return False
        if self.default_double != other.default_double:
            return False
        if self.default_string != other.default_string:
            return False
        if self.default_bool != other.default_bool:
            return False
        if self.max_value != other.max_value:
            return False
        if self.min_value != other.min_value:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def dynamic(self):
        """Message field 'dynamic'."""
        return self._dynamic

    @dynamic.setter
    def dynamic(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dynamic' field must be of type 'bool'"
        self._dynamic = value

    @builtins.property
    def default_int(self):
        """Message field 'default_int'."""
        return self._default_int

    @default_int.setter
    def default_int(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'default_int' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'default_int' field must be an integer in [-2147483648, 2147483647]"
        self._default_int = value

    @builtins.property
    def default_float(self):
        """Message field 'default_float'."""
        return self._default_float

    @default_float.setter
    def default_float(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'default_float' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'default_float' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._default_float = value

    @builtins.property
    def default_double(self):
        """Message field 'default_double'."""
        return self._default_double

    @default_double.setter
    def default_double(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'default_double' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'default_double' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._default_double = value

    @builtins.property
    def default_string(self):
        """Message field 'default_string'."""
        return self._default_string

    @default_string.setter
    def default_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'default_string' field must be of type 'str'"
        self._default_string = value

    @builtins.property
    def default_bool(self):
        """Message field 'default_bool'."""
        return self._default_bool

    @default_bool.setter
    def default_bool(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'default_bool' field must be of type 'bool'"
        self._default_bool = value

    @builtins.property
    def max_value(self):
        """Message field 'max_value'."""
        return self._max_value

    @max_value.setter
    def max_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_value = value

    @builtins.property
    def min_value(self):
        """Message field 'min_value'."""
        return self._min_value

    @min_value.setter
    def min_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_value = value
