CXX    := g++
OUTPUT := universtudio

# compiler and linker flags
CXX_FLAGS := -O3 -std=c++17
INCLUDES  := -I./include 
LDFLAGS   := -O3 #-lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl -lassimp -openmp

SRC_FILES := $(wildcard src/*.cpp src/**/*.cpp include/**/*.h include/**/*.hpp)
OBJ_FILES := $(SRC_FILES:.cpp=.o)

# all of these targets will be made if you just type make
all:$(OUTPUT)

# define the main executable requirements / command
$(OUTPUT): $(OBJ_FILES) Makefile
	$(CXX) src/glad.c $(OBJ_FILES) $(LDFLAGS) -o ./bin/$@

# specifies how the object files are compiled from cpp files
.cpp.o:
	$(CXX) -c $(CXX_FLAGS) $(INCLUDES) $< -o $@

# typing 'make clean' will remove all intermediate build files
clean:
	rm -f $(OBJ_FILES) ./bin/$(OUTPUT)

# typing 'make run' will compile and run the program
run: $(OUTPUT)
	cd bin && ./$(OUTPUT) && cd ..
