// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from tf2_msgs:srv/FrameGraph.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define TF2_MSGS__SRV__FRAME_GRAPH__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "tf2_msgs/srv/detail/frame_graph__struct.hpp"

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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
cdr_serialize(
  const tf2_msgs::srv::FrameGraph_Request & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  tf2_msgs::srv::FrameGraph_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
get_serialized_size(
  const tf2_msgs::srv::FrameGraph_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
max_serialized_size_FrameGraph_Request(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tf2_msgs, srv, FrameGraph_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
// already included above
// #include "tf2_msgs/srv/detail/frame_graph__struct.hpp"

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

// already included above
// #include "ucdr/microcdr.h"

namespace tf2_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
cdr_serialize(
  const tf2_msgs::srv::FrameGraph_Response & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  tf2_msgs::srv::FrameGraph_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
get_serialized_size(
  const tf2_msgs::srv::FrameGraph_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
max_serialized_size_FrameGraph_Response(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace tf2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tf2_msgs, srv, FrameGraph_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tf2_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tf2_msgs, srv, FrameGraph)();

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
