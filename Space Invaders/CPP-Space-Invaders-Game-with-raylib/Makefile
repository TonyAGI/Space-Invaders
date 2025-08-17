# Simple Makefile for Space Invaders with SFML
CXX = clang++
CXXFLAGS = -std=c++14 -Wall -O2
SFML_INCLUDE = -I/usr/local/opt/sfml@2/include
SFML_LIB = -L/usr/local/opt/sfml@2/lib
SFML_LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

# Source files for simple version
SOURCES = src/simple_space_invaders.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Target executable
TARGET = space_invaders

# Default target
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET) $(SFML_LIB) $(SFML_LIBS)

# Compile source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(SFML_INCLUDE) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJECTS) $(TARGET)

# Run the game
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run

