#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kdl_parser::kdl_parser" for configuration ""
set_property(TARGET kdl_parser::kdl_parser APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(kdl_parser::kdl_parser PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "rcutils::rcutils;urdf::urdf"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libkdl_parser.so"
  IMPORTED_SONAME_NOCONFIG "libkdl_parser.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS kdl_parser::kdl_parser )
list(APPEND _IMPORT_CHECK_FILES_FOR_kdl_parser::kdl_parser "${_IMPORT_PREFIX}/lib/libkdl_parser.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
