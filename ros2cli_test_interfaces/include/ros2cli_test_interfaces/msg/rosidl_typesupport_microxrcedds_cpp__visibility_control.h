// generated from
// rosidl_typesupport_microxrcedds_cpp/resource/rosidl_typesupport_microxrcedds_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ROS2CLI_TEST_INTERFACES__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP__VISIBILITY_CONTROL_H_
#define ROS2CLI_TEST_INTERFACES__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_ros2cli_test_interfaces __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_IMPORT_ros2cli_test_interfaces __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_ros2cli_test_interfaces __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_IMPORT_ros2cli_test_interfaces __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_BUILDING_DLL_ros2cli_test_interfaces
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_ros2cli_test_interfaces
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_IMPORT_ros2cli_test_interfaces
  #endif
#else
  #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_ros2cli_test_interfaces __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_IMPORT_ros2cli_test_interfaces
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_ros2cli_test_interfaces
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ROS2CLI_TEST_INTERFACES__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP__VISIBILITY_CONTROL_H_