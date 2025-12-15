#ifndef LINE
#define LINE
#include "point.h"
#include<iostream>
#include <string>
class Line{
    private:
    Point a;
    Point b;
    public:
    Line(Point a, Point b);
    Line(const Line &other);
    bool equals(Line &other);
    void flip();
    void move(double x, double y);
    std::string toString();
};
#endif