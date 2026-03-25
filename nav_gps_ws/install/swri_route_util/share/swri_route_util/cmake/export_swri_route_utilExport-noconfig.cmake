#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "swri_route_util::swri_route_util" for configuration ""
set_property(TARGET swri_route_util::swri_route_util APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(swri_route_util::swri_route_util PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "swri_geometry_util::swri_geometry_util"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libswri_route_util.so"
  IMPORTED_SONAME_NOCONFIG "libswri_route_util.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS swri_route_util::swri_route_util )
list(APPEND _IMPORT_CHECK_FILES_FOR_swri_route_util::swri_route_util "${_IMPORT_PREFIX}/lib/libswri_route_util.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
