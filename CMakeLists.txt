#    CMakeLists.txt
# 
#    Copyright (C) 2016 Felix Häcker <haecker.felix1207@gmail.com>
# 
#    genQR is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
# 
#    genQR is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
# 
#    You should have received a copy of the GNU General Public License
#    along with genQR.  If not, see <http://www.gnu.org/licenses/>.
# 

cmake_minimum_required (VERSION 2.8)
cmake_policy (VERSION 2.8)
project (genQR)
enable_testing ()


# Project info
set (APP_NAME "genQR")
set (VERSION "0.1")
set (VERSION_INFO "Alpha")
set (COPYRIGHT "Copyright 2016 Felix Häcker")
set (DESCRIPTION "Generate QR Codes")
set (RELEASE_NAME "${DESCRIPTION}")
set (WEBSITE "http://haecker-felix.github.io/genqr/")


# base bits
include (GNUInstallDirs)
set (DATADIR "${CMAKE_INSTALL_FULL_DATAROOTDIR}")
set (PKGDATADIR "${DATADIR}/${CMAKE_PROJECT_NAME}")
set (GETTEXT_PACKAGE "${CMAKE_PROJECT_NAME}")

list (APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
add_definitions ("-DGETTEXT_PACKAGE=\"${GETTEXT_PACKAGE}\"")

set (CPACK_PACKAGE_VERSION "${VERSION}")
set (CPACK_SOURCE_GENERATOR "TGZ")
set (CPACK_SOURCE_PACKAGE_FILE_NAME "${CMAKE_PROJECT_NAME}-${CPACK_PACKAGE_VERSION}")
set (CPACK_SOURCE_IGNORE_FILES "/build/;/.git/;/.gitignore/~$;${CPACK_SOURCE_IGNORE_FILES}")

include (CPack)
add_custom_target (dist COMMAND "$CMAKE_MAKE_PROGRAM} package_source")


### PKGCONFIG ###
find_package ( PkgConfig REQUIRED )
pkg_check_modules ( DEPS
	REQUIRED glib-2.0
	REQUIRED gtk+-3.0>=3.16
	REQUIRED libqrencode
)
include_directories ( ${DEPS_INCLUDE_DIRS} )
link_libraries ( ${DEPS_LIBRARIES} )
link_directories ( ${DEPS_LIBRARY_DIRS} )
add_definitions ( ${DEPS_CFLAGS} )


### GRESOURCES ###
include ( GResource )
set ( GRESOURCES ${CMAKE_CURRENT_SOURCE_DIR}/data/genqr.gresource.xml )
glib_compile_resources ( RESOURCE_FILE SOURCE data/genqr.gresource.xml )


### VALA FILES ###
find_package ( Vala REQUIRED )
include ( ValaVersion )
ensure_vala_version ( "0.20" MINIMUM )

### Compile ###
if (CMAKE_BUILD_TYPE MATCHES Debug)
	set (VALA_FLAGS "--debug")
endif (CMAKE_BUILD_TYPE MATCHES Debug)
include ( ValaPrecompile )
vala_precompile (
VALA_C genQR
	src/genQR.vala
	src/QRCode.vala
	src/MainWindow.vala
	src/QRCodeBox.vala
CUSTOM_VAPIS
	vapi/libqrencode.vapi
PACKAGES
	gtk+-3.0
	glib-2.0
OPTIONS
	--thread
	--target-glib=2.38
	--gresources ${GRESOURCES}
	${VALA_FLAGS}
)

# Source files definition
set ( SRC_FILES ${RESOURCE_FILE} ${VALA_C} )

add_executable ( genqr ${SRC_FILES} )

target_link_libraries ( genqr ${DEPS_LIBRARIES} m )
