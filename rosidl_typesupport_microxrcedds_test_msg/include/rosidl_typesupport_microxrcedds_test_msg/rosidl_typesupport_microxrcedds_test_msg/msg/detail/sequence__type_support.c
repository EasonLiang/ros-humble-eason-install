// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__rosidl_typesupport_introspection_c.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__functions.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__struct.h"


// Include directives for member types
// Member `sequence_string_test`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__init(message_memory);
}

void rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_fini_function(void * message_memory)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini(message_memory);
}

size_t rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__size_function__Sequence__sequence_string_test(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__get_const_function__Sequence__sequence_string_test(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__get_function__Sequence__sequence_string_test(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__fetch_function__Sequence__sequence_string_test(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__get_const_function__Sequence__sequence_string_test(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__assign_function__Sequence__sequence_string_test(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__get_function__Sequence__sequence_string_test(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__resize_function__Sequence__sequence_string_test(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_member_array[1] = {
  {
    "sequence_string_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence, sequence_string_test),  // bytes offset in struct
    NULL,  // default value
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__size_function__Sequence__sequence_string_test,  // size() function pointer
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__get_const_function__Sequence__sequence_string_test,  // get_const(index) function pointer
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__get_function__Sequence__sequence_string_test,  // get(index) function pointer
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__fetch_function__Sequence__sequence_string_test,  // fetch(index, &value) function pointer
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__assign_function__Sequence__sequence_string_test,  // assign(index, value) function pointer
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__resize_function__Sequence__sequence_string_test  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg__msg",  // message namespace
  "Sequence",  // message name
  1,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence),
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_member_array,  // message members
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_init_function,  // function to initialize message memory (memory has to be allocated)
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_type_support_handle = {
  0,
  &rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_typesupport_microxrcedds_test_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, Sequence)() {
  if (!rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_type_support_handle.typesupport_identifier) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
