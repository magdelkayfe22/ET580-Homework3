#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle();
    Rectangle(double l, double w);
    
    double getLength() const;
    double getWidth() const;
    
    void setLength(double l);
    void setWidth(double w);
    
    double area() const;
};

void print(const Rectangle& rect);

#endif