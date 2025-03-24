# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_platform_msgs:msg/Fans.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'fans'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Fans(type):
    """Metaclass of message 'Fans'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'R100_EQUIPMENT_BAY_INTAKE': 0,
        'R100_EQUIPMENT_BAY_EXHAUST': 1,
        'R100_CHARGER_BAY_INTAKE': 2,
        'R100_CHARGER_BAY_EXHAUST': 3,
        'R100_USER_BAY_INTAKE': 4,
        'R100_USER_BAY_EXHAUST': 5,
        'FAN_OFF': 0,
        'FAN_ON_HIGH': 1,
        'FAN_ON_LOW': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('clearpath_platform_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'clearpath_platform_msgs.msg.Fans')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fans
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fans
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fans
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fans
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fans

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'R100_EQUIPMENT_BAY_INTAKE': cls.__constants['R100_EQUIPMENT_BAY_INTAKE'],
            'R100_EQUIPMENT_BAY_EXHAUST': cls.__constants['R100_EQUIPMENT_BAY_EXHAUST'],
            'R100_CHARGER_BAY_INTAKE': cls.__constants['R100_CHARGER_BAY_INTAKE'],
            'R100_CHARGER_BAY_EXHAUST': cls.__constants['R100_CHARGER_BAY_EXHAUST'],
            'R100_USER_BAY_INTAKE': cls.__constants['R100_USER_BAY_INTAKE'],
            'R100_USER_BAY_EXHAUST': cls.__constants['R100_USER_BAY_EXHAUST'],
            'FAN_OFF': cls.__constants['FAN_OFF'],
            'FAN_ON_HIGH': cls.__constants['FAN_ON_HIGH'],
            'FAN_ON_LOW': cls.__constants['FAN_ON_LOW'],
        }

    @property
    def R100_EQUIPMENT_BAY_INTAKE(self):
        """Message constant 'R100_EQUIPMENT_BAY_INTAKE'."""
        return Metaclass_Fans.__constants['R100_EQUIPMENT_BAY_INTAKE']

    @property
    def R100_EQUIPMENT_BAY_EXHAUST(self):
        """Message constant 'R100_EQUIPMENT_BAY_EXHAUST'."""
        return Metaclass_Fans.__constants['R100_EQUIPMENT_BAY_EXHAUST']

    @property
    def R100_CHARGER_BAY_INTAKE(self):
        """Message constant 'R100_CHARGER_BAY_INTAKE'."""
        return Metaclass_Fans.__constants['R100_CHARGER_BAY_INTAKE']

    @property
    def R100_CHARGER_BAY_EXHAUST(self):
        """Message constant 'R100_CHARGER_BAY_EXHAUST'."""
        return Metaclass_Fans.__constants['R100_CHARGER_BAY_EXHAUST']

    @property
    def R100_USER_BAY_INTAKE(self):
        """Message constant 'R100_USER_BAY_INTAKE'."""
        return Metaclass_Fans.__constants['R100_USER_BAY_INTAKE']

    @property
    def R100_USER_BAY_EXHAUST(self):
        """Message constant 'R100_USER_BAY_EXHAUST'."""
        return Metaclass_Fans.__constants['R100_USER_BAY_EXHAUST']

    @property
    def FAN_OFF(self):
        """Message constant 'FAN_OFF'."""
        return Metaclass_Fans.__constants['FAN_OFF']

    @property
    def FAN_ON_HIGH(self):
        """Message constant 'FAN_ON_HIGH'."""
        return Metaclass_Fans.__constants['FAN_ON_HIGH']

    @property
    def FAN_ON_LOW(self):
        """Message constant 'FAN_ON_LOW'."""
        return Metaclass_Fans.__constants['FAN_ON_LOW']


class Fans(metaclass=Metaclass_Fans):
    """
    Message class 'Fans'.

    Constants:
      R100_EQUIPMENT_BAY_INTAKE
      R100_EQUIPMENT_BAY_EXHAUST
      R100_CHARGER_BAY_INTAKE
      R100_CHARGER_BAY_EXHAUST
      R100_USER_BAY_INTAKE
      R100_USER_BAY_EXHAUST
      FAN_OFF
      FAN_ON_HIGH
      FAN_ON_LOW
    """

    __slots__ = [
        '_fans',
    ]

    _fields_and_field_types = {
        'fans': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fans = array.array('B', kwargs.get('fans', []))

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
        if self.fans != other.fans:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fans(self):
        """Message field 'fans'."""
        return self._fans

    @fans.setter
    def fans(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'fans' array.array() must have the type code of 'B'"
            self._fans = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'fans' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._fans = array.array('B', value)
