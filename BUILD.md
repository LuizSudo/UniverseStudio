# Universe Studio Build Instruction

> [!NOTE]
> Is planned to port this project to CMake simplify the build process

# Install the dependencies
* I'm assuming that you already have a C++ compiler installed on your system

OpenSUSE:
`sudo zypper libXi-devel assimp-devel glm-devel libglfw-devel`

Ubuntu:
`sudo apt-get install libxi-dev libassimp-dev libglm-dev libglfw3-dev`

Fedora/RHEL:
`sudo dnf install libXi-devel assimp-devel glm-devel glfw-devel`

## Building
To compile the project, simply run `make` on the command line.
After that there will be the final binary to be executed in the `bin` directory
