#include <iostream>
using namespace std;

bool esPrimo (int n) {
    if (n <= 1) {
        return false;
    }
    int i{2};
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

void imprimirPrimos(int n) {
    for (int i{2}; i < n; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    imprimirPrimos(15);
    return 0;
}