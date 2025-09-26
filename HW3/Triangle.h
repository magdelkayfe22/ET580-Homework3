#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {

private:
    int base;
    int height;

public:
    Triangle();

    Triangle(int b, int h);

    int getBase() const;
    int getHeight() const;

    void setBase(int b);
    void setHeight(int h);


    int area() const;

    void print() const;

};

#endif