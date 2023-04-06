// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from pendulum_msgs:msg/RttestResults.idl
// generated code does not contain a copyright notice
#include "pendulum_msgs/msg/detail/rttest_results__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "pendulum_msgs/msg/detail/rttest_results__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace pendulum_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const pendulum_msgs::msg::JointCommand &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  pendulum_msgs::msg::JointCommand &);

size_t get_serialized_size(
  const pendulum_msgs::msg::JointCommand &,
  size_t current_alignment);

size_t
max_serialized_size_JointCommand(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace pendulum_msgs

namespace pendulum_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const pendulum_msgs::msg::JointState &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  pendulum_msgs::msg::JointState &);

size_t get_serialized_size(
  const pendulum_msgs::msg::JointState &,
  size_t current_alignment);

size_t
max_serialized_size_JointState(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace pendulum_msgs


namespace pendulum_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_pendulum_msgs
cdr_serialize(
  const pendulum_msgs::msg::RttestResults & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: command
  rv = pendulum_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.command,
    cdr);
  // Member: state
  rv = pendulum_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.state,
    cdr);
  // Member: cur_latency
  rv = ucdr_serialize_uint64_t(cdr, ros_message.cur_latency);
  // Member: mean_latency
  rv = ucdr_serialize_double(cdr, ros_message.mean_latency);
  // Member: min_latency
  rv = ucdr_serialize_uint64_t(cdr, ros_message.min_latency);
  // Member: max_latency
  rv = ucdr_serialize_uint64_t(cdr, ros_message.max_latency);
  // Member: minor_pagefaults
  rv = ucdr_serialize_uint64_t(cdr, ros_message.minor_pagefaults);
  // Member: major_pagefaults
  rv = ucdr_serialize_uint64_t(cdr, ros_message.major_pagefaults);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_pendulum_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  pendulum_msgs::msg::RttestResults & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);
  // Member: command
  rv = pendulum_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.command);
  // Member: state
  rv = pendulum_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.state);
  // Member: cur_latency
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.cur_latency);
  // Member: mean_latency
  rv = ucdr_deserialize_double(cdr, &ros_message.mean_latency);
  // Member: min_latency
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.min_latency);
  // Member: max_latency
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.max_latency);
  // Member: minor_pagefaults
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.minor_pagefaults);
  // Member: major_pagefaults
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.major_pagefaults);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_pendulum_msgs
get_serialized_size(
  const pendulum_msgs::msg::RttestResults & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);
  // Member: command
  current_alignment += pendulum_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.command,
    current_alignment);
  // Member: state
  current_alignment += pendulum_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.state,
    current_alignment);
  // Member: cur_latency
  {
    const size_t item_size = sizeof(ros_message.cur_latency);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: mean_latency
  {
    const size_t item_size = sizeof(ros_message.mean_latency);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: min_latency
  {
    const size_t item_size = sizeof(ros_message.min_latency);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: max_latency
  {
    const size_t item_size = sizeof(ros_message.max_latency);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: minor_pagefaults
  {
    const size_t item_size = sizeof(ros_message.minor_pagefaults);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: major_pagefaults
  {
    const size_t item_size = sizeof(ros_message.major_pagefaults);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_pendulum_msgs
max_serialized_size_RttestResults(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);
  // Member: command
  current_alignment += pendulum_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_JointCommand(
    full_bounded,
    current_alignment);
  // Member: state
  current_alignment += pendulum_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_JointState(
    full_bounded,
    current_alignment);
  // Member: cur_latency
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: mean_latency
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: min_latency
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: max_latency
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: minor_pagefaults
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: major_pagefaults
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);

  return current_alignment - initial_alignment;
}

static bool _RttestResults__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const pendulum_msgs::msg::RttestResults *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RttestResults__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pendulum_msgs::msg::RttestResults *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RttestResults__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pendulum_msgs::msg::RttestResults *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RttestResults__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const pendulum_msgs::msg::RttestResults *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RttestResults__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RttestResults(&full_bounded, 0);
}

static message_type_support_callbacks_t _RttestResults__callbacks = {
  "pendulum_msgs::msg",
  "RttestResults",
  _RttestResults__cdr_serialize,
  _RttestResults__cdr_deserialize,
  _RttestResults__get_serialized_size,
  _RttestResults__get_serialized_size_with_initial_alignment,
  _RttestResults__max_serialized_size
};

static rosidl_message_type_support_t _RttestResults__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RttestResults__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace pendulum_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_pendulum_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pendulum_msgs::msg::RttestResults>()
{
  return &pendulum_msgs::msg::typesupport_microxrcedds_cpp::_RttestResults__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, pendulum_msgs, msg, RttestResults)() {
  return &pendulum_msgs::msg::typesupport_microxrcedds_cpp::_RttestResults__handle;
}

#ifdef __cplusplus
}
#endif
