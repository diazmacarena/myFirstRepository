#include <iostream>
using namespace std;

int main() {
    int sum{0};
    for (int n{3}; n <1000000; n++) {
        if (n % 3 == 0) {
            sum += n;
        } else if (n % 5 == 0) {
            sum += n;
        }
    }

    cout << sum;
}