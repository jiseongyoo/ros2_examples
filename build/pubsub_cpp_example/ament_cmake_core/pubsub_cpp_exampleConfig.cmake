# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pubsub_cpp_example_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pubsub_cpp_example_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pubsub_cpp_example_FOUND FALSE)
  elseif(NOT pubsub_cpp_example_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pubsub_cpp_example_FOUND FALSE)
  endif()
  return()
endif()
set(_pubsub_cpp_example_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pubsub_cpp_example_FIND_QUIETLY)
  message(STATUS "Found pubsub_cpp_example: 1.0.0 (${pubsub_cpp_example_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pubsub_cpp_example' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pubsub_cpp_example_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pubsub_cpp_example_DIR}/${_extra}")
endforeach()
