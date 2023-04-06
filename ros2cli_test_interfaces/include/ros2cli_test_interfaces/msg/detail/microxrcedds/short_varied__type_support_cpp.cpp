// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from ros2cli_test_interfaces:msg/ShortVaried.idl
// generated code does not contain a copyright notice
#include "ros2cli_test_interfaces/msg/detail/short_varied__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "ros2cli_test_interfaces/msg/detail/short_varied__struct.hpp"

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

namespace ros2cli_test_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
cdr_serialize(
  const ros2cli_test_interfaces::msg::ShortVaried & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: bool_value
  rv = ucdr_serialize_bool(cdr, ros_message.bool_value);
  // Member: bool_values
  {
    size_t size = ros_message.bool_values.size();
    bool temp[3] = {0};
    std::copy(ros_message.bool_values.begin(), ros_message.bool_values.end(), std::begin(temp));
    rv = ucdr_serialize_sequence_bool(cdr, temp, size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  ros2cli_test_interfaces::msg::ShortVaried & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: bool_value
  rv = ucdr_deserialize_bool(cdr, &ros_message.bool_value);
  // Member: bool_values
  {
    uint32_t size;
    const size_t capacity = ros_message.bool_values.capacity();
    ros_message.bool_values.resize(capacity);
    bool temp[3] = {0};
    rv = ucdr_deserialize_sequence_bool(cdr, temp, 3, &size);
    if (rv) {
      std::copy(std::begin(temp), std::begin(temp) + size, ros_message.bool_values.begin());
    }
    if (rv) {
      ros_message.bool_values.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
get_serialized_size(
  const ros2cli_test_interfaces::msg::ShortVaried & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_value
  {
    const size_t item_size = sizeof(ros_message.bool_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: bool_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.bool_values.size();
    size_t item_size = sizeof(ros_message.bool_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
max_serialized_size_ShortVaried(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: bool_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (max_sequence_size * sizeof(bool));
  }

  return current_alignment - initial_alignment;
}

static bool _ShortVaried__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const ros2cli_test_interfaces::msg::ShortVaried *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ShortVaried__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2cli_test_interfaces::msg::ShortVaried *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ShortVaried__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2cli_test_interfaces::msg::ShortVaried *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ShortVaried__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const ros2cli_test_interfaces::msg::ShortVaried *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ShortVaried__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ShortVaried(&full_bounded, 0);
}

static message_type_support_callbacks_t _ShortVaried__callbacks = {
  "ros2cli_test_interfaces::msg",
  "ShortVaried",
  _ShortVaried__cdr_serialize,
  _ShortVaried__cdr_deserialize,
  _ShortVaried__get_serialized_size,
  _ShortVaried__get_serialized_size_with_initial_alignment,
  _ShortVaried__max_serialized_size
};

static rosidl_message_type_support_t _ShortVaried__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ShortVaried__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace ros2cli_test_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_ros2cli_test_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2cli_test_interfaces::msg::ShortVaried>()
{
  return &ros2cli_test_interfaces::msg::typesupport_microxrcedds_cpp::_ShortVaried__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, ros2cli_test_interfaces, msg, ShortVaried)() {
  return &ros2cli_test_interfaces::msg::typesupport_microxrcedds_cpp::_ShortVaried__handle;
}

#ifdef __cplusplus
}
#endif
