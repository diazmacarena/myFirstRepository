#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include<iostream>

class DynamicArray
{
    friend std::ostream& operator<<(std::ostream&, const DynamicArray&);
private:
    size_t size;
    int *ptr;
public:
    DynamicArray();
    DynamicArray(const int a[], int size);
    DynamicArray(const DynamicArray&);

    ~DynamicArray();
    size_t getSize() const;

    void pushBack(int val);
    void insert(int val, int p);
    void remove(int p);
};

#endif
