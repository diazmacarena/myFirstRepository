#include <iostream>
#include <array>

using namespace std;

int cuentaAtras(int a) {
    if (a == 0) {
        cout << a << endl;
        return a;
    } else {
        cout << a << endl;
        return cuentaAtras(a-1);
    }
}

int contar(int a, int b) {
    if (a > b) {
        return 0;
    } else {
        cout << a << endl;
        return contar(a+1, b);
    }
}

int factorial(int a) {
    if (a == 0) {
        return 1;
    } else {
        return a * factorial(a-1);
    }
}

int potencia(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * potencia(base, exp -1);
    }
}

void invertir(int array[], int size) {
    if (size <= 0) {
        return;
    } else {
        for (int i{0}; i < size; i++, size--) {
            int temp = array[i];
            array[i] = array[size-1];
            array[size-1] = temp;
        }
    }
}

void outputArray(const int* array, const int size) {
    for (int i{0}; i < size; i++) {
        cout << *(array+i) << " ";
    }
}

int main() {
    int array[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    invertir(array, size);
    outputArray(array, size);
}