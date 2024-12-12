#include "Point.h"
#include <iostream>

std::ostream& operator<<(std::ostream& output,const Point &a){
    output<<a.getX()<<" "<<a.getY();
    return output;
}

Point::Point(int _x, int _y) 
    : x{_x}, y{_y} {}

void Point::setX(int x){
    this->x = x;
}

int Point::getX() const {
    return this->x;
}

void Point::setY(int y) {
    this->y = y;
}

int Point::getY() const{
    return this->y;
}

const Point& Point::operator=(const Point& o){
    this->x = o.getX();
    this->y = o.getY();
    return *this;
}

bool Point::operator==(const Point& right) const {
    if ( (this->x != right.x) || (this->y != right.y) ) {
    return false;
    }
    
    return true;
}

bool Point::operator!=(const Point& right) const {
    if ((this->x != right.x) || (this->y != right.y) ) {
    return true;
    }

    return false;
}
