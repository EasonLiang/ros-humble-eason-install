// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from turtlesim:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__COLOR__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define TURTLESIM__MSG__COLOR__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "turtlesim/msg/detail/color__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "ucdr/microcdr.h"

namespace turtlesim
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_serialize(
  const turtlesim::msg::Color & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlesim::msg::Color & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
get_serialized_size(
  const turtlesim::msg::Color & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
max_serialized_size_Color(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlesim, msg, Color)();

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__MSG__COLOR__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
