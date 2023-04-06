// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from map_msgs:msg/PointCloud2Update.idl
// generated code does not contain a copyright notice
#include "map_msgs/msg/detail/point_cloud2_update__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "map_msgs/msg/detail/point_cloud2_update__struct.hpp"

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

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::PointCloud2 &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::PointCloud2 &);

size_t get_serialized_size(
  const sensor_msgs::msg::PointCloud2 &,
  size_t current_alignment);

size_t
max_serialized_size_PointCloud2(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace map_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
cdr_serialize(
  const map_msgs::msg::PointCloud2Update & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: type
  rv = ucdr_serialize_uint32_t(cdr, ros_message.type);
  // Member: points
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.points,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  map_msgs::msg::PointCloud2Update & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: type
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.type);
  // Member: points
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.points);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
get_serialized_size(
  const map_msgs::msg::PointCloud2Update & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: type
  {
    const size_t item_size = sizeof(ros_message.type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: points
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.points,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_map_msgs
max_serialized_size_PointCloud2Update(
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
  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: points
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_PointCloud2(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _PointCloud2Update__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const map_msgs::msg::PointCloud2Update *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PointCloud2Update__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<map_msgs::msg::PointCloud2Update *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PointCloud2Update__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const map_msgs::msg::PointCloud2Update *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PointCloud2Update__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const map_msgs::msg::PointCloud2Update *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _PointCloud2Update__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_PointCloud2Update(&full_bounded, 0);
}

static message_type_support_callbacks_t _PointCloud2Update__callbacks = {
  "map_msgs::msg",
  "PointCloud2Update",
  _PointCloud2Update__cdr_serialize,
  _PointCloud2Update__cdr_deserialize,
  _PointCloud2Update__get_serialized_size,
  _PointCloud2Update__get_serialized_size_with_initial_alignment,
  _PointCloud2Update__max_serialized_size
};

static rosidl_message_type_support_t _PointCloud2Update__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_PointCloud2Update__callbacks,
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
get_message_type_support_handle<map_msgs::msg::PointCloud2Update>()
{
  return &map_msgs::msg::typesupport_microxrcedds_cpp::_PointCloud2Update__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, map_msgs, msg, PointCloud2Update)() {
  return &map_msgs::msg::typesupport_microxrcedds_cpp::_PointCloud2Update__handle;
}

#ifdef __cplusplus
}
#endif
