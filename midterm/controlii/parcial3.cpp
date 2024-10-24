#include <iostream>

using namespace std;

int fibonacciIt(int n) {
    int a{0}, b{1}, fib{0};
    for (int i{0}; i < n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int fibonacci(int n) {
    if (n == 0) {
        return 1;
    } else if ( n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    cout << fibonacci(10) << endl;
    cout << fibonacciIt(10);
}
