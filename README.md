# Universe Studio

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://isocpp.org/)

A sophisticated 3D Gravity simulation software that brings the universe to your desktop. Built with modern C++, Universe Studio allows you to explore and simulate gravitational interactions between celestial bodies in a detailed 3D environment.

![Universe Studio Screenshot](res/photo.png)

> [!IMPORTANT]
> This project is in early development stage. Breaking changes may occur.

## Features

- Real-time 3D gravity simulation
- Advanced OpenGL-based rendering
- Customizable celestial body parameters
- Interactive camera controls
- Physics-based particle systems
- Modern C++ architecture

## Installation

### Prerequisites

- CMake (3.10 or higher)
- C++ 17 compatible compiler
- Git

### Dependencies

- OpenGL (4.3+)
- GLFW (3.3+)
- GLM (0.9.9+)
- Assimp (5.0+)

### Building from Source

#### Linux/macOS
```bash
# Clone the repository
git clone https://github.com/LuizSudo/UniverseStudio.git
cd UniverseStudio

# Create build directory and configure CMake
mkdir build && cd build
cmake ..

# Build the project
make
```

#### Windows
```powershell
# Clone the repository
git clone https://github.com/LuizSudo/UniverseStudio.git
cd UniverseStudio

# Create build directory and configure CMake
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022"

# Build the project
cmake --build . --config Release
```

## Project Structure

```
UniverseStudio/
├── src/             # Source files
├── include/         # Header files
├── res/            # Resources (textures, models)
├── shaders/        # GLSL shader files
└── CMakeLists.txt  # Build configuration
```

## Contributing

We welcome contributions to Universe Studio! Here's how you can help:

1. Fork the repository
2. Create a new branch (`git checkout -b feature/amazing-feature`)
3. Make your changes
4. Run the tests to ensure everything works
5. Commit your changes (`git commit -m 'Add some amazing feature'`)
6. Push to the branch (`git push origin feature/amazing-feature`)
7. Open a Pull Request

Please follow our coding standards and ensure all tests pass before submitting a PR.

## License

See [License](LICENSE) file for more details.
