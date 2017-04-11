# Install script for directory: Q:/Kitware/gccxml/GCC_XML/Support

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9" TYPE FILE FILES "Q:/Kitware/gccxml/GCC_XML/Support/gccxml_identify_compiler.cc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9" TYPE DIRECTORY FILES
    "Q:/Kitware/gccxml/GCC_XML/Support/GCC"
    "Q:/Kitware/gccxml/GCC_XML/Support/Intel"
    "Q:/Kitware/gccxml/GCC_XML/Support/MIPSpro"
    "Q:/Kitware/gccxml/GCC_XML/Support/Sun"
    "Q:/Kitware/gccxml/GCC_XML/Support/IBM"
    REGEX "/find\\_flags$" PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ OWNER_EXECUTE GROUP_EXECUTE WORLD_EXECUTE REGEX "/[^/]*\\.sh$" PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ OWNER_EXECUTE GROUP_EXECUTE WORLD_EXECUTE REGEX "/cvs$" EXCLUDE REGEX "/cmakelists\\.txt$" EXCLUDE REGEX "/\\.\\#[^/]*$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9" TYPE DIRECTORY FILES "Q:/Kitware/gccxml/GCC_XML/Support/Borland" REGEX "/cvs$" EXCLUDE REGEX "/cmakelists\\.txt$" EXCLUDE REGEX "/\\.\\#[^/]*$" EXCLUDE)
endif()

