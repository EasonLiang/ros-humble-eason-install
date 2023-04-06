// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice
#include "tf2_msgs/msg/detail/tf2_error__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "tf2_msgs/msg/detail/tf2_error__struct.hpp"

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

namespace tf2_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
cdr_serialize(
  const tf2_msgs::msg::TF2Error & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: error
  rv = ucdr_serialize_uint8_t(cdr, ros_message.error);
  // Member: error_string
  rv = ucdr_serialize_string(cdr, ros_message.error_string.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  tf2_msgs::msg::TF2Error & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: error
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.error);
  // Member: error_string
  ros_message.error_string.resize(ros_message.error_string.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.error_string[0], ros_message.error_string.capacity());
  if (rv) {
    ros_message.error_string.resize(std::strlen(&ros_message.error_string[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
get_serialized_size(
  const tf2_msgs::msg::TF2Error & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: error
  {
    const size_t item_size = sizeof(ros_message.error);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: error_string
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.error_string.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
max_serialized_size_TF2Error(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: error
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: error_string
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _TF2Error__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const tf2_msgs::msg::TF2Error *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TF2Error__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_msgs::msg::TF2Error *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TF2Error__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_msgs::msg::TF2Error *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TF2Error__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const tf2_msgs::msg::TF2Error *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TF2Error__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TF2Error(&full_bounded, 0);
}

static message_type_support_callbacks_t _TF2Error__callbacks = {
  "tf2_msgs::msg",
  "TF2Error",
  _TF2Error__cdr_serialize,
  _TF2Error__cdr_deserialize,
  _TF2Error__get_serialized_size,
  _TF2Error__get_serialized_size_with_initial_alignment,
  _TF2Error__max_serialized_size
};

static rosidl_message_type_support_t _TF2Error__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TF2Error__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace tf2_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_tf2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_msgs::msg::TF2Error>()
{
  return &tf2_msgs::msg::typesupport_microxrcedds_cpp::_TF2Error__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tf2_msgs, msg, TF2Error)() {
  return &tf2_msgs::msg::typesupport_microxrcedds_cpp::_TF2Error__handle;
}

#ifdef __cplusplus
}
#endif
