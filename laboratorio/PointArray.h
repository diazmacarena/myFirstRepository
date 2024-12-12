#ifndef POINTARRAY_H
#define POINTARRAY_H

#include <iostream>
#include "Point.h"

class PointArray
{
    friend std::ostream& operator<<(std::ostream& output, const PointArray &a);

    public:
    explicit PointArray(int size);
    PointArray(const PointArray &a); // constructor copia
    ~PointArray();

    size_t getSize() const; 

    const PointArray& operator=(const PointArray&); 
    bool operator==(const PointArray&) const; 
    bool operator!=(const PointArray&) const;

    Point& operator[](int);

    Point operator[](int) const; 
    
    private:
    Point* ptr;
    size_t size;
};

#endif 