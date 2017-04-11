# Install script for directory: Q:/Kitware/gccxml/GCC_XML

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "T:/gccxml")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9" TYPE FILE FILES "Q:/Kitware/gccxml-build/GCC_XML/GXFront/InstallOnly/gccxml_config")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("Q:/Kitware/gccxml-build/GCC_XML/KWSys/cmake_install.cmake")
  include("Q:/Kitware/gccxml-build/GCC_XML/Support/cmake_install.cmake")
  include("Q:/Kitware/gccxml-build/GCC_XML/VcInstall/cmake_install.cmake")
  include("Q:/Kitware/gccxml-build/GCC_XML/GXFront/cmake_install.cmake")
  include("Q:/Kitware/gccxml-build/GCC_XML/Testing/cmake_install.cmake")

endif()

