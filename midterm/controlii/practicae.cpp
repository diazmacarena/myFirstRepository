#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int c{a};
    a = b;
    b = c;
}

int main() {
    int n{20};
    int m{100};
    cout << n << endl;
    cout << m << endl;
    swap(n, m);
    cout << n << endl;
    cout << m << endl;
}