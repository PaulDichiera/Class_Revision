#compiler and flags
CC = g++
CFLAGS = -Wall -Werror -std=c++14 -O

#files
SOURCES = main.cpp MyString.cpp
OBJECTS = main.o MyString.o
TARGET = build

#default rule 
all: $(TARGET)

#linking executables
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

#compiling source files into objects
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

#cleaning up generated files
.PHONY: clean

clean:
	rm -f $(OBJECTS) $(TARGETS)
