#include <iostream>
using namespace std;

int multiples(int n) {
    int sum{0};
    for (int i{3}; i < n; i++) {
        if (i % 3 == 0 || i % 5== 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    cout << multiples(1000000);
}