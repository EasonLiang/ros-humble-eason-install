// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbag2_storage_mcap_testdata:msg/ComplexMsgDependsOnIdl.idl
// generated code does not contain a copyright notice

#ifndef ROSBAG2_STORAGE_MCAP_TESTDATA__MSG__DETAIL__COMPLEX_MSG_DEPENDS_ON_IDL__STRUCT_H_
#define ROSBAG2_STORAGE_MCAP_TESTDATA__MSG__DETAIL__COMPLEX_MSG_DEPENDS_ON_IDL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a'
#include "rosbag2_storage_mcap_testdata/msg/detail/basic_idl__struct.h"

/// Struct defined in msg/ComplexMsgDependsOnIdl in the package rosbag2_storage_mcap_testdata.
typedef struct rosbag2_storage_mcap_testdata__msg__ComplexMsgDependsOnIdl
{
  rosbag2_storage_mcap_testdata__msg__BasicIdl a;
} rosbag2_storage_mcap_testdata__msg__ComplexMsgDependsOnIdl;

// Struct for a sequence of rosbag2_storage_mcap_testdata__msg__ComplexMsgDependsOnIdl.
typedef struct rosbag2_storage_mcap_testdata__msg__ComplexMsgDependsOnIdl__Sequence
{
  rosbag2_storage_mcap_testdata__msg__ComplexMsgDependsOnIdl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_storage_mcap_testdata__msg__ComplexMsgDependsOnIdl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBAG2_STORAGE_MCAP_TESTDATA__MSG__DETAIL__COMPLEX_MSG_DEPENDS_ON_IDL__STRUCT_H_
