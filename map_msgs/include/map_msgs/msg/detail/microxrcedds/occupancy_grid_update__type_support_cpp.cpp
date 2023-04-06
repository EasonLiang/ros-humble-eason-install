// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from map_msgs:msg/OccupancyGridUpdate.idl
// generated code does not contain a copyright notice
#include "map_msgs/msg/detail/occupancy_grid_update__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "map_msgs/msg/detail/occupancy_grid_update__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::Header &);

size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);

size_t
max_serialized_size_Header(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs


namespace map_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
cdr_serialize(
  const map_msgs::msg::OccupancyGridUpdate & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: x
  rv = ucdr_serialize_int32_t(cdr, ros_message.x);
  // Member: y
  rv = ucdr_serialize_int32_t(cdr, ros_message.y);
  // Member: width
  rv = ucdr_serialize_uint32_t(cdr, ros_message.width);
  // Member: height
  rv = ucdr_serialize_uint32_t(cdr, ros_message.height);
  // Member: data
  {
    size_t size = ros_message.data.size();
    rv = ucdr_serialize_sequence_int8_t(cdr, &ros_message.data[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  map_msgs::msg::OccupancyGridUpdate & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: x
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.x);
  // Member: y
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.y);
  // Member: width
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.width);
  // Member: height
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.height);
  // Member: data
  {
    uint32_t size;
    const size_t capacity = ros_message.data.capacity();
    ros_message.data.resize(capacity);
    rv = ucdr_deserialize_sequence_int8_t(cdr, &ros_message.data[0], capacity, &size);
    if (rv) {
      ros_message.data.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
get_serialized_size(
  const map_msgs::msg::OccupancyGridUpdate & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
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
  // Member: data
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.data.size();
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
max_serialized_size_OccupancyGridUpdate(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Header(
    full_bounded,
    current_alignment);
  // Member: x
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: y
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: height
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: data
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _OccupancyGridUpdate__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const map_msgs::msg::OccupancyGridUpdate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OccupancyGridUpdate__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<map_msgs::msg::OccupancyGridUpdate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OccupancyGridUpdate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const map_msgs::msg::OccupancyGridUpdate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OccupancyGridUpdate__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const map_msgs::msg::OccupancyGridUpdate *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _OccupancyGridUpdate__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_OccupancyGridUpdate(&full_bounded, 0);
}

static message_type_support_callbacks_t _OccupancyGridUpdate__callbacks = {
  "map_msgs::msg",
  "OccupancyGridUpdate",
  _OccupancyGridUpdate__cdr_serialize,
  _OccupancyGridUpdate__cdr_deserialize,
  _OccupancyGridUpdate__get_serialized_size,
  _OccupancyGridUpdate__get_serialized_size_with_initial_alignment,
  _OccupancyGridUpdate__max_serialized_size
};

static rosidl_message_type_support_t _OccupancyGridUpdate__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_OccupancyGridUpdate__callbacks,
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
get_message_type_support_handle<map_msgs::msg::OccupancyGridUpdate>()
{
  return &map_msgs::msg::typesupport_microxrcedds_cpp::_OccupancyGridUpdate__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, map_msgs, msg, OccupancyGridUpdate)() {
  return &map_msgs::msg::typesupport_microxrcedds_cpp::_OccupancyGridUpdate__handle;
}

#ifdef __cplusplus
}
#endif
