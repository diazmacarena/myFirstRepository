#include "DynamicArray.h"
#include <iostream>
using namespace std;

int main() {
    DynamicArray a1;
    
    int array[] = {1, 2, 3, 4, 5, 6};
    DynamicArray a2{array, 6};

    DynamicArray a3{a2};

    cout << a2 << endl;
    a2.pushBack(9);
    cout << a2 << endl;

    a2.insert(4, 2);
    cout << a2 << endl;

    a2.insert(10, a2.getSize());
    cout << a2 << endl;

    a2.remove(2);
    cout << a2 << endl;

    if(true) {
        DynamicArray a4;
        a4 = a2;
    }
    cout << a2 << endl;
}
