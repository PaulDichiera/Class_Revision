# compiler and flags
CC = g++
CFLAGS = -Wall -Werror -std=c++14 -O

# files
SOURCES = Matrix.cpp ImmutableMatrix.cpp main.cpp
OBJECTS = Matrix.o ImmutableMatrix.o main.o
TARGET = build

# default rule
all: $(TARGET)

# linking executables
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# compiling source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# cleaning up generated files

.PHONY: clean

clean:
	rm -f $(OBJECTS) $(TARGET)
