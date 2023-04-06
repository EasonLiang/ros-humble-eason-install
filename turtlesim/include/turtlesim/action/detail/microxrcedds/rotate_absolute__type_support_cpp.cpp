// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice
#include "turtlesim/action/detail/rotate_absolute__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "turtlesim/action/detail/rotate_absolute__struct.hpp"

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

namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::action::RotateAbsolute_Goal & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: theta
  rv = ucdr_serialize_float(cdr, ros_message.theta);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::action::RotateAbsolute_Goal & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: theta
  rv = ucdr_deserialize_float(cdr, &ros_message.theta);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::action::RotateAbsolute_Goal & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: theta
  {
    const size_t item_size = sizeof(ros_message.theta);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_RotateAbsolute_Goal(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: theta
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _RotateAbsolute_Goal__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RotateAbsolute_Goal__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim::action::RotateAbsolute_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RotateAbsolute_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RotateAbsolute_Goal__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Goal *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RotateAbsolute_Goal__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RotateAbsolute_Goal(&full_bounded, 0);
}

static message_type_support_callbacks_t _RotateAbsolute_Goal__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_Goal",
  _RotateAbsolute_Goal__cdr_serialize,
  _RotateAbsolute_Goal__cdr_deserialize,
  _RotateAbsolute_Goal__get_serialized_size,
  _RotateAbsolute_Goal__get_serialized_size_with_initial_alignment,
  _RotateAbsolute_Goal__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_Goal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Goal>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_Goal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_Goal)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_Goal__handle;
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

namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::action::RotateAbsolute_Result & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: delta
  rv = ucdr_serialize_float(cdr, ros_message.delta);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::action::RotateAbsolute_Result & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: delta
  rv = ucdr_deserialize_float(cdr, &ros_message.delta);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::action::RotateAbsolute_Result & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: delta
  {
    const size_t item_size = sizeof(ros_message.delta);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_RotateAbsolute_Result(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: delta
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _RotateAbsolute_Result__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RotateAbsolute_Result__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim::action::RotateAbsolute_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RotateAbsolute_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RotateAbsolute_Result__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Result *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RotateAbsolute_Result__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RotateAbsolute_Result(&full_bounded, 0);
}

static message_type_support_callbacks_t _RotateAbsolute_Result__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_Result",
  _RotateAbsolute_Result__cdr_serialize,
  _RotateAbsolute_Result__cdr_deserialize,
  _RotateAbsolute_Result__get_serialized_size,
  _RotateAbsolute_Result__get_serialized_size_with_initial_alignment,
  _RotateAbsolute_Result__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_Result__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Result>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_Result__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_Result)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_Result__handle;
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

namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::action::RotateAbsolute_Feedback & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: remaining
  rv = ucdr_serialize_float(cdr, ros_message.remaining);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::action::RotateAbsolute_Feedback & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: remaining
  rv = ucdr_deserialize_float(cdr, &ros_message.remaining);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::action::RotateAbsolute_Feedback & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: remaining
  {
    const size_t item_size = sizeof(ros_message.remaining);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_RotateAbsolute_Feedback(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: remaining
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _RotateAbsolute_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RotateAbsolute_Feedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim::action::RotateAbsolute_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RotateAbsolute_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RotateAbsolute_Feedback__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_Feedback *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RotateAbsolute_Feedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RotateAbsolute_Feedback(&full_bounded, 0);
}

static message_type_support_callbacks_t _RotateAbsolute_Feedback__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_Feedback",
  _RotateAbsolute_Feedback__cdr_serialize,
  _RotateAbsolute_Feedback__cdr_deserialize,
  _RotateAbsolute_Feedback__get_serialized_size,
  _RotateAbsolute_Feedback__get_serialized_size_with_initial_alignment,
  _RotateAbsolute_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_Feedback__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Feedback>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_Feedback__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_Feedback)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_Feedback__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace turtlesim
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const turtlesim::action::RotateAbsolute_Goal &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  turtlesim::action::RotateAbsolute_Goal &);

size_t get_serialized_size(
  const turtlesim::action::RotateAbsolute_Goal &,
  size_t current_alignment);

size_t
max_serialized_size_RotateAbsolute_Goal(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::action::RotateAbsolute_SendGoal_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  rv = turtlesim::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::action::RotateAbsolute_SendGoal_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: goal
  rv = turtlesim::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::action::RotateAbsolute_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: goal
  current_alignment += turtlesim::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_RotateAbsolute_SendGoal_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: goal
  current_alignment += turtlesim::action::typesupport_microxrcedds_cpp::max_serialized_size_RotateAbsolute_Goal(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _RotateAbsolute_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RotateAbsolute_SendGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim::action::RotateAbsolute_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RotateAbsolute_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RotateAbsolute_SendGoal_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RotateAbsolute_SendGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RotateAbsolute_SendGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _RotateAbsolute_SendGoal_Request__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal_Request",
  _RotateAbsolute_SendGoal_Request__cdr_serialize,
  _RotateAbsolute_SendGoal_Request__cdr_deserialize,
  _RotateAbsolute_SendGoal_Request__get_serialized_size,
  _RotateAbsolute_SendGoal_Request__get_serialized_size_with_initial_alignment,
  _RotateAbsolute_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_SendGoal_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal_Request>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_SendGoal_Request)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_SendGoal_Request__handle;
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


namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::action::RotateAbsolute_SendGoal_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: accepted
  rv = ucdr_serialize_bool(cdr, ros_message.accepted);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::action::RotateAbsolute_SendGoal_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: accepted
  rv = ucdr_deserialize_bool(cdr, &ros_message.accepted);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::action::RotateAbsolute_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  {
    const size_t item_size = sizeof(ros_message.accepted);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_RotateAbsolute_SendGoal_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _RotateAbsolute_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RotateAbsolute_SendGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim::action::RotateAbsolute_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RotateAbsolute_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RotateAbsolute_SendGoal_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RotateAbsolute_SendGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RotateAbsolute_SendGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _RotateAbsolute_SendGoal_Response__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal_Response",
  _RotateAbsolute_SendGoal_Response__cdr_serialize,
  _RotateAbsolute_SendGoal_Response__cdr_deserialize,
  _RotateAbsolute_SendGoal_Response__get_serialized_size,
  _RotateAbsolute_SendGoal_Response__get_serialized_size_with_initial_alignment,
  _RotateAbsolute_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_SendGoal_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal_Response>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_SendGoal_Response)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _RotateAbsolute_SendGoal__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_SendGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_SendGoal_Response),
};

static rosidl_service_type_support_t _RotateAbsolute_SendGoal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_SendGoal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_SendGoal)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_SendGoal__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::action::RotateAbsolute_GetResult_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::action::RotateAbsolute_GetResult_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::action::RotateAbsolute_GetResult_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_RotateAbsolute_GetResult_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _RotateAbsolute_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RotateAbsolute_GetResult_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim::action::RotateAbsolute_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RotateAbsolute_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RotateAbsolute_GetResult_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RotateAbsolute_GetResult_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RotateAbsolute_GetResult_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _RotateAbsolute_GetResult_Request__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_GetResult_Request",
  _RotateAbsolute_GetResult_Request__cdr_serialize,
  _RotateAbsolute_GetResult_Request__cdr_deserialize,
  _RotateAbsolute_GetResult_Request__get_serialized_size,
  _RotateAbsolute_GetResult_Request__get_serialized_size_with_initial_alignment,
  _RotateAbsolute_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_GetResult_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_GetResult_Request>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_GetResult_Request)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_GetResult_Request__handle;
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
namespace turtlesim
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const turtlesim::action::RotateAbsolute_Result &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  turtlesim::action::RotateAbsolute_Result &);

size_t get_serialized_size(
  const turtlesim::action::RotateAbsolute_Result &,
  size_t current_alignment);

size_t
max_serialized_size_RotateAbsolute_Result(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::action::RotateAbsolute_GetResult_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message.status);
  // Member: result
  rv = turtlesim::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.result,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::action::RotateAbsolute_GetResult_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.status);
  // Member: result
  rv = turtlesim::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.result);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::action::RotateAbsolute_GetResult_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status
  {
    const size_t item_size = sizeof(ros_message.status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: result
  current_alignment += turtlesim::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.result,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_RotateAbsolute_GetResult_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: result
  current_alignment += turtlesim::action::typesupport_microxrcedds_cpp::max_serialized_size_RotateAbsolute_Result(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _RotateAbsolute_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RotateAbsolute_GetResult_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim::action::RotateAbsolute_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RotateAbsolute_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RotateAbsolute_GetResult_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RotateAbsolute_GetResult_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RotateAbsolute_GetResult_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _RotateAbsolute_GetResult_Response__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_GetResult_Response",
  _RotateAbsolute_GetResult_Response__cdr_serialize,
  _RotateAbsolute_GetResult_Response__cdr_deserialize,
  _RotateAbsolute_GetResult_Response__get_serialized_size,
  _RotateAbsolute_GetResult_Response__get_serialized_size_with_initial_alignment,
  _RotateAbsolute_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_GetResult_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_GetResult_Response>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_GetResult_Response)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _RotateAbsolute_GetResult__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_GetResult_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_GetResult_Response),
};

static rosidl_service_type_support_t _RotateAbsolute_GetResult__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim::action::RotateAbsolute_GetResult>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_GetResult__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_GetResult)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_GetResult__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace turtlesim
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const turtlesim::action::RotateAbsolute_Feedback &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  turtlesim::action::RotateAbsolute_Feedback &);

size_t get_serialized_size(
  const turtlesim::action::RotateAbsolute_Feedback &,
  size_t current_alignment);

size_t
max_serialized_size_RotateAbsolute_Feedback(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::action::RotateAbsolute_FeedbackMessage & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  rv = turtlesim::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::action::RotateAbsolute_FeedbackMessage & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: feedback
  rv = turtlesim::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.feedback);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::action::RotateAbsolute_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: feedback
  current_alignment += turtlesim::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.feedback,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_RotateAbsolute_FeedbackMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: feedback
  current_alignment += turtlesim::action::typesupport_microxrcedds_cpp::max_serialized_size_RotateAbsolute_Feedback(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _RotateAbsolute_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RotateAbsolute_FeedbackMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim::action::RotateAbsolute_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RotateAbsolute_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RotateAbsolute_FeedbackMessage__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlesim::action::RotateAbsolute_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RotateAbsolute_FeedbackMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RotateAbsolute_FeedbackMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t _RotateAbsolute_FeedbackMessage__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_FeedbackMessage",
  _RotateAbsolute_FeedbackMessage__cdr_serialize,
  _RotateAbsolute_FeedbackMessage__cdr_deserialize,
  _RotateAbsolute_FeedbackMessage__get_serialized_size,
  _RotateAbsolute_FeedbackMessage__get_serialized_size_with_initial_alignment,
  _RotateAbsolute_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_FeedbackMessage__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RotateAbsolute_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_FeedbackMessage>()
{
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, action, RotateAbsolute_FeedbackMessage)() {
  return &turtlesim::action::typesupport_microxrcedds_cpp::_RotateAbsolute_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
