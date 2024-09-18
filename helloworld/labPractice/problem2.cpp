#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    for (int i{1}; i < n; i++) {
        if (i % 2 != 0) {
            if (i != 1) {
                cout << ",";
            }
        cout << i;
        }
    }
}