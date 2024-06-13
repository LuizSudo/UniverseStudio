# Universe Studio Build Instruction

> [!NOTE]
> The Library is already include in the project source code for simplify the build process

# Requeriments 
For build this project you need a C++ compiler the GCC or Clang(LLVM)

Ubuntu:
`sudo apt install g++ clang libc++-dev libc++abi-dev libx11-dev libxcursor-dev libxi-dev libgl1-mesa-dev libfontconfig1-dev`

Fedora/RHEL/CentOS:
`sudo dnf install gcc-c++ clang libcxx-devel libX11-devel libXcursor-devel libXi-devel mesa-libGL-devel fontconfig-devel`

Arch:
`sudo pacman -S gcc clang libc++ libx11 libxcursor mesa-libgl fontconfig`

OpenSUSE:
`sudo zypper install gcc-c++ clang libc++-devel libc++abi-devel libX11-devel libXcursor-devel libXi-devel Mesa-libGL-devel fontconfig-devel`

## Building
To compile the project, simply run `make` on the command line.
After that there will be the final binary to be executed in the `bin` directory
