# Universe Studio Build Instruction
Universe Studio was written using C++, so it is necessary to install some dependencies to compile the software

The following are the packages required for compilation on different Linux distros.
# Requeriments 
Ubuntu:
`sudo apt install cmake g++ clang libc++-dev libx11-dev libxcursor-dev libxi-dev libgl1-mesa-dev libfontconfig1-dev`

Fedora/RHEL/CentOS:
`sudo dnf install cmake gcc-c++ clang libcxx-devel libX11-devel libXcursor-devel libXi-devel mesa-libGL-devel fontconfig-devel`

Arch:
`sudo pacman -S cmake gcc clang libc++ libx11 libxcursor libxi mesa fontconfig`

OpenSUSE:
`sudo zypper install cmake gcc clang libc++ libX11-devel libXcursor-devel libXi-devel mesa fontconfig`

## Building
1. Create a directory named build with the `mkdir build` command
2. Generate CMake build files with `cmake -B build` and enter them in the directory
3. Compile the project source code with the `make` command
