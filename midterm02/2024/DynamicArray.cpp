#include "DynamicArray.h"
#include <iostream>
using namespace std;

DynamicArray::DynamicArray() 
: size{0}, ptr{new int[size]} {}

DynamicArray::DynamicArray(const int a[], int s)    
: size{s},  ptr(new int[size]) {
    for (size_t i{0}; i < size; i++) {
        ptr[i] = a[i];
    }
}

DynamicArray::DynamicArray(const DynamicArray& o) 
: size{o.size}, ptr(new int[size]) {
    for (size_t i{0}; i < size; i++) {
        ptr[i] = o.ptr[i];
    }
}

DynamicArray::~DynamicArray() {
    delete[] ptr;
}

size_t DynamicArray::getSize() const {
    return size;
}

void DynamicArray::pushBack(int val) {
    int *tmp= new int[size+1];
    for (size_t i{0}; i < size; i++){
        tmp[i] = ptr[i];
    }
    size++;
    delete[] ptr;
    ptr = tmp;
    tmp[size-1] = val;
}

void DynamicArray::insert(int val, int p) {
    int *temp = new int[size+1];
    for(size_t i = 0; i < p; i++) {
        temp[i] = ptr[i];
    }
    temp[p] = val;
    size++;
    for(size_t i{p}; i < size; i++) {
        temp[i+1] = ptr[i];
    }
    delete[] ptr;
    ptr = temp;
}

void DynamicArray::remove(int p) {
    int *temp = new int[size-1];
    for(size_t i = 0; i < size; i++) {
        if (i >= p) {
            temp[i] = ptr[i+1];
        } else {
            temp[i] = ptr[i];
        }
    }
    size--;
    delete[] ptr;
    ptr = temp;
}

ostream& operator<<(ostream& output, const DynamicArray& o) {
    output << "[";
    for (size_t i = 0; i < o.size; ++i) {
        output <<  o.ptr[i] << " ";
    }
    output << "]";
    return output;
}
