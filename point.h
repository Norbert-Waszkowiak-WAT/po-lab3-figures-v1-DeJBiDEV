#ifndef POINT
#define POINT
 
#include <string>
class Point{
    private:
    double x;
    double y;
    public:
    Point(double x, double y);
    Point(const Point &other);
    bool equals(Point &other);
    double const getX();
    double const getY();
    void flip();
    void move(double x, double y);
    std::string toString();
};
#endif