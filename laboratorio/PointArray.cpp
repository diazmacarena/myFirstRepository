#include "PointArray.h"

#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

PointArray::PointArray(int size) {
    ptr = new Point[size];
    this->size = size;
}

PointArray::PointArray(const PointArray &a) {
    ptr = new Point[a.size];
    this->size = a.size;
    for(int i = 0; i < size; ++i)
        ptr[i] = a.ptr[i];
}

size_t PointArray::getSize() const {
    return size;
}

PointArray::~PointArray() {
    delete[] ptr;
}


PointArray& PointArray::operator=(const PointArray& right) {
    if (&right != this) { 
        if (size != right.size) {
            delete[] ptr;
            size = right.size; 
            ptr = new Point[size]; 
        }

        for (size_t i{0}; i < size; ++i) {
            ptr[i] = right.ptr[i]; 
        }
    }

    return *this; 
    }


bool PointArray::operator==(const PointArray& right) const {
    if (size != right.size) {
        return false; 
    }

    for (size_t i{0}; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return false; 
        }
    }

    return true; 
}

Point& PointArray::operator[](int b) {
    if (b < 0 || b >= size) {
        throw out_of_range{"b out of range"};
    }

    return ptr[b];
}


Point PointArray::operator[](int b) const {
    if (b < 0 || b >= size) {
        throw out_of_range{"b out of range"};
    }

    return ptr[b];
}

ostream& operator<<(ostream& output, const PointArray& a) {
    for (size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << " ";
    }

    output << endl;
    return output;
}
