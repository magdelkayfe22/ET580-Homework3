#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : length(1), width(2) {}

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setLength(double l) {
    length = l;
}

void Rectangle::setWidth(double w) {
    width = w;
}

double Rectangle::area() const {
    return length * width;
}

void print(const Rectangle& rect) {
    std::cout << "Rectangle area: " << rect.area() << std::endl;
}