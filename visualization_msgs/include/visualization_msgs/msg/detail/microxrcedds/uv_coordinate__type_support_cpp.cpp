// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/UVCoordinate.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/uv_coordinate__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "visualization_msgs/msg/detail/uv_coordinate__struct.hpp"

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

namespace visualization_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_serialize(
  const visualization_msgs::msg::UVCoordinate & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: u
  rv = ucdr_serialize_float(cdr, ros_message.u);
  // Member: v
  rv = ucdr_serialize_float(cdr, ros_message.v);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  visualization_msgs::msg::UVCoordinate & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: u
  rv = ucdr_deserialize_float(cdr, &ros_message.u);
  // Member: v
  rv = ucdr_deserialize_float(cdr, &ros_message.v);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
get_serialized_size(
  const visualization_msgs::msg::UVCoordinate & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: u
  {
    const size_t item_size = sizeof(ros_message.u);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: v
  {
    const size_t item_size = sizeof(ros_message.v);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
max_serialized_size_UVCoordinate(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: u
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: v
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _UVCoordinate__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::UVCoordinate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UVCoordinate__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<visualization_msgs::msg::UVCoordinate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UVCoordinate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::UVCoordinate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UVCoordinate__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::UVCoordinate *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _UVCoordinate__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_UVCoordinate(&full_bounded, 0);
}

static message_type_support_callbacks_t _UVCoordinate__callbacks = {
  "visualization_msgs::msg",
  "UVCoordinate",
  _UVCoordinate__cdr_serialize,
  _UVCoordinate__cdr_deserialize,
  _UVCoordinate__get_serialized_size,
  _UVCoordinate__get_serialized_size_with_initial_alignment,
  _UVCoordinate__max_serialized_size
};

static rosidl_message_type_support_t _UVCoordinate__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_UVCoordinate__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace visualization_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<visualization_msgs::msg::UVCoordinate>()
{
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_UVCoordinate__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, visualization_msgs, msg, UVCoordinate)() {
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_UVCoordinate__handle;
}

#ifdef __cplusplus
}
#endif
