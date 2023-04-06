#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qt_gui_cpp::qt_gui_cpp" for configuration ""
set_property(TARGET qt_gui_cpp::qt_gui_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(qt_gui_cpp::qt_gui_cpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libqt_gui_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libqt_gui_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS qt_gui_cpp::qt_gui_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_qt_gui_cpp::qt_gui_cpp "${_IMPORT_PREFIX}/lib/libqt_gui_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
