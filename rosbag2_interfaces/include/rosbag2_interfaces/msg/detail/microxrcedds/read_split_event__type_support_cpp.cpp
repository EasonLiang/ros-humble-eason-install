// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosbag2_interfaces:msg/ReadSplitEvent.idl
// generated code does not contain a copyright notice
#include "rosbag2_interfaces/msg/detail/read_split_event__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosbag2_interfaces/msg/detail/read_split_event__struct.hpp"

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

namespace rosbag2_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
cdr_serialize(
  const rosbag2_interfaces::msg::ReadSplitEvent & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: closed_file
  rv = ucdr_serialize_string(cdr, ros_message.closed_file.c_str());
  // Member: opened_file
  rv = ucdr_serialize_string(cdr, ros_message.opened_file.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rosbag2_interfaces::msg::ReadSplitEvent & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: closed_file
  ros_message.closed_file.resize(ros_message.closed_file.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.closed_file[0], ros_message.closed_file.capacity());
  if (rv) {
    ros_message.closed_file.resize(std::strlen(&ros_message.closed_file[0]));
  }
  // Member: opened_file
  ros_message.opened_file.resize(ros_message.opened_file.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.opened_file[0], ros_message.opened_file.capacity());
  if (rv) {
    ros_message.opened_file.resize(std::strlen(&ros_message.opened_file[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
get_serialized_size(
  const rosbag2_interfaces::msg::ReadSplitEvent & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: closed_file
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.closed_file.size() + 1;
  // Member: opened_file
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.opened_file.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
max_serialized_size_ReadSplitEvent(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: closed_file
  *full_bounded = false;
  // Member: opened_file
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _ReadSplitEvent__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::msg::ReadSplitEvent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ReadSplitEvent__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosbag2_interfaces::msg::ReadSplitEvent *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ReadSplitEvent__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::msg::ReadSplitEvent *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ReadSplitEvent__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::msg::ReadSplitEvent *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ReadSplitEvent__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ReadSplitEvent(&full_bounded, 0);
}

static message_type_support_callbacks_t _ReadSplitEvent__callbacks = {
  "rosbag2_interfaces::msg",
  "ReadSplitEvent",
  _ReadSplitEvent__cdr_serialize,
  _ReadSplitEvent__cdr_deserialize,
  _ReadSplitEvent__get_serialized_size,
  _ReadSplitEvent__get_serialized_size_with_initial_alignment,
  _ReadSplitEvent__max_serialized_size
};

static rosidl_message_type_support_t _ReadSplitEvent__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ReadSplitEvent__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rosbag2_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rosbag2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbag2_interfaces::msg::ReadSplitEvent>()
{
  return &rosbag2_interfaces::msg::typesupport_microxrcedds_cpp::_ReadSplitEvent__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosbag2_interfaces, msg, ReadSplitEvent)() {
  return &rosbag2_interfaces::msg::typesupport_microxrcedds_cpp::_ReadSplitEvent__handle;
}

#ifdef __cplusplus
}
#endif
