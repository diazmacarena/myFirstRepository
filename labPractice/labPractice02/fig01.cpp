#include <iostream>
#include <array>

using namespace std;

bool esPrimo(int n);

int main() {
    array<int, 10> items = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int count = 0;
    for (int item : items) {
        if (esPrimo(item)) {
            primeCount++;
        }
    }
    cout << count;
}


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