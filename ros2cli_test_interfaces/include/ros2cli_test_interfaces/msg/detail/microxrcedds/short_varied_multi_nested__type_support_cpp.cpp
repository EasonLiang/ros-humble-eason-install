// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from ros2cli_test_interfaces:msg/ShortVariedMultiNested.idl
// generated code does not contain a copyright notice
#include "ros2cli_test_interfaces/msg/detail/short_varied_multi_nested__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "ros2cli_test_interfaces/msg/detail/short_varied_multi_nested__struct.hpp"

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
bool cdr_serialize(
  const ros2cli_test_interfaces::msg::ShortVariedNested &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  ros2cli_test_interfaces::msg::ShortVariedNested &);

size_t get_serialized_size(
  const ros2cli_test_interfaces::msg::ShortVariedNested &,
  size_t current_alignment);

size_t
max_serialized_size_ShortVariedNested(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace ros2cli_test_interfaces


namespace ros2cli_test_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
cdr_serialize(
  const ros2cli_test_interfaces::msg::ShortVariedMultiNested & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: short_varied_nested
  rv = ros2cli_test_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.short_varied_nested,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  ros2cli_test_interfaces::msg::ShortVariedMultiNested & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: short_varied_nested
  rv = ros2cli_test_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.short_varied_nested);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
get_serialized_size(
  const ros2cli_test_interfaces::msg::ShortVariedMultiNested & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: short_varied_nested
  current_alignment += ros2cli_test_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.short_varied_nested,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
max_serialized_size_ShortVariedMultiNested(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: short_varied_nested
  current_alignment += ros2cli_test_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_ShortVariedNested(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _ShortVariedMultiNested__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const ros2cli_test_interfaces::msg::ShortVariedMultiNested *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ShortVariedMultiNested__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2cli_test_interfaces::msg::ShortVariedMultiNested *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ShortVariedMultiNested__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2cli_test_interfaces::msg::ShortVariedMultiNested *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ShortVariedMultiNested__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const ros2cli_test_interfaces::msg::ShortVariedMultiNested *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ShortVariedMultiNested__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ShortVariedMultiNested(&full_bounded, 0);
}

static message_type_support_callbacks_t _ShortVariedMultiNested__callbacks = {
  "ros2cli_test_interfaces::msg",
  "ShortVariedMultiNested",
  _ShortVariedMultiNested__cdr_serialize,
  _ShortVariedMultiNested__cdr_deserialize,
  _ShortVariedMultiNested__get_serialized_size,
  _ShortVariedMultiNested__get_serialized_size_with_initial_alignment,
  _ShortVariedMultiNested__max_serialized_size
};

static rosidl_message_type_support_t _ShortVariedMultiNested__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ShortVariedMultiNested__callbacks,
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
get_message_type_support_handle<ros2cli_test_interfaces::msg::ShortVariedMultiNested>()
{
  return &ros2cli_test_interfaces::msg::typesupport_microxrcedds_cpp::_ShortVariedMultiNested__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, ros2cli_test_interfaces, msg, ShortVariedMultiNested)() {
  return &ros2cli_test_interfaces::msg::typesupport_microxrcedds_cpp::_ShortVariedMultiNested__handle;
}

#ifdef __cplusplus
}
#endif
