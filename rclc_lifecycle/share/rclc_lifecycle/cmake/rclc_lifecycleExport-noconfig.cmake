#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclc_lifecycle::rclc_lifecycle" for configuration ""
set_property(TARGET rclc_lifecycle::rclc_lifecycle APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rclc_lifecycle::rclc_lifecycle PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librclc_lifecycle.so"
  IMPORTED_SONAME_NOCONFIG "librclc_lifecycle.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclc_lifecycle::rclc_lifecycle )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclc_lifecycle::rclc_lifecycle "${_IMPORT_PREFIX}/lib/librclc_lifecycle.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
