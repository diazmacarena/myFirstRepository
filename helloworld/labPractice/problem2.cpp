#include <iostream>
using namespace std;

void oddNumbers(int n) {
    for (int i{1}; i <= n; i++) {
        if (i % 2 != 0) {
            if (i != 1) {
                cout << ",";
            }
        cout << i;
        }
    }
}

int main() {
    oddNumbers(9);
    return 0;
}