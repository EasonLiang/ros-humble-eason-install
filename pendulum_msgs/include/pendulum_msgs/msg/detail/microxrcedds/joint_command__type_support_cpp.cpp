// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from pendulum_msgs:msg/JointCommand.idl
// generated code does not contain a copyright notice
#include "pendulum_msgs/msg/detail/joint_command__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "pendulum_msgs/msg/detail/joint_command__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace pendulum_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_pendulum_msgs
cdr_serialize(
  const pendulum_msgs::msg::JointCommand & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: position
  rv = ucdr_serialize_double(cdr, ros_message.position);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_pendulum_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  pendulum_msgs::msg::JointCommand & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: position
  rv = ucdr_deserialize_double(cdr, &ros_message.position);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_pendulum_msgs
get_serialized_size(
  const pendulum_msgs::msg::JointCommand & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: position
  {
    const size_t item_size = sizeof(ros_message.position);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_pendulum_msgs
max_serialized_size_JointCommand(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: position
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static bool _JointCommand__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const pendulum_msgs::msg::JointCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointCommand__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pendulum_msgs::msg::JointCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pendulum_msgs::msg::JointCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointCommand__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const pendulum_msgs::msg::JointCommand *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _JointCommand__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_JointCommand(&full_bounded, 0);
}

static message_type_support_callbacks_t _JointCommand__callbacks = {
  "pendulum_msgs::msg",
  "JointCommand",
  _JointCommand__cdr_serialize,
  _JointCommand__cdr_deserialize,
  _JointCommand__get_serialized_size,
  _JointCommand__get_serialized_size_with_initial_alignment,
  _JointCommand__max_serialized_size
};

static rosidl_message_type_support_t _JointCommand__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_JointCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace pendulum_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_pendulum_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pendulum_msgs::msg::JointCommand>()
{
  return &pendulum_msgs::msg::typesupport_microxrcedds_cpp::_JointCommand__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, pendulum_msgs, msg, JointCommand)() {
  return &pendulum_msgs::msg::typesupport_microxrcedds_cpp::_JointCommand__handle;
}

#ifdef __cplusplus
}
#endif
