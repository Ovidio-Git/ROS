# generated from rosidl_generator_py/resource/_idl.py.em
# with input from own_interfaces:srv/RPMvel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RPMvel_Request(type):
    """Metaclass of message 'RPMvel_Request'."""

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
            module = import_type_support('own_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'own_interfaces.srv.RPMvel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rp_mvel__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rp_mvel__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rp_mvel__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rp_mvel__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rp_mvel__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RPMvel_Request(metaclass=Metaclass_RPMvel_Request):
    """Message class 'RPMvel_Request'."""

    __slots__ = [
        '_rpm',
        '_r',
    ]

    _fields_and_field_types = {
        'rpm': 'int64',
        'r': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rpm = kwargs.get('rpm', int())
        self.r = kwargs.get('r', float())

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
        if self.rpm != other.rpm:
            return False
        if self.r != other.r:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rpm(self):
        """Message field 'rpm'."""
        return self._rpm

    @rpm.setter
    def rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rpm' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rpm' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rpm = value

    @property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r' field must be of type 'float'"
        self._r = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RPMvel_Response(type):
    """Metaclass of message 'RPMvel_Response'."""

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
            module = import_type_support('own_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'own_interfaces.srv.RPMvel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rp_mvel__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rp_mvel__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rp_mvel__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rp_mvel__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rp_mvel__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RPMvel_Response(metaclass=Metaclass_RPMvel_Response):
    """Message class 'RPMvel_Response'."""

    __slots__ = [
        '_vel',
    ]

    _fields_and_field_types = {
        'vel': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vel = kwargs.get('vel', float())

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
        if self.vel != other.vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel' field must be of type 'float'"
        self._vel = value


class Metaclass_RPMvel(type):
    """Metaclass of service 'RPMvel'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('own_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'own_interfaces.srv.RPMvel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rp_mvel

            from own_interfaces.srv import _rp_mvel
            if _rp_mvel.Metaclass_RPMvel_Request._TYPE_SUPPORT is None:
                _rp_mvel.Metaclass_RPMvel_Request.__import_type_support__()
            if _rp_mvel.Metaclass_RPMvel_Response._TYPE_SUPPORT is None:
                _rp_mvel.Metaclass_RPMvel_Response.__import_type_support__()


class RPMvel(metaclass=Metaclass_RPMvel):
    from own_interfaces.srv._rp_mvel import RPMvel_Request as Request
    from own_interfaces.srv._rp_mvel import RPMvel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')