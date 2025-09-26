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
    int getheight() const;

    void setBase(int b);
    void setHeight(int h);


    int area();


};

#endif