# generated from rosidl_generator_py/resource/_idl.py.em
# with input from esda_ros_interface:msg/EsdaMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsdaMessage(type):
    """Metaclass of message 'EsdaMessage'."""

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
            module = import_type_support('esda_ros_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'esda_ros_interface.msg.EsdaMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esda_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esda_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esda_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esda_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esda_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EsdaMessage(metaclass=Metaclass_EsdaMessage):
    """Message class 'EsdaMessage'."""

    __slots__ = [
        '_current_vel_right',
        '_current_vel_left',
        '_steering_angle',
        '_auto_mode',
        '_estop',
    ]

    _fields_and_field_types = {
        'current_vel_right': 'double',
        'current_vel_left': 'double',
        'steering_angle': 'double',
        'auto_mode': 'boolean',
        'estop': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_vel_right = kwargs.get('current_vel_right', float())
        self.current_vel_left = kwargs.get('current_vel_left', float())
        self.steering_angle = kwargs.get('steering_angle', float())
        self.auto_mode = kwargs.get('auto_mode', bool())
        self.estop = kwargs.get('estop', bool())

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
        if self.current_vel_right != other.current_vel_right:
            return False
        if self.current_vel_left != other.current_vel_left:
            return False
        if self.steering_angle != other.steering_angle:
            return False
        if self.auto_mode != other.auto_mode:
            return False
        if self.estop != other.estop:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_vel_right(self):
        """Message field 'current_vel_right'."""
        return self._current_vel_right

    @current_vel_right.setter
    def current_vel_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_vel_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_vel_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_vel_right = value

    @builtins.property
    def current_vel_left(self):
        """Message field 'current_vel_left'."""
        return self._current_vel_left

    @current_vel_left.setter
    def current_vel_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_vel_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_vel_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_vel_left = value

    @builtins.property
    def steering_angle(self):
        """Message field 'steering_angle'."""
        return self._steering_angle

    @steering_angle.setter
    def steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_angle = value

    @builtins.property
    def auto_mode(self):
        """Message field 'auto_mode'."""
        return self._auto_mode

    @auto_mode.setter
    def auto_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_mode' field must be of type 'bool'"
        self._auto_mode = value

    @builtins.property
    def estop(self):
        """Message field 'estop'."""
        return self._estop

    @estop.setter
    def estop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'estop' field must be of type 'bool'"
        self._estop = value
