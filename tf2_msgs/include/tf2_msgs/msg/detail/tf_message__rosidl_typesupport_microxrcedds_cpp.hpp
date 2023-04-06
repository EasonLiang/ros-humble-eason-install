// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__TF_MESSAGE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define TF2_MSGS__MSG__TF_MESSAGE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "tf2_msgs/msg/detail/tf_message__struct.hpp"

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

namespace tf2_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
cdr_serialize(
  const tf2_msgs::msg::TFMessage & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  tf2_msgs::msg::TFMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
get_serialized_size(
  const tf2_msgs::msg::TFMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
max_serialized_size_TFMessage(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tf2_msgs, msg, TFMessage)();

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__MSG__TF_MESSAGE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
