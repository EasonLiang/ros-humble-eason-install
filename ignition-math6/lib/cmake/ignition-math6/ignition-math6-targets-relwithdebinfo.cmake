#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ignition-math6::ignition-math6" for configuration "RelWithDebInfo"
set_property(TARGET ignition-math6::ignition-math6 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ignition-math6::ignition-math6 PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libignition-math6.so.6.9.2"
  IMPORTED_SONAME_RELWITHDEBINFO "libignition-math6.so.6"
  )

list(APPEND _IMPORT_CHECK_TARGETS ignition-math6::ignition-math6 )
list(APPEND _IMPORT_CHECK_FILES_FOR_ignition-math6::ignition-math6 "${_IMPORT_PREFIX}/lib/libignition-math6.so.6.9.2" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
