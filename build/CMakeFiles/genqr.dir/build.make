# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/haecker-felix/Dokumente/Projekte/genQR

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/haecker-felix/Dokumente/Projekte/genQR/build

# Include any dependencies generated for this target.
include CMakeFiles/genqr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/genqr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/genqr.dir/flags.make

data/genqr.gresource.c: ../data/genqr.gresource.xml
data/genqr.gresource.c: ../data/ui/main-window.ui
data/genqr.gresource.c: ../data/app-menu.ui
data/genqr.gresource.c: ../data/genqr.desktop
data/genqr.gresource.c: ../data/ui/style.css
data/genqr.gresource.c: ../data/ui/qr-code-box.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating data/genqr.gresource.c"
	cd /home/haecker-felix/Dokumente/Projekte/genQR/data && /usr/sbin/glib-compile-resources --generate-source --target=/home/haecker-felix/Dokumente/Projekte/genQR/build/data/genqr.gresource.c /home/haecker-felix/Dokumente/Projekte/genQR/data/genqr.gresource.xml

src/genQR.c: genQR_valac.stamp


src/QRCode.c: src/genQR.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/QRCode.c

src/MainWindow.c: src/genQR.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/MainWindow.c

src/QRCodeBox.c: src/genQR.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/QRCodeBox.c

genQR_valac.stamp: ../src/genQR.vala
genQR_valac.stamp: ../src/QRCode.vala
genQR_valac.stamp: ../src/MainWindow.vala
genQR_valac.stamp: ../src/QRCodeBox.vala
genQR_valac.stamp: ../vapi/libqrencode.vapi
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating src/genQR.c;src/QRCode.c;src/MainWindow.c;src/QRCodeBox.c"
	/usr/sbin/valac -C -b /home/haecker-felix/Dokumente/Projekte/genQR -d /home/haecker-felix/Dokumente/Projekte/genQR/build --pkg=gtk+-3.0 --pkg=glib-2.0 --thread --target-glib=2.38 --gresources /home/haecker-felix/Dokumente/Projekte/genQR/data/genqr.gresource.xml -g /home/haecker-felix/Dokumente/Projekte/genQR/src/genQR.vala /home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala /home/haecker-felix/Dokumente/Projekte/genQR/src/MainWindow.vala /home/haecker-felix/Dokumente/Projekte/genQR/src/QRCodeBox.vala /home/haecker-felix/Dokumente/Projekte/genQR/vapi/libqrencode.vapi
	touch /home/haecker-felix/Dokumente/Projekte/genQR/build/genQR_valac.stamp

CMakeFiles/genqr.dir/data/genqr.gresource.c.o: CMakeFiles/genqr.dir/flags.make
CMakeFiles/genqr.dir/data/genqr.gresource.c.o: data/genqr.gresource.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/genqr.dir/data/genqr.gresource.c.o"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/genqr.dir/data/genqr.gresource.c.o   -c /home/haecker-felix/Dokumente/Projekte/genQR/build/data/genqr.gresource.c

CMakeFiles/genqr.dir/data/genqr.gresource.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/genqr.dir/data/genqr.gresource.c.i"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/haecker-felix/Dokumente/Projekte/genQR/build/data/genqr.gresource.c > CMakeFiles/genqr.dir/data/genqr.gresource.c.i

CMakeFiles/genqr.dir/data/genqr.gresource.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/genqr.dir/data/genqr.gresource.c.s"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/haecker-felix/Dokumente/Projekte/genQR/build/data/genqr.gresource.c -o CMakeFiles/genqr.dir/data/genqr.gresource.c.s

CMakeFiles/genqr.dir/data/genqr.gresource.c.o.requires:

.PHONY : CMakeFiles/genqr.dir/data/genqr.gresource.c.o.requires

CMakeFiles/genqr.dir/data/genqr.gresource.c.o.provides: CMakeFiles/genqr.dir/data/genqr.gresource.c.o.requires
	$(MAKE) -f CMakeFiles/genqr.dir/build.make CMakeFiles/genqr.dir/data/genqr.gresource.c.o.provides.build
.PHONY : CMakeFiles/genqr.dir/data/genqr.gresource.c.o.provides

CMakeFiles/genqr.dir/data/genqr.gresource.c.o.provides.build: CMakeFiles/genqr.dir/data/genqr.gresource.c.o


CMakeFiles/genqr.dir/src/genQR.c.o: CMakeFiles/genqr.dir/flags.make
CMakeFiles/genqr.dir/src/genQR.c.o: src/genQR.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/genqr.dir/src/genQR.c.o"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/genqr.dir/src/genQR.c.o   -c /home/haecker-felix/Dokumente/Projekte/genQR/build/src/genQR.c

CMakeFiles/genqr.dir/src/genQR.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/genqr.dir/src/genQR.c.i"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/haecker-felix/Dokumente/Projekte/genQR/build/src/genQR.c > CMakeFiles/genqr.dir/src/genQR.c.i

CMakeFiles/genqr.dir/src/genQR.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/genqr.dir/src/genQR.c.s"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/haecker-felix/Dokumente/Projekte/genQR/build/src/genQR.c -o CMakeFiles/genqr.dir/src/genQR.c.s

CMakeFiles/genqr.dir/src/genQR.c.o.requires:

.PHONY : CMakeFiles/genqr.dir/src/genQR.c.o.requires

CMakeFiles/genqr.dir/src/genQR.c.o.provides: CMakeFiles/genqr.dir/src/genQR.c.o.requires
	$(MAKE) -f CMakeFiles/genqr.dir/build.make CMakeFiles/genqr.dir/src/genQR.c.o.provides.build
.PHONY : CMakeFiles/genqr.dir/src/genQR.c.o.provides

CMakeFiles/genqr.dir/src/genQR.c.o.provides.build: CMakeFiles/genqr.dir/src/genQR.c.o


CMakeFiles/genqr.dir/src/QRCode.c.o: CMakeFiles/genqr.dir/flags.make
CMakeFiles/genqr.dir/src/QRCode.c.o: src/QRCode.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/genqr.dir/src/QRCode.c.o"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/genqr.dir/src/QRCode.c.o   -c /home/haecker-felix/Dokumente/Projekte/genQR/build/src/QRCode.c

CMakeFiles/genqr.dir/src/QRCode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/genqr.dir/src/QRCode.c.i"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/haecker-felix/Dokumente/Projekte/genQR/build/src/QRCode.c > CMakeFiles/genqr.dir/src/QRCode.c.i

CMakeFiles/genqr.dir/src/QRCode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/genqr.dir/src/QRCode.c.s"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/haecker-felix/Dokumente/Projekte/genQR/build/src/QRCode.c -o CMakeFiles/genqr.dir/src/QRCode.c.s

CMakeFiles/genqr.dir/src/QRCode.c.o.requires:

.PHONY : CMakeFiles/genqr.dir/src/QRCode.c.o.requires

CMakeFiles/genqr.dir/src/QRCode.c.o.provides: CMakeFiles/genqr.dir/src/QRCode.c.o.requires
	$(MAKE) -f CMakeFiles/genqr.dir/build.make CMakeFiles/genqr.dir/src/QRCode.c.o.provides.build
.PHONY : CMakeFiles/genqr.dir/src/QRCode.c.o.provides

CMakeFiles/genqr.dir/src/QRCode.c.o.provides.build: CMakeFiles/genqr.dir/src/QRCode.c.o


CMakeFiles/genqr.dir/src/MainWindow.c.o: CMakeFiles/genqr.dir/flags.make
CMakeFiles/genqr.dir/src/MainWindow.c.o: src/MainWindow.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/genqr.dir/src/MainWindow.c.o"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/genqr.dir/src/MainWindow.c.o   -c /home/haecker-felix/Dokumente/Projekte/genQR/build/src/MainWindow.c

CMakeFiles/genqr.dir/src/MainWindow.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/genqr.dir/src/MainWindow.c.i"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/haecker-felix/Dokumente/Projekte/genQR/build/src/MainWindow.c > CMakeFiles/genqr.dir/src/MainWindow.c.i

CMakeFiles/genqr.dir/src/MainWindow.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/genqr.dir/src/MainWindow.c.s"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/haecker-felix/Dokumente/Projekte/genQR/build/src/MainWindow.c -o CMakeFiles/genqr.dir/src/MainWindow.c.s

CMakeFiles/genqr.dir/src/MainWindow.c.o.requires:

.PHONY : CMakeFiles/genqr.dir/src/MainWindow.c.o.requires

CMakeFiles/genqr.dir/src/MainWindow.c.o.provides: CMakeFiles/genqr.dir/src/MainWindow.c.o.requires
	$(MAKE) -f CMakeFiles/genqr.dir/build.make CMakeFiles/genqr.dir/src/MainWindow.c.o.provides.build
.PHONY : CMakeFiles/genqr.dir/src/MainWindow.c.o.provides

CMakeFiles/genqr.dir/src/MainWindow.c.o.provides.build: CMakeFiles/genqr.dir/src/MainWindow.c.o


CMakeFiles/genqr.dir/src/QRCodeBox.c.o: CMakeFiles/genqr.dir/flags.make
CMakeFiles/genqr.dir/src/QRCodeBox.c.o: src/QRCodeBox.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/genqr.dir/src/QRCodeBox.c.o"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/genqr.dir/src/QRCodeBox.c.o   -c /home/haecker-felix/Dokumente/Projekte/genQR/build/src/QRCodeBox.c

CMakeFiles/genqr.dir/src/QRCodeBox.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/genqr.dir/src/QRCodeBox.c.i"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/haecker-felix/Dokumente/Projekte/genQR/build/src/QRCodeBox.c > CMakeFiles/genqr.dir/src/QRCodeBox.c.i

CMakeFiles/genqr.dir/src/QRCodeBox.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/genqr.dir/src/QRCodeBox.c.s"
	/usr/sbin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/haecker-felix/Dokumente/Projekte/genQR/build/src/QRCodeBox.c -o CMakeFiles/genqr.dir/src/QRCodeBox.c.s

CMakeFiles/genqr.dir/src/QRCodeBox.c.o.requires:

.PHONY : CMakeFiles/genqr.dir/src/QRCodeBox.c.o.requires

CMakeFiles/genqr.dir/src/QRCodeBox.c.o.provides: CMakeFiles/genqr.dir/src/QRCodeBox.c.o.requires
	$(MAKE) -f CMakeFiles/genqr.dir/build.make CMakeFiles/genqr.dir/src/QRCodeBox.c.o.provides.build
.PHONY : CMakeFiles/genqr.dir/src/QRCodeBox.c.o.provides

CMakeFiles/genqr.dir/src/QRCodeBox.c.o.provides.build: CMakeFiles/genqr.dir/src/QRCodeBox.c.o


# Object files for target genqr
genqr_OBJECTS = \
"CMakeFiles/genqr.dir/data/genqr.gresource.c.o" \
"CMakeFiles/genqr.dir/src/genQR.c.o" \
"CMakeFiles/genqr.dir/src/QRCode.c.o" \
"CMakeFiles/genqr.dir/src/MainWindow.c.o" \
"CMakeFiles/genqr.dir/src/QRCodeBox.c.o"

# External object files for target genqr
genqr_EXTERNAL_OBJECTS =

genqr: CMakeFiles/genqr.dir/data/genqr.gresource.c.o
genqr: CMakeFiles/genqr.dir/src/genQR.c.o
genqr: CMakeFiles/genqr.dir/src/QRCode.c.o
genqr: CMakeFiles/genqr.dir/src/MainWindow.c.o
genqr: CMakeFiles/genqr.dir/src/QRCodeBox.c.o
genqr: CMakeFiles/genqr.dir/build.make
genqr: CMakeFiles/genqr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable genqr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/genqr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/genqr.dir/build: genqr

.PHONY : CMakeFiles/genqr.dir/build

CMakeFiles/genqr.dir/requires: CMakeFiles/genqr.dir/data/genqr.gresource.c.o.requires
CMakeFiles/genqr.dir/requires: CMakeFiles/genqr.dir/src/genQR.c.o.requires
CMakeFiles/genqr.dir/requires: CMakeFiles/genqr.dir/src/QRCode.c.o.requires
CMakeFiles/genqr.dir/requires: CMakeFiles/genqr.dir/src/MainWindow.c.o.requires
CMakeFiles/genqr.dir/requires: CMakeFiles/genqr.dir/src/QRCodeBox.c.o.requires

.PHONY : CMakeFiles/genqr.dir/requires

CMakeFiles/genqr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/genqr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/genqr.dir/clean

CMakeFiles/genqr.dir/depend: data/genqr.gresource.c
CMakeFiles/genqr.dir/depend: src/genQR.c
CMakeFiles/genqr.dir/depend: src/QRCode.c
CMakeFiles/genqr.dir/depend: src/MainWindow.c
CMakeFiles/genqr.dir/depend: src/QRCodeBox.c
CMakeFiles/genqr.dir/depend: genQR_valac.stamp
	cd /home/haecker-felix/Dokumente/Projekte/genQR/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/haecker-felix/Dokumente/Projekte/genQR /home/haecker-felix/Dokumente/Projekte/genQR /home/haecker-felix/Dokumente/Projekte/genQR/build /home/haecker-felix/Dokumente/Projekte/genQR/build /home/haecker-felix/Dokumente/Projekte/genQR/build/CMakeFiles/genqr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/genqr.dir/depend
