#Makefile
#CC=gcc: This sets the compiler to gcc.
CC=gcc

#CFLAGS: This variable is used to specify the flags that will be passed to the compiler when compiling C source files.
#-I.: This flag tells the compiler to look in the current directory for header files.
#-Wall: This flag enables all the commonly used warning messages.
#-Wextra: This flag enables additional warning messages that are not included with -Wall.
#-Werror: This flag treats all warnings as errors, causing the compilation to fail if any warnings are present.
#-Wpedantic: This flag enforces strict ISO C and ISO C++ compliance, generating warnings for any code that does not adhere to these standards.
#-std=c99: This flag specifies that the C99 standard should be used for compiling the code.
#-g: This flag includes debugging information in the compiled executable, which is useful for debugging with tools like gdb.
#Overall, these flags are used to ensure that the code is compiled with strict standards, with all warnings treated as errors, and with debugging information included.
#CFLAGS=-I.
CFLAGS=-I. -Wall -Wextra -Werror -Wpedantic -std=c99 -g

# Target executable
TARGET = test

# Source files -> Automatically find all .c files in the current directory
SRCS = $(wildcard *.c)

#DEPS=func_file.h: This lists the header files that the .c files depend on.
#DEPS = func_file.h

#OBJs=main.o func_file.o: This lists the object files that will 
#                        be generated from the source files.#
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

#%.o: %.c $(DEPS): This rule specifies that .o files depend on .c files and 
#                  the header files listed in DEPS.
#$(CC) -c -o $@ $< $(CFLAGS): This command compiles the .c files into .o files 
#                             using the specified compiler and flags. $@ is the target file 
#                             (the .o file), and $< is the first prerequisite (the .c file).   
#%.o: %.c $(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS)

#test: $(OBJ): This rule specifies that the test executable depends on the 
#              object files listed in OBJ.
#$(CC) -o $@ $^ $(CFLAGS): This command links the object files to 
#                          create the test executable. $@ is the target file 
#                          (the test executable), and 
#                          $^ is the list of all prerequisites (the object files).
#test: $(OBJ)
#	$(CC) -o $@ $^ $(CFLAGS)


#clean:
#	rm -f *.o test
# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
