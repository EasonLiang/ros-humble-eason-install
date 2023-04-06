#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "robot_state_publisher::robot_state_publisher_node" for configuration ""
set_property(TARGET robot_state_publisher::robot_state_publisher_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(robot_state_publisher::robot_state_publisher_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librobot_state_publisher_node.so"
  IMPORTED_SONAME_NOCONFIG "librobot_state_publisher_node.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS robot_state_publisher::robot_state_publisher_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_robot_state_publisher::robot_state_publisher_node "${_IMPORT_PREFIX}/lib/librobot_state_publisher_node.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
