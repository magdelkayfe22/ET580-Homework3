#include <iostream>
#include "Triangle.h"
using namespace std;    

//default constructor
Triangle::Triangle() {
    base = 2;
    height = 1;
}

//Parameterized Constructor
Triangle::Triangle(int b, int h) {
    base = b;
    height = h;
}

//Accessors
int Triangle::getBase() const{
    return base;
}

int Triangle::getHeight() const {
    return height;
}


//mutators
void Triangle::setBase(int b) const{
    int base = b;
}

void Triangle::setHeight(int h) {
    int height = h;
}

//area function
double Triangle::area() const {
    return 0.5 * base * height;
}


void Triangle::print() const {
    cout << "Triangle with base = " << base;
    cout << " and height = " << height;
    cout << " has area = " << area() << endl;
}




/*int main() {

    Triangle t1;
    t1.print();

    Triangle t2(5, 10);
    t2.print();

    t2.setBase(7);
    t2.setHeight(4);
    t2.print();


    return 0;
}
*/