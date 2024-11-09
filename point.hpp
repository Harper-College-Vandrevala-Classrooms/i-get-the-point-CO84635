#ifndef POINT_H
#define POINT_H

#include <cmath>
#include <sstream>
#include <string>

class Point {
private:
    double x, y;

public:
    Point(double x, double y){
        this->x = x;
        this->y = y;
    };

    double operator-(Point const& obj)
    {
        return sqrt(pow(obj.x - x, 2) + pow(obj.y - y, 2));
    };

    bool operator==(Point const& obj)
    {
        return (obj.x == x && obj.y == y);
    }

    bool operator!=(Point const& obj)
    {
        return (obj.x != x || obj.y != y);
    }

    std::string operator/(Point const& obj)
    {
        std::stringstream ss;
        ss << "(" << (obj.x + x) / 2 << ", " << (obj.y + y) / 2 << ")";
        return ss.str();
    };

};

#endif // POINT_H