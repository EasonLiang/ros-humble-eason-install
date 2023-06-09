// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from nav_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/load_map__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "nav_msgs/srv/detail/load_map__struct.hpp"

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

namespace nav_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_serialize(
  const nav_msgs::srv::LoadMap_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: map_url
  rv = ucdr_serialize_string(cdr, ros_message.map_url.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  nav_msgs::srv::LoadMap_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: map_url
  ros_message.map_url.resize(ros_message.map_url.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.map_url[0], ros_message.map_url.capacity());
  if (rv) {
    ros_message.map_url.resize(std::strlen(&ros_message.map_url[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
get_serialized_size(
  const nav_msgs::srv::LoadMap_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: map_url
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.map_url.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
max_serialized_size_LoadMap_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: map_url
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _LoadMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::LoadMap_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LoadMap_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav_msgs::srv::LoadMap_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LoadMap_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::LoadMap_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LoadMap_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::LoadMap_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _LoadMap_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_LoadMap_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _LoadMap_Request__callbacks = {
  "nav_msgs::srv",
  "LoadMap_Request",
  _LoadMap_Request__cdr_serialize,
  _LoadMap_Request__cdr_deserialize,
  _LoadMap_Request__get_serialized_size,
  _LoadMap_Request__get_serialized_size_with_initial_alignment,
  _LoadMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _LoadMap_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_LoadMap_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace nav_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_msgs::srv::LoadMap_Request>()
{
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_LoadMap_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, LoadMap_Request)() {
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_LoadMap_Request__handle;
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
namespace nav_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const nav_msgs::msg::OccupancyGrid &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  nav_msgs::msg::OccupancyGrid &);

size_t get_serialized_size(
  const nav_msgs::msg::OccupancyGrid &,
  size_t current_alignment);

size_t
max_serialized_size_OccupancyGrid(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace nav_msgs


namespace nav_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_serialize(
  const nav_msgs::srv::LoadMap_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: map
  rv = nav_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.map,
    cdr);
  // Member: result
  rv = ucdr_serialize_uint8_t(cdr, ros_message.result);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  nav_msgs::srv::LoadMap_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: map
  rv = nav_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.map);
  // Member: result
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.result);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
get_serialized_size(
  const nav_msgs::srv::LoadMap_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: map
  current_alignment += nav_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.map,
    current_alignment);
  // Member: result
  {
    const size_t item_size = sizeof(ros_message.result);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
max_serialized_size_LoadMap_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: map
  current_alignment += nav_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_OccupancyGrid(
    full_bounded,
    current_alignment);
  // Member: result
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static bool _LoadMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::LoadMap_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LoadMap_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav_msgs::srv::LoadMap_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LoadMap_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::LoadMap_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LoadMap_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::LoadMap_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _LoadMap_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_LoadMap_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _LoadMap_Response__callbacks = {
  "nav_msgs::srv",
  "LoadMap_Response",
  _LoadMap_Response__cdr_serialize,
  _LoadMap_Response__cdr_deserialize,
  _LoadMap_Response__get_serialized_size,
  _LoadMap_Response__get_serialized_size_with_initial_alignment,
  _LoadMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _LoadMap_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_LoadMap_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace nav_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_msgs::srv::LoadMap_Response>()
{
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_LoadMap_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, LoadMap_Response)() {
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_LoadMap_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace nav_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _LoadMap__callbacks = {
  "nav_msgs::srv",
  "LoadMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, LoadMap_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, LoadMap_Response),
};

static rosidl_service_type_support_t _LoadMap__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_LoadMap__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace nav_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_nav_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<nav_msgs::srv::LoadMap>()
{
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_LoadMap__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, LoadMap)() {
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_LoadMap__handle;
}

#ifdef __cplusplus
}
#endif
