#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = temp;
}

void swapPtr(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x{10};
    int y{20};
    swap(x, y);
    swapPtr(&x, &y);
}