# Install script for directory: Q:/Kitware/gccxml/GCC_XML/VcInstall

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
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "Q:/Kitware/gccxml-build/bin/Debug/gccxml_vcconfig.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "Q:/Kitware/gccxml-build/bin/Release/gccxml_vcconfig.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "Q:/Kitware/gccxml-build/bin/MinSizeRel/gccxml_vcconfig.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "Q:/Kitware/gccxml-build/bin/RelWithDebInfo/gccxml_vcconfig.exe")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9/VcInstall" TYPE FILE FILES
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc10Include.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc10PlatformSDK.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc6Include.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc71Include.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc71PlatformSDK.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc7Include.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc7PlatformSDK.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc8ExpressInclude.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc8ExpressPlatformSDK.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc8Include.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc8PlatformSDK.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc8sp1ExpressInclude.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc8sp1Include.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc8sp1PlatformSDK.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc9Include.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc9PlatformSDK.patch"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc9sp1Include.patch"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9/VcInstall" TYPE FILE FILES
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vcCat.readme.txt"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vcPatch.readme.txt"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vc_helper"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9/VcInstall" TYPE PROGRAM FILES
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vcCat.exe"
    "Q:/Kitware/gccxml/GCC_XML/VcInstall/vcPatch.exe"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeExecutable")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "Q:/Kitware/gccxml-build/GCC_XML/VcInstall/gccxml_vcconfig.bat")
endif()

