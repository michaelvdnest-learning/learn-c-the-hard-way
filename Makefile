# Compiler and flags
CC      := gcc
CFLAGS  := -Wall -g

# Find all .c files in the current directory
SRC     := $(wildcard *.c)

# Create a list of executables (remove .c extension)
EXE := $(SRC:.c=)

# Default target: build all executables
all: $(EXE)

# Clean up generated files
clean:
	rm -f $(EXE)
