# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosbag2_storage_mcap_testdata:msg/ComplexMsgDependsOnIdl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComplexMsgDependsOnIdl(type):
    """Metaclass of message 'ComplexMsgDependsOnIdl'."""

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
            module = import_type_support('rosbag2_storage_mcap_testdata')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosbag2_storage_mcap_testdata.msg.ComplexMsgDependsOnIdl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__complex_msg_depends_on_idl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__complex_msg_depends_on_idl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__complex_msg_depends_on_idl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__complex_msg_depends_on_idl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__complex_msg_depends_on_idl

            from rosbag2_storage_mcap_testdata.msg import BasicIdl
            if BasicIdl.__class__._TYPE_SUPPORT is None:
                BasicIdl.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComplexMsgDependsOnIdl(metaclass=Metaclass_ComplexMsgDependsOnIdl):
    """Message class 'ComplexMsgDependsOnIdl'."""

    __slots__ = [
        '_a',
    ]

    _fields_and_field_types = {
        'a': 'rosbag2_storage_mcap_testdata/BasicIdl',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rosbag2_storage_mcap_testdata', 'msg'], 'BasicIdl'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rosbag2_storage_mcap_testdata.msg import BasicIdl
        self.a = kwargs.get('a', BasicIdl())

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
        if self.a != other.a:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            from rosbag2_storage_mcap_testdata.msg import BasicIdl
            assert \
                isinstance(value, BasicIdl), \
                "The 'a' field must be a sub message of type 'BasicIdl'"
        self._a = value
