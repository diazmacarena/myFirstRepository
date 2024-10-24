#include <iostream>
#include "Point.h" 

using namespace std;

void printArray(Point *arr, int size) {
    for (size_t i{0}; i < size; i++, arr++) {
        arr->print();
    }
}

int main() {
    Point p;
    p.print(); //invoca métodos de la instancia usando la misma instancia .

    Point *ptr = &p; // ptr, dirección de memoria de p
    ptr -> print(); //invoca métodos de la instancia usando punteros ->
    ptr -> setX(5);
    ptr -> print();

    Point arr{3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
}

/*tarea: 9 - 9.2.13*/