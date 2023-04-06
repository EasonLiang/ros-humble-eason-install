// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from rmw_dds_common:msg/NodeEntitiesInfo.idl
// generated code does not contain a copyright notice

#ifndef RMW_DDS_COMMON__MSG__NODE_ENTITIES_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define RMW_DDS_COMMON__MSG__NODE_ENTITIES_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmw_dds_common/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "rmw_dds_common/msg/detail/node_entities_info__struct.hpp"

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

namespace rmw_dds_common
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
cdr_serialize(
  const rmw_dds_common::msg::NodeEntitiesInfo & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
cdr_deserialize(
  ucdrBuffer * cdr,
  rmw_dds_common::msg::NodeEntitiesInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
get_serialized_size(
  const rmw_dds_common::msg::NodeEntitiesInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
max_serialized_size_NodeEntitiesInfo(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rmw_dds_common

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rmw_dds_common
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rmw_dds_common, msg, NodeEntitiesInfo)();

#ifdef __cplusplus
}
#endif

#endif  // RMW_DDS_COMMON__MSG__NODE_ENTITIES_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_