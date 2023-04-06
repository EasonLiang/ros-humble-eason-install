// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from rosbag2_storage_mcap_testdata:msg/ComplexMsgDependsOnIdl.idl
// generated code does not contain a copyright notice

#ifndef ROSBAG2_STORAGE_MCAP_TESTDATA__MSG__COMPLEX_MSG_DEPENDS_ON_IDL__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define ROSBAG2_STORAGE_MCAP_TESTDATA__MSG__COMPLEX_MSG_DEPENDS_ON_IDL__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosbag2_storage_mcap_testdata/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "rosbag2_storage_mcap_testdata/msg/detail/complex_msg_depends_on_idl__struct.hpp"

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

namespace rosbag2_storage_mcap_testdata
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
cdr_serialize(
  const rosbag2_storage_mcap_testdata::msg::ComplexMsgDependsOnIdl & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
cdr_deserialize(
  ucdrBuffer * cdr,
  rosbag2_storage_mcap_testdata::msg::ComplexMsgDependsOnIdl & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
get_serialized_size(
  const rosbag2_storage_mcap_testdata::msg::ComplexMsgDependsOnIdl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
max_serialized_size_ComplexMsgDependsOnIdl(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rosbag2_storage_mcap_testdata

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosbag2_storage_mcap_testdata
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosbag2_storage_mcap_testdata, msg, ComplexMsgDependsOnIdl)();

#ifdef __cplusplus
}
#endif

#endif  // ROSBAG2_STORAGE_MCAP_TESTDATA__MSG__COMPLEX_MSG_DEPENDS_ON_IDL__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
