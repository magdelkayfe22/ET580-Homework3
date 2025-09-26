#include <iostream>                                     // driver programs should include any relevant class files and libraries for the included code to work
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;


int main()                                              // driver programs should test ALL functions and types created in the program
{
    std::cout << std::endl;  


// Test Square
    Square s1; // test the default constructor
    Square s2(5); // test the parameterized constructor


    cout<< "Square s1 side = "<<s1.getSide()<<", Area = "<<s1.area()<<endl;
    cout<<"Square s2 side = "<<s2.getSide()<<", area = "<<s2.area()<<endl;

    s1.setSide(10);
    cout<<"Square s1 updated side = "<<s1.getSide()<<", area "<<s1.area()<<endl;

    s2.print();
    cout<<endl;
    
    //Test Rectangle
    Rectangle r1;
    Rectangle r2(4, 7);

    cout<<"Rectangle r1 length = "<<r1.getLength()<<", width = "<<r1.getWidth()<<", Area = "<<r1.area()<<endl;
    cout<<"Rectangle r2 length = "<<r2.getLenght()<<", width = "<<r2.getWidth()<<", area = "<<r2.area()<<endl;

    r2.print();
    cout<<endl;

    //Test Triangle
    Triangle t1;
    Triangle t2(8, 5);

    cout<<"Triangle t1 base = "<<t1.getBase()<<", height = "<<t1.getHeight()<<", area = "<<t1.area()<<endl;
    cout<<"Triangle t2 base = "<<t2.getBase()<<", height = "<<t2.getHeight()<<", area = "<<t2.area()<<endl;

    t1.setBase(10);
    t1.setHeight(4);
    cout<<"Triangle t1 updated base = "<<t1.getBase()<<", height = "<<t1.getHeight()<<", area = "<<t1.area()<<endl;

    t2.print();
    cout<<endl;

    std::cout << std::endl;
    return 0;
}