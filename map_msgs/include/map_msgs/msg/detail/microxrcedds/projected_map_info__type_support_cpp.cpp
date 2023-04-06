// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from map_msgs:msg/ProjectedMapInfo.idl
// generated code does not contain a copyright notice
#include "map_msgs/msg/detail/projected_map_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "map_msgs/msg/detail/projected_map_info__struct.hpp"

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

namespace map_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
cdr_serialize(
  const map_msgs::msg::ProjectedMapInfo & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: frame_id
  rv = ucdr_serialize_string(cdr, ros_message.frame_id.c_str());
  // Member: x
  rv = ucdr_serialize_double(cdr, ros_message.x);
  // Member: y
  rv = ucdr_serialize_double(cdr, ros_message.y);
  // Member: width
  rv = ucdr_serialize_double(cdr, ros_message.width);
  // Member: height
  rv = ucdr_serialize_double(cdr, ros_message.height);
  // Member: min_z
  rv = ucdr_serialize_double(cdr, ros_message.min_z);
  // Member: max_z
  rv = ucdr_serialize_double(cdr, ros_message.max_z);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  map_msgs::msg::ProjectedMapInfo & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: frame_id
  ros_message.frame_id.resize(ros_message.frame_id.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.frame_id[0], ros_message.frame_id.capacity());
  if (rv) {
    ros_message.frame_id.resize(std::strlen(&ros_message.frame_id[0]));
  }
  // Member: x
  rv = ucdr_deserialize_double(cdr, &ros_message.x);
  // Member: y
  rv = ucdr_deserialize_double(cdr, &ros_message.y);
  // Member: width
  rv = ucdr_deserialize_double(cdr, &ros_message.width);
  // Member: height
  rv = ucdr_deserialize_double(cdr, &ros_message.height);
  // Member: min_z
  rv = ucdr_deserialize_double(cdr, &ros_message.min_z);
  // Member: max_z
  rv = ucdr_deserialize_double(cdr, &ros_message.max_z);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
get_serialized_size(
  const map_msgs::msg::ProjectedMapInfo & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: frame_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.frame_id.size() + 1;
  // Member: x
  {
    const size_t item_size = sizeof(ros_message.x);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: y
  {
    const size_t item_size = sizeof(ros_message.y);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: width
  {
    const size_t item_size = sizeof(ros_message.width);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: height
  {
    const size_t item_size = sizeof(ros_message.height);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: min_z
  {
    const size_t item_size = sizeof(ros_message.min_z);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: max_z
  {
    const size_t item_size = sizeof(ros_message.max_z);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
max_serialized_size_ProjectedMapInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: frame_id
  *full_bounded = false;
  // Member: x
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: y
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: height
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: min_z
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: max_z
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static bool _ProjectedMapInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const map_msgs::msg::ProjectedMapInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ProjectedMapInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<map_msgs::msg::ProjectedMapInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ProjectedMapInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const map_msgs::msg::ProjectedMapInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ProjectedMapInfo__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const map_msgs::msg::ProjectedMapInfo *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ProjectedMapInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ProjectedMapInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t _ProjectedMapInfo__callbacks = {
  "map_msgs::msg",
  "ProjectedMapInfo",
  _ProjectedMapInfo__cdr_serialize,
  _ProjectedMapInfo__cdr_deserialize,
  _ProjectedMapInfo__get_serialized_size,
  _ProjectedMapInfo__get_serialized_size_with_initial_alignment,
  _ProjectedMapInfo__max_serialized_size
};

static rosidl_message_type_support_t _ProjectedMapInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ProjectedMapInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace map_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<map_msgs::msg::ProjectedMapInfo>()
{
  return &map_msgs::msg::typesupport_microxrcedds_cpp::_ProjectedMapInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, map_msgs, msg, ProjectedMapInfo)() {
  return &map_msgs::msg::typesupport_microxrcedds_cpp::_ProjectedMapInfo__handle;
}

#ifdef __cplusplus
}
#endif
