#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_2d_overlay_plugins::rviz_2d_overlay_plugins" for configuration ""
set_property(TARGET rviz_2d_overlay_plugins::rviz_2d_overlay_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rviz_2d_overlay_plugins::rviz_2d_overlay_plugins PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librviz_2d_overlay_plugins.so"
  IMPORTED_SONAME_NOCONFIG "librviz_2d_overlay_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_2d_overlay_plugins::rviz_2d_overlay_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_2d_overlay_plugins::rviz_2d_overlay_plugins "${_IMPORT_PREFIX}/lib/librviz_2d_overlay_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
