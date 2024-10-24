#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swapPtr(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void invertirArr(int array[], int size) {
    for (int i{0}; i < size/2; i++) {
        swap(array[i], array[size - i - 1]);
    }
}

void invertirPtr(int *ini, int size) {
    int *fin = ini + size -1;
    while (ini <= fin)
        return swapPtr(ini++, fin--);
}

int main() {
    int array[] {1,3,2,1,2};
    int size = sizeof(array) / sizeof(array[0]);

    invertirArr(array, size);
    for (int i{0}; i < size; i++) {
        cout << array[i];
    }
    invertirPtr(array, size);
    for (int i{0}; i < size; i++) {
        cout << array[i];
    }
}