// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rmw_dds_common:msg/ParticipantEntitiesInfo.idl
// generated code does not contain a copyright notice
#include "rmw_dds_common/msg/detail/participant_entities_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rmw_dds_common/msg/detail/participant_entities_info__struct.hpp"

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
bool cdr_serialize(
  const rmw_dds_common::msg::Gid &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rmw_dds_common::msg::Gid &);

size_t get_serialized_size(
  const rmw_dds_common::msg::Gid &,
  size_t current_alignment);

size_t
max_serialized_size_Gid(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace rmw_dds_common

namespace rmw_dds_common
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const rmw_dds_common::msg::NodeEntitiesInfo &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rmw_dds_common::msg::NodeEntitiesInfo &);

size_t get_serialized_size(
  const rmw_dds_common::msg::NodeEntitiesInfo &,
  size_t current_alignment);

size_t
max_serialized_size_NodeEntitiesInfo(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace rmw_dds_common


namespace rmw_dds_common
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
cdr_serialize(
  const rmw_dds_common::msg::ParticipantEntitiesInfo & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: gid
  rv = rmw_dds_common::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.gid,
    cdr);
  // Member: node_entities_info_seq
  {
    size_t size = ros_message.node_entities_info_seq.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rmw_dds_common::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.node_entities_info_seq[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
cdr_deserialize(
  ucdrBuffer * cdr,
  rmw_dds_common::msg::ParticipantEntitiesInfo & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: gid
  rv = rmw_dds_common::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.gid);
  // Member: node_entities_info_seq
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.node_entities_info_seq.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rmw_dds_common::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.node_entities_info_seq[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
get_serialized_size(
  const rmw_dds_common::msg::ParticipantEntitiesInfo & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: gid
  current_alignment += rmw_dds_common::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.gid,
    current_alignment);
  // Member: node_entities_info_seq
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.node_entities_info_seq.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rmw_dds_common::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.node_entities_info_seq[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
max_serialized_size_ParticipantEntitiesInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: gid
  current_alignment += rmw_dds_common::msg::typesupport_microxrcedds_cpp::max_serialized_size_Gid(
    full_bounded,
    current_alignment);
  // Member: node_entities_info_seq
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _ParticipantEntitiesInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rmw_dds_common::msg::ParticipantEntitiesInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ParticipantEntitiesInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmw_dds_common::msg::ParticipantEntitiesInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ParticipantEntitiesInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmw_dds_common::msg::ParticipantEntitiesInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ParticipantEntitiesInfo__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rmw_dds_common::msg::ParticipantEntitiesInfo *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ParticipantEntitiesInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ParticipantEntitiesInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t _ParticipantEntitiesInfo__callbacks = {
  "rmw_dds_common::msg",
  "ParticipantEntitiesInfo",
  _ParticipantEntitiesInfo__cdr_serialize,
  _ParticipantEntitiesInfo__cdr_deserialize,
  _ParticipantEntitiesInfo__get_serialized_size,
  _ParticipantEntitiesInfo__get_serialized_size_with_initial_alignment,
  _ParticipantEntitiesInfo__max_serialized_size
};

static rosidl_message_type_support_t _ParticipantEntitiesInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ParticipantEntitiesInfo__callbacks,
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
get_message_type_support_handle<rmw_dds_common::msg::ParticipantEntitiesInfo>()
{
  return &rmw_dds_common::msg::typesupport_microxrcedds_cpp::_ParticipantEntitiesInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rmw_dds_common, msg, ParticipantEntitiesInfo)() {
  return &rmw_dds_common::msg::typesupport_microxrcedds_cpp::_ParticipantEntitiesInfo__handle;
}

#ifdef __cplusplus
}
#endif
