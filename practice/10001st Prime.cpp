#include <iostream>
#include <string>
using namespace std;

bool isPrime (int n) {
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

int main() {

    int count{1};
    int num{2};
    int prime;

    while (count < 10001) {
        num++;

        if (isPrime(num)) {
            count++;
            prime = num;
        }
    }

    cout << "The 10001st prime number is: " << prime << endl;

    return 0;
}
    cout << "The 10001st prime number is: " << prime << endl;

    return 0;
}
