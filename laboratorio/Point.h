#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point
{
    friend std::ostream& operator<<(std::ostream& output,const Point &o);
    
    public:
        Point(int = 0, int = 0);

        void setX(int);
        void setY(int);
        int getX() const;
        int getY() const;

        const Point& operator=(const Point& o);
        bool operator==(const Point& right) const;
        bool operator!=(const Point& right) const;

        
    private:    
        int x, y;            
};

#endif