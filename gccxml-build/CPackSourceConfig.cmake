# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


SET(CPACK_BINARY_7Z "")
SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_IFW "")
SET(CPACK_BINARY_NSIS "")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_RPM "")
SET(CPACK_BINARY_STGZ "")
SET(CPACK_BINARY_TBZ2 "")
SET(CPACK_BINARY_TGZ "")
SET(CPACK_BINARY_TXZ "")
SET(CPACK_BINARY_TZ "")
SET(CPACK_BINARY_WIX "")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_CMAKE_GENERATOR "Visual Studio 9 2008")
SET(CPACK_COMPONENTS_ALL "Documentation;RuntimeExecutable;RuntimeLibrary")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_GENERATOR "NSIS")
SET(CPACK_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp$;\\.#;/#")
SET(CPACK_INSTALLED_DIRECTORIES "Q:/Kitware/gccxml;/")
SET(CPACK_INSTALL_CMAKE_PROJECTS "")
SET(CPACK_INSTALL_PREFIX "T:/gccxml")
SET(CPACK_MODULE_PATH "")
SET(CPACK_NSIS_CONTACT "kitware@kitware.com")
SET(CPACK_NSIS_DISPLAY_NAME "gccxml 0.9 - XML output for GCC")
SET(CPACK_NSIS_DISPLAY_NAME_SET "TRUE")
SET(CPACK_NSIS_EXTRA_INSTALL_COMMANDS "
  CreateShortCut \"$SMPROGRAMS\\$STARTMENU_FOLDER\\How to Run GCC-XML.lnk\" \"$INSTDIR\\share\\doc\\gccxml-0.9\\gccxml.html\"
  ExecWait '\"$INSTDIR\\bin\\gccxml_vcconfig.bat\"'
")
SET(CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS "
  !insertmacro MUI_STARTMENU_GETFOLDER Application $MUI_TEMP
  Delete \"$SMPROGRAMS\\$MUI_TEMP\\How to Run GCC-XML.lnk\"
")
SET(CPACK_NSIS_HELP_LINK "http://www.gccxml.org")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
SET(CPACK_NSIS_PACKAGE_NAME "gccxml 0.9 - XML output for GCC")
SET(CPACK_NSIS_URL_INFO_ABOUT "http://www.kitware.com")
SET(CPACK_OUTPUT_CONFIG_FILE "Q:/Kitware/gccxml-build/CPackConfig.cmake")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "Q:/Kitware/gccxml/GCC_XML/Copyright.txt")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "gccxml Complete")
SET(CPACK_PACKAGE_FILE_NAME "gccxml-0.9.0")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "gccxml 0.9")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "gccxml 0.9")
SET(CPACK_PACKAGE_NAME "gccxml")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "Kitware")
SET(CPACK_PACKAGE_VERSION "0.9.0")
SET(CPACK_PACKAGE_VERSION_MAJOR "0")
SET(CPACK_PACKAGE_VERSION_MINOR "9")
SET(CPACK_PACKAGE_VERSION_PATCH "0")
SET(CPACK_RESOURCE_FILE_LICENSE "Q:/Kitware/gccxml/GCC_XML/Copyright.txt")
SET(CPACK_RESOURCE_FILE_README "T:/CMake/share/cmake-3.3/Templates/CPack.GenericDescription.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "T:/CMake/share/cmake-3.3/Templates/CPack.GenericWelcome.txt")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_7Z "")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "NSIS")
SET(CPACK_SOURCE_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp$;\\.#;/#")
SET(CPACK_SOURCE_INSTALLED_DIRECTORIES "Q:/Kitware/gccxml;/")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "Q:/Kitware/gccxml-build/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_PACKAGE_FILE_NAME "gccxml-0.9.0")
SET(CPACK_SOURCE_TBZ2 "")
SET(CPACK_SOURCE_TGZ "")
SET(CPACK_SOURCE_TOPLEVEL_TAG "win32-AMD64-Source")
SET(CPACK_SOURCE_TXZ "")
SET(CPACK_SOURCE_TZ "")
SET(CPACK_SOURCE_ZIP "")
SET(CPACK_STRIP_FILES "")
SET(CPACK_SYSTEM_NAME "win32-AMD64")
SET(CPACK_TOPLEVEL_TAG "win32-AMD64-Source")
SET(CPACK_WIX_SIZEOF_VOID_P "4")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "Q:/Kitware/gccxml-build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
