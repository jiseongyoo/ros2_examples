# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pub_sub_cpp_template_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pub_sub_cpp_template_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pub_sub_cpp_template_FOUND FALSE)
  elseif(NOT pub_sub_cpp_template_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pub_sub_cpp_template_FOUND FALSE)
  endif()
  return()
endif()
set(_pub_sub_cpp_template_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pub_sub_cpp_template_FIND_QUIETLY)
  message(STATUS "Found pub_sub_cpp_template: 0.0.0 (${pub_sub_cpp_template_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pub_sub_cpp_template' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pub_sub_cpp_template_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pub_sub_cpp_template_DIR}/${_extra}")
endforeach()
