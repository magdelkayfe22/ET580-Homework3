#include <iostream>                 // header files (.h) should include any and all libaries required for the included code to work

#ifndef SQUARE_H
#define SQUARE_H

class Square {
private:
double side;
public:
Square(); 
Square(double s); 
double getSide() const; 
void setSide(double s); 
double area() const; 
};


void print(const Square& sq);

#endif