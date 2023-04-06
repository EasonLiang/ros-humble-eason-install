// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosbag2_storage_mcap_testdata:msg/BasicMsg.idl
// generated code does not contain a copyright notice
#include "rosbag2_storage_mcap_testdata/msg/detail/basic_msg__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosbag2_storage_mcap_testdata/msg/detail/basic_msg__struct.hpp"

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

namespace rosbag2_storage_mcap_testdata
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
cdr_serialize(
  const rosbag2_storage_mcap_testdata::msg::BasicMsg & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: c
  rv = ucdr_serialize_float(cdr, ros_message.c);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
cdr_deserialize(
  ucdrBuffer * cdr,
  rosbag2_storage_mcap_testdata::msg::BasicMsg & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: c
  rv = ucdr_deserialize_float(cdr, &ros_message.c);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
get_serialized_size(
  const rosbag2_storage_mcap_testdata::msg::BasicMsg & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: c
  {
    const size_t item_size = sizeof(ros_message.c);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
max_serialized_size_BasicMsg(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: c
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _BasicMsg__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosbag2_storage_mcap_testdata::msg::BasicMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BasicMsg__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosbag2_storage_mcap_testdata::msg::BasicMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BasicMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosbag2_storage_mcap_testdata::msg::BasicMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BasicMsg__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosbag2_storage_mcap_testdata::msg::BasicMsg *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _BasicMsg__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_BasicMsg(&full_bounded, 0);
}

static message_type_support_callbacks_t _BasicMsg__callbacks = {
  "rosbag2_storage_mcap_testdata::msg",
  "BasicMsg",
  _BasicMsg__cdr_serialize,
  _BasicMsg__cdr_deserialize,
  _BasicMsg__get_serialized_size,
  _BasicMsg__get_serialized_size_with_initial_alignment,
  _BasicMsg__max_serialized_size
};

static rosidl_message_type_support_t _BasicMsg__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_BasicMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rosbag2_storage_mcap_testdata

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rosbag2_storage_mcap_testdata
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbag2_storage_mcap_testdata::msg::BasicMsg>()
{
  return &rosbag2_storage_mcap_testdata::msg::typesupport_microxrcedds_cpp::_BasicMsg__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosbag2_storage_mcap_testdata, msg, BasicMsg)() {
  return &rosbag2_storage_mcap_testdata::msg::typesupport_microxrcedds_cpp::_BasicMsg__handle;
}

#ifdef __cplusplus
}
#endif
