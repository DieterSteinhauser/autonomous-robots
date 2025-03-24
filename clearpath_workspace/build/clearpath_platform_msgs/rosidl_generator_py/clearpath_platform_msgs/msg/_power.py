# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_platform_msgs:msg/Power.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'measured_voltages'
# Member 'measured_currents'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Power(type):
    """Metaclass of message 'Power'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_APPLICABLE': -1,
        'J100_MEASURED_BATTERY': 0,
        'J100_MEASURED_5V': 1,
        'J100_MEASURED_12V': 2,
        'D100_MEASURED_BATTERY': 0,
        'D100_MEASURED_5V': 1,
        'D100_MEASURED_12V': 2,
        'D150_MEASURED_BATTERY': 0,
        'D150_MEASURED_5V': 1,
        'D150_MEASURED_12V': 2,
        'W200_MEASURED_BATTERY': 0,
        'W200_MEASURED_12V': 1,
        'W200_MEASURED_24V': 2,
        'W200_MEASURED_48V': 3,
        'R100_MEASURED_BATTERY': 0,
        'R100_MEASURED_5V': 1,
        'R100_MEASURED_12V': 2,
        'R100_MEASURED_INVERTER': 3,
        'R100_MEASURED_FRONT_AXLE': 4,
        'R100_MEASURED_REAR_AXLE': 5,
        'R100_MEASURED_LIGHT': 6,
        'A200_BATTERY_VOLTAGE': 0,
        'A200_LEFT_DRIVER_VOLTAGE': 1,
        'A200_RIGHT_DRIVER_VOLTAGE': 2,
        'A200_VOLTAGES_SIZE': 3,
        'J100_TOTAL_CURRENT': 0,
        'J100_COMPUTER_CURRENT': 1,
        'J100_DRIVE_CURRENT': 2,
        'J100_USER_CURRENT': 3,
        'D100_TOTAL_CURRENT': 0,
        'D100_COMPUTER_CURRENT': 1,
        'D150_TOTAL_CURRENT': 0,
        'D150_COMPUTER_CURRENT': 1,
        'W200_TOTAL_CURRENT': 0,
        'W200_COMPUTER_CURRENT': 1,
        'W200_12V_CURRENT': 2,
        'W200_24V_CURRENT': 3,
        'R100_TOTAL_CURRENT': 0,
        'A200_MCU_AND_USER_PORT_CURRENT': 0,
        'A200_LEFT_DRIVER_CURRENT': 1,
        'A200_RIGHT_DRIVER_CURRENT': 2,
        'A200_CURRENTS_SIZE': 3,
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
                'clearpath_platform_msgs.msg.Power')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_APPLICABLE': cls.__constants['NOT_APPLICABLE'],
            'J100_MEASURED_BATTERY': cls.__constants['J100_MEASURED_BATTERY'],
            'J100_MEASURED_5V': cls.__constants['J100_MEASURED_5V'],
            'J100_MEASURED_12V': cls.__constants['J100_MEASURED_12V'],
            'D100_MEASURED_BATTERY': cls.__constants['D100_MEASURED_BATTERY'],
            'D100_MEASURED_5V': cls.__constants['D100_MEASURED_5V'],
            'D100_MEASURED_12V': cls.__constants['D100_MEASURED_12V'],
            'D150_MEASURED_BATTERY': cls.__constants['D150_MEASURED_BATTERY'],
            'D150_MEASURED_5V': cls.__constants['D150_MEASURED_5V'],
            'D150_MEASURED_12V': cls.__constants['D150_MEASURED_12V'],
            'W200_MEASURED_BATTERY': cls.__constants['W200_MEASURED_BATTERY'],
            'W200_MEASURED_12V': cls.__constants['W200_MEASURED_12V'],
            'W200_MEASURED_24V': cls.__constants['W200_MEASURED_24V'],
            'W200_MEASURED_48V': cls.__constants['W200_MEASURED_48V'],
            'R100_MEASURED_BATTERY': cls.__constants['R100_MEASURED_BATTERY'],
            'R100_MEASURED_5V': cls.__constants['R100_MEASURED_5V'],
            'R100_MEASURED_12V': cls.__constants['R100_MEASURED_12V'],
            'R100_MEASURED_INVERTER': cls.__constants['R100_MEASURED_INVERTER'],
            'R100_MEASURED_FRONT_AXLE': cls.__constants['R100_MEASURED_FRONT_AXLE'],
            'R100_MEASURED_REAR_AXLE': cls.__constants['R100_MEASURED_REAR_AXLE'],
            'R100_MEASURED_LIGHT': cls.__constants['R100_MEASURED_LIGHT'],
            'A200_BATTERY_VOLTAGE': cls.__constants['A200_BATTERY_VOLTAGE'],
            'A200_LEFT_DRIVER_VOLTAGE': cls.__constants['A200_LEFT_DRIVER_VOLTAGE'],
            'A200_RIGHT_DRIVER_VOLTAGE': cls.__constants['A200_RIGHT_DRIVER_VOLTAGE'],
            'A200_VOLTAGES_SIZE': cls.__constants['A200_VOLTAGES_SIZE'],
            'J100_TOTAL_CURRENT': cls.__constants['J100_TOTAL_CURRENT'],
            'J100_COMPUTER_CURRENT': cls.__constants['J100_COMPUTER_CURRENT'],
            'J100_DRIVE_CURRENT': cls.__constants['J100_DRIVE_CURRENT'],
            'J100_USER_CURRENT': cls.__constants['J100_USER_CURRENT'],
            'D100_TOTAL_CURRENT': cls.__constants['D100_TOTAL_CURRENT'],
            'D100_COMPUTER_CURRENT': cls.__constants['D100_COMPUTER_CURRENT'],
            'D150_TOTAL_CURRENT': cls.__constants['D150_TOTAL_CURRENT'],
            'D150_COMPUTER_CURRENT': cls.__constants['D150_COMPUTER_CURRENT'],
            'W200_TOTAL_CURRENT': cls.__constants['W200_TOTAL_CURRENT'],
            'W200_COMPUTER_CURRENT': cls.__constants['W200_COMPUTER_CURRENT'],
            'W200_12V_CURRENT': cls.__constants['W200_12V_CURRENT'],
            'W200_24V_CURRENT': cls.__constants['W200_24V_CURRENT'],
            'R100_TOTAL_CURRENT': cls.__constants['R100_TOTAL_CURRENT'],
            'A200_MCU_AND_USER_PORT_CURRENT': cls.__constants['A200_MCU_AND_USER_PORT_CURRENT'],
            'A200_LEFT_DRIVER_CURRENT': cls.__constants['A200_LEFT_DRIVER_CURRENT'],
            'A200_RIGHT_DRIVER_CURRENT': cls.__constants['A200_RIGHT_DRIVER_CURRENT'],
            'A200_CURRENTS_SIZE': cls.__constants['A200_CURRENTS_SIZE'],
        }

    @property
    def NOT_APPLICABLE(self):
        """Message constant 'NOT_APPLICABLE'."""
        return Metaclass_Power.__constants['NOT_APPLICABLE']

    @property
    def J100_MEASURED_BATTERY(self):
        """Message constant 'J100_MEASURED_BATTERY'."""
        return Metaclass_Power.__constants['J100_MEASURED_BATTERY']

    @property
    def J100_MEASURED_5V(self):
        """Message constant 'J100_MEASURED_5V'."""
        return Metaclass_Power.__constants['J100_MEASURED_5V']

    @property
    def J100_MEASURED_12V(self):
        """Message constant 'J100_MEASURED_12V'."""
        return Metaclass_Power.__constants['J100_MEASURED_12V']

    @property
    def D100_MEASURED_BATTERY(self):
        """Message constant 'D100_MEASURED_BATTERY'."""
        return Metaclass_Power.__constants['D100_MEASURED_BATTERY']

    @property
    def D100_MEASURED_5V(self):
        """Message constant 'D100_MEASURED_5V'."""
        return Metaclass_Power.__constants['D100_MEASURED_5V']

    @property
    def D100_MEASURED_12V(self):
        """Message constant 'D100_MEASURED_12V'."""
        return Metaclass_Power.__constants['D100_MEASURED_12V']

    @property
    def D150_MEASURED_BATTERY(self):
        """Message constant 'D150_MEASURED_BATTERY'."""
        return Metaclass_Power.__constants['D150_MEASURED_BATTERY']

    @property
    def D150_MEASURED_5V(self):
        """Message constant 'D150_MEASURED_5V'."""
        return Metaclass_Power.__constants['D150_MEASURED_5V']

    @property
    def D150_MEASURED_12V(self):
        """Message constant 'D150_MEASURED_12V'."""
        return Metaclass_Power.__constants['D150_MEASURED_12V']

    @property
    def W200_MEASURED_BATTERY(self):
        """Message constant 'W200_MEASURED_BATTERY'."""
        return Metaclass_Power.__constants['W200_MEASURED_BATTERY']

    @property
    def W200_MEASURED_12V(self):
        """Message constant 'W200_MEASURED_12V'."""
        return Metaclass_Power.__constants['W200_MEASURED_12V']

    @property
    def W200_MEASURED_24V(self):
        """Message constant 'W200_MEASURED_24V'."""
        return Metaclass_Power.__constants['W200_MEASURED_24V']

    @property
    def W200_MEASURED_48V(self):
        """Message constant 'W200_MEASURED_48V'."""
        return Metaclass_Power.__constants['W200_MEASURED_48V']

    @property
    def R100_MEASURED_BATTERY(self):
        """Message constant 'R100_MEASURED_BATTERY'."""
        return Metaclass_Power.__constants['R100_MEASURED_BATTERY']

    @property
    def R100_MEASURED_5V(self):
        """Message constant 'R100_MEASURED_5V'."""
        return Metaclass_Power.__constants['R100_MEASURED_5V']

    @property
    def R100_MEASURED_12V(self):
        """Message constant 'R100_MEASURED_12V'."""
        return Metaclass_Power.__constants['R100_MEASURED_12V']

    @property
    def R100_MEASURED_INVERTER(self):
        """Message constant 'R100_MEASURED_INVERTER'."""
        return Metaclass_Power.__constants['R100_MEASURED_INVERTER']

    @property
    def R100_MEASURED_FRONT_AXLE(self):
        """Message constant 'R100_MEASURED_FRONT_AXLE'."""
        return Metaclass_Power.__constants['R100_MEASURED_FRONT_AXLE']

    @property
    def R100_MEASURED_REAR_AXLE(self):
        """Message constant 'R100_MEASURED_REAR_AXLE'."""
        return Metaclass_Power.__constants['R100_MEASURED_REAR_AXLE']

    @property
    def R100_MEASURED_LIGHT(self):
        """Message constant 'R100_MEASURED_LIGHT'."""
        return Metaclass_Power.__constants['R100_MEASURED_LIGHT']

    @property
    def A200_BATTERY_VOLTAGE(self):
        """Message constant 'A200_BATTERY_VOLTAGE'."""
        return Metaclass_Power.__constants['A200_BATTERY_VOLTAGE']

    @property
    def A200_LEFT_DRIVER_VOLTAGE(self):
        """Message constant 'A200_LEFT_DRIVER_VOLTAGE'."""
        return Metaclass_Power.__constants['A200_LEFT_DRIVER_VOLTAGE']

    @property
    def A200_RIGHT_DRIVER_VOLTAGE(self):
        """Message constant 'A200_RIGHT_DRIVER_VOLTAGE'."""
        return Metaclass_Power.__constants['A200_RIGHT_DRIVER_VOLTAGE']

    @property
    def A200_VOLTAGES_SIZE(self):
        """Message constant 'A200_VOLTAGES_SIZE'."""
        return Metaclass_Power.__constants['A200_VOLTAGES_SIZE']

    @property
    def J100_TOTAL_CURRENT(self):
        """Message constant 'J100_TOTAL_CURRENT'."""
        return Metaclass_Power.__constants['J100_TOTAL_CURRENT']

    @property
    def J100_COMPUTER_CURRENT(self):
        """Message constant 'J100_COMPUTER_CURRENT'."""
        return Metaclass_Power.__constants['J100_COMPUTER_CURRENT']

    @property
    def J100_DRIVE_CURRENT(self):
        """Message constant 'J100_DRIVE_CURRENT'."""
        return Metaclass_Power.__constants['J100_DRIVE_CURRENT']

    @property
    def J100_USER_CURRENT(self):
        """Message constant 'J100_USER_CURRENT'."""
        return Metaclass_Power.__constants['J100_USER_CURRENT']

    @property
    def D100_TOTAL_CURRENT(self):
        """Message constant 'D100_TOTAL_CURRENT'."""
        return Metaclass_Power.__constants['D100_TOTAL_CURRENT']

    @property
    def D100_COMPUTER_CURRENT(self):
        """Message constant 'D100_COMPUTER_CURRENT'."""
        return Metaclass_Power.__constants['D100_COMPUTER_CURRENT']

    @property
    def D150_TOTAL_CURRENT(self):
        """Message constant 'D150_TOTAL_CURRENT'."""
        return Metaclass_Power.__constants['D150_TOTAL_CURRENT']

    @property
    def D150_COMPUTER_CURRENT(self):
        """Message constant 'D150_COMPUTER_CURRENT'."""
        return Metaclass_Power.__constants['D150_COMPUTER_CURRENT']

    @property
    def W200_TOTAL_CURRENT(self):
        """Message constant 'W200_TOTAL_CURRENT'."""
        return Metaclass_Power.__constants['W200_TOTAL_CURRENT']

    @property
    def W200_COMPUTER_CURRENT(self):
        """Message constant 'W200_COMPUTER_CURRENT'."""
        return Metaclass_Power.__constants['W200_COMPUTER_CURRENT']

    @property
    def W200_12V_CURRENT(self):
        """Message constant 'W200_12V_CURRENT'."""
        return Metaclass_Power.__constants['W200_12V_CURRENT']

    @property
    def W200_24V_CURRENT(self):
        """Message constant 'W200_24V_CURRENT'."""
        return Metaclass_Power.__constants['W200_24V_CURRENT']

    @property
    def R100_TOTAL_CURRENT(self):
        """Message constant 'R100_TOTAL_CURRENT'."""
        return Metaclass_Power.__constants['R100_TOTAL_CURRENT']

    @property
    def A200_MCU_AND_USER_PORT_CURRENT(self):
        """Message constant 'A200_MCU_AND_USER_PORT_CURRENT'."""
        return Metaclass_Power.__constants['A200_MCU_AND_USER_PORT_CURRENT']

    @property
    def A200_LEFT_DRIVER_CURRENT(self):
        """Message constant 'A200_LEFT_DRIVER_CURRENT'."""
        return Metaclass_Power.__constants['A200_LEFT_DRIVER_CURRENT']

    @property
    def A200_RIGHT_DRIVER_CURRENT(self):
        """Message constant 'A200_RIGHT_DRIVER_CURRENT'."""
        return Metaclass_Power.__constants['A200_RIGHT_DRIVER_CURRENT']

    @property
    def A200_CURRENTS_SIZE(self):
        """Message constant 'A200_CURRENTS_SIZE'."""
        return Metaclass_Power.__constants['A200_CURRENTS_SIZE']


class Power(metaclass=Metaclass_Power):
    """
    Message class 'Power'.

    Constants:
      NOT_APPLICABLE
      J100_MEASURED_BATTERY
      J100_MEASURED_5V
      J100_MEASURED_12V
      D100_MEASURED_BATTERY
      D100_MEASURED_5V
      D100_MEASURED_12V
      D150_MEASURED_BATTERY
      D150_MEASURED_5V
      D150_MEASURED_12V
      W200_MEASURED_BATTERY
      W200_MEASURED_12V
      W200_MEASURED_24V
      W200_MEASURED_48V
      R100_MEASURED_BATTERY
      R100_MEASURED_5V
      R100_MEASURED_12V
      R100_MEASURED_INVERTER
      R100_MEASURED_FRONT_AXLE
      R100_MEASURED_REAR_AXLE
      R100_MEASURED_LIGHT
      A200_BATTERY_VOLTAGE
      A200_LEFT_DRIVER_VOLTAGE
      A200_RIGHT_DRIVER_VOLTAGE
      A200_VOLTAGES_SIZE
      J100_TOTAL_CURRENT
      J100_COMPUTER_CURRENT
      J100_DRIVE_CURRENT
      J100_USER_CURRENT
      D100_TOTAL_CURRENT
      D100_COMPUTER_CURRENT
      D150_TOTAL_CURRENT
      D150_COMPUTER_CURRENT
      W200_TOTAL_CURRENT
      W200_COMPUTER_CURRENT
      W200_12V_CURRENT
      W200_24V_CURRENT
      R100_TOTAL_CURRENT
      A200_MCU_AND_USER_PORT_CURRENT
      A200_LEFT_DRIVER_CURRENT
      A200_RIGHT_DRIVER_CURRENT
      A200_CURRENTS_SIZE
    """

    __slots__ = [
        '_header',
        '_shore_power_connected',
        '_battery_connected',
        '_power_12v_user_nominal',
        '_charger_connected',
        '_charging_complete',
        '_measured_voltages',
        '_measured_currents',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'shore_power_connected': 'int8',
        'battery_connected': 'int8',
        'power_12v_user_nominal': 'int8',
        'charger_connected': 'int8',
        'charging_complete': 'int8',
        'measured_voltages': 'sequence<float>',
        'measured_currents': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.shore_power_connected = kwargs.get('shore_power_connected', int())
        self.battery_connected = kwargs.get('battery_connected', int())
        self.power_12v_user_nominal = kwargs.get('power_12v_user_nominal', int())
        self.charger_connected = kwargs.get('charger_connected', int())
        self.charging_complete = kwargs.get('charging_complete', int())
        self.measured_voltages = array.array('f', kwargs.get('measured_voltages', []))
        self.measured_currents = array.array('f', kwargs.get('measured_currents', []))

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
        if self.shore_power_connected != other.shore_power_connected:
            return False
        if self.battery_connected != other.battery_connected:
            return False
        if self.power_12v_user_nominal != other.power_12v_user_nominal:
            return False
        if self.charger_connected != other.charger_connected:
            return False
        if self.charging_complete != other.charging_complete:
            return False
        if self.measured_voltages != other.measured_voltages:
            return False
        if self.measured_currents != other.measured_currents:
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
    def shore_power_connected(self):
        """Message field 'shore_power_connected'."""
        return self._shore_power_connected

    @shore_power_connected.setter
    def shore_power_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shore_power_connected' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'shore_power_connected' field must be an integer in [-128, 127]"
        self._shore_power_connected = value

    @builtins.property
    def battery_connected(self):
        """Message field 'battery_connected'."""
        return self._battery_connected

    @battery_connected.setter
    def battery_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_connected' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'battery_connected' field must be an integer in [-128, 127]"
        self._battery_connected = value

    @builtins.property
    def power_12v_user_nominal(self):
        """Message field 'power_12v_user_nominal'."""
        return self._power_12v_user_nominal

    @power_12v_user_nominal.setter
    def power_12v_user_nominal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_12v_user_nominal' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'power_12v_user_nominal' field must be an integer in [-128, 127]"
        self._power_12v_user_nominal = value

    @builtins.property
    def charger_connected(self):
        """Message field 'charger_connected'."""
        return self._charger_connected

    @charger_connected.setter
    def charger_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charger_connected' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'charger_connected' field must be an integer in [-128, 127]"
        self._charger_connected = value

    @builtins.property
    def charging_complete(self):
        """Message field 'charging_complete'."""
        return self._charging_complete

    @charging_complete.setter
    def charging_complete(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charging_complete' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'charging_complete' field must be an integer in [-128, 127]"
        self._charging_complete = value

    @builtins.property
    def measured_voltages(self):
        """Message field 'measured_voltages'."""
        return self._measured_voltages

    @measured_voltages.setter
    def measured_voltages(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'measured_voltages' array.array() must have the type code of 'f'"
            self._measured_voltages = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'measured_voltages' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._measured_voltages = array.array('f', value)

    @builtins.property
    def measured_currents(self):
        """Message field 'measured_currents'."""
        return self._measured_currents

    @measured_currents.setter
    def measured_currents(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'measured_currents' array.array() must have the type code of 'f'"
            self._measured_currents = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'measured_currents' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._measured_currents = array.array('f', value)
