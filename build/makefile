# Compiler CPP
CXX = g++

# Flags	
CFLAGS = -std=c++17 -Wall -Werror

# Target Executable
TARGET = test 

#source Files
SRCS = ../main.cpp

#Object Files
OBJS = $(SRCS:.cpp=.o)

#Default rule to run build and run the program
all: $(TARGET)	main  clean

#Rule to link target files together
$(TARGET): $(OBJS)
	$(CXX) $(CFLAGS) -o $@ $^


main: $(TARGET)
	./$(TARGET)

#copy .out file


#Rule to clean the object files
clean:
	rm -rf $(OBJS) $(TARGET)