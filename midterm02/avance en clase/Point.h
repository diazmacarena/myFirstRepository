#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
    public:
        Point(): x{0}, y{0} {
            std::cout << "default constructor" << std::endl;
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        void setX(int _x) {
            x = _x;
        }
        void setY(int _y) {
            y = _y;
        }
        void print() const {
            std::cout << x << y << std::endl;
        }
    private:
        int x;
        int y;
};

#endif