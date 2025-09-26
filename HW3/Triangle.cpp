#include <iostream>
using namespace std;


class Triangle {

private:

    int base;
    int height;

public:
    //default constructor
    Triangle(){
        base = b;
        height = h;
    }

    //Parameterized constructor 
    Triangle(int b, int h) {
        base = b;
        height = h;
    }

    //Accessors
    int getBase() const{
        return base;
    }

    int getHeight() const {
        return height;
    }

    void setBase(int b) const{
        int base = b;
    }

    void setHeight(int h) {
        int height = h;
    }

    double area() const {
        return 0.5 * base * height;
    }


    void print() const {
        cout << "Triangle with base = " << base;
        cout << " and height = " << height;
        cout << " has area = " << area() << endl;
    }

};




int main() {

    Triangle t1;
    t1.print();

    Triangle t2(5, 10);
    t2.print();

    t2.setBase(7);
    t2.setHeight(4);
    t2.print();


    return 0;
}
