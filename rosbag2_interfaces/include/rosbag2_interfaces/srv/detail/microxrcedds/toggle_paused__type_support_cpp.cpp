// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosbag2_interfaces:srv/TogglePaused.idl
// generated code does not contain a copyright notice
#include "rosbag2_interfaces/srv/detail/toggle_paused__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosbag2_interfaces/srv/detail/toggle_paused__struct.hpp"

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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
cdr_serialize(
  const rosbag2_interfaces::srv::TogglePaused_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message.structure_needs_at_least_one_member);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rosbag2_interfaces::srv::TogglePaused_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.structure_needs_at_least_one_member);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
get_serialized_size(
  const rosbag2_interfaces::srv::TogglePaused_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
max_serialized_size_TogglePaused_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static bool _TogglePaused_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::srv::TogglePaused_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TogglePaused_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosbag2_interfaces::srv::TogglePaused_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TogglePaused_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::srv::TogglePaused_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TogglePaused_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::srv::TogglePaused_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TogglePaused_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TogglePaused_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _TogglePaused_Request__callbacks = {
  "rosbag2_interfaces::srv",
  "TogglePaused_Request",
  _TogglePaused_Request__cdr_serialize,
  _TogglePaused_Request__cdr_deserialize,
  _TogglePaused_Request__get_serialized_size,
  _TogglePaused_Request__get_serialized_size_with_initial_alignment,
  _TogglePaused_Request__max_serialized_size
};

static rosidl_message_type_support_t _TogglePaused_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TogglePaused_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace rosbag2_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rosbag2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbag2_interfaces::srv::TogglePaused_Request>()
{
  return &rosbag2_interfaces::srv::typesupport_microxrcedds_cpp::_TogglePaused_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosbag2_interfaces, srv, TogglePaused_Request)() {
  return &rosbag2_interfaces::srv::typesupport_microxrcedds_cpp::_TogglePaused_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace rosbag2_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
cdr_serialize(
  const rosbag2_interfaces::srv::TogglePaused_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message.structure_needs_at_least_one_member);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rosbag2_interfaces::srv::TogglePaused_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.structure_needs_at_least_one_member);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
get_serialized_size(
  const rosbag2_interfaces::srv::TogglePaused_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_interfaces
max_serialized_size_TogglePaused_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static bool _TogglePaused_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::srv::TogglePaused_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TogglePaused_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosbag2_interfaces::srv::TogglePaused_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TogglePaused_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::srv::TogglePaused_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TogglePaused_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosbag2_interfaces::srv::TogglePaused_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TogglePaused_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TogglePaused_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _TogglePaused_Response__callbacks = {
  "rosbag2_interfaces::srv",
  "TogglePaused_Response",
  _TogglePaused_Response__cdr_serialize,
  _TogglePaused_Response__cdr_deserialize,
  _TogglePaused_Response__get_serialized_size,
  _TogglePaused_Response__get_serialized_size_with_initial_alignment,
  _TogglePaused_Response__max_serialized_size
};

static rosidl_message_type_support_t _TogglePaused_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TogglePaused_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace rosbag2_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rosbag2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbag2_interfaces::srv::TogglePaused_Response>()
{
  return &rosbag2_interfaces::srv::typesupport_microxrcedds_cpp::_TogglePaused_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosbag2_interfaces, srv, TogglePaused_Response)() {
  return &rosbag2_interfaces::srv::typesupport_microxrcedds_cpp::_TogglePaused_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace rosbag2_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _TogglePaused__callbacks = {
  "rosbag2_interfaces::srv",
  "TogglePaused",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosbag2_interfaces, srv, TogglePaused_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosbag2_interfaces, srv, TogglePaused_Response),
};

static rosidl_service_type_support_t _TogglePaused__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TogglePaused__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace rosbag2_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rosbag2_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<rosbag2_interfaces::srv::TogglePaused>()
{
  return &rosbag2_interfaces::srv::typesupport_microxrcedds_cpp::_TogglePaused__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosbag2_interfaces, srv, TogglePaused)() {
  return &rosbag2_interfaces::srv::typesupport_microxrcedds_cpp::_TogglePaused__handle;
}

#ifdef __cplusplus
}
#endif
