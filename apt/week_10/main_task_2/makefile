# compiler and flags
CC = g++
CFLAGS = -Wall -Werror -std=c++14 -O

# files
SOURCES = main.cpp Matrix.cpp
OBJECTS = main.o Matrix.o
TARGET = build

# default rule
all: $(TARGET)

# linking the executables
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# compiling source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# cleaning up generated files
.PHONY: clean

clean:
	rm -f $(OBJECTS) $(TARGET)