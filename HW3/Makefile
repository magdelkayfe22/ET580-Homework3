# A Makefile is used to automate the compilation and linking of all .cpp and .h files into a single executable program file

# Instructions:
# type clear to clear the screen and for easy reading of output
# type make to execute the Makefile and automatically compile the program
# type ./prog to run the program after it has been compiled
# type make clean to remove all executable and object files so the program can be recompiled for updates
# combine these commands as follows into one line to rapidly run and update code: clear;make;./prog;make clean
# use the up arrow and enter to rapidly update and run programs

# executable file to create and its dependancies
prog : driver.o Square.o Rectangle.o Triangle.o
	g++ -std=c++11 -o prog driver.cpp Square.h Rectangle.h Triangle.h

# file dependencies
driver.o : Driver.cpp Square.h Rectangle.h Triangle.h
	g++ -std=c++11 -c driver.cpp
Square.o : Square.h Square.cpp
	g++ -std=c++11 -c Square.cpp
Rectangle.o : Rectangle.h Rectangle.cpp
	g++ -std=c++11 -c Rectangle.cpp
Triangle.o : Triangle.h Triangle.cpp
	g++ -std=c++11 -c Triangle.cpp

# remove all object and executable files
clean:
	rm -f *.o
	rm prog
