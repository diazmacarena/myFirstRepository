#include <iostream>
#include <array>

using namespace std;

int sumArr(int array[], int size) {
    int sum{0};
    for (int i{0}; i < size; i++) {
        sum += array[i]
    }
    return sum;
}

int sumPtr(int *ini, const int size) {
    int sum{0}
    int *fin = ini + size -1;
    while (ini < fin) {
        sum += *array;
    }
    return sum;
}

int sumPtr(int *ini, const int size) {
    int sum{0};
    for (int i{0}; i < size; i++, array++) {
        sum += *array;
    }
    return sum;
}
