# This file was generated automatically by cmkr.

cmake_minimum_required(VERSION 3.15)

# Regenerate CMakeLists.txt automatically in the root project
set(CMKR_ROOT_PROJECT OFF)
if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
	set(CMKR_ROOT_PROJECT ON)

	# Bootstrap cmkr
	include(cmkr.cmake OPTIONAL RESULT_VARIABLE CMKR_INCLUDE_RESULT)
	if(CMKR_INCLUDE_RESULT)
		cmkr()
	endif()

	# Enable folder support
	set_property(GLOBAL PROPERTY USE_FOLDERS ON)
endif()

# Create a configure-time dependency on cmake.toml to improve IDE support
if(CMKR_ROOT_PROJECT)
	configure_file(cmake.toml cmake.toml COPYONLY)
endif()

project(example
	VERSION
		0.1.0
)

# Target hello_world
set(hello_world_SOURCES
	"src/hello_world.cpp"
	cmake.toml
)

add_executable(hello_world ${hello_world_SOURCES})

get_directory_property(CMKR_VS_STARTUP_PROJECT DIRECTORY ${PROJECT_SOURCE_DIR} DEFINITION VS_STARTUP_PROJECT)
if(NOT CMKR_VS_STARTUP_PROJECT)
	set_property(DIRECTORY ${PROJECT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT hello_world)
endif()

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${hello_world_SOURCES})

# Target Rekenuh
set(Rekenuh_SOURCES
	"src/Rekenuh.cpp"
	cmake.toml
)

add_executable(Rekenuh ${Rekenuh_SOURCES})

get_directory_property(CMKR_VS_STARTUP_PROJECT DIRECTORY ${PROJECT_SOURCE_DIR} DEFINITION VS_STARTUP_PROJECT)
if(NOT CMKR_VS_STARTUP_PROJECT)
	set_property(DIRECTORY ${PROJECT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Rekenuh)
endif()

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${Rekenuh_SOURCES})

# Target Login
set(Login_SOURCES
	"src/Login.cpp"
	cmake.toml
)

add_executable(Login ${Login_SOURCES})

get_directory_property(CMKR_VS_STARTUP_PROJECT DIRECTORY ${PROJECT_SOURCE_DIR} DEFINITION VS_STARTUP_PROJECT)
if(NOT CMKR_VS_STARTUP_PROJECT)
	set_property(DIRECTORY ${PROJECT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Login)
endif()

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${Login_SOURCES})

