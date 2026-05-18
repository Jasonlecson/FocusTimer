# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)

set(FOCUS_TIMER_VERSION_FILE "${CMAKE_CURRENT_LIST_DIR}/VERSION")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${FOCUS_TIMER_VERSION_FILE}")

if(EXISTS "${FOCUS_TIMER_VERSION_FILE}")
	file(STRINGS "${FOCUS_TIMER_VERSION_FILE}" FOCUS_TIMER_VERSION_STRING LIMIT_COUNT 1)
endif()

string(STRIP "${FOCUS_TIMER_VERSION_STRING}" FOCUS_TIMER_VERSION_STRING)

if("${FOCUS_TIMER_VERSION_STRING}" STREQUAL "")
	set(FOCUS_TIMER_VERSION_STRING "0.0.0")
endif()

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
# "Trim" the build. Include the minimal set of components, main, and anything it depends on.
idf_build_set_property(MINIMAL_BUILD ON)
add_compile_definitions(FOCUS_TIMER_VERSION="${FOCUS_TIMER_VERSION_STRING}")
project(focustimer)
