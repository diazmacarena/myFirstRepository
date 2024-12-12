#include <iostream>
#include <array>

using namespace std;

int sumArr(int array[], int size) {
    int sum{0};
    for (int i{0}; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int sumPtr(int *ini, const int size) {
    int sum{0};
    int *fin = ini + size -1;
    while (ini <= fin) {
        sum += *ini;
        ini++;
    }
    return sum;
}

int sumPtr2(int *ini, const int size) {
    int sum{0};
    for (int i{0}; i < size; i++, ini++) {
        sum += *ini;
    }
    return sum;
}

int main() {
    int  array[] {1,2,4,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    cout << sumArr(array, size) << endl;
    cout << sumPtr(array, size) << endl;
    cout << sumPtr2(array, size);
}