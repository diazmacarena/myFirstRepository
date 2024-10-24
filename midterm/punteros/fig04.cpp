#include <iostream>

using namespace std;

void duplicado(int* arreglo, int size) {
    for (int i{0}; i < size; i++) {
        *(arreglo+i) *= 2;
    }
}

void outputArray(const int* arreglo, const int size) {
    for (int i{0}; i < size; i++) {
        cout << *(arreglo+i) << endl;
    }
}

void reversed(int array[], int size) {
    for (int i{0}; i < size; i++, size--) {
        int rev{array[i]};
        array[i] = array[size-1];
        array[size-1] = rev;
    }
}

void reversedPtr(int *beg, int *end) {
    while(beg<=end) {
        int rev{*beg};
        *beg = *end;
        *end = rev;
        beg++;
        end--;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    duplicado(array, size);
    outputArray(array, size);
    reversed(array, size);
    outputArray(array, size);
    reversedPtr(array, array+(size-1));
    outputArray(array, size);
    
}