#include <iostream>

using namespace std;

int fibonacciItr(int a) {
    int f{1}, n{0}, m{0};
    for (int i{0}; i < a; i++) {
        m = n;
        n = f;
        f = n + m;
    }
    return f;
}

int fibonacciRec(int a) {
    if (a == 0 || a == 1) {
        return 1;
    } else {
        return fibonacciRec(a-1) + fibonacciRec(a-2);
    }
}

int main() {
    cout << fibonacciItr(4) << endl;
    cout << fibonacciRec(4) << endl;
}
