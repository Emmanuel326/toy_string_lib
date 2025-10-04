# This is the first make file i am tryin to get this right
# This defines variables for the compiler, flags, and directories
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude # -Iinclude tells the compiler where to find mini_string.h
BUILD_DIR = build
SRC_DIR = src
TARGET = $(BUILD_DIR)/test_mini_string

# i will list of the files needed for the compiled executable
# The main program needs to be compiled, and the library functions need to be compiled
OBJS = $(BUILD_DIR)/main.o $(BUILD_DIR)/mini_string.o

# Target 1: The default target (run 'make' to build this)
all: $(TARGET)

# Rule 1: Link the object files to create the final executable
$(TARGET): $(OBJS)
	@mkdir -p $(BUILD_DIR) # Make sure the build directory exists
	$(CC) $(OBJS) -o $@

# Rule 2: Compile src/main.c into an object file (build/main.o)
$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c $(SRC_DIR)/mini_string.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule 3: Compile src/mini_string.c into an object file (build/mini_string.o)
$(BUILD_DIR)/mini_string.o: $(SRC_DIR)/mini_string.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Utility targets

# Run the compiled program
run: $(TARGET)
	./$(TARGET)

# Clean up compiled files
clean:
	rm -rf $(BUILD_DIR)
