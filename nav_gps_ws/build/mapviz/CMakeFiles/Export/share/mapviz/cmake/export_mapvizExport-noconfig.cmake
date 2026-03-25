#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mapviz::rqt_mapviz" for configuration ""
set_property(TARGET mapviz::rqt_mapviz APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mapviz::rqt_mapviz PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librqt_mapviz.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS mapviz::rqt_mapviz )
list(APPEND _IMPORT_CHECK_FILES_FOR_mapviz::rqt_mapviz "${_IMPORT_PREFIX}/lib/librqt_mapviz.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
