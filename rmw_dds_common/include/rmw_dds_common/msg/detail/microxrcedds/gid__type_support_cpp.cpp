// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rmw_dds_common:msg/Gid.idl
// generated code does not contain a copyright notice
#include "rmw_dds_common/msg/detail/gid__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rmw_dds_common/msg/detail/gid__struct.hpp"

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

namespace rmw_dds_common
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
cdr_serialize(
  const rmw_dds_common::msg::Gid & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: data
  {
    size_t size = ros_message.data.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.data.data(), size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
cdr_deserialize(
  ucdrBuffer * cdr,
  rmw_dds_common::msg::Gid & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: data
  {
    const size_t size = ros_message.data.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.data.data(), size);
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
get_serialized_size(
  const rmw_dds_common::msg::Gid & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data
  {
    const size_t array_size = 24;
    const size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
max_serialized_size_Gid(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data
  {
    const size_t array_size = 24;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Gid__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rmw_dds_common::msg::Gid *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Gid__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmw_dds_common::msg::Gid *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Gid__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmw_dds_common::msg::Gid *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Gid__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rmw_dds_common::msg::Gid *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Gid__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Gid(&full_bounded, 0);
}

static message_type_support_callbacks_t _Gid__callbacks = {
  "rmw_dds_common::msg",
  "Gid",
  _Gid__cdr_serialize,
  _Gid__cdr_deserialize,
  _Gid__get_serialized_size,
  _Gid__get_serialized_size_with_initial_alignment,
  _Gid__max_serialized_size
};

static rosidl_message_type_support_t _Gid__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Gid__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rmw_dds_common

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rmw_dds_common
const rosidl_message_type_support_t *
get_message_type_support_handle<rmw_dds_common::msg::Gid>()
{
  return &rmw_dds_common::msg::typesupport_microxrcedds_cpp::_Gid__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rmw_dds_common, msg, Gid)() {
  return &rmw_dds_common::msg::typesupport_microxrcedds_cpp::_Gid__handle;
}

#ifdef __cplusplus
}
#endif
