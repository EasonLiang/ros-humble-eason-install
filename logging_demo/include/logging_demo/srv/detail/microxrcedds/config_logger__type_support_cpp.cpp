// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from logging_demo:srv/ConfigLogger.idl
// generated code does not contain a copyright notice
#include "logging_demo/srv/detail/config_logger__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "logging_demo/srv/detail/config_logger__struct.hpp"

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

namespace logging_demo
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_logging_demo
cdr_serialize(
  const logging_demo::srv::ConfigLogger_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: logger_name
  rv = ucdr_serialize_string(cdr, ros_message.logger_name.c_str());
  // Member: level
  rv = ucdr_serialize_string(cdr, ros_message.level.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_logging_demo
cdr_deserialize(
  ucdrBuffer * cdr,
  logging_demo::srv::ConfigLogger_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: logger_name
  ros_message.logger_name.resize(ros_message.logger_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.logger_name[0], ros_message.logger_name.capacity());
  if (rv) {
    ros_message.logger_name.resize(std::strlen(&ros_message.logger_name[0]));
  }
  // Member: level
  ros_message.level.resize(ros_message.level.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.level[0], ros_message.level.capacity());
  if (rv) {
    ros_message.level.resize(std::strlen(&ros_message.level[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_logging_demo
get_serialized_size(
  const logging_demo::srv::ConfigLogger_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: logger_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.logger_name.size() + 1;
  // Member: level
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.level.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_logging_demo
max_serialized_size_ConfigLogger_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: logger_name
  *full_bounded = false;
  // Member: level
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _ConfigLogger_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const logging_demo::srv::ConfigLogger_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConfigLogger_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<logging_demo::srv::ConfigLogger_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConfigLogger_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const logging_demo::srv::ConfigLogger_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConfigLogger_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const logging_demo::srv::ConfigLogger_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ConfigLogger_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ConfigLogger_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _ConfigLogger_Request__callbacks = {
  "logging_demo::srv",
  "ConfigLogger_Request",
  _ConfigLogger_Request__cdr_serialize,
  _ConfigLogger_Request__cdr_deserialize,
  _ConfigLogger_Request__get_serialized_size,
  _ConfigLogger_Request__get_serialized_size_with_initial_alignment,
  _ConfigLogger_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConfigLogger_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ConfigLogger_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace logging_demo

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_logging_demo
const rosidl_message_type_support_t *
get_message_type_support_handle<logging_demo::srv::ConfigLogger_Request>()
{
  return &logging_demo::srv::typesupport_microxrcedds_cpp::_ConfigLogger_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, logging_demo, srv, ConfigLogger_Request)() {
  return &logging_demo::srv::typesupport_microxrcedds_cpp::_ConfigLogger_Request__handle;
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

namespace logging_demo
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_logging_demo
cdr_serialize(
  const logging_demo::srv::ConfigLogger_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: success
  rv = ucdr_serialize_bool(cdr, ros_message.success);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_logging_demo
cdr_deserialize(
  ucdrBuffer * cdr,
  logging_demo::srv::ConfigLogger_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: success
  rv = ucdr_deserialize_bool(cdr, &ros_message.success);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_logging_demo
get_serialized_size(
  const logging_demo::srv::ConfigLogger_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message.success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_logging_demo
max_serialized_size_ConfigLogger_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _ConfigLogger_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const logging_demo::srv::ConfigLogger_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConfigLogger_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<logging_demo::srv::ConfigLogger_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConfigLogger_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const logging_demo::srv::ConfigLogger_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConfigLogger_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const logging_demo::srv::ConfigLogger_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ConfigLogger_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ConfigLogger_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _ConfigLogger_Response__callbacks = {
  "logging_demo::srv",
  "ConfigLogger_Response",
  _ConfigLogger_Response__cdr_serialize,
  _ConfigLogger_Response__cdr_deserialize,
  _ConfigLogger_Response__get_serialized_size,
  _ConfigLogger_Response__get_serialized_size_with_initial_alignment,
  _ConfigLogger_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConfigLogger_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ConfigLogger_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace logging_demo

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_logging_demo
const rosidl_message_type_support_t *
get_message_type_support_handle<logging_demo::srv::ConfigLogger_Response>()
{
  return &logging_demo::srv::typesupport_microxrcedds_cpp::_ConfigLogger_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, logging_demo, srv, ConfigLogger_Response)() {
  return &logging_demo::srv::typesupport_microxrcedds_cpp::_ConfigLogger_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace logging_demo
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _ConfigLogger__callbacks = {
  "logging_demo::srv",
  "ConfigLogger",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, logging_demo, srv, ConfigLogger_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, logging_demo, srv, ConfigLogger_Response),
};

static rosidl_service_type_support_t _ConfigLogger__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ConfigLogger__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace logging_demo

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_logging_demo
const rosidl_service_type_support_t *
get_service_type_support_handle<logging_demo::srv::ConfigLogger>()
{
  return &logging_demo::srv::typesupport_microxrcedds_cpp::_ConfigLogger__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, logging_demo, srv, ConfigLogger)() {
  return &logging_demo::srv::typesupport_microxrcedds_cpp::_ConfigLogger__handle;
}

#ifdef __cplusplus
}
#endif
