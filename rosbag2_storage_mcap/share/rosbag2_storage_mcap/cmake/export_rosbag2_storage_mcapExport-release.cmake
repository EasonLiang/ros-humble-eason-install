#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosbag2_storage_mcap::rosbag2_storage_mcap" for configuration "Release"
set_property(TARGET rosbag2_storage_mcap::rosbag2_storage_mcap APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rosbag2_storage_mcap::rosbag2_storage_mcap PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librosbag2_storage_mcap.so"
  IMPORTED_SONAME_RELEASE "librosbag2_storage_mcap.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosbag2_storage_mcap::rosbag2_storage_mcap )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosbag2_storage_mcap::rosbag2_storage_mcap "${_IMPORT_PREFIX}/lib/librosbag2_storage_mcap.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
